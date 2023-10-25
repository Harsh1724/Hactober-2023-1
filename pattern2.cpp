//           1 
//         2 2 2
//       3 3 3 3 3
//     4 4 4 4 4 4 4
//   5 5 5 5 5 5 5 5 5
// 6 6 6 6 6 6 6 6 6 6 6
#include<iostream>
using namespace std;

int main()
{
    int i,j,k,n;
    i=1;
    
    cin>>n;
    while(i<=n)
    {
        j=1;
        while(j<=n-i)
        {
        
            cout<<" "<<" ";
            j=j+1;
        }
        k=1;
        while(k<=i)
        {

            cout<<i<<" ";
            k=k+1;
        }
        int l=2;
        while(l<=i)
        {
            cout<<i<<" ";
            l=l+1;
        }
        
        
        cout<<endl;
        i=i+1;


    }
}
