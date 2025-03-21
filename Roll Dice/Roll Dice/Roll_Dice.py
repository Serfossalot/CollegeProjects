import random
x = random.choice(range(2,12))
y = random.choice(range(2,12))
print("Player one's number is :",x)
print("Player two's number is :",y)
if x > y:
    print("Player one has won")
elif x == y:
    print("Both players have rolled the same number, please try again")
else:
    print ("Player two has won")

