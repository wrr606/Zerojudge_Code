#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define endl '\n'
#define all(x) x.begin(),x.end() 
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vector<int> > vvi;
typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
typedef tree<int,null_type,less_equal<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int dp[35][4]={},n;
	dp[1][0]=1,dp[1][1]=1;
	for(int i=2;i<=30;i++){
		dp[i][0]=dp[i-1][0]+dp[i-1][1]+dp[i-1][2];
		dp[i][1]=dp[i-1][0];
		dp[i][2]=dp[i-1][1];
		dp[i][3]=dp[i-1][2]+(dp[i-1][3]<<1);
	}
	while(cin>>n&&n){
		cout<<dp[n][3]<<endl;
	}
}