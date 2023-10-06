#include<bits/stdc++.h>
#define FOR(i,A,b) for(int i = (A); i < (b); i++)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int dif = 0;
    FOR(i,1,n+1)
    {
        int k;
        cin >> k;
        dif = max(dif, k - i);
    }
    cout << dif << '\n';
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}