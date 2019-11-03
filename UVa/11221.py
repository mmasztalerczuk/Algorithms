n = input()
n = int(n)
for i in range(n):
    line = input()
    line = line.replace("?", '')
    line = line.replace("!", '')
    line = line.replace(".", '')
    line = line.replace(",", '')
    line = line.replace(" ", '')
    line = line.replace(")", '') 
    line = line.replace("(", '')
    print("Case #%d:" % (i+1))
    if line != line[::-1]:
        print("No magic :(")
        continue
    k_exist = False
    for i in range(0, 101):
        if i*i == len(line):
            k = i
            k_exist = True
            break
    if not k_exist:
        print("No magic :(")
        continue
    s = ""
    for i in range(k):
        for j in range(k):
            s+= line[i+j*k]
    #print(s)
    #print(line)
    if s == s[::-1]:
        print(k)
    else:
        print("No magic :(")