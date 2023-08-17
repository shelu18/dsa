//find the maximum value out of all the element in the array

#include<iostream>
using namespace std; 
int main(){
int shelu[5]={1,5,76,56,45};
int max=shelu[0];//we initialise this element with the first element of the array 
for(int i=1;i<5;i++){
   if (shelu[i]>max){  //agar current index per jo element he,is it more than what i store in max variable then update else no
                        //shelu[i] shows the current element of array of i...


max=shelu[i];

}                      
}
cout<<max<<endl;

return 0;
}