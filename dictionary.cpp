#include "dictionary.h"
#include <iostream>
using std::string;
using std::cout;
using std::endl;

/****
* PSEUDOCODE:
* For loop from 0 to length
* if the length of the current word is less than the length 
* of the current smallest word
* set smallest index to i
* return length of word at smallest index
*/
int MinWordLength(string words[], int length) {
    int smallest_idx = 0;

    for(int i = 0; i < length; i++)
    {
      if(words[i].length() < words[smallest_idx].length())
        smallest_idx = i;
    }
    return words[smallest_idx].length();
}

/****
* PSEUDOCODE:
* For loop from 0 to length
* if the length of the current word is greater than the * 
* length of the current smallest word
* set smallest index to i
* return length of word at largest index
*/
int MaxWordLength(string words[], int length) {
    int largest_idx = 0;

    for(int i = 0; i < length; i++)
    {
    if(words[i].length() > words[largest_idx].length())
      largest_idx = i;
  }
  return words[largest_idx].length();
}

/****
* PSEUDOCODE:
* return longest word - shortest word
*/
int WordLengthRange(string words[], int length) {
  return MaxWordLength(words, length) - MinWordLength(words, length);
}

/****
* PSEUDOCODE:
* for loop from i to length
* add length of current word to total
* return total / length;
*/
int AverageWordLength(string words[], int length) {
  int total = 0;

  for(int i = 0; i < length; i++)
  {
    total += words[i].length();
  }
  return total / length;
}

/****
* PSEUDOCODE:
* for loop from 0 to length
* store to length of current word
* set temporary count to 0
* nested for loop from 0 to length
* if current word length == next word
* increment temporary count 
* if temporary count > final count
* set most common index to temp and count to temporary count
* return most common index
*/
int MostCommonWordLength(string words[], int length) {
  int count = 1;
  int temp_count;
  int most_common_idx = words[0].length();
  int temp = 0;

  for (int i = 0; i < length; i++)
  {
    temp = words[i].length();
    temp_count = 0;

    for (int j = 1; j < length; j++)
    {
      if (temp == words[j].length())
        temp_count++;
    }
    if (temp_count > count)
    {
      most_common_idx = temp;
      count = temp_count;
    }
  }
  return most_common_idx;
}
