#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;



vector<int> helper(vector<int>&numsOne,vector<int>&numsTwo){

    int n = numsOne.size();

    vector<int>ans;

    for(int i : numsOne){

        auto it = find(numsTwo.begin(),numsTwo.end(),i);

        if(it != numsTwo.end()){

            ans.push_back(i);
            numsTwo.erase(it);

        }
    }

    return ans;
}

int main(){

    int n;
    cout<<"Enter the Size Array-1 :";
    cin>>n;

    int m;
    cout<<"Enter the Size Array-2 :";
    cin>>m;

    vector<int>arrOne(n);
    vector<int>arrTwo(m);


    cout<<"Enter ELement of the Array-1 :"<<endl;
    for(int i = 0; i<n; i++){
        cin>>arrOne[i];
    }

    cout<<"Enter ELement of the Array-2 :"<<endl;
    for(int i = 0; i<m; i++){
        cin>>arrTwo[i];
    }



    vector<int>interSection = helper(arrOne, arrTwo);

    cout<<"InterSection Of the Two Array :-"<<endl;
    for(int i : interSection){
        cout<<i<<" ";
    }


    return  0;
}