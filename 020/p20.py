import math

n = 100

def factorial(n):
	retval = 1
	for i in range(2, n+1):
		retval = retval * i
	return retval

print(reduce(lambda x,y: int(x)+int(y), str(factorial(n))))
