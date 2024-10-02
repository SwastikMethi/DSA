#include<iostream>
#include<vector>
#include<set>
using namespace std;
void Union(int array1[], int array2[], int n1, int n2){
    set<int> union_set;
    for(int i=0; i<n1; i++){
        union_set.insert(array1[i]);
    }
    for(int i=0; i<n2; i++){
        union_set.insert(array2[i]);
    }

    cout << "Union of the two arrays: ";
    for(auto it : union_set){
        cout << it << " ";
    }
    cout << endl;
}
void Intersection(int array1[], int array2[], int n1, int n2){
    vector<int> intersection_list;
    int i = 0, j = 0;
    while(i < n1 && j < n2){
        if(array1[i] < array2[j]){
            i++;
        }
        else if(array1[i] > array2[j]){
            j++;
        }
        else{
            intersection_list.push_back(array1[i]);
            i++;
            j++;
        }
    }

    cout << "Intersection of the two arrays: ";
    for(int i=0; i<intersection_list.size(); i++){
        cout << intersection_list[i] << " ";
    }
    cout << endl;
}

int main(){
    int n1, n2;
    cout << "Enter number of elements in first array: ";
    cin >> n1;
    int array1[n1];
    for(int i=0; i<n1; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> array1[i];
    }

    cout << "Enter number of elements in second array: ";
    cin >> n2;
    int array2[n2];
    for(int i=0; i<n2; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> array2[i];
    }

    Union(array1, array2, n1, n2);
    Intersection(array1, array2, n1, n2);

    return 0;
}