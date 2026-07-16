#include<iostream>
using namespace std;
int main()
{
    int n,sec;
    cin>>n>>sec;
    string s;
    cin>>s;
    while(sec--)
    {
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                s[i]='G';
                s[i+1]='B';
                i++;
            }
        }
    }
    cout<<s<<endl;

}