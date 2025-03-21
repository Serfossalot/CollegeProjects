#lottery
import random

n1 = -1
n2 = -1
n3 = -1

num1 = int(input('First number: '))
while (num1 < 0 or num1 > 100):
    num1 = int(input("First number is out of range. Choose in between 0 and 99. "))
num2 = int(input('Second number: '))
while (num2 < 0 or num2 > 100):
    num2 = int(input("Second number is out of range. Choose in between 0 and 99. "))
num3 = int(input('Third number: '))
while (num3 < 0 or num3 > 100):
    num3 = int(input("Third number is out of range. Choose in between 0 and 99. "))

counter = 1
while ((n1 != num1) or (n2 != num2) or (n3 != num3)):
       n1 = random.randint(0,99)
       n2 = random.randint(0,99)
       n3 = random.randint(0,99)
       counter += 1
print(f"It took {counter} iterations for the lottery to match your numbers. ")