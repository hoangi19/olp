#include <bits/stdc++.h>

using namespace std;

string s;
int n;
long long a,b;
long long len = 0;

void xuli()
{
    if (a > len && a%len != 0) a %= len;
        else if (a%len == 0) a = len;
    if (b > len && b%len != 0) b %= len;
        else if (b%len == 0) b= len;
    a--; b--;
    // cout << s[a] << " " << s[b];
    if (s[a] == s[b])
    {
        cout << "Yes\n";
    }
    else cout << "No\n";
}

void nhap()
{
    cin >> s;
    len = s.length();
    cin >> n;
    while(n--)
    {
        cin >> a >> b;
        xuli();
    }
}

int main(int argc, char const *argv[])
{
    nhap();
    return 0;
}
