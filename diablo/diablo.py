m, d, k, c = map(int, input().split())
sum_value = 0
x = d

if m == 0 or k == 0:
    print('0')
if d <= k:
    print('-1')
else:
    while m > 0:
        # Check the last iteration
        if m == 1 and d - k <= 0:
            break
        if d - k > 0:
            m -= 1
            d -= k
        else:
            sum_value += c
            d = x

    print(sum_value)
