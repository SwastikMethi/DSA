#include<iostream>
using namespace std;
void Reverse(int arr[],int start, int end){
    while(start<=end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--; 
    }
}
void left_rotate(int arr[], int d, int n){
    Reverse(arr,0,d-1);
    Reverse(arr,d,n-1);
    Reverse(arr,0,n-1);
    cout<<"Array after left rotation by "<<d<<" places: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int d;
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>array[i];
    }
    cout<<"Enter the number of places to rotate: ";
    cin>>d;
    left_rotate(array,d,n);
}