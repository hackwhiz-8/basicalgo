#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void moveZero(int arr[],int s,int e){
    int count = 0;
  for(int i = 0;i<=e;i++){
    if(arr[i]==0){
            for(int j = i+1;j<=e;j++){
               if(arr[j]!=0){
               // int temp = arr[i];
               // arr[i]=arr[j];
               // arr[j]=temp;
               swap(arr[i],arr[j]);
    }
    }
    }
  }
}

int main(){
     int arr[]={1,0,3,0,8,9,0,0,1,5};
     int n=10;
     moveZero(arr,0,n-1);
     
     for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
     }cout<<endl;
    return 0;
}