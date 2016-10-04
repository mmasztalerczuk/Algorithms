tests = int(input().rstrip())
for test in range(tests):
    farmers = int(input().rstrip())
    ans = 0
    for farmer in range(farmers):
        a, b, c = input().rstrip().split()
        ans += int(a) * int(c)
    print(ans)
