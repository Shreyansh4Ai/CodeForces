t = int(input())
for _ in range(t):
    n = int(input())
    s = input()
    a = s[0]
    b = s[1:n-1]
    c = s[n-1]
    if b in (a + c):
        print("YES")
    else:
        print("NO")