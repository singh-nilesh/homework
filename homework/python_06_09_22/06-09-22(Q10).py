# this program displays if the driver is insured or not

mar_stat= input('''are you married?
press "y" if yes
Press "n" if not  ''')
age= int(input("What is your age:"))
gender= input(''' Enter "m" if your are male
Enter "f" if you are femail''')

if mar_stat=='y':
        print("your are not eligible for insurense.")
else:
    if age>30:
        if gender=='m':
            print("your are not eligible for insurense.")
    elif age>25:
            if gender=='f':
             print("your are not eligible for insurense.")
    else:
        print("your are eligible for insurense.")