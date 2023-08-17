#include<iostream>
using namespace std;
int max_value(int arr[],int n){
    int max =arr[0];
    for(int i=1;i<n;i++){
    if(arr[i]>max){
     max= arr[i];}
    }return max;
    }

int main(){
    int n;
    cout<<"enter the size of an array";
    cin>>n;
    int arrr[n];
    for(int i=0;i<n; i++){
        cin>>arrr[i];
    }
    cout<< max_value(arrr,n)<<endl;
     return 0;
}