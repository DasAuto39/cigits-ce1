
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;

void asquare() {
    ll n;
    cin >> n;
    vector<string> arr[2];
    for (int i = 0; i < 2; i++) {
        string s;
        cin >> s;
        arr[i] = vector<string>(s.begin(), s.end());
    }
    string ans = arr[0][0];
    ll ways = 1;
    ll i = 0;
    ll j = 0;
    ll x = 1;
    while (j < n - 1) {
        if (i == 0) {
            if (arr[i][j + 1] == "1" && arr[i + 1][j] == "0") {
                ans += arr[i + 1][j];
                i++;
                ways = x;
                x = 1;
            } else if (arr[i][j + 1] == arr[i + 1][j]) {
                ans += arr[i][j + 1];
                j++;
                x++;
            } else {
                ans += arr[i][j + 1];
                j++;
                x = 1;
            }
        } else {
            ans += arr[i][j + 1];
            j++;
        }
    }
    if (i == 0) {
        ans += arr[1][n - 1];
        ways = x;
    }
    cout << ans << "\n";
    cout << ways << "\n";
}

// Main
int main() {
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++) {
        asquare();
    }
    return 0;
}




/*
#include<bits/stdc++.h>
using namespace std;



void asquare()
{
    int n;
    cin>>n;
    string arr[2][n];
    for(int i=0;i<2;i++){
        string s;
        cin>>s;
        for(int j=0;j<n;j++){
            string x="";
            x+=s[j];
            arr[i][j]=x;
        }
    }
    string ans=arr[0][0];
    int ways=1;
    int i=0;
    int j=0;
    int x=1;
    while(j<n-1){
        if(i==0){
            if(arr[i][j+1]=="1"&&arr[i+1][j]=="0"){
                ans+=arr[i+1][j];
                i++;
                ways=x;
                x=1;
            }
            else if(arr[i][j+1]==arr[i+1][j]){
                ans+=arr[i][j+1];
                j++;
                x++;
            }
            else{
                ans+=arr[i][j+1];
                j++;
                x=1;
            }
        }
        else{
            ans+=arr[i][j+1];
            j++;
        }
    }
    if(i==0){
        ans+=arr[1][n-1];
        ways=x;
    }
    cout<<ans<<"\n";
    cout<<ways<<"\n";
}
//Main
int main()
{
    int t;
    cin>>t;
    void(i,t)
    {
        asquare();
    }
    return 0;
}


*/