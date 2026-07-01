#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void combinationSum(vector<int>&arr, int i,int target,int n,vector<int>&temp){

        if(target < 0)
            return;

        if(i==n ){
            if(target==0){
                for(auto x:temp){
                cout<<x<<" ";
            }
            cout<<endl;
            }
            return;
        }
        temp.push_back(arr[i]);

        combinationSum(arr,i+1,target-arr[i],n,temp);

        temp.pop_back();
        combinationSum(arr,i+1,target,n,temp); 
    }

int main(){
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    cout<<"Enter the elements of array: ";
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Your arrays : ";
    for(auto x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"Enter the target value: ";
    int target;
    cin>>target;
    vector<int>temp;
    combinationSum(arr,0,target,n,temp);

}