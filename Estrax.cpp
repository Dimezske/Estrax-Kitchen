#include <iostream>
#include "Estrax.h"

using namespace std;

int Hamburgers;
int Cheeseburgers;
int Angusburgers;

void inputMenu()
{
    cout << "<hamburgers>" << endl;            /*These are the Global Integer Variables There are 3 of them They are used in an extern from the header file*/
    cout << "<cheeseburgers>" << endl;
    cout << "<angusburgers>" << endl;
}

void eattinghamBurgers()
{
    cout << "What would you like to Eat?" << endl;
    cout << "Eatting " << Hamburgers << " Hamburgers" << endl;
    
}

void eattingcheeseBurgers()
{
    cout << "What would you like to Eat?" << endl;
    cout << "Eatting " << Cheeseburgers << " Cheeseburgers" << endl;
    
}

void eattingangusBurgers()
{
    cout << "What would you like to Eat? " << endl;
    cout << "Eatting " << Angusburgers << " Angusburgers" << endl;
    
}
