using namespace std;
#include<vector>
#include<iostream>

int main(){
    int n;
    printf("Enter number of elements in the array: ");
    cin>>n;
    int array[n];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int checker= array[0];
    for(int i=0;i<n;i++){
        if(array[i]>checker){
            checker = array[i];
        }
    }
    cout<<"The largest number in array is "<<checker<<endl;
}