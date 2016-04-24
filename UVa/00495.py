from sys import stdin

arr = [0, 1]
for i in range(5001):
    arr.append(arr[len(arr)-1]+arr[len(arr)-2])

for line in stdin:
  p = int(line)
  print("The Fibonacci number for " + str(p) + " is " + str(arr[p]))


