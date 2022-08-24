#include <bits/stdc++.h>
using namespace std;
#define fo(i, s, e) for (int i = s; i < e; i++)
typedef long long ll;
#define ff first
#define ss second
#define in insert
#define all(x) x.begin(), x.end()
#define pb push_back
using vi = vector<int>;
using vvi = vector<vector<int>>;

int mod = 998244353;

void solve()
{
    string s , t ;
    cin>>s>>t ;
    vector<int>pi(t.size(),0) ;
    for(int i=1;i<t.size();i++){
        int j = pi[i-1];

        while(j>0 && t[i]!=t[j]){
            j = pi[j-1] ;
        }

        if(s[i]==s[j]){
            j++ ;
        }

        pi[i] = j ;
    }



    int i=0,j=0 ;
    while(i<s.size()){
        if(s[i]==t[j]){

            // cout<<"matched "<<i<<" and "<<j<<"\n";
            i++ ,j++ ;
        }
        else{
            // cout<<"not matched "<<i<<" and "<<j<<"\n";
            while(j>0 && s[i]!=t[j]){
                j = pi[j-1] ;
            }

            if(s[i]==t[j]){
                i++,j++ ;
            }
            else{
                i++ ;
            }

            // cout<<"i n j after "<<i<<" "<<j<<"\n\n" ;
        }

        if(j==t.size()){
            cout<<i-j<<" is valid ind\n" ;
            j=0;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt = 1;
    // cin >> tt;
    while (tt--)
    {
        solve();
    }

    return 0;
}
