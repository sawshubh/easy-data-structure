MAX_CHAR = [26]
def minChanges(str):
    n = len(str)
    if(n > MAX_CHAR[0]):
        return -1
    dist_count = 0
    count = [0] * MAX_CHAR[0]
    for i in range(n):
        if (count[ord(str[i]) - ord('a')]==0):
            dist_count += 1
        count[(ord(str[i]) - ord('a'))] += 1
    return (n - dist_count)

if __name__ == '__main__':
    str = str(input())
    print(minChanges(str))
        