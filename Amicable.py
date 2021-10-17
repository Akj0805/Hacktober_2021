A=int(input("enter the first number: "))
B=int(input("enter the second number: "))
sum1=0
sum2=0
#finding the factors of the first number
for I in range (1,A):
    if(A%I==0):
        sum1+=I

#finding the factors of the second number
for J in range(1,B):
    if(B%J==0):
        sum2+=J

#checking if they are amicable numbers or not
if ((sum1==B) and (sum2==A)):
    print("they are amicable numbers")
else:
    print("they are not amicable numbers")
