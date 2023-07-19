<<<<<<< HEAD
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
=======
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, tinhdoc, tinhngang, tong = 0, tong2 = 0;
    tinhdoc = 1;
    tinhngang = 1;
    cin >> n;
    int a[100][100];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    if (n%2==0) {
        for (int i = n/2; i < n; i++) {
            for (int j = 1; j <= n; j++) {
                tong += a[j][tinhdoc];
            }
            for (int j = 1; j <= n; j++) {
                tong += a[tinhngang][j];
            }
            tinhdoc += 2;
            tinhngang += 2;
        }
        tinhdoc = 1;
        tinhngang = 1;
        for (int i = n/2; i < n; i++) {
            for (int j = n/2; j < n; j++) {
                tong2 += a[tinhngang][tinhdoc];
                tinhdoc += 2;
            }
            tinhdoc = 1;
            tinhngang +=2;
        }
        cout << tong-tong2;
    }
    return 0;
}
>>>>>>> 2ab00807aed313d9c3bfabad77485612c0717433
