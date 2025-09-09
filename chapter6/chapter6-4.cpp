#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n = 5, x = 2;
    cout << "Enter array size: ";
    //cin >> n;
    vector<int> A(n), B(n);
    /*cout << "Enter array A: ";
    for (int i = 0; i < n; i++)
        cin >> A[i];
    cout << "Enter array B: ";
    for (int i = 0; i < n; i++)
        cin >> B[i];
    */
    A = {1, 2, 9, 2, 6};
    B = {x, x, x, x, x};
    // Sort both arrays
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int sum = 0;
    // Pair smallest with smallest, largest with largest
    for (int i = 0; i < n; i++)
        sum += abs(A[i] - B[i]);
    cout << "Minimum sum of absolute differences = " << sum << endl;
    return 0;
}