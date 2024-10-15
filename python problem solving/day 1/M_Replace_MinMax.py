n=int(input())
arr= list(map(int,input().split()))
mx=max(arr)
mn=min(arr)
mxindex=arr.index(mx)
mnindex=arr.index(mn)
arr[mxindex]=mn
arr[mnindex]=mx
print(*arr)