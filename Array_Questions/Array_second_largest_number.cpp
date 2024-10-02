using namespace std;
#include<vector>
#include<iostream>

int main(){
    int n;
    printf("Enter number of elements in the array: ");
    cin>>n;
    int array[n];
    int second_largest_no;

    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int checker= array[0];
    for(int i=0;i<n;i++){
        if(array[i]>checker){
            second_largest_no=checker;
            checker = array[i];
        }
    }
    cout<<"The largest number in array is "<<checker<<endl;
    cout<<"The second largest number is "<<second_largest_no<<endl;
}