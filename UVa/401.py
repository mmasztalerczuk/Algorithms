import sys
for line in sys.stdin:
    n = line[:-1]
    is_palindrom = n == n[::-1]
    is_mirror = True
    for i in range(len(n)):
        if n[i] == 'A' and n[-1-i] == 'A':
            continue
        elif n[i] in ['E'] and n[-1-i] in ['3']:
            continue
        elif n[i] in ['3'] and n[-1-i] in ['E']:
            continue            
        elif n[i] in ['H'] and n[-1-i] in ['H']:
            continue
        elif n[i] in ['I'] and n[-1-i] in ['I']:
            continue
        elif n[i] in ['J'] and n[-1-i] in ['L']:
            continue
        elif n[i] in ['L'] and n[-1-i] in ['J']:
            continue            
        elif n[i] in ['M'] and n[-1-i] in ['M']:
            continue
        elif n[i] in ['O'] and n[-1-i] in ['O']:
            continue
        elif n[i] in ['S'] and n[-1-i] in ['2']:
            continue
        elif n[i] in ['2'] and n[-1-i] in ['S']:
            continue        
        elif n[i] in ['T'] and n[-1-i] in ['T']:
            continue
        elif n[i] in ['U'] and n[-1-i] in ['U']:
            continue
        elif n[i] in ['V'] and n[-1-i] in ['V']:
            continue 
        elif n[i] in ['W'] and n[-1-i] in ['W']:
            continue 
        elif n[i] in ['X'] and n[-1-i] in ['X']:
            continue 
        elif n[i] in ['Y'] and n[-1-i] in ['Y']:
            continue  
        elif n[i] in ['Z'] and n[-1-i] in ['5']:
            continue
        elif n[i] in ['5'] and n[-1-i] in ['Z']:
            continue            
        elif n[i] in ['1'] and n[-1-i] in ['1']:
            continue     
        elif n[i] in ['8'] and n[-1-i] in ['8']:
            continue                                       
        else:
            is_mirror = False
            break
    print(n, end='')
    if (is_palindrom and is_mirror):
        print(' -- is a mirrored palindrome.')
    elif is_mirror:
        print(' -- is a mirrored string.')
    elif is_palindrom:
        print(' -- is a regular palindrome.')
    else:
        print(' -- is not a palindrome.')
    print()
    
                                                                                                                                