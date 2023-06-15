#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void mergeArr(int arr[],int n,int arr1[],int m,int ans[]){
    int index1=0,index2 =0;
    int k = 0;
    while(index1<n && index2<m){
        if(arr[index1]<arr1[index2]){
            ans[k] = arr[index1];
            k++;
            index1++;
        }else if(arr[index1]>arr1[index2]){ 
            ans[k]=arr1[index2];
            index2++;
            k++;
        }
    }
    while(index1<n){
        ans[k] = arr[index1];
        index1++;
        k++;
    }
    while(index2<m){
        ans[k] = arr1[index2];
        index2++;
        k++;
    }
}
int  print(int ans[]){
    for(int i = 0;i<9;i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
}

int main(){
   int arr[5] = {1,3,5,7,9};
     int arr1[4]={2,4,6,8};
  int ans[9];
    mergeArr(arr,5,arr1,4,ans);
    print(ans);
    return 0;
}