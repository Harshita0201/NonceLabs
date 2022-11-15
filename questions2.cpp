// Ques 2: Write a  function that takes a non-negative integer n as input, and returns a list of all the powers of 2 with the exponent ranging from 0 to n ( inclusive ).
// Examples
// n = 0  ==> [1]        # [2^0]
// n = 1  ==> [1, 2]     # [2^0, 2^1]
// n = 2  ==> [1, 2, 4]  # [2^0, 2^1, 2^2]

#include <iostream> 
#include <vector>  
using namespace std; 
vector <uint64_t> powers_of_two(int n) {  
  vector <uint64_t> arr;  
  arr.push_back(1);  
  for (int i = 1; i <= n; i++){    
      arr.push_back(arr[i - 1] * 2);   
  }   
  return arr; 
}
