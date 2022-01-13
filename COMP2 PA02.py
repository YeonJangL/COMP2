def sum_diff_mul(x, y):
    SUM = x+y
    DIFF = x-y
    MUL = x*y
    return 'SUM: ',SUM, 'DIFF: ', DIFF, 'MUL: ', MUL

print('Enter two integer numbers')
x = int(input('x:'))
y = int(input('y:'))
if x <= y:
    exit()

print(sum_diff_mul(x, y))   #지금은 SUM: 15, DIFF: 5, MUL: 50으로 할 수가 없다. 파이썬 어려워..

