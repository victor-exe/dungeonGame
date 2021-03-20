#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <time.h>
#include <conio.h>
#include <fstream>

using namespace std;

void clearScreen()
{
    ifstream fin ("dungeonGame.txt");
    char ascii;

    if (system("CLS")) system("clear");

    while(fin >> noskipws >> ascii)
    {
        cout << ascii;
    }

}

int main()
{
    /*srand (time(NULL));
    int v1;
    v1 = rand() % 100;*/


    char option;
    string playerName, startOption, option1;
    int playerHP = 100, bossHP = 175;
    int hpLost = 5, damageGiven = 5, hpHealed = 10;
    bool bossDead = false, playerDead = false;
    bool bossDecision = true; ///false == heal --- true == attack


    cout << "Enter your name to continue: ";
    cin >> playerName;

    clearScreen();

    cout << endl << "Welcome, " << playerName << "!" << endl << endl;
    while(true)
    {
        cout << "    Press '1' to start the game" << endl << "    Press '2' to start the tutorial" << endl << "    Press '3' for credits!" << endl;
        option = getch();

        if (option == '1') /// game start
        {
            clearScreen();
            cout << endl << endl;
            cout << "Boss: You will never defeat me!" << endl << endl;
            while(bossDead == false && playerDead == false)
            {
                ///boss decides
                if(bossDecision == true)
                {
                    cout << "Boss attacked you!" << endl << "You lost " << hpLost << "HP!" << endl;
                    playerHP -= hpLost;
                    cout << "You now have " << playerHP << "HP!" << endl;
                }
                else
                {
                    cout << "Boss healed!" << endl;
                }
                cout << "Attack or heal?" << endl;
                cin >> option1;
                if(option1 == "ATTACK")
                {
                    cout << "You attacked boss." << endl;
                    cout << "You gave " << damageGiven << " damage to boss.";
                }
                else if(option1 == "HEAL")
                {
                    cout << "You drank a potion and it gave you " << hpHealed << "HP." << endl;
                }
            }

        }

        else if(option == '2') /// start tutorial
        {
            clearScreen();
            cout << endl << "Hello " << playerName << "!" << endl;
            cout << "I will teach you the basics of game!" << endl << endl;
            cout << "In boss game, you will fight a boss. He can attack you, or heal himself." << endl;
        }

        else if(option == '3')
        {
            clearScreen();
            cout << "==MADE BY:==" << endl << "@Stefan360 & @victor-exe" << endl;
        }



        else
        {
            clearScreen();
            cout << "Invalid command." << endl;
        }
    }


    return 0;
}
