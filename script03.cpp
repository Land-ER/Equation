using namespace std;
class re
{
    private:
        bool _tf[100];
        double _num[100];
        int _i = 0,_k;
    public:
        void push(bool tf,double num)
        {
            _tf[_i] = tf;
            _num[_i] = num;
            _i ++;
        }
        void pop(bool *tf,double *num);
};
void re::pop(bool *tf,double *num)
{
    for(_k = 0;_k < _i;_k ++)
    {
        *tf = _tf[_k];
        *num = _num[_k];
        tf ++;
        num ++;
    }
}
class user
{
    private:
        char _in[10000],_out[10000];
    public:
        void input(void)
        {
            cout << "Enter the Epuation:" << endl;
            cin >> _in;
        }
        void output(char *pt,int length);
};
void user::output(char *pt,int length)
{
    cout << "The solution of the original equation is:";
    for(int i = 0;i < length;i ++)
    {
        putchar(*pt);
        pt ++;
    }
}