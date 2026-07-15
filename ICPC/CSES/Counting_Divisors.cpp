/*Counting Divisors

Given n integers, your task is to report for each integer the number of its divisors.
For example, if x=18, the correct answer is 6 because its divisors are 1,2,3,6,9,18.
Input
The first input line has an integer n: the number of integers.
After this, there are n lines, each containing an integer x.
Output
For each integer, print the number of its divisors.
Constraints

1 \le n \le 10^5
1 \le x \le 10^6

Example
Input:
3
16
17
18

Output:
5
2
6
*/

#include <cmath>
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--)
    {
        int x,c=0;
        cin>>x;
        for(int i=1;i*i<=x;i++)
        {
            if(x%i==0){ c++;
            if(x/i!=i) c++;}
        }
        
        cout<<c<<endl;
    }
    return 0;
}