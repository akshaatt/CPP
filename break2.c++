// #include<iostream>
// using namespace std;

// int main(){

// for(int i=0; i<100; i++){
//     if(i%3==0){
//         continue;
//     }
//     cout<<i<<endl;
// }

//     return 0;
// }
#include<iostream>
using namespace std;

int main(){
int n;
int i;
cout<<"Enter The Number You want to check";
cin>>n;
for(i=2; i<=n-1; i++){
if(n%i == 0){
cout<<"The number is not prime"<<endl;
break;
}
if(i==n){
    cout<<"Prime";
}
}
cout<<"The number is prime"<<endl;
    return 0;
}