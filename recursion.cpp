#include<iostream>

using namespace std;

// void f()
// {
//     cout<<"1"<<endl;
//     f();
// }
//printing a name N times using recuresion

void f2(int i, int n){
    if(i>n)
    {
        return ;
    }
    else{
        //printf("Raj\n");
        cout<<"Shiva"<<endl;
        f2(i+1,n);
    }
    
}
//sum of first n number
int add(int i,int sum)
{
    if(i<1)
    {
        cout<<sum <<endl;
    }
    else {
        add(i-1,sum+i);
    }
    return 0;
}

int main()
{
    //f();
    int n;
    cin>>n;
    f2(1,n);
    add(n,0);
}