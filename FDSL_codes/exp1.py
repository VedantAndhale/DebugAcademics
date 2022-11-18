#A
def intersection (l1,l2):
	res=[]
	for student in l1:
		if student in l2:
			res.append(student)
	return res  

                     
a=[1,2,3,4,5,6,7]
b=[2,3,6,7,10]
c=[2,4,6,8,10,12]
print(f"A={a}|\nB={b}|\nc={c}\n")
print(f"a",end=" ")
print(intersection(a,b))

def union (l1,l2):
	res=l2.copy()
	for student in l1:
		if not student in l2:
			res.append(student)
	return res	
	
#B
def diff (l1,l2):
	res=[]
	for student in l1:
		if not student in l2:
			res.append(student)
	return res
u=union(a,b)
i=intersection(a,b)
print(diff(u,i))

#C
diffcb=diff(c,b)

print(diff(diffcb,a))

#D
unionac=union(a,c)
print(diff(unionac,b))
