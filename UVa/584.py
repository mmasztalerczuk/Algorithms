while True:
    n = input().split(" ")
    if len(n) == 2:
        break
    p = []
    bonus = 0
    pines = 10
    throw = 1
    ans = 0
    round = 1
    for c in n:
        if c == 'X':
            throw = 1
            pines = 10
            if round >= 10:
                p.append([10,0])
            else:
                p.append([10,2])
            round += 1
        elif c == '/':
            throw = 1
            if round >= 10:
                p.append([pines,0])
            else:
                p.append([pines,1])
            pines = 10
            round += 1
        else:
            throw += 1
            c = int(c)
            pines -= c
            p.append([c,0])
            if throw == 3:
                pines = 10
                throw = 1
                round += 1
    p = p[::-1]
    bonus = 0

    for i, val in enumerate(p):
        try:
            if val[1] >= 1 and i > 0:
                bonus += p[i-1][0]
            if val[1] == 2 and i > 1:
                bonus += p[i-2][0]
        except:
            pass
    kk = 0
    for a in p:
        kk += a[0]
    print(bonus+ kk)