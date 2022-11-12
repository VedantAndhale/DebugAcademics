print('''\t\t 1.linear search 
              2.sentinal search
              3.bianry search
              4.fibonacci search
              5.exit''')




#A
def linear():
    n=int(input("enter the student count"))
    print("enter the %i student roll no's"%(n))
    fds=list(map(int,input().split()))
    print("student roll no's are:",fds)
    x=int(input("enter the roll no. to be searched"))
    flag=0
    for i in range(n):
        if(x==fds[i]):
            flag=1
            print("roll number %i attended training program"%(x))
            break
    if (flag==0):
       print("roll number %i not attend training program"%(x))
       
#B
def sentinel():
    n=int(input("enter the student count"))
    print("enter the %i student roll no's"%(n))
    fds=list(map(int,input().split()))
    print("student roll no's are:",fds)
    x=int(input("enter the roll no. to be searched"))
    last= fds[n-1]
    fds[n-1]=x
    i=0
    while(fds[i]!=x):
        i=i+1
        fds[n-1]=last
    if ((i<n-1) or (fds[n-1]==x)):
       print("roll no %i attend training program"%(x))
    else:
       print("roll no %i not attended training program"%(x))

#C

def binary():
    n=int(input("enter the student count"))
    print("enter the %i student roll no's"%(n))
    fds=list(map(int,input().split()))
    print("student roll no's are:",fds)
    x=int(input("enter the roll no. to be searched"))
    flag=0
    l=0
    h=n-1
    while (l<=h):
        m=(l+h)
        if(x==fds[m]):
            flag =1
            print("roll no %i attended training program"%(x))
            break
        elif (x<fds[m]):
            h=m-1
        else:
            l=m+1
        if(flag==0):
            print("roll no %i not attended training program"%(x))

#D
def fibonacci():
    n=int(input("enter the student count"))
    print("enter the %i student roll no's"%(n))
    fds=list(map(int,input().split()))
    print("student roll no's are:",fds)
    x=int(input("enter the roll no. to be searched"))
    m1=1
    m2=0
    m= m1 +m2
    while(m<n):
        m2=m1
        m1=m
        m= m1+m2
        flag=0
        offset = -1
    while(m>1):
        i= offset +m2
        if (fds[i]<x):
           m=m1
           m1=m2
           m2= m-m1
           offset =i
        elif(fds[i]>x):
           m=m2
           m1=m1-m
           m2=m-m1
        else:
           flag = 1
           print("roll no %i attended training program"%(x))
           break
    if (flag == 0):
       print("roll no %i not attended training program"%(x))



while True:
  ch= int(input("enter your choice:"))
  if(ch ==1):
    linear()
  elif (ch ==2):
    sentinel()
  elif (ch ==3):
    binary()
  elif (ch ==4):
    fibonacci()
  elif (ch ==5):
    break




	
