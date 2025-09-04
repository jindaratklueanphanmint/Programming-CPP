#include <iostream>
#include <bitset>
#include <deque>
#include <stack>
#include <queue>
#include <vector>
#include <functional>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;


typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update> indexed_set;

int main() {

    bitset<10> bs1;
    bs1[1] = 1;
    bs1[3] = 1;
    bs1[4] = 1;
    bs1[7] = 1;
    cout << bs1[4] << "\n"; // 1
    cout << bs1[5] << "\n"; // 0

    bitset<10> bs2(string("0010011010")); // from right to left
    cout << bs2[4] << "\n"; // 1
    cout << bs2[5] << "\n"; // 0

    bitset<10> bs3(string("0010011010"));
    cout << bs3.count() << "\n"; // 4

    bitset<10> a(string("0010110110"));
    bitset<10> b(string("1011011000"));
    cout << (a & b) << "\n"; // 0010010000
    cout << (a | b) << "\n"; // 1011111110
    cout << (a ^ b) << "\n"; // 1001101110


    deque<int> d;
    d.push_back(5);   // [5]()_
    
return 0;
}