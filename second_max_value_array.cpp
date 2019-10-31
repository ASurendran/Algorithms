#include<iostream>
#include<map>
using namespace std;



int findSecondMaximum(int arr[], int size) {
    int secondmax = -214748364;
    map<int,int, greater<int> >freq;
    for(int i =0;i<size;i++)
        freq[arr[i]]++;
        
    map<int,int>::iterator it = freq.begin();
    it++;

    secondmax = it->first;
    

    
    // Write your code here
    return secondmax;
}

int main(){
    int arr[] = { 5, 3, 7,9,2,1,6};

    cout<<findSecondMaximum(arr,  sizeof(arr)/sizeof(int));
    return 0;
}