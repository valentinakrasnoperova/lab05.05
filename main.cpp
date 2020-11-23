#include <iostream>
using namespace std;
#include "func.h"
int gcd2 (int r,int m)
{
    if (r == 0)
        return m;
    if (r % m == 0)
        return r;
    if (r == m)
        return r;
    if (r > m)
        return gcd(r-m, m);
    return gcd(r, m-r);
}
int main()
{
    int n,m;
    cout<< "n = "; cin >> n;
    cout<< "m = "; cin >> m;
    if (m==0)
        return 0;
    int r;
    r=n%m;
    cout << "GCD of " << n << " and " << m << " is " << gcd(n, m);
    cout << endl;
    cout << "GCD2 of "<<r<< " and "<<m<< " is "<<gcd2(r, m);
    return 0;
}

