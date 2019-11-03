while True:
    s = input().split(" ")
    a, b, c, d = s
    if int(a) < 0:
        break
    l = []
    for p in range(int(d)):
        l.append(input().split(" "))
    total_cost = float(c)
    current_value = float(c) +float(b)
    cut = total_cost/int(a)
    for i in range(int(a)+1):
        interest = None
        for v in l:
            if int(v[0]) <= i:
                interest = v
        current_value -= current_value*float(interest[1]) 

        # print(current_value, total_cost)
        if total_cost < current_value:
            if i == 1:
                print("1 month")
            else:
                print(str(i) + " months")
            break
        total_cost -= cut
