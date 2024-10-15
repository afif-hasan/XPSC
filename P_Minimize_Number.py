n=int(input())
numbers=list(map(int,input().split()))

res=[]
for i in range(0,len(numbers)):
    total=0
    while numbers[i]%2==0:
        total+=1
        numbers[i]//=2
    res.append(total)

print(min(res))
    
   