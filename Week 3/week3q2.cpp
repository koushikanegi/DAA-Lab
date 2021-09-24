
//WEEK 3 QUESTION 2
#include<stdio.h>
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void selectionsort(int arr[], int n)
{

    int i,j,min_idx,comp=0,shift=0;
    for(i=0;i<n;i++)
    {

        min_idx=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_idx])
                min_idx = j;
                comp++;
        }
        swap(arr[min_idx],arr[i]);
        shift++;
        }
    cout<<"Comparisons = "<<comp<<endl;
    cout<<"Shifts = "<<shift<<endl;
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
    selectionsort(arr,n);
    cout<<"\n SORTED ARRAY : ";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<"\t";
        }
    }
}
