//do you speak whales?
#include <iostream>
#include <string>
#include <vector>

int main(){
  using namespace std;
  std::string input;
  getline(std::cin, input);

 

  std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  std::vector<char> result;

  for (int x = 0; x < input.size(); x++){
    for (int y = 0; y < vowels.size(); y++){
      if (input[x] == vowels[y]){
        result.push_back(input[x]);
      }
    }
    if (input[x] == 'e' || input[x] == 'u')
      result.push_back(input[x]);
  }

  for (int z = 0; z < result.size(); z++){
    std::cout << result[z];
  }

  cout << "\n";


}
