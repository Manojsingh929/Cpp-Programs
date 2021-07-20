#include<bits/stdc++.h>
using namespace std;
void binary_search(int ar[],int n,int key);
void binary_search(int ar[],int n, int key)
{
    int low = 0,high = n,mid;
    while(low<=high)
    {
    mid = floor(low+high)/2;
    if(ar[mid]<key)
    {
        low = mid+1;
        mid = floor((low+high)/2);
    }
    else if(ar[mid]>key)
    {
        high = mid-1;
        mid = floor((low+high)/2);
    }
    else if(ar[mid]==key)
    {
        cout<<"present "<<mid+1;
        break;
    }
    }
}
int main()
{
    int test_cases,num,element;
    cin>>test_cases;
    while(test_cases>0)
    {
        cin>>num;
        int arr[num];
        for(int i=0;i<num;i++)
            cin>>arr[i];
        cin>>element;
        binary_search(arr,num,element);
        test_cases--;
    }
}
