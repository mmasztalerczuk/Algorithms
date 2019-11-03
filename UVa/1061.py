parent = {
    'O': ['OO'],
    'B': ['BB', 'BO'],
    'A': ['AA', 'AO'],
    'AB': ['AB'],
}
parent_was = {
    'O': ['OO', 'BO', 'AO'],
    'B': ['BB', 'BO', 'AB'],
    'A': ['AA', 'AO', 'AB'],
}
parent_blood_was = {
    '+': ['+-', '++'],
    '-': ['--', '+-'],
}
blood_type = {
    '+': ['++', '+-'],
    '-': ['--'],
}

a_t = {
    'OO': 'O',
    'AB': 'AB',
    'AO': 'A',
    'BO': 'B',
    'BB': 'B',
    'AA': 'A',
    'BA': 'AB',
    'OA': 'A',
    'OB': 'B',
}

b_t = {
    '++': '+',
    '+-': '+',
    '--': '-',
    '-+': '+',
}
i = 1
while True:
    line = input().split(" ")
    line = [a for a in line if len(a) > 0]
    if len(line) == 0:
        continue
    if line[0] == 'E':
        break
    switch = False

    if line[0] == '?':
        switch = True
        line[0], line[1] = line[1], line[0]
    #print(line)
    if line[0][1] == 'B':
        possible_al = parent[line[0][0:2]]
        possible_bl = blood_type[line[0][2]]
    else:
        possible_al = parent[line[0][0]]
        possible_bl = blood_type[line[0][1]]

    if line[1] == '?':
        if line[2][1] == 'B':
            possible2_al = parent[line[2][0:2]]
            possible2_bl = blood_type[line[2][2]]
        else:
            possible2_al = parent[line[2][0]]
            possible2_bl = blood_type[line[2][1]]
        s_parent_was = set()
        for a in possible_al:
            for b in possible2_al:
                if a[0] == b[0] or a[1] == b[0]:
                    for l in parent_was[b[1]]:
                        s_parent_was.add(l)
                if a[0] == b[1] or a[1] == b[1]:
                    for l in parent_was[b[0]]:
                        s_parent_was.add(l)
        if len(s_parent_was) == 0:
            if switch:
                print("Case %d: IMPOSSIBLE %s %s" % (i, line[0], line[2]))
            else:
                print("Case %d: %s IMPOSSIBLE %s" % (i, line[0], line[2]))
            i += 1                
            continue

        #print(s_parent_was)
        s_parent_blood_was = set()
        for a in possible_bl:
            for b in possible2_bl:
                if a[0] == b[0] or a[1] == b[0]:
                    for l in parent_blood_was[b[1]]:
                        #p#rint(b[1])
                        s_parent_blood_was.add(l)
                if a[0] == b[1] or a[1] == b[1]:
                    for l in parent_blood_was[b[0]]:
#print(b[0])
                        s_parent_blood_was.add(l)
        if len(s_parent_blood_was) == 0:
            if switch:
                print("Case %d: IMPOSSIBLE %s %s" % (i, line[0], line[2]))
            else:
                print("Case %d: %s IMPOSSIBLE %s" % (i, line[0], line[2]))
            i += 1
            continue
        #print(s_parent_blood_was)
        #print(s_parent_was)
        s_tmp = set()
        for a in s_parent_was:
            for b in s_parent_blood_was:
                s_tmp.add(a_t[a]+b_t[b])
        ans = list(s_tmp)
        if switch:
            if len(ans) == 1:
                print("Case %d: %s %s %s" % (i, ans[0],line[0],line[2] ))
            else:                
                print("Case %d: {%s} %s %s" % (i, ", ".join(ans),line[0],line[2] ))
        else:
            if len(ans) == 1:
                print("Case %d: %s %s %s" % (i, line[0], ans[0],line[2] ))
            else:
                print("Case %d: %s {%s} %s" % (i, line[0], ", ".join(ans),line[2] ))
        #print(ans)
        i += 1                    
            

    else:
        if line[1][1] == 'B':
            possible2_al = parent[line[1][0:2]]
            possible2_bl = blood_type[line[1][2]]
        else:
            possible2_al = parent[line[1][0]]
            possible2_bl = blood_type[line[1][1]]
        s_a = set()
        
        for a in possible_al:
            for b in possible2_al:
                #print(a[0]+b[0])
                s_a.add(a[0]+b[0])
                s_a.add(a[0]+b[1])
                s_a.add(a[1]+b[0])
                s_a.add(a[1]+b[1])
        
        s_b = set()
        for a in possible_bl:
            for b in possible2_bl:
                s_b.add(a[0]+b[0])
                s_b.add(a[0]+b[0])
                s_b.add(a[1]+b[0])
                s_b.add(a[1]+b[1])

        #print(s_a)
        #print(s_b)
        ans = []
        s_tmp = set()
        for a in s_a:
            for b in s_b:
                s_tmp.add(a_t[a]+b_t[b])
        ans = list(s_tmp)
        if len(ans) == 1:
            print("Case %d: %s %s %s" % (i, line[0], line[1], ans[0] ))            
        else:
            print("Case %d: %s %s {%s}" % (i, line[0], line[1], ", ".join(ans) ))
        #print(ans)
        i += 1