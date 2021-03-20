#include <iostream>

using namespace std;

int main()
{
    string playerName, startOption;
    int hpLost = 5;

    cout << "Enter your name to continue: ";
    cin >> playerName;
    cout << "Welcome to game, " << playerName << "!" << endl;
    cout << "Type 'START' to start the game, and 'TUTORIAL' to start the tutorial!" << endl;
    cin >> startOption;
    if (startOption == "START")
    {
        cout << endl << endl;
        cout << "Boss: You will never defeat me!" << endl << endl;
        cout << "You got attacked!" << endl << "You lost: " << hpLost << "HP!" << endl;

    }
    else if(startOption == "TUTORIAL")
    {
        ///tutorial
    }
    else
    {
        cout << "Invalid command." << endl;
        cout << "Type 'START' to start the game, and 'TUTORIAL' to start the tutorial!" << endl;
        cin >> startOption;
    }


    return 0;
}
