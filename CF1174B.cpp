#include <bits/stdc++.h>

#define nmax 100005

using namespace std;

int n;
int a[nmax];

void init(){
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
}

void process(){
    int nL = 0;
    int nC = 0;
    for (int i = 1; i <= n; i++){
        if (a[i] % 2 == 0) nC++;
            else nL++;
    }
    if (nL > 0 && nC > 0) sort(a+1, a+n+1);
    for (int i = 1; i <= n; i++) cout << a[i] << " ";
}

int main(int argc, char const *argv[])
{
    init();
    process();
    return 0;
}
