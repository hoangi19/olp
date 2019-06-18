#include <bits/stdc++.h>

#define nmax 100005

using namespace std;

int n;
int res[nmax];
int prime[nmax];

void init(){
    cin >> n;
}

void process(){
    int count = 1;
    res[1] = 1;
    for (int i = 2; i <= n; i++){
        if (prime[i] == 0){
            res[i] = count;
            for (int j = i+i; j <= n; j += i){
                if (prime[j] == 0){
                    prime[j] = 1;
                    res[j] = count;
                }
            }
            count++;
        }
        
        // cout << "i'm here";
    }
    for (int i = 2; i <= n; i++)
        cout << res[i] << " ";
}

int main(int argc, char const *argv[])
{
    /* code */
    init();
    process();
    return 0;
}
