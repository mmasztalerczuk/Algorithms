class YetAnotherTwoTeamsProblem:
    def count(self, l):
      l = list(l)	
      r = [[0 for x in range(1600000)] for x in range(2)]

      n = len(l)
      s = sum(l)
      l.sort()
      mx = l[n-1] + (s>>1)
      ans = 0
      r[1][0] = 1
      for i in range(n-1,-1,-1):
        for j in range(0, mx):
          r[0][j] = r[1][j]
	  if l[i] <= j:
	    r[1][j] += r[0][j-l[i]]
	  left = s>>1
	  right = left + l[i] + (s&1)
	  for j in range(left+1,right):
	    if l[i] <= j:
	      ans += r[0][j-l[i]]
      return ans

