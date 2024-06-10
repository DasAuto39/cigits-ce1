def solve_test_case(n, a):
    a.sort()  # Sort the array in non-decreasing order
    median_index = n // 2
    return a[median_index]

t = int(input())  # Number of test cases
for _ in range(t):
    n = int(input())  # Length of the array
    a = list(map(int, input().split()))  # Elements of the array
    result = solve_test_case(n, a)
    print(result)
