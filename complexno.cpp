#include<iostream>
using namespace std;

class complex{
    private:
    int a,b;
    public:
    void setdata(int x,int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<a<<"+"<<b<<"i"<<endl;
    }
    complex operator+(complex m){
        complex temp;
        temp.a=a+m.a;
        temp.b=b+m.b;
        return temp;
    }
};
int main(){
    complex c1,c2,c3;
    c1.setdata(9,6);
    c2.setdata(4,3);
    c3=c1+c2;           
    
    c3.show();
    return 0;
}