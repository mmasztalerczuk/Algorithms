import sys
asn = 0
while True:
    asn += 1
    r, p = input().split(" ")
    r = int(r)
    if r == 0:
        break
    if asn > 1:
        print()
    p = int(p)
    req = []
    for i in range(r):
        req.append(input())
    offers = []
    for i in range(p):
        name = input()
        a, b = input().split(" ")
        a = float(a)
        b = int(b)
        tmp = []
        for j in range(b):
            tmp.append(input())
        offers.append((name, a, tmp))
    current = 0
    budget = sys.maxsize
    name = None
    for p in offers:
        c = len(p[2])
        final_c = c / len(req)
        if final_c > current:
            current = final_c
            budget = p[1]
            name = p[0]
        elif final_c == current and budget > p[1]:
            current = final_c
            budget = p[1]
            name = p[0]
    print("RFP #" + str(asn))
    print(name)