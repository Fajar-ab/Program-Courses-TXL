#include <cstdio>

int main() {

    int n;
    scanf("%d", &n);

    int count = 0; // banyaknya prima yang sudah ditemukan
    int cur = 2;   // nilai yang akan di periksa prima atau bukan

    while (count < n) {
        bool prima = true;

        for (int i = 2; i <= cur-1; i++) {
            if (cur % i == 0) {
                prima = false;
                break;
            }
        }

        if(prima) {
            // ditemuan prima!
            // cetak dan tambahkan prima yang sudah ditemukan
            printf("%d\n", cur);
            count++;
        }

        cur++;
    }
    
}