tests = int(input())

for test in range(tests):
    k = int(input())
    l1 = [[], [], [], [], []]
    l2 = [[], [], [], [], []]
    for i in range(6):
        line = input()
        for i, c in enumerate(line):
            if c not in l1[i]:
                l1[i].append(c)
    for i in range(6):
        line = input()
        for i, c in enumerate(line):
            if c not in l2[i]:
                l2[i].append(c)
    common = [[], [], [], [], []]
    for i in range(5):
        for c in l1[i]:
            for w in l2[i]:
                if c == w:
                    common[i].append(c)
    common_sorted = []
    for i in common:
        common_sorted.append(sorted(i))
    #print(common)        
    #print(common_sorted)
    i = 0
    f = False
    for a in common_sorted[0]:
        for b in common_sorted[1]:
            for c in common_sorted[2]:
                for d in common_sorted[3]:
                    for e in common_sorted[4]:
                        i+=1
                        if k == i:
                            print(a+b+c+d+e)
                            f = True
                            break
                        # else:
                        #     print(a+b+c+d+e)
                    if f:
                        break 
                if f:
                    break 
            if f:
                break 
        if f:
            break
    if not f:
        print("NO")
