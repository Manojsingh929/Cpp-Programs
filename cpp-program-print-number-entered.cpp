#include<iostream>
#include<string>
using namespace std;
int main()
{
    char s[10] = {'a','m','m','o','o','o','n','o'};
    int h = 0,x=0;
    for(int i=0;i<8;i++)
    {
        x=1;
        x=x<<(s[i]-97);
        if(x&h>0)
        {
            cout<<s[i]<<" is duplicate here\n";
        }
        else
        {
            h = x|h;
        }
    }
}

