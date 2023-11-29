#include <iostream>

using namespace std;

void swap(int arr[], int a, int b){
    int temp = arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}

void quickSort(int arr[], int lowIndex, int highIndex){
    if(lowIndex>highIndex)return;
    int pivot=arr[highIndex];
    int leftpointer = lowIndex;
    int rightpointer= highIndex;
    while (leftpointer<rightpointer)
    {
        while(arr[leftpointer]<=pivot && leftpointer<rightpointer){
            leftpointer++;
        }
        while(arr[rightpointer]>=pivot && leftpointer<rightpointer){
            rightpointer--;
        }
        swap(arr, leftpointer, rightpointer);
    }
    swap(arr, leftpointer, highIndex);

    quickSort(arr, lowIndex, leftpointer-1);
    quickSort(arr, leftpointer+1, highIndex);  
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
