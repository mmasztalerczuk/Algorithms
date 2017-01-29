tests = int(input().rstrip())

for test in range(tests):
    cars = int(input().rstrip())
    l = []

    for car in range(cars):
        name, low, high = input().rstrip().split()
        l.append((name, int(low), int(high)))
    question = int(input().rstrip())

    l = sorted(l, key=lambda t: t[1])

    for q in range(question):
        ans = ""
        m = int(input().rstrip())

        for car in l:
            if car[1] <= m <= car[2]:
                if ans == "":
                    ans = car[0]
                else:
                    ans = "UNDETERMINED"
        if ans == "":
            ans = "UNDETERMINED"
        print(ans)
    print()
