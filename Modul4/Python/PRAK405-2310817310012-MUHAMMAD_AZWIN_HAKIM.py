n, k = map(int, input().split())

m = [[0] * n for _ in range(n)]

for i in range(n):
    for j in range(i + 1):
        m[i][j] = (i - j + 1) * k
        print(f"({i - j + 1} * {k}) ", end='')

    print("= ", end='')

    jpb = sum(m[i][:i + 1])
    print(jpb)

total = sum(sum(row[:i + 1]) for i, row in enumerate(m))
print(total)
