'''Consider a currency system in which there are notes of seven denominations, namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100.
If the sum of Rs. N is input, write a program to computer smallest number of notes that will combine to give Rs. N. 

Input

The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output

Display the smallest number of notes that will combine to give N.

Constraints

1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000

Example

Input
3 
1200
500
242

Output
12
5
7

        
    if(n>100):
        x = int((str(n))[:len(str(n))-2])
        n = (n)%100
    if(n>=50):
        n = n - 50
        x = x + 1
    x = x + (n//10)
    n = n%10
    if(n == 5 or n == 2 or n == 1):
        x = x+1
        n=0
    if(n == 4 or n == 3):
        x = x+2
        n=0
    ans.append(x)'''

t = int(input())
ans =[]
notes = [100, 50, 10, 5, 2, 1]

for _ in range(t):
    N = int(input())
    i = 0
    n = 0
    while N > 0 and i < len(notes):
        if N >= notes[i]:
            N -= notes[i]
            n += 1
        else:
            i += 1
    ans.append(n)

for i in ans:
    print(i)
        
