#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>
#include <iostream>

void ShowMenu();
int UserInput();
bool CheckInput();
bool OptionSelect(char);
void CalculateVelocity();
void CalculateAcceleration();
int MotionMenu();
void CalculateMotion();
void CalculateNewtonsSecondLaw();
void CalculateWeight();
void ClearScreen();
std::string Capitalize(std::string);




void ShowMenu()
{
     std::cout << "PHYSICS CALCULATOR" << std::endl;
     std::cout << "\'V\' - TO CALCULATE VELOCITY" << std::endl;
     std::cout << "\'A\' - TO CALCULATE ACCELERATION" << std::endl;
     std::cout << "\'M\' - MOTION SUBMENU" << std::endl;
     std::cout << "\'N\' - TO CALCULATE NEWTON'S 2ND LAW" << std::endl;
     std::cout << "\'W\' - TO FIND WEIGHT" << std::endl;
     std::cout << "\'C\' - TO CLEAR SCREEN" << std::endl;
     std::cout << "\'E\' - TO EXIT" << std::endl;
}

int UserInput()
{
     return 0;
}

bool CheckInput()
{
     return true;
}

bool OptionSelect(char selection)
{

     switch (selection)
     {
     case('V'):
          CalculateVelocity();
          return true;
     case('A'):
          CalculateAcceleration();
          return true;
     case('M'):
          MotionMenu();
          CalculateMotion();
          return true;
     case('N'):
          CalculateNewtonsSecondLaw();
          return true;
     case('W'):
          CalculateWeight();
          return true;
     case('C'):
          ClearScreen();
          return true;
     case('E'):
          return true;
     default:
          return false;
     }
}

void CalculateVelocity()
{
     std::string timeUnits, distanceUnits;
     double distance, time;

     std::cout << "ENTER THE CHANGE IN DISTANCE" << std::endl;
     std::cin >> distance;
     std::cout << "ENTER THE UNITS OF MEASUREMENT FOR DISTANCE" << std::endl;
     std::cin >> distanceUnits;
     std::cout << "ENTER THE CHANGE IN TIME" << std::endl;
     std::cin >> time;
     std::cout << "ENTER THE UNITS OF MEASUREMENT FOR TIME" << std::endl;
     std::cin >> timeUnits;
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
     std::cin >> velocity;
     std::cout << "ENTER THE UNITS OF MEASUREMENT FOR VELOCITY" << std::endl;
     std::cin >> velocityUnits;
     std::cout << "ENTER THE CHANGE IN TIME" << std::endl;
     std::cin >> time;
     std::cout << "ENTER THE UNITS OF MEASUREMENT FOR TIME" << std::endl;
     std::cin >> timeUnits;
     std::cout << "THE AVERAGE ACCELERATION OF THE OBJECT IS " << velocity << " " << velocityUnits
          << " IN " << time << " " << timeUnits << " IS " << velocity / time << " " << velocityUnits << " PER "
          << timeUnits << std::endl;
}
int MotionMenu()
{
     int motionMenuSelection = 1;
     std::cout << "MOTION SUBMENU" << std::endl;
     std::cout << "\'1\' -" << std::endl;
     std::cout << "\'2\' -" << std::endl;
     std::cout << "\'3\' -" << std::endl;
     std::cout << "\'4\' -" << std::endl;
     return motionMenuSelection;
}
void CalculateMotion()
{

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

#endif // !FUNCTIONS_H
