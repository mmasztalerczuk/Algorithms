n = int(input())
for i in range(n):
    a = input()
    l = [int(a) for a in input().split(" ")]
    ans = 0
    for j in range(len(l)):
        for k in range(j):

            if l[j] >= l[k]:
                ans+=1
            #print(l[j], l[k], l[j] < l[k], ans)                
    print(ans)