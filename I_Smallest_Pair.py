tst=int(input())
for t in range(tst):
    n=int(input())
    numbers=list(map(int,input().split()))
    mn= 1e18+2
    for i in range(0,n-1):
            for j in range(i+1,n):
                mn=min(mn,numbers[i]+numbers[j]+j-i)
    print(mn)