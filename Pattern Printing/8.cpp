/*

Enter n : 10
         *
        **
       ***
      ****
     *****
    ******
   *******
  ********
 *********
**********

*/

#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter n : ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if((i+j)<n+1)
            {
                cout<<" ";
            }
            else
               cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
