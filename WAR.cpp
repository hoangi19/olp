#include <iostream>
#include <stack>
#include <algorithm>

#define maxn 30004

int t;
int n;
int a[maxn];
int l[maxn];
int r[maxn];

std::stack <int> st;

void xuli()
{
    for (int i = 1; i <= n; i++)
    {
        while(!st.empty())
        {
            if (a[i] <= a[st.top()]) st.pop();
                else break;
        }
        if (st.empty()) l[i] = i;
            else l[i] = i-st.top();
        st.push(i);
    }
    while(!st.empty()) st.pop();

    for (int i = n; i >= 1; i--)
    {
        while(!st.empty())
        {
            if (a[i] <= a[st.top()]) st.pop();
                else break;
        }
        if (st.empty()) r[i] = n-i+1;
            else r[i] = st.top()-i;
        st.push(i);
    }
    while(!st.empty()) st.pop();

    // for (int i = 1; i <= n; i++)
    //     std::cout << l[i] << " ";
    // std::cout << "\n";
    // for (int i = 1; i <= n; i++)
    //     std::cout << r[i] << " ";
    // std::cout << "\n";

    long long ans = 0;
    int vt = 0;
    for (int i = 1; i <= n; i++){
        if (ans < (1ll)*(a[i]*(l[i]+r[i]-1))){
            ans = (1ll)*(a[i]*(l[i]+r[i]-1));
            vt = i;
        }
    }
        
    
    std::cout << ans << " " << vt - l[vt]+1 << " " << r[vt] + vt-1 << "\n";
}

void nhap()
{
    std::cin >> t;
    while(t--)
    {
        std::cin >> n;
        for (int i = 1; i <= n; i++) std:: cin >> a[i];

        xuli();
    }
}

int main(int argc, char const *argv[])
{
    nhap();
    return 0;
}
