#include<iostream>
using namespace std;

int hashing(int num,int size, int arr[])
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==num)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int t,num;
    int arr[100];
    cout<<"Enter the size of the array :"<<endl;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cout<<"Enter the "<<i+1<<" number :"<<endl;
        cin>>arr[i];
    }

    while (1) {

        cout<<"Enter the number which u want to check ('123' if u want to exit):"<<endl;
        cin>>num;
        if(num==123)
        {
            break;
        }
        cout<<num << " Is repeted for "<< hashing(num, t, arr)<<" times in a array "<<endl;
    }
    
    int hash[13]={0};
    for(int i=0;i<t;i++){
        hash[arr[i]] +=1;
    }

    int q;
    cout<<"Enter how many queryes u want to make "<<endl;
    cin>>q;
    while (q--)
    {
        int number;
        cout<<"Enter the number which you want to check "<<endl;
        cin>>number;
        cout<<hash[number]<<endl;
    } 
}