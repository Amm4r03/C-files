#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x)
{
if (x < 0) 
{
    return false;
}
int digit;
int input_digits[20];   // limitation 1 : number size cannot be bigger than 20 digits
int i;
// generate an array for the numbers
  for (i = 0; x!=0; i++)
  {
    digit = x % 10;
    input_digits[i] = digit;
    x = x / 10;
  }

  int total_digits = i;

// Reverse the array and store in new array
int reversed_array[total_digits];
int temp;
for (int j = 0; j < total_digits; j++)
{
    reversed_array[j] = input_digits[total_digits - 1 - j];
}


/*  // reverse the array and store in new array
  int reversed_array[total_digits+1];
  int temp;
    for (int j = 0; j <= total_digits / 2; j++)
    {
        temp = reversed_array[j];
        reversed_array[j] = reversed_array[total_digits - 1 - j];
        reversed_array[total_digits - j - 1] = temp;
    }
*/

  // check if both arrays match

  int match = 1;    // assume the number is a palindrome
  for(int y = 0; y < total_digits; y++)
  {
    if(input_digits[y] != reversed_array[y])
    {
      match = 0;
      return false;
    }
  }
  return true;
}

int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    bool y = isPalindrome(number);
    
    if (y)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    
    return 0;
}