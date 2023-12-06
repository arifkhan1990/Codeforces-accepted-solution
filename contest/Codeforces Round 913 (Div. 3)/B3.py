from collections import deque

def solve(info):
    curr = list(info)
    last_lower = []
    last_upper = []

    for i, char in enumerate(curr):

        if char == 'b':
            if last_lower != []:
                curr[last_lower[-1]] = "*"
                last_lower.pop()
            curr[i] = "*"
        elif char == 'B':
            if last_upper != []:
                curr[last_upper[-1]] = "*"
                last_upper.pop()
            curr[i] = "*"
        else:
            if char.islower():
                last_lower.append(i)
            else:
                last_upper.append(i)

    ans = ""
    for i in curr:
        if i != "*":
            ans += i

    return ans

for _ in range(int(input())):
    info = input()
    output = solve(info)
    print(output)