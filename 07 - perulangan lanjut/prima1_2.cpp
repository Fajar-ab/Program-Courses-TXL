#include <cstdio>

int main() {

    int n;
    scanf("%d", &n);
    bool prima = true;
    for (int i = 2; i <= n-1; i++) {
        if (n % i == 0) {
            prima = false;
            break;
        }
    }
    if (prima) {
        printf("%d adalah bilangan prima\n", n);
    } else {
        printf("%d bukan bilangan prima\n", n);
    }
}