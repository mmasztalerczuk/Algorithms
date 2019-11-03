n = input()
n = int(n)
for test in range(n):
    line = input().split(" ")
    x, y = line
    x = int(x)
    y = int(y)
    win = False
    b = (x-y)/2
    a = x-b
    if b >= 0 and int(a) == a and int(b) == b:
        print("%d %d" % (max(a,b), min(a,b)))
    else:
        print("impossible")