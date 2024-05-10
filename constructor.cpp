#include<iostream>
using namespace std;

class arithematic{

    public:
     int no1;
     int no2;

     arithematic(){
         cout<<"Inside Defult Constructor\n";
         no1=0;
         no2=0;
     }

     arithematic(int a,int b){

         cout<<"parametrised constrouctor\n";
         no1=a;
         no2=b;
     }
     arithematic(arithematic &ref){
         cout<<"Inside copy constructor\n";
         no1= ref.no1;
         no2=ref.no2;
     }
     ~arithematic(){
         cout <<"Inside destructor\n";
     }

};

int main(){

 arithematic obj1;
 arithematic obj2(11,21);
 arithematic obj3(obj2);
 cout<<obj1.no1<<"\t"<<obj1.no2<<"\n";
 cout<<obj2.no1<<"\t"<<obj2.no2<<"\n";
 cout<<obj3.no1<<"\t"<<obj3.no2<<"\n";
    return 0;
}