def sum_diff_mul(x, y):
    SUM = 0
    DIFF = 0
    MUL = 0
    print("SUM: %d, DIFF: %d, MUL: %d" %((x+y), (x-y), (x*y)))

print('Enter two integer numbers')
x = int(input('x:'))
y = int(input('y:'))
if x <= y:
    exit()

sum_diff_mul(x, y)