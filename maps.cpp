#include<iostream>
#include <map>
#include <ostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the arr[]"<<endl;
    cin>>n;
    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int ,int > mpp;
    for( int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }

    int q;
    cout<<"Enter how many query u want to make "<<endl;

    cin>>q;
    while(q--)
    {
        int number;
        cout<<"Enter the query number "<<endl;
        cin>>number;
        cout<<mpp[number]<<endl;

    }
}