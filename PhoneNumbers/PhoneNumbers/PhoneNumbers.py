with open("output.csv", "w") as file:
    file.writelines(f"713-000-{i % 10000:04d}\n" 
                    for i in range(713_000_0000, 713_000_0998) 
                    if sum(1 for digit in str(i) if int(digit) % 2 == 0) % 2 == 1)
print("Output saved to output.csv")
