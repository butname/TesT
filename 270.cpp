#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, tong;
    cin >> n;
    int a[101][101];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j += 2) {
            tong += a[i][j];
        }
    }
    for (int i = 1; i <= n; i += 2) {
        for (int j = 1; j <= n; j += 2) {
            tong += a[i][j];
        }
    }
    cout << tong+1;
    return 0;
}
