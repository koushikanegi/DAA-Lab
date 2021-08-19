#include <bits/stdc++.h>
#include<iostream>
using namespace std;


int binarysearch(int arr[],int left,int right,int key)
{
    while(left<=right)
    {
        int mid=left+(right-left)/2;

        if(arr[mid]==key)
            return mid;
        else if(arr[mid]<key)
            left=mid+1;
        else
            right=mid-1;
    }
    return -1;
}

int main() {
	// your code goes here
	int t,n,key ;
	cout<<"ENTER TEST CASE : ";
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cout<<"\n Enter size";
	    cin>>n;
	    int arr[n];
	    cout<<"\n Enter  sorted array elements ";
	    for(int j=0;j<n;j++)
	    {
	        cin>>arr[j];
	    }
	    cout<<"\n Enter key to be searched : ";
	    cin>>key;

	    int result=binarysearch(arr,0,n,key);
	    (result==-1)?cout<<"ELEMENT NOT PRESENT":cout<<"ELEMENT PRESENT AT "<<result;
	}

	return 0;
}
