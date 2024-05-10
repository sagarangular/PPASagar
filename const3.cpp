#include<iostream>

using namespace std;



class demo{
public:
    int x;
    int y;
    demo()
    {
      x=10;
      y=20;
    }

    void fun(){ //non constant function
        cout<<"inside fun \n";
        x++;
        y++;
    }
    void gun() const{ //constant function
        cout << "inside gun \n";
         //x++;
         //y++;
    }
};

int main(){

  demo obj1; //normal object normal function
  const demo obj2; //normal object contant function

  obj1.fun();
  obj.gun();

  obj2.fun(); //constant object normal function
  obj2.gun();//constant object consatnt function

    return 0;
}