#!/bin/python3

import sys
import math

def minimumTime(b, m, k):
    if(b.count(1) < m):
        return -1
    else:
        ones = [i for i, x in enumerate(b) if x == 1]
        i = 1
        distances = []
        while(i < len(ones)):
            distances.append(ones[i] - ones[i-1])
            i += 1
        i = 0
        
        min = math.inf
        min_index = 0
        
        while(i <= (len(distances) - (m - 1))):
            if(sum(distances[i : (i + (m-1))]) < min):
                min = sum(distances[i : (i + (m-1))])
                min_index = i
            i += 1
        shops = ones[min_index: (min_index + m)]
        
        cost = shops[0]
        i = 1
        while(i < len(shops)):
            cost += (shops[i] - shops[i - 1]) * (i * k)
            i += 1
        return cost
        
if __name__ == "__main__":
    n, m, k = input().strip().split(' ')
    n, m, k = [int(n), int(m), int(k)]
    b = list(map(int, input().strip().split(' ')))
    result = minimumTime(b, m, k)
    print(result)
