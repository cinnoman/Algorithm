#include <iostream>

using namespace std;

void merge(int arr[], int lefthalf[], int righthalf[], int n, int m){
    int i=0, j=0, k=0;
    while(i<n && j<m){
        if(lefthalf[i]<=righthalf[j]){
            arr[k]=lefthalf[i];
            i++;
        }
        else{
            arr[k]=righthalf[j];
            j++;
        }
        k++;
    }
    while(i<n){
        arr[k]=lefthalf[i];
        i++;
        k++;
    }
    while(j<m){
        arr[k]=righthalf[j];
        j++;
        k++;
    }
    
}

void mergeSort(int arr[], int n){
    if(n<2) {return;}
    int midIndex=n/2;
    int lefthalf[midIndex];
    int righthalf[n-midIndex];
    for(int i=0; i<midIndex; i++){
        lefthalf[i]=arr[i];
    }
    for(int i=midIndex; i<n; i++){
        righthalf[i-midIndex]=arr[i];
    }
    mergeSort(lefthalf, midIndex);
    mergeSort(righthalf, (n-midIndex));

    merge(arr, lefthalf, righthalf, midIndex, (n-midIndex));

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
