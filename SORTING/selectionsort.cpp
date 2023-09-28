#include <iostream>
using namespace std;
void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex])
            swap(arr[j],arr[minindex]);
 }
   }
  
      }

int main(){
    int n;
    cout<<"enter the size of an array";
    cin>>n;
    int arr[n];
    cout<<"enter "<<"  "<<n<<" "<<"element in the array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

        selection_sort(arr, n);

    cout << "Sorted array is : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
