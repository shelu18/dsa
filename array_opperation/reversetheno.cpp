//write a program to print the following number in reverse order:


#include<iostream>

using namespace std;
int main(){

int arr[9]={34,56,54,32,67,89,90,32,21};

for (int i=0;i<9;i++){
cout<<arr[i]<<"  ";
}
cout<<"\n\n";
for(int i=8;i>=0;i--){
    cout<<arr[i]<<" ";
}
return 0;
}