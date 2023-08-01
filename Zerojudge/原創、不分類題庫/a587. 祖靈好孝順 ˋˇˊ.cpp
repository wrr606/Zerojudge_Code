//a587. 祖靈好孝順 ˋˇˊ
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
typedef vector<vector<int> > vvi;
typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
typedef tree<int,null_type,less_equal<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int n,x;
    while(cin>>n){
        vi w(n+1),v(n+1);
        for(int i=1;i<=n;i++)
            cin>>w[i]>>v[i];
        cin>>x;
        vi dp(x+1);
        for(int i=1;i<=n;i++){
            for(int j=x;j>=w[i];j--){
                dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
            }
        }
        cout<<dp[x]<<endl;
    }
}