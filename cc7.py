n=int(input("enter number of product:"))
prod={}
for i in range(n):
    p=input("enter product name:")
    prod[p]=int(input("ente price:"))
q=True
while q:
    p=input("enter product for price or quit to exit:")
    if p=='quit':
        break
    if p in prod:
        print("price of",p,"is",prod[p])
    else:
        print(p,"not found")
