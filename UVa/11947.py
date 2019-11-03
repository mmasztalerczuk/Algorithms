def g(y,m,d):
    m = (m+9)%12
    y = y - m//10
    return 365*y + y//4 -y//100 +y//400 + (m*306+5)//10 + (d-1)

def d_cal(g):
    y = (10000*g + 14780)//3652425
    ddd = g - (365*y + y//4 - y//100 + y//400)
    if (ddd <0):
        y = y - 1
        ddd = g - (365*y + y//4 - y//100 + y//400)
    mi = (100*ddd + 52)//3060
    mm = (mi + 2)%12 + 1
    y = y + (mi+2)//12
    dd = ddd - (mi*306+5)//10 + 1
    return int(dd), int(mm), int(y)
tests = input()
for i in range(int(tests)):
    dq = input()
    day = int(dq[2:4])
    months = int(dq[:2])
    year = int(dq[4:])
    d, m, y = d_cal(g(year,months,day)+280)
    if m == 1:
        if d <= 20:
            n = "capricorn"
        else:
            n = "aquarius"
    if m == 2:
        if d <= 19:
            n = "aquarius"
        else:
            n = "pisces"
    if m == 3:
        if d <= 20:
            n = "pisces"
        else:
            n = "aries"
    if m == 4:
        if d <= 20:
            n = "aries"
        else:
            n = "taurus"
    if m == 5:
        if d <= 21:
            n = "taurus"
        else:
            n = "gemini"
    if m == 6:
        if d <= 21:
            n = "gemini"
        else:
            n = "cancer"
    if m == 7:
        if d <= 22:
            n = "cancer"
        else:
            n = "leo"
    if m == 8:
        if d <= 21:
            n = "leo"
        else:
            n = "virgo"
    if m == 9:
        if d <= 23:
            n = "virgo"
        else:
            n = "libra" 
    if m == 10:
        if d <= 23:
            n = "libra"
        else:
            n = "scorpio" 
    if m == 11:
        if d <= 22:
            n = "scorpio"
        else:
            n = "sagittarius"
    if m == 12:
        if d <= 22:
            n = "sagittarius"
        else:
            n = "capricorn"
    m = str(m)
    d = str(d)
    if len(d) == 1:
        d = "0"+d
    if len(m) == 1:
        m = "0"+m
    print(str(i+1) +" "+ str(m) + "/" + str(d) + "/" + str(y) + " " + n)                                                                                             

