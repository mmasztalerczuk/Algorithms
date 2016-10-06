tests = int(input().rstrip())

for test in range(tests):
    tmp = input()
    l = [int(x) for x in input().rstrip().split()]
    tmp = [0 for i in range(len(l))]
    ans = 0
    b = 0
    for i in range(0, len(l)-1):
        if b+l[i] < l[i+1]:
            ans += 1
            b += l[i]
    ans+=1
    print(ans)
