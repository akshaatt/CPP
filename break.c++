#include<iostream>
using namespace std;

int main(){
    int pocketmoney;
    pocketmoney = 3000;
    int date;
    cin>>date;
    for(date=1; date<=30; date++){
        if(date%2==0){
            continue;
        }
        if(pocketmoney==0){
            break;
        }
        cout<<"go our today";
        pocketmoney=pocketmoney-300;

    }


    return 0;
}