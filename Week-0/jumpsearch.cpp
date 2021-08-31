 #include<iostream>
 #include<math.h>
 using namespace std;
 int jumpsearch(int arr[],int n,int key)
 {

     int jump = sqrt(n);
     int steps=jump;
     int prev=0;
     while (arr[min(steps,n)-1]<key)
     {

         prev =steps;
         steps+=jump;
         if(prev>=n)
         {

             return -1;
         }
     }

     while (arr[prev]<key)
     {

         prev+=1;
         if(prev==min(steps,n))
         {
             return -1;
         }
     }

     if(arr[prev==key])
        return prev;

     return -1;
 }
 int main()
 {
     int t; // test cases
     cout<<"\n Enter number of test cases " ;
     cin>>t;
     for(int j=0;j<t;j++)
     {
     int n,key;
     cout<<" \n Enter size of array : ";
     cin>>n;
     int arr[n];
     cout<<"\n Enter elements : ";
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     cout<<"\n Enter key element to find : ";
     cin>>key;
     int result = jumpsearch(arr,n,key);
     (result==-1)?cout<<"\n ELEMENT NOT PRESENT !":cout<<" \n ELEMENT PRESENT AT "<<result+1;
 }
 }
