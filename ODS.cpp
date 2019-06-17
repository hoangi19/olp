#include <bits/stdc++.h>

#define maxn 1000006

using namespace std;

int T;
int ODS[maxn];

int ods(int x)
{
    if (x%2 == 1) return x;
    return ods(x/2);
}

void init()
{
    ODS[0] = 0;
    for (int i = 1; i < maxn; i++)
        ODS[i] = ods(i) + ODS[i-1];
}

void nhap()
{
    freopen("ODS.INP","r",stdin);
    freopen("ODS.OUT","w",stdout);
    cin >> T;
    while(T--)
    {
        int A,B;
        cin >> A >> B;
        cout << ODS[B]-ODS[A-1] << "\n";
    }
}


int main(int argc, char const *argv[])
{
    init();
    nhap();
    return 0;
}
