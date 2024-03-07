#include <iostream>
using namespace std;

int main() {  
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n; //input size of array
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int currsum=0;
    int maxsum=-1e7;
    
    for(int i=0;i<n;i++){
        currsum=max(arr[i], currsum+arr[i]);
        maxsum=max(maxsum, currsum);
    }
    cout<<maxsum;

return 0;
}