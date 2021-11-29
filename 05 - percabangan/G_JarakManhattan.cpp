#include <iostream>

int main() {

    int x1, x2, y1, y2, m;
    std::cin >> x1 >> y1 >> x2 >> y2;

    // jarak Manhattan = |x1 - x2| + |y1 - y2|
    m = abs(x1 - x2) + abs(y1 - y2);

    std::cout << m << std::endl;
    return 0;
}