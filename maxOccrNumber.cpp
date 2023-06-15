#include<iostream>
#include<bits/stdc++.h>
using namespace std;

char getMaxoccChar(string s){
int arr[26]={0};

for (int i =0;i<s.length();i++){
    char ch =s[i];
    //lower case 
    int number =0;
    number =ch-'a';
    arr[number]++;// here all the mapped number will increase as respect to their count  multiple times in string 
   }

   //find maximum acc character now this loop is iterating to find maximum count in array[26];(that is mapped with the string )
   int maxi = -1,ans = 0;
   for(int i = 0;i<26;i++){
   if(maxi<arr[i]){
    ans = i;
    maxi = arr[i];
   }
   }
   char finalAns = 'a'+ans;// now 'a' + number indicates the number and this changes from ascii value to char 
   return finalAns;
}

int main(){
    string s;
    cin>>s;//or can use cin.getline for multi string that include space
    int i= 0;
    int number = s[i]-s[i+1];
    cout<<getMaxoccChar(s)<<endl;
    return 0;
}