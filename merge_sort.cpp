#include <iostream>

using namespace std;

void merge(int a[],int left,int mid, int right )
{
    int n1=mid-left+1;
    int n2=right-mid;

    int l[n1],r[n2];
    for(int i=0;i<n1;i++)
    {
        l[i]=a[left+i];
    }
    for(int j=0;j<n2;j++)
    {
        r[j]=a[mid+1+j];
    }
    int i=0,j=0,k=left;
    while(i<n1 && j<n2 )
    {
        if(l[i]<=r[j])
        {
            a[k]=l[i];
            k++;
            i++;
        }
        else{
            a[k]=r[j];
            k++;
            j++;
        }

    }
    while(i<n1)
    {
        a[k++]=l[i++];
    }
    while(j<n2)
    {
        a[k++]=r[j++];
    }
}
void merge_sort(int a[],int left,int right)
{
    if(left<right)
    {
        int mid=left+(right-left)/2;

        merge_sort(a, left, mid);
        merge_sort(a,mid+1,right);

        merge(a,left,mid,right);
    }
}
int main()
{
    int a[100],n;
    cout<<"Enter the size of the array "<<endl;
    cin>>n;
    cout<<"Enter the elements in to the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<i+1 <<"->";
        cin>>a[i];
    }
    merge_sort(a,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
    return 0;
}

