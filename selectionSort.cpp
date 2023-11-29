#include <iostream>

using namespace std;

void selection(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minValue = arr[i];
        int minIndex=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<minValue){
                minValue=arr[j];
                minIndex=j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    selection(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
