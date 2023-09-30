#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int div = max(a, b) - min(a, b);
    if(div/c ==0)
    {
        cout << -1;
    }
    else
    {
        cout << (div / c) * c;
    }
    return 0;
}