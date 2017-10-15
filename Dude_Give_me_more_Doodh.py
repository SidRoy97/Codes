n, m = list(map(int, (input().split(" "))))

houses = []

for i in range(n):
	houses.append([[], []])

for i in range(n-1):
	p, c = list(map(int, (input().split(" "))))
	houses[p-1][1].append(c)
	houses[c-1][0].append(p)

houses_amt = []

for i in range(n):
	houses_amt.append(0)

for i in range(m):
	x = input().split(" ")
	house = int(x[0])
	amt = int(x[1])
	msg = x[2]

	part = 0

	if(msg == "giftUp"):
		part = 0
	elif(msg == "giftDown"):
		part = 1
	else:
		part = -1

	houses_amt[house - 1] = amt

	recursive_add(house, part, amt, 0)

def recursive_add(house, part, amt, i):
	if(houses[house - 1]) 