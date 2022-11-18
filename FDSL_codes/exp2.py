marklist=[20,20,27,94,None,20,57,None,10,57,20,None,91,94,56,None]
total=0
absent_student=0
#calculate max and  min
max_val=marklist[0]
min_val=marklist[0]

#1
for mark in marklist:
 if mark==None:
   absent_student+=1
 else:
  total+= mark
  if mark<min_val:
    min_val=mark
  if max_val<mark:
    max_val=mark
    
	
print (f"a.Average Score of the class={total/len(marklist)}")
		
print (f"b.Highest Score ={max_val} and Lowest Score={min_val}")

print(f"c.Number of absent Students={absent_student}")

#calculating frequency
freq={}
for mark in marklist:	
	if mark!=None:
		if freq.get(mark)==None:
			freq[mark]=1
		else:
			freq[mark]+=1
		#print(freq)
highest_freq=0
highest_freq_mark=0
for mark in freq:
	if freq[mark]>highest_freq:
		highest_freq=freq[mark]
		highest_freq_mark=mark

print(f"d.Marks With Highest Frequency={highest_freq_mark}")
		


