min = int(input("Enter a number over 60: "))
print("the number you entered is",min,)
cmin = min // 60
seconds = min % 60
print('The equivalent in hours and minutes is',cmin,'hours and',seconds,'minutes.')