//file for literal storing
//small code challenges

#include <iostream>

// Define average() here:
double average(double num1, double num2){
  return (num1 + num2) / 2;
}

int main() {
  
  std::cout << average(42.0, 24.0) << "\n";
  std::cout << average(1.0, 2.0) << "\n";
  
}


//=================================================

#include <iostream>
#include <cmath>


// Define tenth_power() here:
int tenth_power(int num){
  return pow(num, 10);
}

int main() {
  
  std::cout << tenth_power(0) << "\n";
  std::cout << tenth_power(1) << "\n";
  std::cout << tenth_power(2) << "\n";
  
}


//==================================================

#include <iostream>
#include <vector>

// Define first_three_multiples() here:
  std::vector<int> first_three_multiples(int num){
  std::vector<int> v;
  v.push_back(num);
  v.push_back(num * 2);
  v.push_back(num * 3);
  return v;



}


int main() {
  
  for (int element : first_three_multiples(8)) {
    std::cout << element << "\n";
  }
  
}


//==================================================













