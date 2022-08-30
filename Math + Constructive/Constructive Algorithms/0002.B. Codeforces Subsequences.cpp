// coded by : Adiblaze_310
#include <bits/stdc++.h>
using namespace std;
#define int long long


inline void solve(){
    int k;
    cin>>k;
    string pat = "codeforces";
    int len = pat.length();

    vector<int> cnt(len,1);

    int prod = 1;
    int x = 0;

    while(prod < k){
        prod /= cnt[x];
        prod *= ++cnt[x];
        x = (x+1) % len;
    }

    for(int i=0;i<cnt.size();++i){
        while(cnt[i]--)
            cout<<pat[i];
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
    // cin >> tc;
    for (int ctc = 1; ctc <= tc; ++ctc)
    {
        solve();
    }
    return 0;
}
