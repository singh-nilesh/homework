# This program checks is a number is prime or not

num=int(input('Enter any number:'))
if num>=1:
    if num%2==0:
        print("The number %d is not prime"%(num))
    else:
        if num%3==0:
            print("The number %d is not prime"%(num))
        else:
            if num%5==0:
                print("The number %d is not prime"%(num))
            else:
                if num%7==0:
                    print("The number %d is not prime"%(num))
                else:
                    print("The number %d is prime"%(num))
    
else:
    print("The number %d is not prime\n Reason:numbers less than 1 can't be prime"%(num))

