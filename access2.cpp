#include<iostream>
using namespace std;

class base{

    public:
        int a;
    private:
        int b;
    protected:
        int c;
    public:
        base(){
            a=10;b=20;c=30;
        }
    void fun(){
        cout<<a<<"\n";//A
        cout<<b<<"\n";//A
        cout<<c<<"\n";//A
    }

};
class derived:public base{

    public:
        void gun(){
            cout<<a<<"\n";//Allowed
            cout<<b<<"\n";//NA
            cout<<c<<"\n";//A
        }

};


int main(){
    base bobj;
    cout<<bobj.a<<"\n";//A
    cout<<bobj.b<<"\n";//NA
    cout<<bobj.c<<"\n";//NA
    return 0;
}