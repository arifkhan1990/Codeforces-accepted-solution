for _ in range(int(input())):
    n = int(input())
    code = str(input())

    st = "0abcdefghijklmnopqrstuvwxyz"
    
    i = 0
    while i < n:
        if i+2 <= n-1 and i+3 <= n-1:
            if code[i+2] == '0' and code[i+3] == 0:
                ans += st[int(code[i])] + st[ 10 if code[i+1] == '1' else 20]
                i += 3
            elif code[i+2] == '0':
                k = int(code[i:i+1])
                ans += st[k]
                i += 2
            else:
                ans += st[int(code[i])]
                i += 1
    print(ans)

