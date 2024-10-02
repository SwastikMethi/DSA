#include<iostream>
using namespace std;

void difference_of_multiples(int n1, int n2){
    int difference;
    for(int i=1; i<10; i++){
        int product1 = n1*i;
        int product2 = n2*i;
        if(n1>n2){
            difference = product1-product2;
            cout<<"Difference of "<<i<<"th"<<" multiples of "<<n1<<" and "<<n2<<"is: "<<difference<<endl;
        }
        else{
            difference = product2-product1;
            cout<<"Difference of "<<i<<"th"<<" multiples of "<<n2<<" and "<<n1<<"is: "<<difference<<endl;
        }
    }
}

int main(){
    int n1,n2;
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the second number: ";
    cin>>n2;
    difference_of_multiples(n1,n2);
    return 0;
}