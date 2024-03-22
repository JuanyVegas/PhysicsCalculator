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
               input = get_validated_input<int>();
          }
          catch (const std::ios_base::failure& e)
          {
               std::cout << "ERROR: " << e.what() << std::endl;
          }


     } while (input != 'E');

     return 0;
}
