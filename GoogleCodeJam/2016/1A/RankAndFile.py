T = int(input())

for t in range(T):
    N = int(input())
    arr = []

    for i in range(2*N-1):
        arr.append(list(map(int, input().split())))

    value = []

    for i in range(N):
        mins = arr[0][i]
        tmp = []
        for j in range(len(arr)):
            mins = min(arr[j][i], mins)
        for j in range(len(arr)):
            if arr[j][i] == mins:
                tmp.append(arr[j])
        value.append(tmp)
        for j in tmp:
            arr.remove(j)

    c = -1    for i in range(len(value)):
        if len(value[i]) == 1:
            c = i

    for i in range(N):
        if i == c:
            continue        if value[i][0][c] == value[c][0][i]:
            value[i].remove(value[i][0])
        elif value[i][1][c] == value[c][0][i]:
            value[i].remove(value[i][1])

    ans = ""    for i in range(N):
        ans += " " + str(value[i][0][c])

    print("Case #" + str(t+1) + ":" + ans)
