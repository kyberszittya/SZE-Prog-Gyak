//
// Created by keret on 2024. 05. 29..
//

#include <iostream>
#include <cstring>

#define MAX 50

using namespace std;



int feltoltNagybetu(char s_tb[]) {
    int i, h;
    for(i=0; i<MAX; i++) {
        s_tb[i]='\x0';
    }
    i=0;
    do {
        s_tb[i]=cin.get();
        s_tb[i]=toupper(s_tb[i]);
        if(isalnum(s_tb[i]) or isspace(s_tb[i])) i++;
    } while(s_tb[i-1]!='\n' and i<MAX);
    return h=strlen(s_tb);
}

void cserel(char s_tb[], int h) {
    char nb='1';
    for(int i=0, j=0; i<h; i++) {
        if(s_tb[i]==' ' or s_tb[i]=='\n') {
            if((i-j)%2==1) s_tb[j+((i-j)/2)]=nb;
            else {
                s_tb[j+((i-j)/2)-1]=nb; s_tb[j+((i-j)/2)]=nb;
            }
            nb++;
            j=i+1;
        }
    }
    cout << s_tb << endl;
}

int main() {
    char s_tb[MAX];
    int n = feltoltNagybetu(s_tb);
    cserel(s_tb,n);
    return 0;
}