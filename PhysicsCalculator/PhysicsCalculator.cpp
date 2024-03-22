#include <iostream>
#include <string>
#include "Functions.h"
#include "InputValidation.h"

int main()
{
     char input;
     std::string name;

     do 
     {

          ShowMenu();
          try
          {
               input = validateChar(input);
          }
          catch (const std::ios_base::failure& e)
          {
               std::cout << "ERROR: " << e.what() << std::endl;
          }
          OptionSelect(toupper(input));
          system("pause");
          system("cls");

     } while (input != 'E');

     return 0;
}
