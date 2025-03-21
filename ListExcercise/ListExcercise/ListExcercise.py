def generate_multiples():
    while True:
        start = int(input("What is the starting value? "))
        end = int(input("What is the last value? "))
        multiple = int(input("What multiple do you want to use? "))

        numbers = list(range(start, end + 1, multiple))
        print(numbers)
        print(f"There are {len(numbers)} numbers in this list of numbers.")

        cont = input("Do you want to continue? (Y/N) ").strip().upper()
        if cont != 'Y':
            break

generate_multiples()
