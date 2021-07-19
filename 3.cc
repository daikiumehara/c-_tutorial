#include <bits/stdc++.h>
using namespace std;

#define SIZE 5

// ビット全探索練習用
int main() {
    for(int i = 0; i < (1 << SIZE); i++) {
        bitset<SIZE> b(i);
        cout << b << endl;
    }
    return 0;
}
