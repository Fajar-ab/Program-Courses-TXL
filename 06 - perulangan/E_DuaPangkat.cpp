#include <iostream>

int main() {

    int n;
    std::cin >> n;

    while (n % 2 == 0) { n /= 2; }

    std::string ms = (n == 1) ? "ya" : "bukan";
    std::cout << ms << std::endl; 
}