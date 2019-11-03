n = input()
n = int(n)
for tests in range(n):
    l = input().split(" ")
    players, snakes, rolls = l
    p = []
    players = int(players)
    rolls = int(rolls)
    snakes = int(snakes)
    for i in range(players):
        p.append(1)
    
    s = []

    for i in range(snakes):
        t = input().split(" ")
        m, n = t
        m = int(m)
        n = int(n)
        s.append((m,n))
    
    current_player = 0
    game_win = False
    for i in range(int(rolls)):
        r = input()
        if game_win:
            continue
        r = int(r)
        p[current_player] += r
        for j in s:
            if j[0] == p[current_player]:
                p[current_player] = j[1]
                break
        if p[current_player] == 100:
            game_win = True
        current_player += 1
        current_player %= players
    
    for i, val in enumerate(p):
        print("Position of player %s is %s." % (i+1, val))

