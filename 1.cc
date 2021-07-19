#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int p[55];
    int maxValue = 0;
    for(int i = 1; i < n; i++) {
        cin >> p[i];
    }
    p[0] = -1;
    for(int i = n-1; i > 0; i--) {
        int count = 0;
        int k = i;
        while(true) {
            k = p[k];
            if(k == -1) {
                break;
            }
            count++;
        }
        maxValue = max(maxValue, count);
    }
    cout << maxValue << endl;
    return 0;
}
