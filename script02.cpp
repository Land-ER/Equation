#include<iostream>
#include<cstdio>
using namespace std;
void output(int a)
{
    cout << a << endl;
}
int main(void)
{
    freopen("script02.dat","w",stdout);
    void output(int);
    bool re;
    int a,n,_a;
    output(2);
    for(a = 3; ;a += 2)
    {
        re = true;
        _a = a / 2;
        for(n = 3;n < _a;n += 2)
        {
            if(a % n == 0)
            {
                re = false;
                break;
            }
        }
        if(re) output(a);
    }
    return 0;
}