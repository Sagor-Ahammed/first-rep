#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int x,int lb,int ub)
{
    if(lb<=ub)
    {
        int mid=(lb+ub)/2;
        if(x==arr[mid])
            return mid;
        else if (x>arr[mid])
            binarySearch(arr,x,mid+1,ub);
        else
            binarySearch(arr,x,lb,mid-1);
    }
    else
        return -1;
}
int main ()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int checkValue;
    cout<<"Please Enter the value You want to search : ";
    cin>>checkValue;

    int indexNumber;
    indexNumber=binarySearch(arr,checkValue,0,size-1);
    if(indexNumber !=-1)
    {
        cout<<"Index : "<<indexNumber<<" Position : "<<indexNumber+1<<endl;
    }
    else{
        cout<<"NOT FOUND ";
    }

    return 0;
}
