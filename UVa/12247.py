while True:
    n = input().split(" ")
    a,b,c,x,y = n
    a = int(a)
    b = int(b)
    x = int(x)
    y = int(y)
    c = int(c)
    ans = [a,b,x,y,c]
    if a == 0 and b == 0 and c ==0 and x == 0 and y ==0:
        break
    p = [x,y]
    p.sort()
    p = p[::-1]
    l = [a,b,c]
    l.sort()
    fail = 0

    for i in l:
        if i > p[0]:
            fail += 1
            break
    if fail == 1:
        l.remove(i)
    else:
        l = l[1:]
    fail_2 = 0
    for i in l:
        if i > p[1]:
            fail_2 += 1
            break
    if fail_2 == 1:
        l.remove(i)
    else:
        l = l[1:]
    if fail_2 == 1 and fail == 1 :
        print("-1")
    elif fail_2 == 0 and fail == 0:
        k = 1
        while True:
            if k > 52:
                k = -1
                break
            if k in ans:
                k += 1
            else:
                break
        print(k)
            
    else:
        k = l[0]+1
        while True:
            if k > 52:
                k = -1
                break
            if k in ans:
                k += 1
            else:
                break
        print(k)
            
