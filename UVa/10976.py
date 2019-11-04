from sys import stdin
for line in stdin:
    n = int(line)

    l = []
    ans = 0
    for j in range(n+1, n*2+1):
        a = j*n/(j-n)
        if a == int(a):
            l.append("1/%d = 1/%d + 1/%d" % (n, int(a), j))
            ans += 1
    print(ans)
    for abc in l:
        print(abc)