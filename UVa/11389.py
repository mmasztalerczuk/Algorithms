while True:
    n, d, r = input().rstrip().split()
    n = int(n)
    d = int(d)
    r = int(r)
    if n == 0 and d == 0 and r == 0:
        break
    ans = 0
    day = [int(x) for x in input().rstrip().split()]
    night = [int(x) for x in input().rstrip().split()]
    day.sort()
    night.sort()
    for (a, b) in zip(day, night[::-1]):
        if a + b > d:
            ans += a + b - d
    print(ans*r)

