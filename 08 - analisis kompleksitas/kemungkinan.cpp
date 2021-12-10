#include <cstdio>
#include <cmath>

using namespace std;

int main() {

    int n, r, c;

    scanf("%d", &n);

    r = 1;
    c = n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i * j == n) {
                if(abs(r - c) > abs(i - j)) {
                    r = i;
                    c = j;
                }
            }
        }
    }

    printf("%d %d\n", r, c);
}