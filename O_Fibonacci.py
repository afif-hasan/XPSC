n=int(input())

fibs=[0,1]

for i in range(2,n):
    fibs.append(fibs[i-1]+fibs[i-2])

print(fibs[n-1])
