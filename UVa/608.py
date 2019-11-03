n = input()
n = int(n)
for test in range(n):
    d= {
        'A': False,
        'B': False,
        'C': False,
        'D': False,
        'E': False,
        'F': False,
        'G': False,
        'H': False,
        'I': False,
        'J': False,
        'K': False,                                                                 
        'L': False,
    }
    h = {
        'A': False,
        'B': False,
        'C': False,
        'D': False,
        'E': False,
        'F': False,
        'G': False,
        'H': False,
        'I': False,
        'J': False,
        'K': False,                                                                 
        'L': False,
    }
    l = {
        'A': False,
        'B': False,
        'C': False,
        'D': False,
        'E': False,
        'F': False,
        'G': False,
        'H': False,
        'I': False,
        'J': False,
        'K': False,                                                                 
        'L': False,
    }

    n = []
    for i in range(3):
        line = input().split()
        n.append(line)
        if line[2] == 'even':
            for a in line[0]:
                d[a] = True
                h[a] = True
                l[a] = True
            for a in line[1]:
                d[a] = True
                h[a] = True
                l[a] = True
        else:
            for key in d:
                if key not in line[0] and key not in line[1]:
                    d[key] = True 
            if line[2] == 'up':
                for key in d:
                    if key not in line[1]:
                        l[key] = True
                    if key not in line[0]:
                        h[key] = True
            else:
                for key in d:
                    if key not in line[1]:
                        h[key] = True
                    if key not in line[0]:
                        l[key] = True                               
                    
        # print(line)
        # print(d)
        # print(h)
        # print(l)
    s = ''                 
    for key in d:
        if l[key] == False:
            print("%s is the counterfeit coin and it is light." % key)
        if h[key] == False:
            print("%s is the counterfeit coin and it is heavy." % key)           
        
