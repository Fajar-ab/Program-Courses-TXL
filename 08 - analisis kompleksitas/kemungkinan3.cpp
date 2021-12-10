#include <cstdio>
#include <cmath>

using namespace std;

int main() {

    int n, r, c;

    scanf("%d", &n);

    r = 1;
    c = n;

    int i = 1;
    while(i*i <= n) {

        if(n % i == 0) {
        
            int j = n / i;
            if(abs(r - c) > abs(i - j)) {
                r = i;
                c = j;
            }
        }
        i++;
    }

    printf("%d %d\n", r, c);
}