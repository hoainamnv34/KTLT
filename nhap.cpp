#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int a, b, c;
    cin >> a >> b;
    int cnt = 0;
    
     freopen ("input.txt", "r", stdin);

    for(int i = 2; i < n; i++) {
        cin >> c;
        if (a < b && b > c) cnt ++;
        a = b;
        b = c;
    }
    cout << cnt;
}