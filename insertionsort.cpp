#include<iostream>
using namespace std;
int main()
{
    int ar[10] = {3,1,12,34,11,31,99,2,23};
    int i,j,k;
    for(i=1;i<10;i++)
    {
        k = ar[i];
        j=i-1;
        while(j>=0&&ar[j]>k)
        {
            ar[j+1]=ar[j];
            j=j-1;
        }
        ar[j+1]=k;
    }
    for(i=0;i<10;i++)
    {
        cout<<ar[i]<<endl;
    }
}
