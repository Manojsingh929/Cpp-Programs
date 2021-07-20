#include<iostream>
#include<stdlib.h>
#include<vector>
#include<iterator>
using namespace std;
vector<int> fibo(int a);
int main()
{
    vector<int> a;
    int num;
    cin>>num;
    a=fibo(num);
    vector<int>::iterator i=a.begin();
    for(;i!=a.end();i++)
    {
        cout<<"\n"<<*i;
    }
}
vector<int> fibo(int n)
{
    vector<int> ar;
    ar.push_back(0);
    ar.push_back(1);
    for(int i=2;i<n;i++)
    {
        ar.push_back(ar[i-1] + ar[i-2]);
    }
    return ar;
}

