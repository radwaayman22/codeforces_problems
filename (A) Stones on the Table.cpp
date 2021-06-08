n=int(input())
color=input()
count=0
for i in range(n-1):
  if color[i]==color[i+1]:
    count=count+1
print(count)  