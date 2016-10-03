import math

def dist(a, b):
    return math.sqrt( (b[0] - a[0])**2 + (b[1] - a[1])**2 )

def fun(x, y, m):

    a = (y[1]-x[1])/(y[0]-x[0])
    b = x[1] - a*x[0]

    xx = (m-b)/a
    new_point = (xx, m)
    d = dist(new_point, x)
    return d, x[1]



tests = int(input())
for test in range(tests):
    cor = int(input())
    l = []
    for c in range(cor):
        x, y = input().split()
        l.append((int(x), int(y)))
    l.sort(key=lambda tup: tup[0])

    a = l[-1]
    m = 0
    fin = 0
    for point in l[::-1]:
        if point[1] > m:
            ans, m = fun(point, a, m)
            fin += ans
        a = point
    print("%.2f" % fin)
