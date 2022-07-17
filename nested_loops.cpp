#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
   int i,j;
   for(i=n;i>0;i--){
       for(j=1;j<=i;j++){
           cout<<i;
       }
       cout<<"\n";
   }
}
// 5 5 5 5 5
// 4 4 4 4
// 3 3 3
// 2 2
// 1

// n=5