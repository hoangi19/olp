#include <iostream>

long long x,y,c;
long long t;

void xuli()
{
    if (2*x*y <= c*c) std::cout << "DANGER\n";
        else std::cout << "SAFE\n";
}

void nhap()
{
    std :: cin >> t;
    while(t--)
    {
        std::cin >> x >> y >> c;
        xuli();
    }
}


int main(int argc, char const *argv[])
{
    nhap();
    return 0;
}
