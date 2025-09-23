#include <iostream>
#include <vector>
using namespace std;

vector<int> CHANGE(int n, vector<int>& choice) {
    vector<int> C(n + 1);  
    int d[4] = {1, 4, 5, 10};  // available coins
    int k = 4;

    C[0] = 0;  
    choice[0] = -1;  // no coin for 0

    for (int p = 1; p <= n; p++) {
        int minVal = n;  
        int coinUsed = -1;

        for (int i = 0; i < k; i++) {
            if (p >= d[i]) {
                if (C[p - d[i]] + 1 < minVal) {
                    minVal = C[p - d[i]] + 1;
                    coinUsed = d[i];   // store which coin was chosen
                }
            }
        }
        C[p] = minVal;
        choice[p] = coinUsed;
    }

    return C;
}

void printCoins(int n, vector<int>& choice) {
    cout << "Coins used for " << n << " = ";
    while (n > 0) {
        cout << choice[n] << " ";
        n -= choice[n];
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the amount: ";
    cin >> n;

    vector<int> choice(n + 1);
    vector<int> result = CHANGE(n, choice);

    cout << "\nMinimum coins needed for each value up to " << n << ":\n";
    for (int i = 1; i <= n; i++) {
        cout << "C[" << i << "] = " << result[i] << " (coins: ";
        int temp = i;
        while (temp > 0) {
            cout << choice[temp] << " ";
            temp -= choice[temp];
        }
        cout << ")" << endl;
    }

    cout << "\n=> Minimum coins for " << n << " = " << result[n] << endl;
    printCoins(n, choice);

    return 0;
}
