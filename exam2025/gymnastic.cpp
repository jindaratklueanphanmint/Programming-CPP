#include <iostream>
#include <string>
using namespace std;
int main() {

    float score[4] = {9.84, 9.30, 9.42, 9.58 };
    if (score[0] > score[1])
        swap(score[0], score[1]);
    if (score[2] > score[3])
        swap(score[2], score[3]);
    if (score[0] > score[2])
        swap(score[0], score[2]);
    if (score[1] > score[3])
        swap(score[1], score[3]);
    cout << "Anerage score : " << (score[1] + score[2])/2.0 << endl;
    
    return 0;
}