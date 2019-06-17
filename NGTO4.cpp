#include <bits/stdc++.h>

#define maxx 1000006

using namespace std;

int T;
int f[maxx];
int a[] = {2,3,5,7};

void init()
{
    f[2] = f[3] = f[5] = f[7] = 1;
    for (int i = 0; i < 4; i++)
        for (int j = 4; j < maxx; j++)
            if (f[j-a[i]] != 0)
            {
                if (f[j] == 0) f[j] = f[j-a[i]]+1;
                    else f[j] = min(f[j], f[j-a[i]]+1);
            }
}

void xuli()
{

}

void nhap()
{
    cin >> T;
    while(T--)
    {
        int x;
        cin >> x;
        if (f[x] == 0)
        {
            cout << -1 << "\n";
            continue;
        }
        cout << f[x] << "\n";
    }
}

int main(int argc, char const *argv[])
{
    init();
    nhap();
    return 0;
}
