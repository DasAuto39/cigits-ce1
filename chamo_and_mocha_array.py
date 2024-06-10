def max_possible_value(t, test_cases):
    results = []
    for case in test_cases:
        n, a = case
        a.sort()
        median_pos = (n - 1) // 2
        results.append(a[median_pos])
    return results

# Reading input interactively
t = int(input())
test_cases = []

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    test_cases.append((n, a))

# Processing the test cases
results = max_possible_value(t, test_cases)

# Printing the results
for result in results:
    print(result)
