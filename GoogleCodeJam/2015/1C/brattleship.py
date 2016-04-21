import sys

def warning(*objs):
    print("WARNING: ", *objs, file=sys.stderr)

T = input()
for t in range(int(T)):
    r,c,n = input().split()
    r = int(r)
    c = int(c)
    n = int(n)
    p = 0    if c%n > 0:
        p = 1    #warning(t)    print("Case #" + str(t+1) + ": " + str(int(r*(int(c/n)) + n-1 + p)))
