import sys
n = input()
n = int(n)
input()
for i in range(n):
    d = {}
    ans = []
    for line in sys.stdin:
        #line = input()
        if line == "\n":
            break
        line = line[:-1]
        #print(line)
        c = "".join(sorted(list(line.replace(" ", ''))))
        #print(c)
        # print(ans)
        # print(d)        
        if c in d:

            for v in d[c]:
                if v < line:
                    ans.append((v, line))
                else:
                    ans.append((line, v))
            d[c].append(line)
        else:
            d[c] = [line]
    if i > 0:
        print()
    ans = sorted(ans, key=lambda x: (x[0], x[1]))
    # print(ans)
    # print(d)
    # print()
    # print(d)
    for a in ans:
        print("%s = %s" % a)

    


