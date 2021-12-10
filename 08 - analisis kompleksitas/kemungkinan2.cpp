#include <cstdio>
#include <cmath>

using namespace std;

int main() {

    int n, r, c;

    scanf("%d", &n);

    r = 1;
    c = n;

    for(int i = 1; i <= n; i++) {

        if(n % i == 0) {
        
            int j = n / i;
            if(abs(r - c) > abs(i - j)) {
                r = i;
                c = j;
            }
        }
        
    }

    printf("%d %d\n", r, c);
}