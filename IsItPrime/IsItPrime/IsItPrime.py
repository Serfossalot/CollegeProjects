while True:
    try:
        num = int(input("Enter a positive number: ").strip())
        if num <= 0:
            raise ValueError  # This will be caught below
    except ValueError:
        print('Error! Please enter a positive number.')
        continue

    print('Divisors: ', end=' ')
    count = 0
    for i in range(1, num + 1):
        if num % i == 0:
            print(i, end=' ')
            count += 1
    print()
    
    if count == 2:
        print(f'{num} is prime.')
    else:
        print(f'{num} is not prime.')

    cont = input('Do you want to continue? (Y/y) ').strip().lower()
    if cont != 'y':
        break
