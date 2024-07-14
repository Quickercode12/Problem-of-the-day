#include<iostream>
#include<vector>
using namespace std;



bool Consecutive(vector<int>&nums){

    int n = nums.size();

    int consecutiveThree = 0;

    for(int i : nums){

        if(i % 2 != 0){
            consecutiveThree++;
        }

        else{
            consecutiveThree = 0;
        }
    }

    if(consecutiveThree == 3){
        return true;
    }

    return false;
}


int main(){

    int n;
    cout<<"Enter the Array Size: ";
    cin>>n;

    vector<int>arr(n);

    cout<<"Enter the Array Value :"<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    bool result = Consecutive(arr);

    if(result == true){
        cout<<"Consecutive Three Odd Numbers are Present in the Array"<<endl;
    }

    else{
        cout<<"Consecutive Three Odd Numbers are not Present in the Array"<<endl;
    }

    return 0;
}