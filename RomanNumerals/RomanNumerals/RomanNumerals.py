


def get_valid_number ():
    """This Function Gets a number in between one and ten"""
    while True:
        try:
            x =  int(input("Please enter a number in between one and ten: "))
            if 1 <= x <= 10:
                return x
                       
        except ValueError:
            print("PLease enter a valid number between one and ten.")

roman_numerals = {1: "I", 2: "II", 3: "III", 4: "IV", 5: "V",
                  6: "VI", 7: "VII", 8: "VIII", 9: "IX", 10: "X"}

x = get_valid_number()
print(f"The number you entered is {x}.Converted to roman numerals it is represented as {roman_numerals[x]}.")




         
