#include <iostream>

using namespace std;

int main() {
    int n, a[n], t, key,k;
    cout << "\n Enter test case : " << endl;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cout << "\n Enter size of array : "<<endl;
        cin >> n;
        cout << "\n Enter elements of array : "<<endl;
        for (int j = 0; j < n; j++)
        {
        cin>>a[j];
        }

    cout << "\n Enter the key element to be searched : "<<endl;
    cin >> key;
    int x=1;
    for( k=0;k<n;k++)
    {
        if(a[k]==key)
        {
        cout<<"present "<<k+1;
        break;

        }
        ++x;
    }
    if(k==n)
    cout<<"not present "<<k+1;

    }

}
