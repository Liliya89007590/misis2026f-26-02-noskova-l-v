#include <iostream>
int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int a, b, c;
        std::cin >> a >> b >> c;

        int f = std::abs(a - b);
        std::cout << (f + 2 * c - 1) / (2 * c) << '\n';
    }

    return 0;
}