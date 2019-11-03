case = 1
while True:
    n = input()
    n = int(n)
    if n == 0:
        break
    l = []
    for number in range(n):
        l.append(input())
    i = 0
    print("Case %d:" % case)
    case += 1
    while i < len(l):

        s = l[i]
        a = int(s)
        j = i + 1
        p = 0
        while j < len(l):
            b = int(l[j])
            if int(a) + 1 == b:
                p += 1
                a = l[j]
            else:
                break
            j += 1
        i = j
        if p != 0:
            for q in range(len(str(a))):
                if str(a)[q] != s[q]:
                    break
            print(str(s) + "-" + str(a)[q:])
        else:
            print(s)
    print()
