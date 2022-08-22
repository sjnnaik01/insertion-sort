#include<iostream>
using namespace std;
int insertion_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1]=temp;
    }
}
int main()
{
    int arr[5];
    cout<<"enter the numbers = ";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"unsorted array =";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;

    insertion_sort(arr,5);
    cout<<"sorted array =";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
