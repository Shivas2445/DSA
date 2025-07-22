#include<iostream>
using namespace std;

void selection(int arr[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        int min_idx = i;
        for(int j = i + 1; j < size; j++)
        {
            if(arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        // Swap arr[i] and arr[min_idx]
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

int main(){
    int arr[100], n;

    cout << "Enter the size of the arr" << endl;
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Enter the " << i + 1 << " number" << endl;
        cin >> arr[i];
    }
    selection(arr, n);
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}