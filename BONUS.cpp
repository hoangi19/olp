#include <bits/stdc++.h>

#define maxn 1005

using namespace std;

int n, r, k;
long long a[maxn][maxn];
int c[maxn][maxn];
int s[maxn][maxn];
long long ans = 0;

void nhap()
{
    freopen("BONUS.INP","r",stdin);
    freopen("BONUS.OUT","w",stdout);
    cin >> n >> r >> k;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    for (int i = 1; i <= k; i++)
    {
        int x, y;
        cin >> x >> y;
        c[x][y] = r;
    }
}

void xuli()
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            if (c[i][j] != r) c[i][j] = max(c[i-1][j]-1 , 0);
            if (c[i][j])
            {
                s[i][j] = r;
            }   else s[i][j] = max(s[i][j-1]-1, 0);

            if (s[i][j] != 0)
            {
                ans += a[i][j];
                // s[i][j]--;
            }
        }
    
    cout << ans;
}


int main(int argc, char const *argv[])
{
    nhap();
    xuli();
    return 0;
}
