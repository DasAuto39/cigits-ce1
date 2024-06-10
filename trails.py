MOD = 10**9 + 7

def solve(m, n, short_trails, long_trails):
    # Initialize dp array
    dp = [[0] * (n + 1) for _ in range(m + 1)]
    dp[1][0] = 1  # Base case: starting from cabin 1 on day 0

    # Dynamic programming transitions
    for j in range(1, n + 1):
        for i in range(1, m + 1):
            # Short trail transitions
            for k in range(1, m + 1):
                dp[i][j] += dp[k][j - 1]
                dp[i][j] %= MOD

            # Long trail transition (must end up in cabin 1)
            dp[i][j] += dp[1][j - 1]
            dp[i][j] %= MOD

    # Compute the answer as the sum of dp[i][n] for all i
    ans = sum(dp[i][n] for i in range(1, m + 1)) % MOD
    return ans

# Example input (replace with actual values)
m, n = 3, 2
short_trails = [1, 0, 1]
long_trails = [0, 1, 1]

# Solve and print the answer
print(solve(m, n, short_trails, long_trails))
