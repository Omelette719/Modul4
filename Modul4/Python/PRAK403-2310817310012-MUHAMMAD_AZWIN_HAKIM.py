a, b = map(int, input().split())

if a > b:
    for i in range(b, a + 1):
        print(f"{a + b - i} {i}", end='')
        if i < a:
            print(" - ", end='')
else:
    for i in range(a, b + 1):
        print(f"{i} {a + b - i}", end='')
        if i < b:
            print(" - ", end='')
