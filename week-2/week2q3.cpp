#include<iostream>
using namespace std;
int main()
{
    int t;
    cout<<"ENTER THE TEST CASES : ";
    cin>>t;
    for(int j=0;j<t;j++)
    {
    int n,key,flag=0;
    cout<<"\n Enter size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements :" ;
    for(int i=0;i<n;i++)
    {

        cin>>arr[i];
    }

    cout<<"\n Enter difference " ;
    cin>>key;
    for(int a=0;a<n;a++)
    {
        for(int b=0;b<n;b++)
            if(arr[a]-arr[b]==key)
                flag++;
    }
    cout<<flag;

    }


    return 0;
}

