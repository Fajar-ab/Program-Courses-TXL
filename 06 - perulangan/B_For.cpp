#include <iostream>

int main() {

    int n, b;
    scanf("%d", &n);

    int jum = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &b);
        jum += b;
    }

    printf("%d\n", jum);

    return 0;
}