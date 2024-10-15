a,b=map(int,input().split())
code=input()

flg=True
if len(code)< (a+b+1) or code[a]!='-':
    flg=False
for i in range(0,len(code)):
    if i!=a:
        if code[i]>='0' and code[i]<='9':
            continue
        else:
            flg=False
            break

if flg is True:
    print("Yes")
else:
    print("No")

    

