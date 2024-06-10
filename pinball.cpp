#include <iostream>
#include <string>
using namespace std;
void solve(){
    int n;
    string s;
    cin>>n>>s;
    long long t=0;
    for(long long l=-1,r=-1,m=0;m<n;m++)
    {
        if(r<n){
            for(r=r+1;r<n&&s[r]=='>';r++);
            t+=r+1-m;
            if(r!=n)
                t+=r-m;
        }
        if(r==n){
            t-=m-l;
            if(l!=-1)
                t-=m-l-1;
            for(l=l+1;l<m&&s[l]=='<';l++);
        }
    cout<<t<<' ';
    }
cout<<endl;
}
int main() {
    cin.tie(0) -> sync_with_stdio(false);
    int t;  cin>>t;
    while (t--) 
    solve();
    return 0;
}
