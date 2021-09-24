//WEEK 3 QUESTION 3
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void duplicateElements(int arr[],int n){
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int main()
{
    int t;
    cout<<"ENTER TEST CASES : ";
    cin>>t;
    for(int k=0;k<t;k++)
    {
    int n;
    cout<<"\nENTER SIZE OF ARRAY : ";
    cin>>n;
    int arr[n];
    cout<<"\nENTER ELEMENTS  : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   duplicateElements(arr,n);
    }
}
