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
    //1st process
    for(int i=n-1;i>=0;i--){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    //2nd process(built in function)
    reverse(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    

}
