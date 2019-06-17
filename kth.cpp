#include <bits/stdc++.h>

#define maxn 40

using namespace std;

int f[maxn];
int n, k;

void nhap()
{
    freopen("kth.inp","r", stdin);
    freopen("kth.out","w",stdout);
    cin >> n >> k;
    f[0] = 1;
    f[1] = 1;
    f[2] = 1;
    for (int i = 3; i <= n; i++)
        f[i] = f[i-1] + f[i-2] +  f[i-3];
}

string xuli(int x, int u)
{
    if (u == 0) return "a";
    if (u == 1) return "b";
    if (u == 2) return "c";
    if (x <= f[u-1]) return xuli(x, u-1);
    if (x <= f[u-2] + f[u-1]) return xuli(x-f[u-1], u-2);
    return xuli(x- f[u-1] - f[u-2], u-3);
}

int main(int argc, char const *argv[])
{
    nhap();
    cout << xuli(k, n);
    return 0;
}
