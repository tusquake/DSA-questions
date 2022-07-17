#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    vector<int> a(5,1);
    vector<int> last(a);

    cout<<"print last"<<endl;
    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;
    
}