n=int(input())
str=input()
count1=0
count2=0
for i in str:
  if i=="A":
    count1=count1+1
  elif i=="D":
    count2=count2+1 
if count1>count2:
  print("Anton")
elif count1<count2:
  print("Danik")
else:
  print("Friendship")        