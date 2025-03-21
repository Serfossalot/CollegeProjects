import random
def who_won(P1, P2):
    return 0 if P1 == P2 else (1 if (P1 - P2) % 3 == 1 else 2)
P1_int_val = random.randint(0, 2)
P2_int_val = random.randint(0, 2)
options = ["Rock", "Paper", "Scissors"]
P1_string_val = options[P1_int_val]
P2_string_val = options[P2_int_val]
print(f"Player one has {P1_string_val}.")
print(f"Player two has {P2_string_val}.")
result = who_won(P1_int_val, P2_int_val)
if result == 0:
    print("No one won. Please try again. (Tie)")
elif result == 1:
    print("Player one is the winner.")
else:
    print("Player two is the winner.")
