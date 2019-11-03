co = 1
while True:
    n = input().split(" ")
    a, b = n
    a = int(a)
    b = int(b)
    if a == 0 and b == 0:
        break
    if co > 1:
        print()
    d = {}
    for i in range(a):
        for j in range(b):
            if i not in d:
                d[i] = {}
            d[i][j] = 0
    for i in range(a):
        l = input()
        k = 0
        for c in l:
            if c == '*':
                for x in range(-1,2):
                    for y in range(-1,2):
                        try:
                            if d[i+x][k+y] != '*':
                                d[i+x][k+y] += 1
                        except:
                            pass
                d[i][k] = '*'
            k += 1
    print("Field #%s:" % co)
    for i in range(a):
        for j in range(b):
            print(d[i][j], end="")
        print()
    co += 1
