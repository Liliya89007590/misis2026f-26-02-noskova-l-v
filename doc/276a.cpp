#include <iostream>
int main() {
    int n = 0;
    long k;
    std:: cin >> n >> k;
    long best = -1000000000000000000LL;
    for (int i = 0; i < n; i++) {
        long f, t;
        std:: cin >> f >> t;
        long j;
        if (t > k) {
            j = f - (t - k);
        } else {
            j = f;
        }
        if (j > best) {
            best = j;
        }
    }
    std:: cout << best << '\n';
    return 0;
}