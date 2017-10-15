t = int(input())

while(t):
	n = input().lower()
	l = n.split(" ")

	ans = ""
	
	for i in range(len(l)):
		if(i == (len(l) - 1)):
			# Copy the full string with first letter capitalised
			ans += l[i][0].upper()
			ans += l[i][1:]
		else:
			# First letter Captitalised followed by .
			ans += l[i][0].upper() + ". " 
	t -= 1

	print(ans)