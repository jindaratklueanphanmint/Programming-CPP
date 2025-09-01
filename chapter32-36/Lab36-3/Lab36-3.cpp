 #include <iostream>
 #include <memory>
 class MyClass
 {
 private:
 int x;
 double d;
 public:
 MyClass(int xx, double dd)
 : x{ xx }, d{ dd }
 {}
 void printdata()
 {
 std::cout << "Data members values are: " << x << " and: " << d;
 }
 };