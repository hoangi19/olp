#include <bits/stdc++.h>

#define maxn 1005

using namespace std;

int n,m,k;
pair <int, pair<int, int> > row[maxn][maxn];
pair <int, pair<int, int> > col[maxn][maxn];
pair <int, int> a[maxn][maxn];
int f[maxn][maxn];

void nhap()
{
    cin >> m >> n >> k;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
        {
            int x;
            cin >> x;
            row[i][j] = make_pair(x, make_pair(i, j));
            col[j][i] = make_pair(x, make_pair(i, j));
        }
}

void xuli()
{
    for (int i = 1; i <= m; i++) sort(row[i]+1, row[i] + n + 1);

    for (int i = 1; i <= n; i++) sort(col[i]+1, col[i] + m + 1);

    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
        {
            int w = row[i][j].first;
            int vt = j;
            int l = 1, r = j;
            while(r - l > 1)
            {
                int mid = (l+r)/2;
                if (row[i][mid].first < w) l = mid;
                    else r = mid;
            }
            if (row[i][l].first == w) vt = l;
                else vt = r;
            int x = row[i][j].second.first;
            int y = row[i][j].second.second;

            a[x][y].first = vt-1;
        }

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            int w = col[i][j].first;
            int vt = j;
            int l = 1, r = m;
            while(r - l > 1)
            {
                int mid = (l+r)/2;
                if (col[i][mid].first > w) r = mid;
                    else l = mid;
            }
            if (col[i][r].first == w) vt = r;
                else vt = l;
            int x = col[i][j].second.first;
            int y = col[i][j].second.second;

            a[x][y].second = m-vt;
        }

    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            f[a[i][j].first][a[i][j].second]++;

    // for (int i = 1; i <= m; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //         cout << a[i][j].first << " " << a[i][j].second << " | ";
    //     cout << "\n";
    // }

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i > 0) f[i][j] += f[i-1][j];
            if (j > 0) f[i][j] += f[i][j-1];
            if (i > 0 && j > 0) f[i][j] -= f[i-1][j-1];
            // cout << f[i][j] << " ";
        }
        // cout << "\n";
    }
}

int main(int argc, char const *argv[])
{
    freopen("mab.inp","r",stdin);
    freopen("mab.out","w",stdout);
    nhap();
    xuli();

    for (int i = 1; i <= k; i++)
    {
        int ap, bt;
        cin >> ap >> bt;
        cout << f[ap][bt] << "\n";
    }
    return 0;
}
