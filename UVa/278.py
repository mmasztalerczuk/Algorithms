n = input()
n = int(n)
for i in range(n):
    l = input().split(" ")
    if l[0] == 'r':
        a = int(l[1])
        b = int(l[2])
        print(min(a,b))
    if l[0] == 'k':
        a = int(l[1])
        b = int(l[2])
        print((a*b+1)//2)
    if l[0] == 'Q':
        a = int(l[1])
        b = int(l[2])
        p = min(a,b)
        if p == 2 or p == 3:
            p -= 1
        print(p)
    if l[0] == 'K':
        a = (int(l[1])+1)//2
        b = (int(l[2])+1)//2
        print(a*b)