k,n,w=input().split()
k=int(k)
n=int(n)
w=int(w)
cost=0
for i in range(1,w+1):
  cost=cost+i*k
if cost<=n:
  borrow=0
else:
  borrow=cost-n
print(borrow)    


         