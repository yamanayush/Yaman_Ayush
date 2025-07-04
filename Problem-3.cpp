#include <iostream>
using namespace std;

void generateSeries(int a) {
    int count = 0;
    int num = 1;

    while (count < a) {
        if (num % 2 == 1) {
            cout << num;
            count++;
            if (count < a && (count % 2 == 1 || count == 1)) cout << ", ";
        }
        num++;
    }
    cout << endl;
}

int main() {
    int a;
    cin >> a;
    generateSeries(a);
    return 0;
}