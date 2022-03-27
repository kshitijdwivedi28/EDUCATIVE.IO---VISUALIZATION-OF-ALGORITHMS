
// Challenge: is a string a palindrome?
// In this challenge, you'll make it so the isPalindrome() function returns true if the provided string is a palindrome, and false otherwise. Here are the cases that we need to handle.

// Base case #1

// Start by implementing the first base case: if the length of the string is 0 or 1, isPalindrome() should return true.

// Base case #2

// If the first and last characters of the string are different, then we know immediately that the string is not a palindrome. 

// Recursive case

// Finally, write the recursive case. Remove the first and last characters from the string and call isPalindrome function with the remaining string.


#include <string>
bool isPalindrome(std::string s) {
  // base case #1
  if (s.size() == 0 || s.size() == 1)
      return true;

  
  // base case #2
  else if (s[0] != s[s.size()-1])
      return false;
    
  // recursive case
  else if (s.size() > 1)
      return isPalindrome(s.substr(1, s.size()-2));

  else
      return false;
}
