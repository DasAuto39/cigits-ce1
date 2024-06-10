#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int m, n;
    cin >> m >> n;

    vector<int> s(m + 1), l(m + 1);
    for (int i = 1; i <= m; ++i) {
        cin >> s[i];
    }
    for (int i = 1; i <= m; ++i) {
        cin >> l[i];
    }

    vector<vector<long long>> dp(n + 1, vector<long long>(m + 1, 0));
    dp[0][1] = 1;  // Starting at cabin 1

    for (int day = 1; day <= n; ++day) {
        for (int i = 1; i <= m; ++i) {
            if (dp[day - 1][i] > 0) {
                for (int j = 1; j <= m; ++j) {
                    if (s[i] > 0 && s[j] > 0) {
                        dp[day][j] = (dp[day][j] + dp[day - 1][i] * s[i] * s[j]) % MOD;
                    }
                    if (s[i] > 0 && l[j] > 0) {
                        dp[day][j] = (dp[day][j] + dp[day - 1][i] * s[i] * l[j]) % MOD;
                    }
                    if (l[i] > 0 && s[j] > 0) {
                        dp[day][j] = (dp[day][j] + dp[day - 1][i] * l[i] * s[j]) % MOD;
                    }
                }
            }
        }
    }

    long long result = 0;
    for (int i = 1; i <= m; ++i) {
        result = (result + dp[n][i]) % MOD;
    }

    cout << result << endl;
    return 0;
}
