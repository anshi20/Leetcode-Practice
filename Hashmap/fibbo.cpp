#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define tep(i,a,b) for(int i=a;i<=b;i++)
const int N = 1e2+3;

int main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;
	vi dp(n+1);
	
	dp[0]=0;
	dp[1]=0;
	dp[2]=1;
	tep(3,0,n)
	   dp[i]=dp[i-1]+dp[i-2];
	cout<<n<<"th fibonacci number is : "<<dp[n];
}
