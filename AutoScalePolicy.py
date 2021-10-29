import math

def finalInsatnces(instances,avg):
    for j in range(len(avg)):
        if (avg[j] < 25):
            if(instances > 1):
                instances = math.ceil(instances / 2)
                j = j + 10
        if j > len(avg):
            break
        
        if (avg[j] > 60):
            if((instances*2) < 217):
                instances = instances * 2
                j = j + 10
        if j > len(avg):
            break
    print(instances)
    return 0

instances = int(input('instances:'))
avg = []
N = int(input('N:'))
for i in range(0,N):
    ele = int(input())
    avg.append(ele)

finalInsatnces(instances,avg)                        