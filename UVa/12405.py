tests = int(input().rstrip())

for test in range(tests):
    tmp = input()
    line = input().rstrip()
    ans = 0
    tmp = 0
    for i in range(len(line)):
        if tmp > 0:
            tmp -= 1
            continue

        if line[i] == '.':
            ans += 1
            tmp = 2
    print("Case " + str(test+1)+": " + str(ans))
