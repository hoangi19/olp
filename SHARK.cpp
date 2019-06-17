#include <iostream>
#include <algorithm>

#define maxn 105

int n, k;
int a[maxn];

bool comp(int x, int y)
{
    return x > y;
}

void xuli()
{
    std::sort(a+1,a+n+1,comp);

    long long ans = 0;
    long long x = 1;

    for (int i = 1; i <= n; i++)
        a[i] += a[i-1];

    for (int i = k; i <= n; i += k)
        ans = ans + (a[i]-a[i-k])*x++;
    if (n % k != 0){
        ans += (a[n]-a[n-n%k])*x;
    }
    std::cout << ans;
}

void nhap()
{
    std::cin >> n >> k;
    for (int i = 1; i <= n; i ++) std::cin >> a[i];
}

int main(int argc, char const *argv[])
{
    nhap();
    xuli();
    return 0;
}
