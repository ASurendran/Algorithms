#include<iostream>
using namespace std;

class Arrayclass{
    int *arr;
    int num;
    int size;

public:
    Arrayclass(int size){
        arr = new int[size];
        num = 0;
        size = size;
   
    }
    void insertElement(int a){
        if(num > size)
           resizeArray();   
        arr[num]=a;
        num++;
        
    }

    void resizeArray(){
        int * temp = new int[size*2];
        size = size*2;

        for(int i =0;i<size;i++)
            temp[i] = arr[i];

        delete []arr;
        arr= temp;
    }
    void display(){
       
        cout<<"number of elements"<<num+1<<endl;
    }

    void printElements(){
        for(int i =0; i<num;i++)
            cout<<arr[i]<<" ";
    }
};

int main(){
    Arrayclass arr(1);
    arr.display();
    arr.printElements();
    arr.insertElement(10);
    arr.insertElement(20);
    arr.display();
    arr.insertElement(30);
    arr.insertElement(40);
    arr.insertElement(50);
    arr.insertElement(60);
    arr.insertElement(70);
    arr.insertElement(80);
    arr.insertElement(90);
    arr.insertElement(11);
    arr.insertElement(12);
    arr.insertElement(13);
    arr.insertElement(14);
    arr.insertElement(15);
   
    arr.display();
    arr.printElements();
    return 0;
}

