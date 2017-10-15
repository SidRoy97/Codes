t = int(input())

def generate_string(n, strings):
	if(n == 0):
		return strings[0]
	#return generate_string(n-1, strings) + " " + strings[n]
	x = generate_string(n - 1, strings)
	return x + x[::-1] + strings[n]

while(t):
	[n, m] = list(map(int, (input().split(" "))))

	strings = []
	for _ in range(n):
		strings.append(input())

	string = generate_string(n-1, strings)

	ans = ""
	for _ in range(m):
		ans += string[int(input())]

	print(ans)
	t -= 1