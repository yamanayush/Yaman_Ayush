#include <iostream>
using namespace std;

void generateSeries(int n) {
    for (int i = 0; i < n; ++i) {
        cout << (2 * i + 1);
        if (i < n - 1) cout << ", ";
    }
    cout << endl;
}

int main() {
    int a;
    cin >> a;
    generateSeries(a);
    return 0;
}