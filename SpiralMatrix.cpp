// Spiral Matrix Pattern Print

#include<iostream>
using namespace std;
int main()
{
    int n,m;             //  n is for row and m is for column
    cin>>n>>m;
    int ar[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>ar[i][j];           // taken from user 
        }
    }

    int rowst=0,rownd=n-1;               // these are the four variables that i have mentioned in text
    int colst=0,colnd=m-1;            // rowst is for row start and initisalised to zero and will make changes
                                         //rownd is for row end and initialised to n-1 and will make changes
                                          //colst is for column start
                                       //colnd is for column end
    
    while(rowst<=rownd && colst<=colnd)
    {

        for(int a=colst;a<=colnd;a++)              
        {
            cout<<ar[rowst][a]<<" "<<endl;          //make row constant we change column and print 
        }
        rowst++;                                     // increased by one so that it will move to next 

        for(int b=rowst;b<=rownd;b++)
        {
            cout<<ar[b][colnd]<<" "<<endl;               // here we make column constant and change row and print
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
