#include <bits/stdc++.h>

using namespace std;

int k;
map<string , int> mark;

void xuli()
{
    long long ans = 0;
    for (map<string, int>::iterator i = mark.begin(); i != mark.end(); i++)
        if (i->second > 5) ans += 100 + (i->second - 5);
            else ans += 100;
    cout << ans;
}

void nhap()
{
    cin >> k;
    for (int i = 1; i <= k; i++)
    {
        string s;
        cin >> s;
        mark[s]++;
    }
}

int main(int argc, char const *argv[])
{
    nhap();
    xuli();
    return 0;
}
