#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int d = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            printf("%d", d);
            d++;

            if(d == 10)
                d = 0; 
        }
        printf("\n");    
    }
}