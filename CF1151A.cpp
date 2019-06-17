#include <bits/stdc++.h>

#define nmax 55


void init(int &n, std::string &s){
    std::cin >> n;
    std::cin >> s;
}

void process(int &n, std::string &s){
    int ans = INT_MAX;
    for (int i = 0; i <= n-4; i++){
        int sum = 0;
        sum = sum + (std::min(std::max(s[i], 'A')  - std::min(s[i], 'A'), 'Z' - s[i] + 1));
        // std::cout << i << " : " << sum << "\n";
        sum = sum + (std::min(std::max(s[i+1], 'C')  - std::min(s[i+1],'C'), 'Z' - s[i+1] + 'C' - 'A' + 1));
        // std::cout << i << " : " << sum << "\n";
        sum = sum + (std::min(std::max(s[i+2], 'T')  - std::min(s[i+2],'T'), s[i+2] - 'A' + 'Z' - 'T' + 1));
        // std::cout << i << " : " << sum << "\n";
        sum = sum + (std::min(std::max(s[i+3], 'G')  - std::min(s[i+3],'G'), 'Z' - s[i+3] + 'G' - 'A' + 1));
        // std::cout << i << " : " << sum << "\n";
        ans = std::min(ans, sum);
    }
    std::cout << ans;
}

int main(int argc, char const *argv[])
{
    int n;
    std::string s;
    init(n, s);
    process(n, s);
    return 0;
}
