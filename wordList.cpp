#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>

int main(const int argc, const char *argv[]){
  int wordCount = 0;
  int len;

  std::ifstream infile;
  std::ofstream outfile;

  std::map<int,int> index;

  std::vector<std::vector<std::string> > matrix;

  if(argc < 2){
    std::cerr << "Error: please specify a file to read from. \n";

    return 1; 
  }

  infile.open(argv[1]);

  if(!infile.is_open()){
    std::cerr << "Error opening " << argv[1] << "\n";

    return 1;
  }

  //Read wordlist into vector matrix
  for(std::string word; std::getline(infile, word);){
    len = word.length();

    if(!index.count(len))
    {
      index[len] = matrix.size();

      std::vector<std::string> temp;

      temp.push_back(word);

      matrix.push_back(temp);
    }else{
      matrix[index[len]].push_back(word);
    }

    wordCount++;
  }
  
  //Print out wordlist into folder structure
  for(auto count : matrix){
    outfile.open("wordlist_" + std::to_string(count[0].length()) + ".txt");

    for(auto word : count){ 
      outfile << word << "\n";
    }

    outfile.close();
  }
  
  std::cout << "Created "
            << matrix.size() 
            << " seperate wordLists out of " 
            << wordCount
            << " words. \n";

  return 0;
}