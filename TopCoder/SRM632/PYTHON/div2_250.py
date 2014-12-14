class RunningAroundPark:
    def numberOfLap(self, N, d):

        ans = 0
        tmp = N+1
        for i in range(len(d)):
            if tmp >= d[i]:
                ans = ans + 1

            tmp = d[i]


        return ans