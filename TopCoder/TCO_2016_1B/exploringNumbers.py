def is_prime(n):
    if n == 1:
        return False    for i in range(2, n):
        #print(str(n) + " " + str(i))        if n % i == 0:
            return False    return True
class ExploringNumbers:
    def numberOfSteps(self, n):
        val = n
        for i in range(0, n):
            if is_prime(val):
                return i+1            p = []
            for w in str(val):
                p.append(int(w))
            tmp = 0            for j in p:
                tmp += j ** 2            val = tmp
        return -1
