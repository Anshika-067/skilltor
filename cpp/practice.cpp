
#include<bits/stdc++.h>
using namespace std;
/* int count_unique(vector<int>& arr){
    int n=arr.size();
    unordered_set<int>st;
    for(int i=0;i<n;i++){
        if(i==n-1 || arr[i]!=arr[i+1]){
            st.insert(arr[i]);
        }
    }
    return st.size();
}

//  given a sorted array return array of square of no. and should be sorted
vector<int> sq(vector<int>&arr){
    vector<int>res;
    int n=arr.size();
    for(int i=0;i<n;i++){
        res.push_back(arr[i]*arr[i]);
    }
    return res;
}


vector<int> r={1,2,2,3,5,7,7,9};
int res=count_unique(r);
cout<<res<<endl;
vector<int>rt={1,2,3,4,5};
vector<int>s=sq(rt);
for(int num:s){
    cout<<num<<" ";
}



vector<int> sq(vector<int>&ar){
    vector<int>result;
    int n=ar.size();
    int i=0;
    int j=1;
    while(i<j && j<n){
        result.push_back(ar[i]*ar[i]);
        result.push_back(ar[j]*ar[j]);
        i+=2;
        j+=2;
    }
    if(n%2 != 0){
        result.push_back(ar[n-1]*ar[n-1]);
    }
    return result;
}

*/

int main(){
    printf("hello world\a\n");
    return 0;
}

