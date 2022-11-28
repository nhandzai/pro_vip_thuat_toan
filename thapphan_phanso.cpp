#include <iostream>
#include <cmath>
using namespace std;
int min(int &a, int &b)
{
    if (a > b)
        return b;
    else
        return a;
}
void bienthanhnguyen(double &x, int &count)
{
    count = 0;
    while (x != (int)x)
    {
        x *= 10;
        count++;
    }
}
int UCLN(int a, int b)
{
    int uc;
    for (int i = min(a, b); i > 0; i--)
        if (a % i == 0 && b % i == 0)
            return i;
    return 1;
}
void biendoi(double x, int &tu, int &mau)
{
    int uc, count;
    bienthanhnguyen(x, count);
    tu = x;
    mau = pow(10, count);
    uc = UCLN(tu, mau);
    tu /= uc;
    mau /= uc;
}
