#include <cstdio>

int main() {

    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i *= 2) {
        printf("tulisan ini dicetak saat i = %d\n", i);
    }

    printf("akhir dari perogram\n");
}