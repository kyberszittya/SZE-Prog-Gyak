//
// Created by keret on 2026. 04. 27..
//
#include <iostream>
#include <fstream>
#include <vector>
#include <cstdint>
#include <bit>     // C++20 std::endian, C++23 std::byteswap
#include <format>  // C++20

// A PNG formátum hálózati bájtsorrendet (Big-Endian) használ.
// Ez a segédfüggvény konvertálja a Little-Endian rendszereken.
uint32_t readUint32(std::ifstream& file) {
    uint8_t bytes[4];
    file.read(reinterpret_cast<char*>(bytes), 4);

    // A PNG szabvány hálózati bájtsorrendet (Big-Endian) használ.
    // A legmagasabb helyiértékű bájt jön először.
    return (static_cast<uint32_t>(bytes[0]) << 24) |
           (static_cast<uint32_t>(bytes[1]) << 16) |
           (static_cast<uint32_t>(bytes[2]) << 8)  |
           (static_cast<uint32_t>(bytes[3]));
}

void parsePNG(const std::string& filepath) {
    std::ifstream file(filepath, std::ios::binary);
    if (!file) {
        std::cerr << "Hiba: Nem lehet megnyitni a fájlt.\n";
        return;
    }

    // 1. lépés: PNG Signature (8 bájt) ellenőrzése
    const std::vector<uint8_t> pngSignature = {137, 80, 78, 71, 13, 10, 26, 10};
    std::vector<uint8_t> buffer(8);
    file.read(reinterpret_cast<char*>(buffer.data()), 8);

    if (buffer != pngSignature) {
        std::cerr << "Hiba: Ez nem egy érvényes PNG fájl.\n";
        return;
    }
    std::cout << "PNG Signature OK.\n";

    // 2. lépés: Az első Chunk (IHDR - Image Header) beolvasása
    // Egy chunk felépítése: Length (4 bájt), Type (4 bájt), Data (Length bájt), CRC (4 bájt)

    uint32_t length = readUint32(file);

    std::string chunkType(4, '\0');
    file.read(&chunkType[0], 4);

    if (chunkType != "IHDR") {
        std::cerr << "Hiba: Az első chunk nem IHDR!\n";
        return;
    }

    // IHDR adatok kiolvasása
    uint32_t width = readUint32(file);
    uint32_t height = readUint32(file);

    uint8_t bitDepth, colorType, compression, filter, interlace;
    file.read(reinterpret_cast<char*>(&bitDepth), 1);
    file.read(reinterpret_cast<char*>(&colorType), 1);
    file.read(reinterpret_cast<char*>(&compression), 1);
    file.read(reinterpret_cast<char*>(&filter), 1);
    file.read(reinterpret_cast<char*>(&interlace), 1);

    // CRC átugrása (4 bájt) - éles rendszerben ezt ellenőriznünk kellene!
    file.seekg(4, std::ios::cur);

    std::cout << std::format("Képméret: {}x{} pixel\n", width, height);
    std::cout << std::format("Színmélység: {} bit\n", bitDepth);
    std::cout << std::format("Színtípus kód: {}\n", colorType);
}

int main() {
    // Feltételezve, hogy van egy test.png a mappában
    parsePNG("OV.png");
    return 0;
}