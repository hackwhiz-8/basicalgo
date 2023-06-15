#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 8;
    int arr[n] = {1, 3, 2, 5, 6, 8, 2, 8};

    int sum = 0;
    for (int i = 0; i < 8; i++)
    {
        sum += arr[i];
    }

    int mid = sum / n;
    int min = -1;
     int max = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mid > arr[j])
                min = arr[j];
            if (mid < arr[j])
                max = arr[j];
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= mid && arr[i] > min)
        {
            ans = arr[i];
        }
        else if (arr[i] >= mid && arr[i] <max)
        {
            ans = arr[i];
        }
    }
    cout << ans << endl;
    cout<<mid<<" "<<" sum "<<sum<<endl;
    cout<<" max "<<max<<" min"<<min<<endl;

    return 0;
}