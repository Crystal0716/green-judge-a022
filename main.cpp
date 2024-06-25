#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int x=0;
    while(n<m)
    {
         n=n*3  ;
         x=x+1;
    }
    cout <<x<<endl;
    return 0;
}
