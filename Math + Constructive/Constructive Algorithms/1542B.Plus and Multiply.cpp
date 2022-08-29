// coded by : Adiblaze_310
#include <bits/stdc++.h>
using namespace std;
#define int long long

bool ok(int n, int a, int b)
{
    int curr = 1;
    for (int i = 0; i < 50; ++i)
    {
        if (curr > n)
            break;
        if ((n - curr) % b == 0)
            return true;
        curr *= a;
    }
    return false;
}

inline void solve()
{
    int n, a, b;
    cin >> n >> a >> b;

    if (ok(n, a, b))
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
}

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    for (int ctc = 1; ctc <= tc; ++ctc)
    {
        solve();
    }
    return 0;
}
