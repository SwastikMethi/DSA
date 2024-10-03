#include<iostream>
using namespace std;
void FindMissingElement(int array[], int n){
    int sum = n*(n+1)/2;
    int add=0;
    for(int i=0; i<n-1; i++){
        add += array[i];
    }
    int missing_number = sum-add;
    cout<<"The missing element is: "<<missing_number<<endl;
}
int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int array[n-1];
    for(int i=0; i<n-1; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> array[i];
    }
    FindMissingElement(array, n);
}
