#include<iostream>
using namespace std;
bool is_mirrored(const int* a,const int* b,int size){
  b=b+size-1;
   for(int i=0;i<size;i++){
  if(*a!=*b)return false;
  a++;
   b--;
 }
  return true;
 }

  int main(){
  int n;
  cin>>n;
  int arr1[n],arr2[n];
for(int i=0;i<n;i++){
  cin>>arr1[i];
 }
for(int i=0;i<n;i++){
 cin>>arr2[i];
}
 cout<<is_mirrored(arr1,arr2,n);
 return 0;
}
