//WEEK 3 QUESTION 1
//INSERTION SORT
#include<stdio.h>
#include<iostream>
using namespace std;
void insertionsort(int *arr,int n)
{
    int j,temp ,comp=0,shifts=0;
    for(int i=1;i<n;i++)
    {
        temp=arr[i];

        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            shifts++;
            j=j-1;
            comp++;
        }
        arr[j+1]=temp;
        shifts++;



    }
     cout<<"Comparison : "<<comp<<endl; //number of comparison
     cout<<"Shifts : "<<shifts<<endl; // number of shifts



}
int main()
{
    int t; //test cases
    cout<<" ENTER NUMBER OF TEST CASES : ";
    cin>>t;
    for(int k=0;k<t;k++)
    {

    int n;      //number of elements
    cout<<"\n Enter array size : ";
    cin>>n;

    int arr[n];
    cout<<"\n Enter elements of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    insertionsort(arr ,n); //calling of function

    cout<<"SORTED ARRAY  : ";       //displaying sorted array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    }
}
