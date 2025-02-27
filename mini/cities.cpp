/*
Name: Colton Owenby
Class: 1020
Date: 4/10/2023
Desc: Reads the cities.txt file and returns the number of cities in each states.
Time: 5 hours
*/
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <algorithm>
#include <iterator>
#include <unordered_set>


int main(int n, char* args[])  //Allows users to enter command line arguments
{
  std::unordered_multiset<std::string> cities; //Allows cities to have multiple items of the same value that doesn't need to be unique
  std::ifstream myFile("cities.txt"); //calls file cites.txt
  if(!myFile.is_open()) //Ends program is file fails to open
  {
    std::cout << "File failed to open" << std::endl;
    return 0;
  }

  std::string city, state, line, myString; //test/string variables
  //cout << "Enter a state" << endl;
  //cin >> myString;



  while(getline(myFile, line))  //reads cities.txt
  {

    std::stringstream ss(line); //String Stream variable that stores data from .txt file
    std::getline(ss, state, ','); //Stores every line with a state that has a , after
    //getline(ss, city);
    cities.emplace(state);  //Stores each state as a single object

  }

  for(int i = 1; i < n; i++)
  {
    std::cout << cities.count(args[i]) << std::endl; //counts number of args the user has input on the command line
  }





  myFile.close(); //closes files
  return 0;
}
