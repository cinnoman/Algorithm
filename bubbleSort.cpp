#include <iostream>

using namespace std;

void bubble(int arr[], int n){
    bool isSorted;
    for(int i=0; i<n; i++){
        isSorted=true;
        for(int j=1; j<n-i; j++){
            if(arr[j]<arr[j-1]){
                int temp = arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
                isSorted=false;
            }
        }
        if(isSorted) return;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bubble(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
