#include<iostream>
using namespace std;
int evenCount(const int*a,int size){
 int count=0;
  const int* end=a+size;
   while(a<end){
    if(*a%2==0)count++;
      a++;
}
 return count;
}
 int main(){
  int n;
  cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
}
  cout<<evenCount(arr,n);
  return 0;
}
