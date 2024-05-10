#include<iostream>

using namespace std;

const int a =10; //consstant global
int b=20;

class demo{
public:
    int x,y;
    demo(){
        x=10;
        y=20;
    }
    void fun(int i , const int j){ // const in argument 
        int no1=11;
        const int no2 =21; //conta in local
        i++; //allowed
        J++; //NA
        no1++;//A
        no2++;//NA
    }
};

int main(){

    demo obj1;
    const demo obj2; //const obj

    obj1.x++;//A
    obj1.y++;//A
    obj2.x++;//NA
    obj2.y++;//NA

    a++;//NA
    b++;//a

    return 0;
}