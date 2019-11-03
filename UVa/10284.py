import sys
for qwe in  sys.stdin:
    n = qwe[:-1].split("/")
    d = {}
    o = {}
    for i in range(8):
        for j in range(8):
            if i not in d:
                d[i] = {}
            d[i][j] = True
            if i not in o:
                o[i] = {}
            o[i][j] = True
    row_counter = 0
    for l in n:
        position = 0
        for i in l:
            a = i
            if a == 'k' or a == 'K':
                o[row_counter][position] = False
            elif a == 'P':
                o[row_counter][position] = False
            elif a == 'p':
                o[row_counter][position] = False
            elif a == 'N' or a == 'n':
                o[row_counter][position] = False
            elif a == 'B' or a == 'b':
                o[row_counter][position] = False
            elif a == 'R' or a == 'r':
                o[row_counter][position] = False
            elif a == 'Q' or a == 'q':
                o[row_counter][position] = False                          
            else:
                a = int(a)
                position += a-1
            position += 1
        row_counter += 1

    row_counter = 0
    for l in n:
        position = 0
        for i in l:
            a = i
            if a == 'k' or a == 'K':
                for x in range(-1, 2):
                    for y in range(-1, 2):
                        try:
                            d[row_counter+x][position+y] = False
                        except:
                            pass
                pass
                pass
            elif a == 'P':
                d[row_counter][position] = False
                try:
                    d[row_counter-1][position+1] = False
                except:
                    pass
                try:
                    d[row_counter-1][position-1] = False
                except:
                    pass
                pass
            elif a == 'p':
                d[row_counter][position] = False
                try:
                    d[row_counter+1][position+1] = False
                except:
                    pass
                try:
                    d[row_counter+1][position-1] = False
                except:
                    pass
                pass
            elif a == 'N' or a == 'n':
                d[row_counter][position] = False
                for x in [1, -1]:
                    for y in [2, -2]:
                        try:
                            d[row_counter+x][position+y] = False
                            #print(row_counter+x, position+y)
                        except:
                            pass
                        try:
                            d[row_counter+y][position+x] = False
                            #print(row_counter+y, position+x)
                        except:
                            pass
                pass
                pass
            elif a == 'B' or a == 'b':
                d[row_counter][position] = False
                for i in range(1, 9):
                    try:
                        if o[row_counter+i][position+i]:
                            d[row_counter+i][position+i] = False
                        else:
                            break
                    except:
                        pass
                for i in range(1, 9):
                    try:
                        if o[row_counter-i][position+i]:
                            d[row_counter-i][position+i] = False
                        else:
                            break
                    except:
                        pass
                for i in range(1, 9):
                    try:
                        if o[row_counter-i][position-i]:
                            d[row_counter-i][position-i] = False
                        else:
                            break
                    except:
                        pass
                for i in range(1, 9):
                    try:
                        if o[row_counter+i][position-i]:
                            d[row_counter+i][position-i] = False
                        else:
                            break
                    except:
                        pass
                pass
            elif a == 'R' or a == 'r':
                d[row_counter][position] = False
                for i in range(1, 9):
                    try:
                        if o[row_counter][position-i]:
                            d[row_counter][position-i] = False
                        else:
                            break
                    except:
                        pass
                for i in range(1, 9):
                    try:
                        if o[row_counter+i][position]:
                            d[row_counter+i][position] = False
                        else:
                            break
                    except:
                        pass
                for i in range(1, 9):
                    try:
                        if o[row_counter-i][position]:
                            d[row_counter-i][position] = False
                        else:
                            break
                    except:
                        pass
                for i in range(1, 9):
                    try:
                        if o[row_counter][position+i]:
                            d[row_counter][position+i] = False
                        else:
                            break
                    except:
                        pass
                pass                                                
            elif a == 'Q' or a == 'q':
                d[row_counter][position] = False
                for i in range(1, 9):
                    try:
                        if o[row_counter][position-i]:
                            d[row_counter][position-i] = False
                        else:
                            break
                    except:
                        pass

                for i in range(1, 9):
                    try:
                        if o[row_counter+i][position]:
                            d[row_counter+i][position] = False
                        else:
                            break
                    except:
                        pass

                for i in range(1, 9):
                    try:
                        if o[row_counter-i][position]:
                            d[row_counter-i][position] = False
                        else:
                            break
                    except:
                        pass

                for i in range(1, 9):
                    try:
                        if o[row_counter][position+i]:
                            d[row_counter][position+i] = False
                        else:
                            break
                    except:
                        pass
                        
                d[row_counter][position] = False
                for i in range(1, 9):
                    try:
                        if o[row_counter+i][position+i]:
                            d[row_counter+i][position+i] = False
                        else:
                            break
                    except:
                        pass
                for i in range(1, 9):
                    try:
                        if o[row_counter-i][position+i]:
                            d[row_counter-i][position+i] = False
                        else:
                            break
                    except:
                        pass
                for i in range(1, 9):
                    try:
                        if o[row_counter-i][position-i]:
                            d[row_counter-i][position-i] = False
                        else:
                            break
                    except:
                        pass
                for i in range(1, 9):
                    try:
                        if o[row_counter+i][position-i]:
                            d[row_counter+i][position-i] = False
                        else:
                            break
                    except:
                        pass
            else:
                a = int(a)
                position += a-1
            position += 1
        row_counter += 1
    c = 0
    for i in range(8):
        for j in range(8):
            if d[i][j]:
                c += 1
                #print(1, end="")
            # else:
            #     print(0, end="")
    print(c)