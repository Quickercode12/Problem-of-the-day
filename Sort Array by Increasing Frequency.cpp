#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;


vector<int>frequencySort(vector<int>nums){

    int n = nums.size();

    map<int,int>mp;
    for(auto i : nums){
        mp[i]++;
    }

    vector<pair<int,int>>ve;

    for(auto &it : mp){
        ve.push_back({it.first, it.second});
    }

    // new concept learn defined the inside fun
    sort(ve.begin(),ve.end(),[&](const pair<int,int>&a, const pair<int,int>&b){

            // special condition when a , b of freq same
            if(a.first == b.first){
                return a.first > b.first;
            }

        return a.second < b.second;
    });

    vector<int>result;
    for(int i = 0; i<ve.size(); i++){

        int ele = ve[i].first;
        int fre = ve[i].second;

        while(fre > 0){
            result.push_back(ele);
            fre--;
        }
    }

    return result;
}

int main(){

    int n ;
    cout<<"Enter the Size: ";
    cin>>n;

    vector<int>nums(n);

    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }

    vector<int>ans = frequencySort(nums);

    cout<<"Sort Array by Increasing Frequency:-"<<endl;
    for(auto i : ans){
        cout<<i<<" ";
    }

    return 0;
}