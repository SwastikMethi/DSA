#include<iostream>
using namespace std;

void linear_search(int array[],int n,int s){
    for(int i=0;i<n;i++){
        if(s == array[i]){
            cout<<"The position of entered element is "<<(i+1)<<endl;
        }
    }
}
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<(i+1)<<" :";
        cin>>array[i];
    }
    int s;
    cout<<"Enter the search element: ";
    cin>>s;
    linear_search(array,n,s);
}