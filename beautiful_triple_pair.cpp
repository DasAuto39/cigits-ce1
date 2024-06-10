#include<bits/stdc++.h>
using namespace std;

#define ll long long

using l=int64_t;

int main(){
    l n;
    cin>>n;
    while(n--)
    {
        l t;
        cin>>t;
        l a,b,c,qq{};
        cin>>b>>c;
        map<tuple<l,l,l>,l> hh;
        while(t---2)
        {
            a=b;
            b=c;
            cin>>c;
            qq+=++hh[{a,b,0}]+ ++hh[{a,0,c}]+ ++hh[{0,b,c}]- ++hh[{a,b,c}]*3;
        }
        cout<<qq<<endl;
    }
}
