#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum ;
    int i;
    cout<<"Enter the inituial number";
    cin>>sum;
    for(i=0;i<=n;i++){
        sum = sum + i;
    }
    cout<<sum;
    return 0;
}