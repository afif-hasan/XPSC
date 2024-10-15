ss=input()
total_cnt=0
l_count,r_count=0,0
tmp=[]
res=[]
for char in ss:
    if char=='L':
        l_count=l_count+1
        tmp.append('L')
    elif char=='R':
        r_count=r_count+1
        tmp.append('R')
    if l_count==r_count:
        total_cnt=total_cnt+1
        res.append(tmp[:])
        tmp.clear()
        l_count=0
        r_count=0
print(total_cnt)
for i in range(0,len(res)):
    print(*res[i],sep='')
