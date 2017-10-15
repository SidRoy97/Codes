t = int(input())

def generate_string(n, strings):
	if(n == 0):
		return strings[0]
	return generate_string(n-1, strings) + " " + strings[n]

while(t):
	[n, m] = list(map(int, (input().split(" "))))

	strings = []
	for _ in range(n):
		strings.append(input())

	string = " ".join(strings)

	actual_string = "" + strings[0]

	for c in string[len(strings[0]):]:
		if(c == " "):
			# actual_string += actual_string[::-1]
			l = len(actual_string)
			for x in range(l):
				actual_string += actual_string[l - 1 - x]
		else:
			actual_string += c

	ans = ""
	for _ in range(m):
		ans += actual_string[int(input())]

	print(ans)
	t -= 1