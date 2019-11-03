n = input()
n = int(n)
for i in range(n):
    deck = input().split(" ")
    hand = deck[-25:]
    deck = deck[:-25]
    y = 0
    for _ in range(3):
        card = deck.pop()
        value = card[0]
        try:
            value = int(value)
        except:
            value = 10
        for _ in range(10-value):
            deck.pop()
        y += value
    deck += hand

    print("Case %d: " % (i+1) + deck[y-1])
        
