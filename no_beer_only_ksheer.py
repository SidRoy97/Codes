t = int(input())

while(t):
	n, k = list(map(int, (input().split(" "))))
	milk = list(map(int, (input().split(" "))))

	total = sum(milk)

	print(total - ((total//k) * k))

	t -= 1