#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
         int a  = 10;
         int *c = &a;
         *c = *c+1;
         cout<<a <<" "<<*c<<endl; 

    return 0;
}