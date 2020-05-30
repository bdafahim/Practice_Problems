#include <iostream>
#include <vector>
#include <cmath>
#include <set>
#include <queue>
#include <map>
#include <cstdio>
#include <cstring>
#include <string>
#include <stack>
#include <algorithm>
#include <limits.h>
#include <bits/stdc++.h>
#define fw(x) freopen("x.txt", "w", stdout)
#define For(i, a, b, c) for (int i = a; i < b; i += c)
#define REP(i, n) for (int i = 0; i < n; i++)
#define REP1(i, n) for (int i = 1; i <= n; i++)
#define mem(a, s) memset(a, s, sizeof a)
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL)
#define pf printf
#define sc scanf
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define all(v) v.begin(), v.end()
#define vii vector<int>
#define vll vector<ll>
#define vss vector<string>
#define debug(x) cout << #x "=" << (x) << endl
#define pb push_back
#define INF 1001001001
#define PI 3.1415926535897932384626

using namespace std;

const int N = (int)2e5 + 5;
const int mod = 1000000007;
//ll qpow(ll n,ll k) {ll ans=1;assert(k>=0);n%=mod;while(k>0){if(k&1) ans=(ans*n)%mod;n=(n*n)%mod;k>>=1;}return ans%mod;}

void printYes()
{
    cout<<"YES"<<"\n";
}
void printNo()
{
    cout<<"NO"<<"\n";
}

bool mark[1000];

int main()
{
    int n,m,cnt=0;
    int a[1000],b[1000];
    cin>>n;

    REP(i,n)
    {
        cin>>a[i];
    }

    cin>>m;

    REP(i,m)
    {
        cin>>b[i];
    }

    sort(a,a+n);
    sort(b,b+m);

    int i=0;
    for(;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if((abs(a[i] - b[j]) == 1 || abs(a[i] - b[j]) == 0) && mark[j] == false)
            {

               // cout<<i<<" "<<j<<endl;
                mark[j] = true;
                ++cnt;
                break;
            }
        }
    }



    cout<<cnt;

  return 0;
}










