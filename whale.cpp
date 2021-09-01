#include <iostream>
#include <vector>
#include <string>

int main(){
  // Whale, whale, whale.
  // What have we got here?

  std::string text;
  std::cout<<"Enter the text you want to translate to whale talk: "; getline(std::cin, text);
  std::vector<char> vowels;
  vowels.push_back('a');
  vowels.push_back('e');
  vowels.push_back('i');
  vowels.push_back('o');
  vowels.push_back('u');
  vowels.push_back('A');
  vowels.push_back('E');
  vowels.push_back('I');
  vowels.push_back('O');
  vowels.push_back('U');

  std::vector<char> result;

  for (int i=0; i<text.size();i++){
    for (int j=0; j<vowels.size();j++){
      if (text[i]==vowels[j]){
        if (vowels[j]=='e' || vowels[j]=='u' || vowels[j]=='E' || vowels[j]=='U')
        result.push_back(vowels[j]);
        result.push_back(vowels[j]);
      }
    }
  }

  std::cout<<"Sing this to the whales: ";
  for (int i=0; i<result.size();i++){
    std::cout<<result[i];
  }
  std::cout<<"\n";
  

}