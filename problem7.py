my_list = [4,10,2,6,3]
over = []
for i in range(my_list[0],(my_list[1]+1)):
     over.append(i)
     
overlap = []     
for x in range(my_list[2],(my_list[3]+1)):
    overlap.append(x)
    
count = 0    
for i in over:
     if i in overlap:
          count += 1; 
print(count);
if count > 0:
     print(True);    
else:
     print(False);           
          