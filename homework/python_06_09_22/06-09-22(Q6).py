# this program displays largest of three numbers

no_1= float(input("Enter 1st number:"))
no_2= float(input("Enter 2nd number:"))
no_3= float(input("Enter 3rd number:"))

if no_1>no_2>no_3 or no_1>no_3>no_2:
    print("%d is the greatest among three numbers"%no_1)
elif no_2>no_1>no_3 or no_2>no_3>no_1:
    print("%d is the greatest among three numbers"%no_2)
else:
    print("%d is the greatest among three numbers"%no_3)

