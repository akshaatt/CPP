#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<"a is gratest"<<a;
        }
        else{
            cout<<"c is greatest"<<c;
        }
    }
    else{
        if(b>c){
            cout<<"b is greatest"<<b;
        }
        else{
            cout<<"c is greatest"<<c;
        }
    }
}