while True:
    n = input()
    n = int(n)
    if n == -1:
        break
    t = input()
    g = input()

    print("Round %s" % n)
    l = []
    for c in g:
        if c not in l:
            l.append(c)
    r = []
    for c in t:
        if c not in r:
            r.append(c)
    p = 0
    lose = 0
    for c in l:
        if c in t:
            p += 1
        else:
            lose += 1
        if lose == 7:
            break
        if p == len(r):
            break

    if lose == 7:
        print("You lose.")
    elif p == len(r):
        print("You win.")
    else:
        print("You chickened out.")


