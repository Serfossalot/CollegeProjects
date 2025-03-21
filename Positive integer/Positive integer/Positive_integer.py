num = int(input('Please enter a postive number: '))
while num < 1:
  num = int(input('You failed to enter a postive number, please try again: '))
counter = 0
while counter < num:
    print(counter)
    counter += 2