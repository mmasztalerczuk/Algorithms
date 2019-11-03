while True:
    n = input()
    if n == "DONE":
        break
    n = n.upper()
    n = n.replace("?", '')
    n = n.replace("!", '')
    n = n.replace(",", '')
    n = n.replace(".", '')
    n = n.replace(" ", '')
    #print(n)
    if n == n[::-1]:
        print("You won't be eaten!")
    else:
        print("Uh oh..")