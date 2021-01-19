// Spiral Matrix Pattern Print

#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int ar[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>ar[i][j];
        }
    }

    int rowst=0,rownd=n-1;
    int colst=0,colnd=m-1;

    while(rowst<=rownd && colst<=colnd)
    {

        for(int a=colst;a<=colnd;a++)
        {
            cout<<ar[rowst][a]<<" "<<endl;
        }
        rowst++;

        for(int b=rowst;b<=rownd;b++)
        {
            cout<<ar[b][colnd]<<" "<<endl;
        }
        colnd--;

        for(int c=colnd;c>=colst;c--)
        {
            cout<<ar[rownd][c]<<" "<<endl;
        }
        rownd--;

        for(int d=rownd;d>=rowst;d--)
        {
            cout<<ar[d][colst]<<" "<<endl;
        }
        colst++;
    }

    return 0;
}