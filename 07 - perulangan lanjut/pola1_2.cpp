#include <cstdio>

int main() {

    int n, m;
    scanf("%d %d", &n, &m);

    int i = 0;
    while (i < n) {
        int j = 0;
        while (j < m) {
            printf("*");
            j++;
        }
        i++;
        printf("\n");
    }
    
}
