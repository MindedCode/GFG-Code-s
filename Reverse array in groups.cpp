Reverse array in groups
Given an array arr[] of positive integers of size N. Reverse every sub-array group of size K.

 

Example 1:

Input:
N = 5, K = 3
arr[] = {1,2,3,4,5}
Output: 3 2 1 5 4
Explanation: First group consists of elements
1, 2, 3. Second group consists of 4,5.
 


//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int K){
        // code here
        long int val=K,q,r,limit;
        q = n/K;
		r = n%K;
		limit = q * K;
		
		for(long int i=0;i<limit;i=i+val){   
			if(i%val == 0 && i != 0)
				K = K + (2*val);
			int lim;
			if(K%2 == 0)
				lim = (K/2) - 1;
			else
				lim = K/2;
			for(int j=i;j<=lim;j++)
				swap(arr[j],arr[K-j-1]);

		}

		if(r != 0){						// for remaining elements(if n is not multiple of K)
			int newlimit = limit + ((n-1-limit)/2);
			int j = n-1;
			for(int i=limit;i<=newlimit;i++)
				swap(arr[i],arr[j--]);
		}
    
    }
};

//{ Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends
