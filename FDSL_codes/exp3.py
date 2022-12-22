


row = int(input("enter the row count :"))
col = int(input("enter the column count: "))


m1=[[0 for i in range (col)]for i in range(row)]
m2=[[0 for i in range (col)]for i in range(row)]
ans=[[0 for i in range (col)]for i in range(row)]


print("Enter data for matrix1: ")
for i  in range(row):
	for j  in range(col):
		m1[i][j]=int(input(f"Enter value for {i+1} and col{j+1}:"))

print("Enter data for matrix 2: ")
for i  in range(row):
	for j  in range(col):
		m2[i][j]=int(input(f"Enter value for {i+1} and col{j+1}:"))	




#Addition
for i  in range(row):
	for j  in range(col):
		ans[i][j]=m1[i][j]+m2[i][j]

print(ans)


#subtraction
for i  in range(row):
	for j  in range(col):
		ans[i][j]=m1[i][j]-m2[i][j]

print(ans)


#transpose
ans=[[0 for i in range (col)]for i in range(row)]
for i  in range(row):
	for j  in range(col):
		ans[i][j]=m1[i][j]

print("4.Transpose:",ans)


#multiplication
if(len(m1[0])==len(m2)):
	print("Mulltiplication possible")
	ans=[[0 for i in range (len(m2[0]))]for i in range(len(m1))]

for i  in range(row):
	for j  in range(col):
		for k in range(row):
			ans[i][j]+=m1[i][j]*m2[i][j]
else:
	print("multiplicstion not possible")

	print("Multiplicstion: ", ans)