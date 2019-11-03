n = input()
for i in range(int(n)):
    p = input().split(" ")
    l = [int(o) for o in p]
    print("Case " + str(i+1) + ": " + str(max(l)))