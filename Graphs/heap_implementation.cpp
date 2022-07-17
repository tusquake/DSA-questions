#include<bits/stdc++.h>
using namespace std;

class heap{
    public:
        int arr[100];
        int size=0;

    heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){
        size = size+1;
        int index = size;
        arr[index] = val;

        while(index>1){
            int parent = index/2;

            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
            }
            else{
                return;
            }
        }

    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }

    void deletefromHeap(){
        if(size==0){
            cout<<"nothing to delete"<<endl;
            return;
        }
        arr[1] = arr[size];
        size--;


    // Take root node to correct position
    int i =1;
    while(i<size){
        int leftIndex = 2*i;
        int rightIndex = 2*i+1;

        if(leftIndex<size&& arr[i]<arr[leftIndex]){
            swap(arr[i],arr[leftIndex]);
            i = leftIndex;
        }
        else if(rightIndex<size && arr[i]<arr[rightIndex]){
            swap(arr[i],arr[rightIndex]);
            i = rightIndex;
        }

    }

    }

};

void heapify(int arr[],int n,int i){

    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if(left<n&&arr[largest]<arr[left]){
        largest = right;
    }

    if(largest != i){
        
    }

}

int main(){
    heap h;
    h.insert(10);
    h.insert(20);
    h.insert(30);
    h.insert(40);
    h.insert(50);
    return 0;
}