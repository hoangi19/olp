#include <bits/stdc++.h>

#define maxn 100005
#define mod 1000000007

using namespace std;

int n;
long long a[maxn];
long long sum[maxn];

void xuli()
{
    sort(a+1,a+n+1);

    sum[1] = 0;
    for (int i = 2; i <= n; i++)
        sum[i] = (a[i] - a[i-1])*(i-1) + sum[i-1];

    long long res = 0;
    for (int i = 1; i <= n; i++)
        res += sum[i];
    // cout << res;
    cout << (res%mod * (a[n]%mod))%mod;
}

void nhap()
{
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
}

int main(int argc, char const *argv[])
{
    nhap();
    xuli();
    return 0;
}
