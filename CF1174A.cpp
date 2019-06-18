#include <bits/stdc++.h>

#define nmax 1005

using namespace std;

int n;
int a[2*nmax];

void init(){
    cin >> n;
    for (int i = 1; i <= 2*n; i++) cin >> a[i];
}

void process(){
    sort(a+1, a+2*n+1);
    int sum = 0;
    for (int i = 1; i <= n; i++) sum += a[i];
    for (int i = n+1; i <= 2*n; i++) sum -= a[i];
    if (sum != 0){
        for (int i = 1; i <= 2*n; i++) cout << a[i] << " ";
    } else cout << -1;
}

int main(int argc, char const *argv[])
{
    /* code */

    init();
    process();
    return 0;
}
