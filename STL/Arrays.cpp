#include<iostream>
#include<array>

using namespace std;
int main(){
    int basic[3]= {1,2,3};

    array<int,4> a ={1,2,3,4};

    for(int i=0;i<a.size();i++){
        cout<<a[i]<<endl;
    }

    cout<<"Element at 2nd Index"<<a.at(2)<<endl;    //3

    cout<<"Empty or not"<<a.empty()<<endl;      //

    cout<<"First Element"<<a.front()<<endl;     //1

    cout<<"last Element"<<a.back()<<endl;       //4
}