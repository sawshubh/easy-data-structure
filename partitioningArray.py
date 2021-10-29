'''PARTITIONING ARRAY'''
from collections import Counter

def PartitioningArray(A, k):
    if not A and k == 1:
        pass
    n = len(A)
    if k > n or n%k:
        pass
    groupnum = n//k
    cnt = Counter(A)
    if groupnum < max(cnt.values()):
        print('False')
    else:    
        print('True')    

A = []
N = int(input())
for i in range(0,N):
    ele = int(input())
    A.append(ele)
    
K = int(input())
PartitioningArray(A,K)    