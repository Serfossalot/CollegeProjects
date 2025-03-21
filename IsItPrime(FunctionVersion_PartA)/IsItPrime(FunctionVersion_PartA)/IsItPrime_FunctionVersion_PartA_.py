def IsItPrime(value):
    count = 0
    for i in range(1, value + 1):
        if value % i == 0:
            count += 1
    if count == 2:
        print(f'{value} is prime.')

while True:
    try:
        num = int(input('Please enter a positive number: '))
        if num <= 0:
            raise ValueError("Number is not positive.")
        for i in range(0, num):
            IsItPrime(i)
    except ValueError:
        print('Invalid input! Please enter a positive integer.')
        continue
    cont = input('Do you want to continue? (Y/y): ').lower()
    if cont != 'y':
        break
