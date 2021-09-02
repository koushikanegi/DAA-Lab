#include<iostream>
using namespace std;
int main()
{
    int t;
    cout<<"ENTER THE TEST CASES : ";
    cin>>t;
    for(int j=0;j<t;j++)
    {


    int n,key,k=0;
    cout<<"\n Enter size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements :" ;
    for(int i=0;i<n;i++)
    {

        cin>>arr[i];
    }
    cout<<" \n Enter key :" ;
    cin>>key;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
            k++;
    }
    if(k>0)
        cout<<key<<"-"<<k;
    else
        cout<<"\n Key not present!";
    }


    return 0;
}
