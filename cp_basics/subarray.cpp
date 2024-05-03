#include<bits/stdc++.h>
#define Disha ios_base::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
using namespace std;
int main(){
    Disha;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int l=0;l<n;l++){
        for(int r=l;r<n;r++){
            for(int i=l;i<=r;i++){
                cout<<a[i]<<" ";
                
            }
            cout<<endl;
        }
        
    }
    

}
