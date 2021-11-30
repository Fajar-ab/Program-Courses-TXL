#include <iostream>

int main() {

    int i;
    int jum = 0;

    while (scanf("%d", &i) == 1) {
        jum += i;
    }

    printf("%d\n", jum);

    return 0;
}