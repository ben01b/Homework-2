/****
* PSEUDOCODE:
*
*/
#include <iostream>
#include <string>

std::string FindNthRoot(int number, int n, int precision) 
{
  int low; 
  int high; 
  int middle;

  if (number >= 0 and number <= 1) 
  {
    low = number;
    high = 1;
  }
  else
  {
    low = 1;
    high = number;
  }

  middle = (low + high) / 2;


  return " ";
}
