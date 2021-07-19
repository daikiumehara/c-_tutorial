#include <bits/stdc++.h>
using namespace std;

int x, y;
int h, w;
char c[510][510];
bool e[510][510];
bool flag = false;

void check(int i, int j) {
    if(i < 0 || j < 0 || i >= h || j >= w) { return; }
    if(e[i][j]) { return; }
    if(flag) { return; }
    e[i][j] = true;

    if(c[i][j] == '#') {
        return;
    }
    if(c[i][j] == 'g') {
        flag = true;
    }

    check(i, j+1);
    check(i-1, j);
    check(i, j-1);
    check(i+1, j);
}

int main() {
    cin >> h >> w;
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            cin >> c[i][j];
            if(c[i][j] == 's') {
                x = i;
                y = j;
            }
            e[i][j] = false;
        }
    }
    check(x, y);
    cout << ((flag)? "Yes" : "No") << endl;

    return 0;
}
