#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    // Step 1
    if (a > b) swap(a, b);

    // Step 2
    if (c > d) swap(c, d);

    // Step 3
    if (a > c) {
        int temp = b;
        b = d;
        d = temp;
        c = a;
    }

    // Step 4
    a = e;

    // Step 5
    if (a > b) swap(a, b);

    // Step 6
    if (c > a) {
        int temp = b;
        b = d;
        d = temp;
        a = c;
    }

    // Step 7
    if (a > d)
        cout << a << endl;
    else
        cout << d << endl;

    return 0;
}