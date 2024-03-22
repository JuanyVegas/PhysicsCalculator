#pragma once
#include <ios>  // Provides ios_base::failure
#include <iostream>  // Provides cin
#include<string> //for string manipulation
#include<sstream> //for string manipulation and comparison

//Function Prototypes
int validateInt(int&); //use the validation method to vaildate and return a data type integer pass by reference &
double validateDouble(double&); //use the validation method to vaildate and return a data type double pass by reference &
char validateChar(char&); //use the validation method to vaildate and return a data type char pass by reference &
std::string validateString(std::string&); //use the validation method to vaildate and return a data type string pass by reference &

template <typename T>
T getValidatedInput()
{
     // Get input of type T
     T result;
     std::cin >> result;

     // Check if the failbit has been set, meaning the beginning of the input
     // was not type T. Also make sure the result is the only thing in the input
     // stream, otherwise things like 2b would be a valid int.
     if (std::cin.fail() || std::cin.get() != '\n')
     {
          // Set the error state flag back to goodbit. If you need to get the input
          // again (e.g. this is in a while loop), this is essential. Otherwise, the
          // failbit will stay set.
          std::cin.clear();

          // Clear the input stream using and empty while loop.
          while (std::cin.get() != '\n')
               ;

          // Throw an exception. Allows the caller to handle it any way you see fit
          // (exit, ask for input again, etc.)
          throw std::ios_base::failure("Invalid input.");
     }

     return result;
}

//Function Definitions
int validateInt(int& intInput)
{
     while (true)
     {
          std::cout << "Enter an integer: ";

          try
          {
               intInput = getValidatedInput<int>();
          }
          catch (std::exception e)
          {
               std::cerr << e.what() << std::endl;
               continue;
          }

          break;
     }

     return intInput;
}

double validateDouble(double& doubleInput)
{
     while (true)
     {
          std::cout << "Enter a number with or without decimals (double): ";

          try
          {
               doubleInput = getValidatedInput<double>();
          }
          catch (std::exception e)
          {
               std::cerr << e.what() << ": Invalid input." << std::endl;
               continue;
          }

          break;
     }

     return doubleInput;
}

char validateChar(char& charInput)
{
     while (true)
     {
          std::cout << "Enter a single letter: ";

          try
          {
               charInput = getValidatedInput<char>();
          }
          catch (std::exception e)
          {
               std::cerr << e.what() << ": Invalid input." << std::endl;
               continue;
          }

          break;
     }

     return charInput;
}

std::string validateString(std::string& stringInput)
{
     while (true) //use cin, getline() for this 
     {
          std::cout << "Enter a word (no spaces): ";

          try
          {
               stringInput = getValidatedInput<std::string>();
          }
          catch (std::exception e)
          {
               std::cerr << e.what() << ": Invalid input." << std::endl;
               continue;
          }

          break;
     }

     return stringInput;
}
