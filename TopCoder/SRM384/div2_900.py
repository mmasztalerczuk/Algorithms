class PowerGame:
    def countMoves(self, n):

        a = [-1 for j in range(n+1)]
        a[0] = 0
        for i in range(1, n+1):
            p = 1
            max_even = -1
            min_odd = -1
            while p*p <= i:
                if i-p*p >= 0:
                    if (a[i-p*p] + 1)%2==0:
                        if max_even != -1:
                            max_even = max(max_even, (a[i-p*p] + 1))
                        else:
                            max_even = (a[i-p*p] + 1)
                    else:
                        if min_odd != -1:
                            min_odd = min(min_odd, (a[i - p * p] + 1))
                        else:
                            min_odd = (a[i - p * p] + 1)
                p += 1
            if min_odd != -1:
                a[i] = min_odd
            else:
                a[i] = max_even
        #print(a)
        return a[n]


    def winner(self, size0, size1):
        a = min(self.countMoves(size0), self.countMoves(size1))
        if a%2 == 1:
            return "Alan will win after " + str(a) + " moves"
        else:
            return "Bob will win after " + str(a) + " moves"



x = PowerGame()
#print(x.winner(4, 9))
#print(x.winner(4, 3))
#print(x.winner(2, 3))
print(x.winner(7, 13))
print(x.winner(2136, 1244))

