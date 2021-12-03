#include <cstdio>

int main() {

    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        if (i % m == 0) {
            continue;
        }

        printf("%d\n", i);
    }
    
    printf("selesai\n");
}