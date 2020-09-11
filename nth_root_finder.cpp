/****
* PSEUDOCODE:
*
*/
#include "nth_root_finder.h"
#include <iostream>
#include <string>

double npower(double const base, int const n);

std::string FindNthRoot(int number, int n, int precision) 
{
  double root;
  int i = 1;
  while(npower(i, n) < number)
  {
    i++;
  }
  std::string nthroot = std::to_string(i);
  return nthroot;
}

double npower(double const base, int const n)
{
    if (n < 0)
    return npower(1/base, -n);
    else if(n == 0)
    return 1.0;
    else if(n == 1)
    return base;
    else if(n % 2)
    return base*npower(base*base, n/2);
    else
    return npower(base*base, n/2);
}
