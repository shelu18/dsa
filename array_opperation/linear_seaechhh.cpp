#include<iostream>
using namespace std;

linear_search(int arr[],int n,int key){
 for (int i=0;i<n;i++){
  if(arr[i]==key){
   return i;
   }
  }
  return -1;
 }


int main(){
    int n;
cout<<"enter the size of an array"<<endl;
cin>>n;
 int arr[n];
for (int i=0;i<n;i++)
cin>>arr[i];
int key;
cout<<"enter the value of key"<<endl;
 cin>>key;
 cout<<linear_search(arr,n,key)<<endl;



}