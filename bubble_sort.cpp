#include<iostream>
using namespace std;

void bubble_sort(int a[],int n)
{
    for(int i=n-1;i>0;i--)
    {
        int didswap=0;
        for(int j=0;j<i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
                didswap=1;
            }    
        }
        if(didswap==0)
        {
            break;
        }
    }
}
int main()
{
    int a[100],n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the "<<i+1<< "number"<<endl;
        cin>>a[i];
    }
    bubble_sort(a, n);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;

}