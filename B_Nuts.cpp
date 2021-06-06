Question link : https://atcoder.jp/contests/ABC204/tasks/abc204_b

#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int sum = 0;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i<n; i++){
        if(arr[i]>10){
            sum = sum+(arr[i]-10);
        }
    }
    cout<<sum;
    return 0;
}
