#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void subsequences(vector<int>&arr, int i,int n,vector<int>temp){
  
      if(i == n)
    {   cout<<"{";
        for(auto x : temp)
            {cout << x << " ";
            }
            cout<<"}";
        cout << endl;
        return;
    }
   
    temp.push_back(arr[i]);
    subsequences(arr,i+1,n,temp);
    temp.pop_back();
    subsequences(arr,i+1,n,temp);
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Your array: ";
    for(auto x : arr){
        cout<<x<<" ";
    }
    cout<<endl<<"Possible subsequences are: "<<endl;
      vector<int>temp;
    subsequences(arr,0,n,temp);

}