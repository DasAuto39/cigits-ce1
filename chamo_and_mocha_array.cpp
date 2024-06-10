#include<bits/stdc++.h>
using namespace std;

void sort() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    vector<int> answers;
    for(int i=0;i<n-1;i++)
    {
        answers.push_back(min(a[i], a[i+1]));
    }
    for(int i=0;i<n-2;i++)
    {
        answers.push_back(min(a[i], a[i+2]));
    }
    cout << *max_element(answers.begin(), answers.end()) << endl;
}

int main () {
    int t;
    cin >> t;
    while(t-- > 0)
    {
        sort();
    }

}
