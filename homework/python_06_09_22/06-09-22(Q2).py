# This program finds largest of two numbers
no_1 = float(input("Enter 1st number:"))
no_2 = float(input("Enter 2nd number:"))
if no_1>no_2:
    print("number %d is greater than %d"%(no_1,no_2))
elif no_1==no_2:
    print("Numbers %d & %d are equal"%(no_1,no_2))
else:
    print("%d is greater than %d"%(no_2,no_1))