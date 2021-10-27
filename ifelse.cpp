#include<iostream>
using namespace std;

int main(){

int savings;
cin>>savings;

if(savings>5000){
    cout<<"Go with Neha"<<endl;
    cout<<"kk"
}
else if(savings>2000){
    cout<<"Go with Rashmi"<<endl;
}
else if(savings < 2000){
    cout<<"Go with friends"<<endl;
}
else {
    cout<<"go Alone"<<endl;
}


    return 0;
}