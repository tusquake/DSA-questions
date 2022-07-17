#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,i;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        for(i=0;i<n-1;i++){
            if(s[i]=='L'&& s[i+1]=='L')
            {
                cout<<"Yes"<<endl;
                goto cvv;
            }
            else if(s[i]=='R'&& s[i+1]=='R'){
                cout<<"Yes"<<endl;
                goto cvv;
            }
            cout<<"NO"<<endl;
           
            cvv:;
        }
    }
}