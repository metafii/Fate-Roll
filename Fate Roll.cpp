//Fate Roll
#include <iostream>

void d4(int a);
void d6(int a);
void d8(int a);
void d10(int a);
void d12(int a);
void d20(int a);
void cointoss(int a);

int main()
{
    int a;
    int procces_no;
    std::cout << "WELCOME TO FATE ROLL!\n" << std::endl;
    std::cout << "1. _d4 Dice\n2. _d6 Dice\n3. _d8 Dice\n4. _d10 Dice\n5. _d12 Dice\n6. _d20 Dice\n7. Coin Toss\n" << std::endl;
    std::cout << "Choose a dice you want to roll: ";
    std::cin >> procces_no;
    if (procces_no > 7 || procces_no < 1)
    {
        std::cout << "\nPlease enter the numbers in the options. The program is shutting down..." << std::endl;
    }
    else
    {
        std::cout << "\nHow many times the dice will be rolled: ";
        std::cin >> a;
        if (a < 1)
        {
            std::cout << "\nNumbers less than one are not acceptable. The program is shutting down..." << std::endl;
        }
        else
        {
            if (procces_no == 1)
            {
                std::cout << "\n"; d4(a);
            }

            else if (procces_no == 2)
            {
                std::cout << "\n"; d6(a);
            }

            else if (procces_no == 3)
            {
                std::cout << "\n"; d8(a);
            }

            else if (procces_no == 4)
            {
                std::cout << "\n"; d10(a);
            }

            else if (procces_no == 5)
            {
                std::cout << "\n"; d12(a);
            }

            else if (procces_no == 6)
            {
                std::cout << "\n"; d20(a);
            }

            else if (procces_no == 7)
            {
                std::cout << "\n"; cointoss(a);
            }
        } 
    }    
}

void d4(int a)
{
    srand(time(NULL));
    int sum = 0;
    int rng;
    std::cout << a << "d4\n" << std::endl;
    for (int i = 0; i < a; i++)
    {
        rng = rand() % 4 + 1;
        sum += rng;
        std::cout << rng << " ";
    }
    std::cout << "\n\nSum: " << sum << std::endl;
}

void d6(int a)
{
    srand(time(NULL));
    int sum = 0;
    int rng;
    std::cout << a << "d6\n" << std::endl;
    for (int i = 0; i < a; i++)
    {
        rng = rand() % 6 + 1;
        sum += rng;
        std::cout << rng << " ";
    }
    std::cout << "\n\nSum: " << sum << std::endl;
}

void d8(int a)
{
    srand(time(NULL));
    int sum = 0;
    int rng;
    std::cout << a << "d8\n" << std::endl;
    for (int i = 0; i < a; i++)
    {
        rng = rand() % 8 + 1;
        sum += rng;
        std::cout << rng << " ";
    }
    std::cout << "\n\nSum: " << sum << std::endl;
}

void d10(int a)
{
    srand(time(NULL));
    int sum = 0;
    int rng;
    std::cout << a << "d10\n" << std::endl;
    for (int i = 0; i < a; i++)
    {
        rng = rand() % 10 + 1;
        sum += rng;
        std::cout << rng << " ";
    }
    std::cout << "\n\nSum: " << sum << std::endl;
}

void d12(int a)
{
    srand(time(NULL));
    int sum = 0;
    int rng;
    std::cout << a << "d12\n" << std::endl;
    for (int i = 0; i < a; i++)
    {
        rng = rand() % 12 + 1;
        sum += rng;
        std::cout << rng << " ";
    }
    std::cout << "\n\nSum: " << sum << std::endl;
}

void d20(int a)
{
    srand(time(NULL));
    int sum = 0;
    int rng;
    std::cout << a << "d20\n" << std::endl;
    for (int i = 0; i < a; i++)
    {
        rng = rand() % 20 + 1;
        sum += rng;
        std::cout << rng << " ";
    }
    std::cout << "\n\nSum: " << sum << std::endl;
}

void cointoss(int a)
{
    int heads = 0;
    int tails = 0;
    int rng;
    int ct;
    srand(time(NULL));
    std::cout << "1. Heads\n2. Tails\n";
    std::cout << "Heads or Tails?" << std::endl;
    std::cin >> ct;
    if (ct == 1 || ct == 2)
    {
        std::cout << "\n" << a << " times Coin Toss" << std::endl;
        std::cout << std::endl;
        for (int i = 0; i < a; i++)
        {
            rng = rand() % 2;
            if (rng == 0)
            {
                std::cout << "HEADS ";
                heads++;
            }
            else if (rng == 1)
            {
                std::cout << "TAILS ";
                tails++;
            }
        }
        std::cout << "\n\nHeads: " << heads << std::endl;
        std::cout << "Tails: " << tails << std::endl;
        std::cout << std::endl;
        if (ct == 1)
        {
            if (heads > tails)
                std::cout << "Win!!!" << std::endl;

            else if (heads == tails)
                std::cout << "Draw." << std::endl;

            else
                std::cout << "Lose..." << std::endl;
        }

        else if (ct == 2)
        {
            if (tails > heads)
                std::cout << "Win!!!" << std::endl;

            else if (tails == heads)
                std::cout << "Draw." << std::endl;

            else
                std::cout << "Lose..." << std::endl;
        }
    }
    else
        std::cout << "\nPlease enter the numbers in the options. The program is shutting down..." << std::endl;
}
