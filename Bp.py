def BalPara(expre):
    left = 0
    right = 0
    for i in expre:
        if (i == '{') or (i == '(') or (i == '['):
            left += 1
        else:
            right += 1
    print(left)
    print(right)        
    if(left < right):
        print(right - left)
    elif(left > right):
        print(left - right)
    else:
        print('0')
    return 0    

#driver program            
expre = input()
BalPara(expre)