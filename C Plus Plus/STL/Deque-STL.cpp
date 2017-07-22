#include <iostream>
#include <deque> 
using namespace std;
void printKMax(int arr[], int n, int k){
   //Write your code here.
    deque<int> dq;
    
    // process first k elements of array
    int i;
    for(i=0;i<k;i++){
        //Remove the previous smaller elements
        if(!dq.empty() && arr[i]>=arr[dq.back()]) dq.pop_back();
        // Add element at rear of the queue
        dq.push_back(i);
    }
    
    //Process the rest of the elements
    
    for(;i<n;i++){
        // Print the largest element of the previous window
        cout<<arr[dq.front()]<<" ";
        
        //removing index that are not in current window
        while(!dq.empty() && dq.front()<=i-k) dq.pop_front();
        
        //removing smaller elements in current window
        while(!dq.empty() && arr[i]>=arr[dq.back()]) dq.pop_back();
        
        //Add current element at the back of the queue
        dq.push_back(i);
    }
    
    cout<<arr[dq.front()]<<endl;
    
}
int main(){
  
   int t;
   cin >> t;
   while(t>0) {
      int n,k;
       cin >> n >> k;
       int i;
       int arr[n];
       for(i=0;i<n;i++)
            cin >> arr[i];
       printKMax(arr, n, k);
       t--;
     }
     return 0;
}
