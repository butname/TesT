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
    largest = a[1][1];
    smallest = a[1][1];
    for (int i = 1; i<m+1; i++) {
        for (int j = 1l; j<n+1; j++) {
            if (a[i][j]>smallest) {
                smallest = a[i][j];
            }
            if (a[i][j]<largest) {
                largest = a[i][j];
            }
        }
    }
    cout << largest << " " << smallest;
    return 0;
}
