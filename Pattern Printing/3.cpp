/*

Enter n : 5

5 
5 4 
5 4 3 
5 4 3 2 
5 4 3 2 1 

*/

#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter n : ";
    cin>>n;
    for(i=5;i>0;i--){
        for(j=5;j>=i;j--){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
