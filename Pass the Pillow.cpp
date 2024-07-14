#include<iostream>
using namespace std;


int passThePillow(int n , int time){

    int chunk = time / (n - 1);

    return chunk % 2 == 0 ? (time % (n - 1) + 1) : (n - time % (n - 1));
}

int main(){

    int n,time;
w
    cout<<"Enter the total number of people standing in the line: ";
    cin>>n;

    cout<<"Enter value of the time who is people holding the pillow: ";
    cin>>time;

    int result = passThePillow(n, time);

    cout<<"Person time of the holding the Pillow: "<<result<<endl;
    return 0;
}