#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int bnry = 0;
    int cnt = 1;
    while (x) {
        bnry += (x % 2) * cnt;
        cnt *= 10;
        x /= 2;
    }
    cout << bnry;
    return 0;
}