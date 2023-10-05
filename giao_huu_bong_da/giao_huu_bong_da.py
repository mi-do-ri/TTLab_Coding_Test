def check(v, k, l, x, y):
    if k == x and l == y:
        return False
    return True

def solution():
    global cnt
    cnt += 1

def Try(k, l, x, y):
    for v in range(2):
        if check(v, k, l, x, y):
            if v == 0 and k < x:
                k += 1
                if k == x or l == y:
                    solution()
                else:
                    Try(k, l, x, y)
                k -= 1
            if v == 1 and l < y:
                l += 1
                if k == x or l == y:
                    solution()
                else:
                    Try(k, l, x, y)
                l -= 1

if __name__ == "__main__":
    N = int(input())
    res = []
    for _ in range(N):
        x, y = map(int, input().split())
        if x == 0 and y == 0:
            res.append(1)
        else:
            cnt = 0
            Try(0, 0, x, y)
            res.append(cnt)

    for r in res:
        print(r)
