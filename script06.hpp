void swap(int *a,int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
void make(int *pt,int length,int num)
{
    int i;
    for(i = 0;i < length;i ++)
    {
        *pt = num;
        pt ++;
    }
}
void del(int *pt,int length)
{
    int i;
    for(i = 0;i < length;i ++)
    {
        *pt = *(pt + 1);
        pt ++;
    }
}
int primeFactorization(int n,int *pt)
{
    static int i = 0,list[1000];
    int k,t = 0;
    ifstream fin;
    fin.open("script02.dat");
    fin >> list[0];
    while(n > 1)
    {
        for(k = 0; ;k ++)
        {
            if(k > i)
            {
                i ++;
                fin >> list[i];
            }
            if(n % list[k] == 0)
            {
                n /= list[k];
                *pt = list[k];
                pt ++;
                t ++;
                break;
            }
        }
    }
    return t;
}