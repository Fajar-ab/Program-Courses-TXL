#include <iostream>
using namespace std;

int main() {

    int n, y;
    int a = 0, b = 0;

    cin >> n;
    for(int i = 0; i < n; i++) {

        cin >> y;
        if(i == 0) {
            a = y;
            b = y;
        } else if(y > a) {
            a = y;
        } else if(y < b) {
            b = y;
        }
    }

    cout << a << " " << b << endl;
    
    return 0;
}