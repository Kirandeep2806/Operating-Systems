#!/usr/bin/python3

n=int(input("Enter the no.of processes : ")) #Processes
m=int(input("Enter the no.of resources : ")) #Resources

alloc = []
maxi = []
avail=[]
for i in range(n):
	inp = list(map(int, input(f"Enter alloted resources {i+1} : ").split(" ")))
	alloc.append(inp)
for i in range(n):
	inp = list(map(int, input(f"Enter maximum resources {i+1} : ").split(" ")))
	maxi.append(inp)
 
for i in range(m):
	avail.append(int(input(f"Available resources R{i+1} : ")))

need=[]
for i in range(n):
	row_need=[]
	for j in range(m):
		row_need.append(maxi[i][j]-alloc[i][j])
	need.append(row_need)
# print(need)

finished=[0]*n
safeSequence=[0]*n
safeSequenceIndex=0

for i in range(n):
	for j in range(n):
		if finished[j]==0:
			flag=0
			for k in range(m):
				if need[j][k]>avail[k]:
					flag=1
					break
			if flag==0:
				safeSequence[safeSequenceIndex]=j
				safeSequenceIndex+=1
				for k in range(m):
					avail[k]+=alloc[j][k]
				finished[j]=1

print(safeSequence)
