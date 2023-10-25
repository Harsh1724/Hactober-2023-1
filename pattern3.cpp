//   1 2 3 4 5 6 7 
//     2 3 4 5 6 7
//       3 4 5 6 7
//         4 5 6 7
//           5 6 7
//             6 7
//               7 
#include<iostream>
using namespace std;

int main()
{
    int i,j,k,n;
    i=0;
    
    cin>>n;
    while(i<=n)
    {
        j=0;
        while(j<=i)
        {
        
            cout<<" "<<" ";
            j=j+1;
        }
        k=0;
        int start=0;
        while(k<=n-i)
        {

            cout<<start+i<<" ";
            start=start+1;
            k=k+1;
        }
        
        
        cout<<endl;
        i=i+1;


    }
}
