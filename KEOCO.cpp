#include <bits/stdc++.h>

#define maxn 105
#define maxx 505

int  n;
int a[maxn];
int f[maxn*maxx];
int sum = 0;
int ans = -1;

using namespace std;

void xuli()
{
    // for (int i = 1; i <= n; i++) f[a[i]] = 1;
    // f[0] = 1;
    
    for (int i = 1; i <= n; i++)
        for (int j = sum/2; j >= a[i]; j--)
            if (f[j-a[i]] > 0 || j == a[i])
            {
                f[j] = f[j-a[i]]+1;
                if (f[j] == n/2 || f[j] == n/2 + 1) ans = max(ans, j);
            }
    
    cout << ans << " "  << sum - ans;
}

void nhap()
{
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        sum += a[i];
    }
}

int main(int argc, char const *argv[])
{
    nhap();
    xuli();
    return 0;
}
