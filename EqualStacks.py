#!/bin/python

import sys


n1, n2, n3 = raw_input().strip().split(' ')
n1, n2, n3 = [int(n1),int(n2),int(n3)]
h1 = map(int,raw_input().strip().split(' '))[::-1]
h2 = map(int,raw_input().strip().split(' '))[::-1]
h3 = map(int,raw_input().strip().split(' '))[::-1]

sum_h1 = h1[0]
sum_h2 = h2[0]
sum_h3 = h3[0]

i = 1
j = 1
k = 1

equal_sums = 0

while(i < n1 and j < n2 and k < n3):
	max_sum = max(sum_h1, sum_h2, sum_h3)

	while((sum_h1 < max_sum) and i < n1):
		sum_h1 += h1[i]
		i += 1


	while((sum_h2 < max_sum) and j < n2):
		sum_h2 += h2[j]
		j += 1


	while((sum_h3 < max_sum) and k < n3):
		sum_h3 += h3[k]
		k += 1

	if(sum_h1 == sum_h2 == sum_h3):
		equal_sums = sum_h1
		if(i < n1):
			sum_h1 += h1[i]
			i += 1
		if(j < n2):
			sum_h2 += h2[j]
			j += 1
		if(k < n3):
			sum_h3 += h3[k]
			k += 1

if(i == n1 and not(equal_sums)):
	while(j < n2 and sum_h2 < sum_h1):
		sum_h2 += h2[j]
		j += 1
	while(k < n3 and sum_h3 < sum_h1):
		sum_h3 += h3[k]
		k += 1

elif(j == n2 and not(equal_sums)):
	while(i < n1 and sum_h1 < sum_h2):
		sum_h1 += h1[i]
		i += 1
	while(k < n3 and sum_h3 < sum_h1):
		sum_h3 += h3[k]
		k += 1	
		
elif(k == n3 and not(equal_sums)):
	while(i < n1 and sum_h1 < sum_h2):
		sum_h1 += h1[i]
		i += 1
	while(j < n2 and sum_h2 < sum_h1):
		sum_h2 += h2[j]
		j += 1

if(sum_h1 == sum_h2 == sum_h3):
	equal_sums = sum_h1
	
print equal_sums
