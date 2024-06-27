#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, temp = 0;
    cin >> n;
    vector<int> a(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }
    vector<int> b(n);
    b[0] = 100001;
    cout << b[0] << ' ';
    for (int i = 1; i <= n - 1; i++)
    {
        cout << b[0] + a[i-1] << ' ';
    }
    cout << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
