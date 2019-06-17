#include <bits/stdc++.h>

#define maxn 105

using namespace std;

int T;
int n,k;
int a[maxn];

void xuli(int t)
{
    int ans = 1;
    for (int i = 2; i <= n; i++)
        if (a[i] > a[i-1] + k) ans++;
    cout << "Case #" << t << ": " << ans << "\n";
}

void nhap()
{
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a+1,a+n+1);
        xuli(t);
    }
}

int main(int argc, char const *argv[])
{
    nhap();
    //xuli();
    return 0;
}
