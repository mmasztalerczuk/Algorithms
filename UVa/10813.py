n = input()
n = int(n)

def validate(d):
    for j in range(5):
        c = 0
        q = 0
        z = 0
        s = 0
        for i in range(5):
            if d[j][i] == -1:
                c += 1
            if d[i][j] == -1:
                q += 1
            if d[i][i] == -1:
                z += 1
            if d[4-i][i] == -1:
                s += 1
        if c == 5 or q == 5 or z == 5 or s ==5:
            return True

    return False
for test in range(n):
    d = {}
    for j in range(5):
        l = input().split(" ")
        for i in range(len(l)):
            if j not in d:
                d[j] = {}
            if j == 2:
                if i > 1:
                    d[j][2] = -1
                    d[j][i+1] = int(l[i])
                else:
                    d[j][i] = int(l[i])
            else:
                d[j][i] = int(l[i])

    p = []
    while len(p) < 75:
        l = input().split(" ")
        for i in l:
            p.append(int(i))
    count = 0
    ans = 0
    for i in p:
        ans += 1
        for j in range(5):
            for r in range(5):
                if d[j][r] == i:
                    d[j][r] = -1
            
        if validate(d):
            break
    print("BINGO after %s numbers announced" % ans)