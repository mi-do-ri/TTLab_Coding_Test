def check(t):
    stack = []
    m = {')': '(', ']': '[', '}': '{'}

    for char in t:
        if char in '([{':
            stack.append(char)
        elif char in ')]}':
            if not stack or stack[-1] != m.get(char):
                return False
            stack.pop()

    return not stack

if __name__ == "__main__":
    N = int(input())
    input_strings = []

    for i in range(N):
        t = input()
        input_strings.append(t)

    for t in input_strings:
        if check(t):
            print("true")
        else:
            print("false")
