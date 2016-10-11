#include <iostream>
#include "Estrax.h"
using namespace std;

string Menu(string input)
{
    return input;
 
}


int main()
{
    string input;
    
    cout << "Welcome To The Menu of Estrax Kitchen" << endl;
    cout << Menu("Select From The Menu! type <menu>") << endl;
    bool wait = true;
    while (wait == true)
    {
    cin>> input;
       if (input == "menu")
    {
      inputMenu();  
    }
       if (input == "hamburgers")
    {
        eattinghamBurgers();
    }
    if (input == "cheeseburgers")
    {
        eattingcheeseBurgers();
    }
    if (input == "angusburgers")
    {
      eattingangusBurgers();
    }
    Hamburgers = 2;
    Cheeseburgers = 3;
    Angusburgers = 10;
    }
}
