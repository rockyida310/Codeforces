// coded by : Adiblaze_310
#include <bits/stdc++.h>
using namespace std;
#define int long long

class Sieve{
    public:
    vector<int> primes;
    vector<int> isPrime;
    Sieve(int n){
        isPrime.assign(n+1,true);
        isPrime[0] = isPrime[1] = false;

        for(int i=2;i<=n;++i){
            for(int j=i+i;j<=n;j+=i){
                isPrime[j] = false;
            }
        }
        for(int i=2;i<=n;++i)
            if(isPrime[i])
                primes.push_back(i);
    }
};

Sieve obj((int)1e5);


inline void solve(){
    int n;
    cin>>n;
    vector<int> primes = obj.primes;

    priority_queue<int,vector<int>,greater<int>> pq;
    int ptr = 0;

    for(auto &c:primes){
        while(n%c==0){
            pq.push(c);
            n /= c;
        }
    }

    while(pq.size()>10){
        int min1 = pq.top();
        pq.pop();
        int min2 = pq.top();
        pq.pop();
        pq.push(min1*min2);
    }

    string pattern = "codeforces";
    string ans;

    for(int i=0;i<10;++i){
        int f = pq.empty() ? 1 : pq.top();
        if(!pq.empty()) pq.pop();
        while(f--){
            ans.push_back(pattern[i]);
        }
    }

    cout<<ans<<endl;
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
