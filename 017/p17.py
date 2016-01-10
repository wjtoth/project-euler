
def number_as_word(number):
	"""returns numbers less than or equal to one thousand as words"""
	if number == 1000:
		return "onethousand"

	ones = {0: "", 1 : "one", 2 : "two", 3 : "three", 4 : "four", 5 : "five", 6 : "six", 7 : "seven", 8: "eight", 9 : "nine"}
	tens = {0: "", 1 : "", 2 : "twenty", 3 : "thirty", 4 : "forty", 5 : "fifty", 6 : "sixty", 7 : "seventy", 8: "eighty", 9 : "ninety"}
	teens = {0: "ten", 1 : "eleven", 2 : "twelve", 3 : "thirteen", 4 : "fourteen", 5 : "fifteen", 6 : "sixteen", 7 : "seventeen", 8: "eighteen", 9 : "nineteen"}
	
	onesdigit = number % 10
	onestr = ones[onesdigit]
	number = number / 10
	tensdigit = number % 10
	tenstr = tens[tensdigit]
	if tensdigit == 1:
		onestr = teens[onesdigit]
	number = number/10
	hundredsdigit = number % 10


	hundredstr = ones[hundredsdigit]
	if hundredstr:
		hundredstr += "hundred"
	if hundredstr and (tenstr or onestr):
		hundredstr += "and"
	
	return hundredstr + tenstr + onestr

def sum_lengths_up_to(n):
	"""sums number of letters used in writing numbers up to n as words. Correct up to 1000"""
	sum = 0
	for x in range(1, n+1):
		print number_as_word(x)
		sum += len(number_as_word(x))
	return sum

if __name__ == "__main__":
	print "Total letter count of words for one to one thousand: %s" % (sum_lengths_up_to(1000))