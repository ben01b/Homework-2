#include <iostream>
#include "search.h"
#include "dictionary.h"

using namespace std;

int main() {
  int list[] = {1,2,4,5,6,7,8,9};
  int array_length = 8;
  int number = 2;
 
  cout << "Linear Search: " << LinearSearch(list,array_length,number) <<  std::endl;

  cout << "Binar Search: " << BinarySearch(list,array_length,number) <<  std::endl;

  string list2[] = {"it", "word", "cool"};
  int length_test = 3;

  cout << "Min word length: " << MinWordLength(list2, length_test) << endl;
  cout << "Max word length: " << MaxWordLength(list2, length_test) << endl;
  cout << "Word length range: " << WordLengthRange(list2, length_test) << endl;
  cout << "Avg word length: " << AverageWordLength(list2, length_test) << endl;
  cout << "Most common word length: " << MostCommonWordLength(list2, length_test) << endl;
}