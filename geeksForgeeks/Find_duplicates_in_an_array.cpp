//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        // code here
        //sort(arr,arr+n);
        //int freq[n];
       unordered_map<int,int>freq;
        
        vector<int>res;
      // memset(freq,0,sizeof(freq));
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
            
        }
        for(int i=0;i<n;i++){
            if(freq[i]>=2){
                  res.push_back(i);
            }
        }
        if(res.size()==0){
            res.push_back(-1);
        }
        return res;
        
    }
       
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
