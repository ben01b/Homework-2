/****
* PSEUDOCODE:
*
*/
#include <string>
using namespace std;

int MinWordLength(string words[], int length) {
    int smallest_idx = 0;

    for(int i = 0; i < length; i++)
    {
      if(words[i].length() < words[smallest_idx].length())
        smallest_idx = i;
    }
    return words[smallest_idx].length();
}

int MaxWordLength(string words[], int length) {
    int largest_idx = 0;

    for(int i = 0; i < length; i++)
    {
    if(words[i].length() > words[largest_idx].length())
      largest_idx = i;
  }
  return words[largest_idx].length();
}

int WordLengthRange(string words[], int length) {
  return MaxWordLength(words, length) - MinWordLength(words, length);
}

int AverageWordLength(string words[], int length) {
  int total = 0;

  for(int i = 0; i < length; i++)
  {
    total += words[i].length();
  }
  return total / length;
}

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
