class PotentialGeometricSequence:
    def numberOfSubsequences(self, d):

        ans = len(d)
        ans = ans + len(d) - 1
        test = 3
        for w in range(len(d)-2):

            for i in range(len(d)-test+1):
                r = d[i+1] - d[i]
                f = True

                for j in range(i+1,i+test):
                   # print(d[j-1])
                    #print(d[j])
                    if r != d[j] - d[j-1]:
                        f = False
                if f:
                    ans = ans + 1
            test = test + 1


        return ans