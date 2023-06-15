#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){

    for (int i = 1;i<n;i++){
        int temp = arr[i];
        int j ;
        for( j = i-1;j>=0;j--){
            if(arr[j]>temp){
                //shift 
                arr[j+1]=arr[j];
            }else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}

int main(){
 // logic --> card exapmle --> pick one card  and compare it with increasing order and compare it with all the cards 
 int n = 6;
 int arr[n]={6,5,4,3,2,1};
 insertionSort(arr,n);
 for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
 }
 return 0;
}
/*why? -->
-adeptable
-stable 

COMPLEXITY
T.C -> O(n^2) worst case 
    -> o(n) best case already sorted 


