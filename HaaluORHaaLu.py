t = int(input())

while(t):
	n, k = list(map(float, (input().split(" "))))

	n = int(n)

	l = list(map(float, (input().split(" "))))

	m = max(l)
	max_index = []

	for i in range(n):
		if(l[i] == m):
			max_index.append(i)

	for index in max_index: 
		i = index 
		j = index

		frontside = 1
		# frontside_mem = frontside

		backside = 1
		# backside_mem = backside

		flag = 0

		while((i < len(l)) and (frontside < k)):
			frontside = frontside * l[i]
			i += 1

		if(i != len(l)):
			print("haaLu")
			flag = 1
			break
		else:
			while((j >= 0) and (backside < k)):
				backside = backside * l[j]
				j -= 1

			if(j >= 0):
				print("haaLu")
				flag = 1
				break
				
	if(flag == 0):
		print("haalu")

	t -= 1