#include<iostream>
using namespace std;
int insertion_sort(int arr[],int n)
{
    for(int i=1;i<n;i++)//round start from 1 elementas first is orted
    {
        int temp=arr[i];//store the value of i
        int j=i-1;//if a element shifts right to left i.e.,i-1
        for(;j>=0;j--)
        {
            if(arr[j]>temp)//comapring j value is greater then of stored value
            {
                arr[j+1]=arr[j];//greater then increment become to initial
            }
            else
            {
                break;//last element not compared if sorted
            }
        }
        arr[j+1]=temp;//step back to store the value
    }
}
int main()
{
    int inrts[]={7,8,4,5,3};
    int n=sizeof(inrts)/sizeof(inrts[0]);
    insertion_sort(inrts,n);
    cout<<"the sorted array is:";
    for(int i=0;i<n;i++)
    {
        cout<<inrts[i]<<" ";
    }
}
