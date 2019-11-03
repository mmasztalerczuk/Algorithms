n = input()
n = int(n)

def lose(a, b):
    #print("Trying ", a, b)
    if a == 'S' and b == 'R':
        return True
    if a == 'R' and b == 'P':
        return True
    if a == 'P' and b == 'S':
        return True
    return False

for i in range(n):
    l = input().split(" ")

    a, b, day = l
    a = int(a)
    day = int(day)
    l = []
    
    for _ in range(a):
        l.append(input())
    
    d = 0
    while d < day:
        tmp = []

        for row in range(len(l)):
            s = []
            for column in range(len(l[row])):
                c = l[row][column]
                
                if row+1 < len(l) and lose(l[row][column], l[row+1][column]):
                    c =  l[row+1][column]
                if row-1 >= 0 and lose(l[row][column], l[row-1][column]):
                    c =  l[row-1][column]
                if column+1 < len(l[row]) and lose(l[row][column], l[row][column+1]):
                    c =  l[row][column+1]
                if column-1 >= 0 and lose(l[row][column], l[row][column-1]):
                    c =  l[row][column-1]
                                    
                s.append(c)
            tmp.append("".join(s))
        tmp, l = l, tmp
        d += 1
    for c in l:
        print(c)
    
    if i + 1 < n:
        print()