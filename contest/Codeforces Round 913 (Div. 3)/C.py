for _ in range(int(input())):
    n = int(input())
    s = input()

    ans = 1 if n&1 else 0

    ch = [0] * 26
    for i in s:
        ch[ord(i) - ord('a')] += 1

    v = sorted(ch)
    mx = v[-1]
    v.pop()

    for x in v:
        mx -= x
    ans = max(ans, mx)
    print(ans)