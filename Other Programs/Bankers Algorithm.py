#!/usr/bin/python3

n=5 #Processes
m=3 #Resources

alloc = [[0, 1, 0 ],[ 2, 0, 0 ],
        [3, 0, 2 ],[2, 1, 1] ,[ 0, 0, 2]]

maxi = [[7, 5, 3 ],[3, 2, 2 ],
        [ 9, 0, 2 ],[2, 2, 2],[4, 3, 3]]
 
avail = [3, 3, 2]

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
