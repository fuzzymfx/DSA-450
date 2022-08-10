//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int solveWordWrap(vector<int>nums, int k) 
    { 
        // Code here
        int i=0,mid=0,j=n-1;
        while(mid<=j){
            if(a[mid]==0){
                swap(a[i],a[mid]);
                i++;mid++;
            }
            else if(a[mid]==1){
            mid++;
                
            }
            else{
            swap(a[mid],a[j]);
            j--;
            }
        }
				
    } 
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
        cin >> n;
        vector<int>nums(n);
        for (int i = 0; i < n; i++)cin >> nums[i];
        cin >> k;
        Solution obj;
        cout << obj.solveWordWrap(nums, k) << endl;
	}
	return 0;
}
// } Driver Code Ends