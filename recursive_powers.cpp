// Challenge: Recursive Powers
// Write a recursive function power(x, n) that returns the value of xn (assume that n is an integer). Here are the 4 following cases that you need to handle.

// 1. Base Case

// Start by writing the base case. x0 = 1 for any value of x.

// 2. Recursive case: n is odd

// In this step, write the recursive case for which n is odd. Assume you have a function isOdd() to check if n is odd.

// 3. Recursive case: n is even

// In this step, write the recursive case for which n is even. Assume you have a function isEven() to check if n is even.

// 4. Recursive case: n is negative

// In this step, write the recursive case for which n is negative. Compute x raised to -n recursively, and return the reciprocal of that number.


float power(double x, int n) {
  // base case
  if (n == 0)
    return 1.0;
  
  // recursive case: n is negative
  else if (n < 0)
  {
    x = power(x, -1*n);
    return 1/x;
  } 
  

  // recursive case: n is odd
  else if (n & 1)
  {
    x = x * power(x, n-1);
    return x;
  }
  

  // recursive case: n is even
  else if (!(n & 1))
  {
    x = power(x, n/2) * power(x, n/2);
    return x;
  }
  
    
  else
    return 0.0;
};
