#include <cstdio>

int main() {

    // dengan tipe data char
    printf("a > A  : %d\n", 'a' > 'A');
    printf("a < A  : %d\n", 'a' < 'A');
    printf("a >= A : %d\n", 'a' >= 'A');
    printf("a <= A : %d\n", 'a' <= 'A');
    printf("a == A : %d\n", 'a' == 'A');

    printf("\n");
    // dengan tipe data string
    printf("a > aa      : %d\n", "a" > "aa");
    printf("abcb > abca : %d\n", "abcb" > "abca");
    printf("abc == abc  : %d\n", "abc" == "abc");
    printf("abc <= abc  : %d\n", "abc" <= "abc");
}