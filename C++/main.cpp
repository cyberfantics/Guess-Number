#include <time.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

class GuessNumber
{
    int lifes = 6;
    int computer_choice;
    int user_choice;

public:
    GuessNumber()
    {
        srand(time(0));
        computer_choice = rand() % 100 + 1;
    }

    void Guess()
    {
        cout << "Guess a number between 1-100 ";
        cin >> user_choice;
    }

    void Process()
    {
        if (user_choice == computer_choice)
        {
            cout << "You win!!\n";
            lifes = 0;
        }

        else if (user_choice < computer_choice && lifes > 1)
        {
            lifes--;
            cout << "Too Low!!! You have " << lifes << " remaining" << endl;
        }
        else if (user_choice > computer_choice && lifes > 1)
        {
            lifes--;
            cout << "Too High!!! You have " << lifes << " remaining" << endl;
        }
        else if (user_choice != computer_choice && lifes <= 1)
        {
            cout << "You lose you have no more life" << endl;
            lifes = 0;
        }
    }

    void run()
    {
        Guess();
        Process();
    }
};

int main()
{
}