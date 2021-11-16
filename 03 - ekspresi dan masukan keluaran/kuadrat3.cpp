#include <cstdio>

int a, b, c, x, hasil;

int main() {

    // membaca masukan beberapa variabel dari console
    
    // coba input secara sekaligus, contohnya 
    // input:  1 3 -2 2
    printf("nilai\na b c x\n");
    scanf("%d %d %d %d", &a, &b, &c, &x);

    hasil = a*x*x + b*x + c;
    printf("ax^2 + bx + c = %d\n", hasil);
}