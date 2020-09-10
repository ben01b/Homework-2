/****
* PSEUDOCODE:
* for i = 0 to length
* if ith element is n return i
* if loop exits(number not found) return -1
*/
int LinearSearch(int numbers[], int length, int n){
  for(int i = 0; i < length; i++)
    if(numbers[i] == n)
      return i;

  return -1;
}

/****
* PSEUDOCODE:
* Set first last and middle flags
* while first < last 
* if middle element is n
* return middle 
* else if middle element < n
* set first to middle + 1 and middle to (first + 
* last) / 2
* else
* set last to middle = 1 and middle to (first + 
* last) / 2
* if loop exits(number not found) return -1
*/
int BinarySearch(int numbers[], int length, int n){
  int first = 0;
  int last = length - 1;
  int middle = length / 2;

  while(first <= last)
  { 
    if(numbers[middle] == n)
      return middle;
    else if(numbers[middle] < n)
    {
      first = middle + 1;
      middle = (first + last) / 2;
    }
    else 
    {
      last = middle - 1;
      middle = (first + last) / 2;
    }
  }
  return -1;
}
