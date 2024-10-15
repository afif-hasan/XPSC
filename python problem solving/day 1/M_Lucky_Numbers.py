start,end=map(int,input().split())


numbers=[]
for val in range(start,end+1,1):
    chk=str(val)
    flag=True
    for char in chk:
        if char=='4' or char=='7':
            continue
        else :
            flag=False
    if flag==True:
        numbers.append(val)
if len(numbers)==0:
    print("-1")
else:
    print(*numbers,sep=" ")
    