#include <bits/stdc++.h>

#define maxn 100005

using namespace std;

int n,c;

pair <long long, long long> p[maxn];

bool comp(pair<long long, long long> x, pair<long long, long long> y)
{
    return x.first < y.first || (x.first == y.first && x.second > y.second);
}

void xuli()
{
    sort(p+1,p+n+1,comp);

    long long exp = c;
    long long ans = 0;
    for (int i = 1; i <= n; i++)
        if (exp >= p[i].first){
            exp += p[i].second;
            ans++;
        }
            else break;
    cout << ans;
}

void nhap()
{
    cin >> n >> c;
    for (int i = 1; i <= n; i++)
    {
        int a,b;
        cin >> a >> b;
        p[i] = make_pair(a,b);
    }
}


int main(int argc, char const *argv[])
{
    nhap();
    xuli();
    return 0;
}
