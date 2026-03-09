# computer_graphics

Minimal GLFW base package setup for the `00_basic_framework` module.

## What is included

- `00_basic_framework` static library target: `basic_framework`
- Simple GLFW wrapper API in `basic_framework/glfw_base.hpp`
- Root executable target: `computer_graphics_app`

## Build and run (PowerShell)

```powershell
cmake -S . -B cmake-build-debug
cmake --build cmake-build-debug
.\cmake-build-debug\computer_graphics_app.exe
```

If GLFW cannot be found, install it for your toolchain (for example via vcpkg) and reconfigure CMake.

