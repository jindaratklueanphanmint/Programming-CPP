#include <iostream>
#include <vector>
using namespace std;


long fibonacci(long n) {
    if (n <= 1) return n;
    vector<long> dp(n + 1, 0);
    dp[0] = 0;
    dp[1] = 1;
    for (long i = 2; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

long fibo(long n) {
    long a = 0;
    long b = 1;
    while (n > 1) {
        long t = a;
        a = b;
        b = b + t;
        n--;
    }
    return b;
}

int main() {
    long n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
    return 0;
}