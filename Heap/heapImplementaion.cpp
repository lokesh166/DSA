#include<iostream>
using namespace std;

// creating a heap class 
class heap{

    public:
    int arr[100];
    int size;


    // constructor
    heap(){
        arr[0] = -1;
        size = 0;
    }

    // insert a element into heap
    void insert(int val){
        size = size + 1;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parent = index/2;

            if(arr[parent] < arr[index]){
                swap(arr[parent] , arr[index]);
                index = parent;
            }else{
                return ;
            }
        }
    }


    // function for print heap 

    void print(){
        for(int i=1; i<= size; i++){
            cout << arr[i] << " ";
        }cout << endl;
    }


    void deleteFromHeap(){
        if(size == 0){
            cout << "nothing to delete from heap" << endl;
        }

        // step1 : put last element to first index
        arr[1] = arr[size];

        // step2 : delete lase index element 
        size--;

        // step3 : take root node to its correct node
        int i = 1;
        while(i < size){
            int leftIndex = 2*i;
            int rightIndex = 2*i + 1;

            if(leftIndex < size && arr[i] < arr[leftIndex]){
                swap(arr[i] , arr[leftIndex]);
                i = leftIndex;
            }else if(rightIndex < size && arr[i] < arr[rightIndex]){
                swap(arr[i] , arr[rightIndex]);
                i = rightIndex;
            }else{
                return ;
            }
        }
    }
};



int main(){

    heap h;
    h.insert(20);
    h.insert(50);
    h.insert(60);
    h.insert(10);
    h.insert(30);
    h.insert(40);
    h.insert(70);


    h.print();

    h.deleteFromHeap();

    h.print();



    return 0;
}
