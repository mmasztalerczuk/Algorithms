while True:
    n = input().split(":")
    h, m = n
    h = int(h)
    m = int(m)
    if h == 0 and m == 0:
        break
    h = (h * 5) * 6 + m/2
    m = m * 6
    min_a = min(h,m)
    max_a = max(h,m)
    max_a -= min_a
    if max_a > 180:
        max_a = 360 - max_a
    print("%.3f" % max_a)
    
