import sys

case = 1
for line in sys.stdin:
    n = line.split(" ")
    points = 0
    d_stopped = {"S":False, "H":False, "C":False, "D":False}
    for card in n:
        if card[0] == "A":
            points += 4
            d_stopped[card[1]] = True
        elif card[0] == "K":
            points += 3
            c = 0
            for p in n:
                if p[1] == card[1]:
                    c += 1
            if c == 1:
                points -= 1
            if c > 1:
                d_stopped[card[1]] = True
        elif card[0] == "Q":
            points += 2
            c = 0
            for p in n:
                if p[1] == card[1]:
                    c += 1
            if c == 1 or c == 2:
                points -= 1
            if c > 2:
                d_stopped[card[1]] = True
        elif card[0] == "J":
            points += 1
            c = 0
            for p in n:
                if p[1] == card[1]:
                    c += 1
            if c == 1 or c == 2 or c == 3:
                points -= 1
    d = {"S":0, "H":0, "C":0 , "D":0}
    points_ignore = points
    stopped = d_stopped["S"] and d_stopped["H"] and d_stopped["C"] and d_stopped["D"]
    for card in n:
        d[card[1]] += 1
    for key in d:
        if d[key] == 2:
            points += 1
        if d[key] == 1:
            points += 2
        if d[key] == 0:
            points += 2
    if points < 14:
        print("PASS")
    elif points_ignore >= 16 and stopped:
        print("BID NO-TRUMP")
    else:
        ans = []
        for key in d:
            ans.append((d[key], key))
        ans = sorted(ans, key=lambda element: (element[0], element[1]))
        print("BID %s" % ans[3][1])
