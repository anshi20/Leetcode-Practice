/*

Enter n : 5

1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 


*/

#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter n : ";
    cin>>n;
    cout<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<j+1<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
