while True:
    n = input()
    n = int(n)
    if n == 0:
        break
    current_status = "+x"
    d = {}
    d["+x"] = {
        "+y": "+y",
        "-y": "-y",
        "+z": "+z",
        "-z": "-z",
    }
    d["-x"] = {
        "+y": "-y",
        "-y": "+y",
        "+z": "-z",
        "-z": "+z",
    }
    d["+z"] = {
        "+y": "+z",
        "-y": "+z",
        "+z": "-x",
        "-z": "+x",
    }
    d["-z"] = {
        "+y": "-z",
        "-y": "-z",
        "+z": "+x",
        "-z": "-x",
    }
    d["+y"] = {
        "+y": "-x",
        "-y": "+x",
        "+z": "+y",
        "-z": "+y",
    }
    d["-y"] = {
        "+y": "+x",
        "-y": "-x",
        "+z": "-y",
        "-z": "-y",
    }
    l = input().split(" ")
    for c in l:
        if c == "No":
            continue
        current_status = d[current_status][c]
    print(current_status)