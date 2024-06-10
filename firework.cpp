#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, m;
        cin >> a >> b >> m;
        int ans = (m / a) + (m / b) + 2;
        cout << ans << '\n';
    }
    return 0;
}
