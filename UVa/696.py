while True:
    n = input().split(" ")
    a, b = n
    a = int(a)
    b = int(b)
    if a == 0 and b == 0:
        break
    if min(a,b) == 1:
        ans = max(a,b)
    elif min(a,b) == 2:
        r = max(a,b)
        ans = ((r)//4)*4
        p = (r)%4
        if p == 1:
            ans +=2
        if p == 2 or p == 3:
            ans +=4
    else:
        ans = ((a*b)+1)//2
    print("%d knights may be placed on a %d row %d column board." % (ans, a, b))