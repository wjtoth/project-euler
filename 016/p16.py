
def double_list(numlist):
	"""doubles a list representing a number"""
	doubled_list = []
	carry = 0
	for x in numlist:
		sum = x + x + carry
		carry = sum / 10
		digit = sum % 10
		doubled_list.append(digit)
	if carry != 0:
		doubled_list.append(carry)
	return doubled_list

def build_list(n):
	"""Builds a list representing digits of 2**n"""
	list = [1]
	for x in range(0, n):
		list = double_list(list)
	return list

def sum_list(list):
	sum = 0
	for x in list:
		sum += x
	return sum

if __name__ == '__main__':
	n = int(raw_input("Enter n (will print sum of digits of 2^n): "))
	print sum(build_list(n))