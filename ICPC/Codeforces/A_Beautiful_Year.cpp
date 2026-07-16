#include<iostream>
using namespace std;
bool checkdiff(int n)
{
    int a=n%10;
    while(n!=0)
    {
        a^=(n%10);
        n/=10;
    }
    if(a==0) return false;
    return true;
}
int main()
{
    int n;
    cin>>n;
    n+=1;
    while(!checkdiff(n))
    {
        n++;
    }
    cout<<n;
}