#include <iostream>
#include <vector>

int main(){
int even = 0;
int odd = 1;
std::vector<int> lst = {2, 4, 3, 6, 1, 9};
for (int x = 0; x < lst.size(); x++){
  if (lst[x] % 2 == 0){
    even = even + lst[x];
  }
  else if (lst[x] % 2 == 1){
    odd = odd * lst[x];
  }

  
}
std::cout << "Sum of even numbers is " << even;
std::cout << "\n";
std::cout << "Product of odd numbers is " << odd;
std::cout << "\n";
}


//===============================================
//jesus christ this took some time

#include <iostream>
#include <string>

// Define is_palindrome() here:
bool is_palindrome(std::string text){
  std::string rvtext = "";
  for (int x = text.size(); x >= 1; x--){
      rvtext = rvtext + text[x-1];
  }
  
 
  if (rvtext == text){
    return true;
  }
  else {
    return false;
  }
  
}


int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}
