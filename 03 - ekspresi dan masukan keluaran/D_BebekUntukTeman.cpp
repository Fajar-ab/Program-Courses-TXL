#include <cstdio>

int main() {

    int n, m, a, b;
    scanf("%d %d", &n, &m);

    a = n / m;
    printf("masing-masing %d\n", a);

    b = n % m;
    printf("bersisa %d\n", b);
}