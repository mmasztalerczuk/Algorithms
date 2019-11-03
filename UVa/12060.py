def computeGCD(x, y):
    gcd = 1

    if x > y: 
        small = y 
    else: 
        small = x 
    for i in range(1, small+1): 
        if((x % i == 0) and (y % i == 0)): 
            gcd = i 
              
    return gcd 

case = 1
while True:
    n = input().split()
    l = int(n[0])
    if l == 0:
        break
    print("Case %s:" % case)
    case += 1
    v = [int(a) for a in n[1:]]
    s = sum(v)
    a = int(s/l)
    string = ""
    if s < 0:
        string += "- "
        a *= -1
        s *= -1
    p = s%l

    if p != 0:
        if a != 0:
            string += str(a)
        c = computeGCD(p, l)
        p = p//c
        n = l//c

        p_len = len(str(p))
        n_len = len(str(n))
        r = "%" + str(len(string) + max(p_len, n_len)) +"s"
        string += "-" * max(p_len, n_len)
        print(r % p)
        print(string)
        print(r % n)
    else:
        string += str(a)
        print(string)
    