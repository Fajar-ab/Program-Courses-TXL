#include <cstdio>
#include <string>

char buff[100];

int main() {

    scanf("%[^\n]", buff);
    
    std::string kalimat = buff;
    printf("%s", kalimat.c_str());
}