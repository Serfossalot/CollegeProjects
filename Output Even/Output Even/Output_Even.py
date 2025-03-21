#Programmer Joel Serfoss
#IDE used: Visual Studio
while True:
    try:
        num = int(input('Please enter a postive integer: '))
        if num > 0:
            break
        else:
            print("ERROR! Please enter a positive integer.")  
         
    except ValueError:
        print('Invalid input. Please enter a positive integer.')

print (f"The number you entered is {num}.")
print()
print(f'Even numbers up to {num}: ')
for i in range(1, num):
    if i % 2 ==  0:
     print(i)

  
            
            