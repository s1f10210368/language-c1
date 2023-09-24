import time

t1 = time.time()

def fib(n):
    if n <= 1:
        return n
    else:
        return fib(n-1) + fib(n-2)

print("fib(40) =", fib(40))
import time

t2 = time.time()

t3 = t2 - t1

print(t3)