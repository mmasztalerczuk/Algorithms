while True:
    x, y = input().split()
    x = int(x)
    y = int(y)
    if x == 0 and y == 0:
        break
    data = {}
    for i in range(x):
        for j in range(y):
            if not i in data:
                data[i] = {}
            data[i][j] = 0
    l = []
    for i in range(x):
        l.append(input())

    start_x, start_y = 0, x-1
    pos_x, pos_y = 0,x-1
    d = "right"
    while True:
        if d == "right":
            tmp = pos_y + 1
            if tmp < x and l[tmp][pos_x] == '0':
                data[pos_y][pos_x] += 1
                pos_y = tmp   
                d = "down"
            else: 
                tmp = pos_x + 1
                if tmp < len(l[0]) and l[pos_y][tmp] == '0':
                    data[pos_y][pos_x] += 1
                    pos_x = tmp
                else:
                    d = "up"
        elif d == "up":
            tmp = pos_x + 1
            if tmp < len(l[0]) and l[pos_y][tmp] == '0':
                data[pos_y][pos_x] += 1
                pos_x = tmp
                d = "right"
            else:   
                tmp = pos_y - 1 
                if tmp >= 0 and l[tmp][pos_x] == '0':
                    data[pos_y][pos_x] += 1
                    pos_y = tmp
                else:
                    d = "left"
        elif d == "left":
            tmp = pos_y - 1 
            if tmp >= 0 and l[tmp][pos_x] == '0':
                data[pos_y][pos_x] += 1
                pos_y = tmp
                d = "up"
            else:
                tmp = pos_x - 1
                if tmp >= 0 and l[pos_y][tmp] == '0':
                    data[pos_y][pos_x] += 1
                    pos_x = tmp
                else:
                    d = "down"
        elif d == "down":
            tmp = pos_x - 1
            if tmp >= 0 and l[pos_y][tmp] == '0':
                data[pos_y][pos_x] += 1
                pos_x = tmp
                d = "left"
            else:
                tmp = pos_y + 1
                if tmp < x and l[tmp][pos_x] == '0':
                    data[pos_y][pos_x] += 1
                    pos_y = tmp
                else:
                    d = "right"
        if pos_x == start_x and pos_y == start_y:
            break
    for i in range(5):
        c = 0
        for a in range(x):
            for b in range(y):
                if data[a][b] == i and l[a][b] == '0':
                    c += 1
        print("%3s" % c,end="")
    print()
