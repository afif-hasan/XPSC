number=input()
ans=int(str(number[::-1]))
num_rev=number[::-1]
print(ans)
if number==num_rev:
    print("YES")
else:
    print("NO")



