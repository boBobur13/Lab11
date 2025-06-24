#include<iostream>
using namespace std;
int main(){
const int SIZE=10;
float *ptr,arr[SIZE];
ptr=arr;
for(int i=0;i<SIZE;i++){
cin>>*(ptr+i);
*(ptr+i)=*(ptr+i)*0.3;
}
for(int i=SIZE-1;i>=0;i--){
cout<<*(ptr+i)<<" ";
}
return 0;
}
