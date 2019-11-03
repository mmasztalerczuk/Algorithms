d = {}
words = []
while True:
    n = input().split()
    if n[0] == '#':
        break

    for s in n:
        if s in d:
            if s in words:
                words.remove(s)
        else:
            d[s] = "".join(sorted(s.lower()))
            words.append(s)
ans = []
for word in words:
    flag = True
    for key in d:
        if len(word) == 1:
            flag = True
            break
        if d[key] == "".join(sorted(word.lower())) and key != word:
            flag = False
            break
    if flag:
        ans.append(word)
for a in sorted(ans):
    print(a)
#print(sorted(ans))
