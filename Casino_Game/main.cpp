#include <iostream>
#include <cstdlib> 
#include <time.h> 
#include <stdlib.h> 
#include <Windows.h>

using namespace std;

int main() {

    int money = 100;
    int max = 10;
    int betMoney, betNumber, result;

    while (money > 0) {

        srand(time(0));

        cout << "\t\t\t $$$$$$$$$$$$$$$$$$$$$$$$$$ \n";
        cout << "\t\t\t $$$$$$$$$$$$$$$$$$$$$$$$$$ \n";
        cout << "\t\t\t $$                      $$ \n";
        cout << "\t\t\t $$     C A S I N O      $$ \n";
        cout << "\t\t\t $$                      $$ \n";
        cout << "\t\t\t $$$$$$$$$$$$$$$$$$$$$$$$$$ \n";
        cout << "\t\t\t $$$$$$$$$$$$$$$$$$$$$$$$$$ \n\n";
        cout << "\t\t\t Any letter for EXIT.\n\n";
        cout << "\t\t\t $$$$$$$$$$$$$$$$$$$$$$$$$$ \n\n";
        cout << "\t\t\t Your money " << money << " $$$.\n\n";
        cout << "\t\t\t $$$$$$$$$$$$$$$$$$$$$$$$$$ \n\n";
        cout << "\t\t\t Your bet: ";
      //  cout << "\t\t\t";
        cin >> betMoney;
        if (cin.fail())
        {
            break;
        }

 /*       while (cin.fail())
        {
            cin.clear();
            cin.ignore();
            cout << "\t\t\t Not a valid number. Please reenter: ";
            // cout << "\t\t";
            cin >> betMoney;
        }
*/
        cout << endl;

        while (betMoney > money) {
            cout << "\t\t\t You dont have enough money. Please choose lower bet.\n";
            cout << "\t\t\t Your bet: ";
            cin >> betMoney;
        }

        cout << "\t\t\t Bet on number 1 - 10.\n";
        cout << "\t\t\t Your number: ";
        cin >> betNumber;
        while (cin.fail() || betNumber < 1 || betNumber > 10)
        {
            cin.clear();
            cin.ignore();
            cout << "\t\t\t Not a valid number. Please reenter: ";
            cin >> betNumber;
        }
        cout << endl;

        result = (rand() % max + 1);
        cout << "\t\t\t Winning number: ";
        cout << result << endl;

        if (result == betNumber) {
            cout << "\t\t\t Congratulation!!! You won!!!\n";
            money = (money - betMoney) + (betMoney * 10);
            Sleep(3000);
            system("cls");
        }
        else {
            cout << "\t\t\t You loose. Better luck in your next game.\n";
            money = money - betMoney;
            Sleep(3000);
            system("cls");
        }
    }

    if (money <= 0)
    {
        cout << "You dont have money. Goodbye!";
    }
    else
    {
        cout << "Goodbye!";
    }

    return 0;
}

