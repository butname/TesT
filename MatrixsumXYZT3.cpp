<<<<<<< HEAD
//Code ko tối ưu (trước khi sửa thành tối ưu)

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, sbs, tong = 0;
    int a[1000];
    int sumarr[1000];
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    cin >> sbs;

    for (int i = 1; i <= n; i++) {
        tong += a[i];
        sumarr[i] = tong;
    }

    for (int i = 1; i <= sbs; i++) {
        int x, y;
        cin >> x >> y;
        tong = sumarr[y] - sumarr[x-1];
    }
    return 0;
}

// Code sau khi sửa thành tối ưu

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m, sbs, tong = 0;
    int a[30][30];
    int sumarr[1000];
    cin >> n >> m;

    for (int i = 1; i <= m; i++) {
        for (int j = 1l j <= n; j++) {
            cin >> a[i];
        }

    }

    cin >> sbs;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            tong += a[i][j];
            sumarr[i] = tong;
        }
    }

    for (int i = 1; i <= sbs; i++) {
        int x, y, z, t;
        cin >> x >> y >> z >> t;
        x = x*m+(y-1);
        y = z*m+(t-1);

        tong = sumarr[y] - sumarr[x-1];
    }
    return 0;
}
=======
//Code ko tối ưu (trước khi sửa thành tối ưu)

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, sbs, tong = 0;
    int a[1000];
    int sumarr[1000];
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    cin >> sbs;

    for (int i = 1; i <= n; i++) {
        tong += a[i];
        sumarr[i] = tong;
    }

    for (int i = 1; i <= sbs; i++) {
        int x, y;
        cin >> x >> y;
        tong = sumarr[y] - sumarr[x-1];
    }
    return 0;
}

// Code sau khi sửa thành tối ưu

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m, sbs, tong = 0;
    int a[30][30];
    int sumarr[1000];
    cin >> n >> m;

    for (int i = 1; i <= m; i++) {
        for (int j = 1l j <= n; j++) {
            cin >> a[i];
        }

    }

    cin >> sbs;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            tong += a[i][j];
            sumarr[i] = tong;
        }
    }

    for (int i = 1; i <= sbs; i++) {
        int x, y, z, t;
        cin >> x >> y >> z >> t;
        x = x*m+(y-1);
        y = z*m+(t-1);

        tong = sumarr[y] - sumarr[x-1];
    }
    return 0;
}
>>>>>>> 2ab00807aed313d9c3bfabad77485612c0717433
