#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int m, n, largest, smallest;
    int a[101][101];
    cin >> m >> n;
    for (int i = 1; i<m+1; i++) {
        for (int j = 1; j<n+1; j++ ) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i<m+1; i++) {
        for (int j = 1l; j<n+1; j++) {
            cout<< a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
