#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, k = 0, tong = 0, l = 0, b;
    int a[101][101];
    cin >> n;
    for (int i = 1; i <=n; i++) {
        for (int j = 1; j<=n; j++) {
            cin >> a[i][j];

        }
    }
kbjkghjh
    for (int i = 1; i<=n;i++){
        tong += a[i][i];
    }
    if (n%2==1)
    {
        b = n/2+1;
        l = a[b][b];
    }
    for (int j = n; j>=1;j= j-1) {
        k += 1;
        tong += a[k][j];
    }
    cout << tong-l;
    return 0;
}
