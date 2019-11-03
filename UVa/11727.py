n = input()
for i in range(int(n)):
    s = input().split(" ")
    a, b, c = s
    max_v = max(max(a,b),c)
    min_v = min(min(a,b),c)
    s.remove(max_v)
    s.remove(min_v)
    print("Case " + str(i+1) +": " + str(s[0]))
