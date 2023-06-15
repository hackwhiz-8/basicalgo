#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int key){
    
    int s = 0;
    int e = n-1;
    int mid = s  + (e-s)/2;

    while(s<=e){
        cout<<arr[mid]<<endl;
        if(arr[mid]==key){
            return mid;
        }

        if(arr[mid]>key){
            e= mid-1;

        }else if(arr[mid]<key){
            s = mid+1;
        }
        mid = (s+e)/2;
    }
    return -1;
}

int main(){
    int arr[10] = {1,2,2,2,3,4,5,5};
     int key = 5;
   cout<< binarySearch(arr,8,key);

    return 0;
}