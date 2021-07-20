#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int m=4,n=4;
    int right=0,down=n-1,left=m-1,up=0,i,dir=0;
    while(right<=left && up<=down)
    {
        if(dir==0)
        {
            for(i=up;i<=down;i++)
                cout<<ar[right][i]<<" ";
            right++;
        }
        else if(dir==1)
        {
            for(i=right;i<=left;i++)
                cout<<ar[i][down]<<" ";
            down--;
        }
        else if(dir==3)
        {
            for(i=down;i>=up;i--)
                cout<<ar[left][i]<<" ";
            left--;
        }
        else if(dir==3)
        {
            for(i=left;i>=right;i--)
                cout<<ar[i][up]<<" ";
            up++;
        }
        dir=(dir+1)%4;
    }
    return 0;
}
