n=int(input())
numbers=list(map(int,input().split()))

cntt={}
for nums in numbers:
    if nums in cntt:
        cntt[nums]+=1
    else:
        cntt[nums]=1

total=0
for nums,cnts in cntt.items():
    if cnts>nums:
        total+=cnts-nums
    elif cnts<nums:
        total+=cnts
print(total)

