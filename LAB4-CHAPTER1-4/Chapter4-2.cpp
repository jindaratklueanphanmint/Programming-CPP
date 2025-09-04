#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
 s.insert(3);
 s.insert(2);
 s.insert(5);
 cout << s.count(3) << "\n"; // 1
 cout << s.count(4) << "\n"; // 0
 s.erase(3);
 s.insert(4);
 cout << s.count(3) << "\n"; // 0
 cout << s.count(4) << "\n"; // 1

  set<int> s = {2,5,6,8};
 cout << s.size() << "\n"; // 4
 for (auto x : s) {
 cout << x << "\n";
 }

 set<int> s;
 s.insert(5);
 s.insert(5);
 s.insert(5);
 cout << s.count(5) << "\n"; // 1

 multiset<int> s;
 s.insert(5);
 s.insert(5);
 s.insert(5);
 cout << s.count(5) << "\n"; // 3

 s.erase(5);
 cout << s.count(5) << "\n"; // 0

 s.erase(s.find(5));
 cout << s.count(5) << "\n"; // 2

  return 0;
}