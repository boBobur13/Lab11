#include<iostream>
using namespace std;

 void sumArrays(const double* arr1,const double* arr2,double* sum,int size){
 for(int i=0;i<size;i++){
 *(sum+i)=*(arr1+i)+*(arr2+i);
 }
 }
 int main(){
  int n;
   cin>>n;
    double a[n],b[n],c[n];
  for(int i=0;i<n;i++){
       cin>>a[i];
}
 for(int i=0;i<n;i++){
cin>>b[i];
}
 sumArrays(a,b,c,n);
  for(int i=0;i<n;i++){
  cout<<c[i]<<" ";
 }
   return 0;
 }
