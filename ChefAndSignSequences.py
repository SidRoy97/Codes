t = int(input())

while(t):
	s = input()

	l = []

	for i in range(len(s) + 1):
		l.append(0)

	j = 0

	for i in s:
		if(l == [0] * (len(s) + 1)):
			if(i == "="):
				l[j] = 1
			else:
				if(i == "<"):
					j = 1
					l[0] = 1
					l[1] = 1
				else:
					j = len(s) - 1
					l[len(s)] = 1
					l[len(s) - 1] = 1
		
		else:
			if(i == "<"):
				# Check if something is 1 in the index after j
				k = j + 1
				while(k < (len(s) + 1) and l[k] != 1):
					k += 1
				if(k != (len(s) + 1)):
					j = k
				else:
					j += 1
					if(j == (len(s) + 1)):
						j -= 1
						k = j - 1
						while(l[k] != 0):
							k -= 1
						l[k] = 1
				l[j] = 1
			elif(i == ">"):
				# Check if something is 1 in the index before j
				k = j - 1
				while(k >= 0 and l[k] != 1):
					k -= 1
				if(k != -1):
					j = k
				else:
					#print("'I'm here")
					j -= 1
					if(j == -1):
						#print("j < 0")
						j = 0
						k = 1
						while(l[k] != 0):
							k += 1
						l[k] = 1
				l[j] = 1
		#print("symbol = ", i, end = "  ")
		#print(l)
		#print("j = ", j )

	print(l.count(1))
	t -= 1