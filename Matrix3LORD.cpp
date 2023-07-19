<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int m, n;
    cin >> m >> n;
    vector<int> arr(m * n);
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i * n + j];
        }
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << arr[i * n + j] << " ";
        }
        cout << endl;
    }
    return 0;
}
=======
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int m, n;
    cin >> m >> n;
    vector<int> arr(m * n);
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i * n + j];
        }
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << arr[i * n + j] << " ";
        }
        cout << endl;
    }
    return 0;
}
>>>>>>> 2ab00807aed313d9c3bfabad77485612c0717433
