// { Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
// Problem Link: https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
        // Your code here
        // sorting both arrays in asscending order
       sort(arr, arr+n);
       sort(dep, dep+n);

       int plat_needed=1, result=1;
       int i=1,j=0;

      while(i<n && j<n){
       if(arr[i]<=dep[j]){
        plat_needed++;
        i++;
       }
       else if(arr[i]>dep[j]){
        plat_needed--;
        j++;

       }

       if(plat_needed>result)
        result = plat_needed;
      }

return result;
  }



    
};


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends