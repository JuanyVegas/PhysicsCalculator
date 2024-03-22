#pragma once

#include <string>
#include <iostream>
#include "InputValidation.h"

void ShowMenu();
void OptionSelect(char);
void CalculateVelocity();
void CalculateAcceleration();
int MotionMenu();
void CalculateMotion(int);
void CalculateNewtonsSecondLaw();
void CalculateWeight();
void ClearScreen();
std::string Capitalize(std::string);




void ShowMenu()
{
     std::cout << "PHYSICS CALCULATOR" << std::endl;
     std::cout << "\'V\' - TO CALCULATE VELOCITY" << std::endl;
     std::cout << "\'A\' - TO CALCULATE ACCELERATION" << std::endl;
     std::cout << "\'M\' - TO CALCULATE MOTION" << std::endl;
     std::cout << "\'N\' - TO CALCULATE NEWTON'S 2ND LAW" << std::endl;
     std::cout << "\'W\' - TO FIND WEIGHT" << std::endl;
     std::cout << "\'E\' - TO EXIT" << std::endl;
}

void OptionSelect(char selection)
{
     int subMenuSelection;
     switch (selection)
     {
     case('V'):
          CalculateVelocity();
          break;
     case('A'):
          CalculateAcceleration();
          break;
     case('M'):
          subMenuSelection = MotionMenu();
          CalculateMotion(subMenuSelection);
          break;
     case('N'):
          CalculateNewtonsSecondLaw();
          break;
     case('W'):
          CalculateWeight();
          break;
     case('E'):
          break;
     default:
          std::cout << "Not a valid selection." << std::endl;
          break;
     }
}

void CalculateVelocity()
{
     std::string timeUnits, distanceUnits;
     double distance, time;

     std::cout << "ENTER THE CHANGE IN DISTANCE" << std::endl;
     distance = validateDouble(distance);
     std::cout << "ENTER THE UNITS OF MEASUREMENT FOR DISTANCE" << std::endl;
     distanceUnits = validateString(distanceUnits);
     std::cout << "ENTER THE CHANGE IN TIME" << std::endl;
     time = validateDouble(time);
     std::cout << "ENTER THE UNITS OF MEASUREMENT FOR TIME" << std::endl;
     timeUnits = validateString(timeUnits);
     timeUnits = Capitalize(timeUnits);
     distanceUnits = Capitalize(distanceUnits);

     std::cout << "THE AVERAGE VELOCITY OF AN OBJECT THAT HAS TRAVELLED " << distance << " " << distanceUnits
          << " IN " << time << " " << timeUnits << " IS " << distance / time << " " << distanceUnits << " PER "
          << timeUnits << std::endl;

}
void CalculateAcceleration()
{
     std::string timeUnits, velocityUnits;
     double velocity, time;

     std::cout << "ENTER THE CHANGE IN VELOCITY" << std::endl;
     velocity = validateDouble(velocity);
     std::cout << "ENTER THE UNITS OF MEASUREMENT FOR VELOCITY" << std::endl;
     validateString(velocityUnits);
     std::cout << "ENTER THE CHANGE IN TIME" << std::endl;
     time = validateDouble(time);
     std::cout << "ENTER THE UNITS OF MEASUREMENT FOR TIME" << std::endl;
     timeUnits = validateString(timeUnits);
     velocityUnits = Capitalize(velocityUnits);
     timeUnits = Capitalize(timeUnits);

     std::cout << "THE AVERAGE ACCELERATION OF THE OBJECT IS " << velocity << " " << velocityUnits
          << " IN " << time << " " << timeUnits << " IS " << velocity / time << " " << velocityUnits << " PER "
          << timeUnits << std::endl;
}
int MotionMenu()
{
     int selection = 0;
     std::cout << "MOTION SUBMENU" << std::endl;
     std::cout << "\'1\' -" << std::endl;
     std::cout << "\'2\' -" << std::endl;
     std::cout << "\'3\' -" << std::endl;
     std::cout << "\'4\' -" << std::endl;
     do {
          validateInt(selection);
          if (selection < 1 || selection > 4)
          {
               std::cout << "Must be a value from 1 to 4!" << std::endl;
          }
     } while (selection < 1 || selection > 4);
     return selection;
}
void CalculateMotion(int option)
{
     switch (option) 
     {
     case(1):
          std::cout << "OPTION 1" << std::endl;
          break;
     case(2):
          std::cout << "OPTION 2" << std::endl;
          break;
     case(3):
          std::cout << "OPTION 3" << std::endl;
          break;
     case(4):
          std::cout << "OPTION 4" << std::endl;
          break;
     default:
          std::cout << "COULD NOT FIND SELECTED OPTION" << std::endl;
          break;
     }

}
void CalculateNewtonsSecondLaw()
{

}
void CalculateWeight()
{

}

void ClearScreen()
{
     std::system("cls");
}

std::string Capitalize(std::string toCaps)
{
     for (int i = 0; i < toCaps.length();i++)
     {
          toCaps[i] = toupper(toCaps[i]);
     }
     return toCaps;
}