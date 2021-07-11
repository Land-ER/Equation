#include"script06.hpp"
using namespace std;
class fraction
{
    private:
        void reduction(void);
    public:
        int numerator,denominator;
};
void fraction::reduction(void)
{
    int a,b,i,k,list1[1000],list2[1000];
    make(list1,1000,1);
    make(list2,1000,1);
    a = primeFactorization(numerator,list1);
    b = primeFactorization(denominator,list2);
    for(i = 0;i < a;i ++)
        for(k = 0;k < b;k ++)
        {
            if(list1[i] == list2[k])
            {
                del(&list1[i],a - i - 1);
                del(&list2[k],b - k - 1);
                i --;
                k --;
            }
            else if(list1[i] < list2[k])
                break;
        }
}
class radical
{

};
class number
{

};