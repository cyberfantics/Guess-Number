import random as rd
import os
lifes = 6
computer_choice = rd.randint(1, 100)
game_continue = True
os.system('cls')
while(game_continue):
    user_choice = int(input("Guess a number between 1-100 "))
    if user_choice == computer_choice:
        print(f"You Win!!! You have {lifes} lifes remaining\n")
        game_continue = False
    elif user_choice < computer_choice and lifes > 0:
        lifes = lifes-1
        print(f"Too Low!!!You have {lifes} remaining\n")
    elif user_choice > computer_choice and lifes > 0:
        lifes = lifes-1
        print(f"Too High!!!You have {lifes} remaining\n")

    if lifes == 0:
        print("You lose!!!You have no more life.\n")
        print(f"Computer choice is {computer_choice}")
        game_continue = False

input()
