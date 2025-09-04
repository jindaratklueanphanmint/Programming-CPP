#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);

    auto it = s.begin();
    cout << "First element = " << *it << "\n";

    cout << "All elements: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << "\n";

    it = s.end();
    it--;
    cout << "Last element = " << *it << "\n";

    int x = 30;
    it = s.find(x);
    if (it == s.end()) {
        cout << x << " not found\n";
    } else {
        cout << x << " found in set\n";
    }

    x = 25;
    it = s.lower_bound(x);
    if (it == s.begin()) {
        cout << "Closest to " << x << " = " << *it << "\n";
    } else if (it == s.end()) {
        it--;
        cout << "Closest to " << x << " = " << *it << "\n";
    } else {
        int a = *it;
        it--;
        int b = *it;
        if (x - b < a - x)
            cout << "Closest to " << x << " = " << b << "\n";
        else
            cout << "Closest to " << x << " = " << a << "\n";
    }

    return 0;
}
