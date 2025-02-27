/*
Name: Colton Owenby
Class: 1020
Date: 4/10/2023
Desc:
Time:
*/

#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <sstream>
#include <fstream>
#include <string>
#include <iterator>
#include <unordered_set>
#include <map>
#include "BookRecommender.h"



int main()//int n, char* argv[])
{

  BookRecommender recommender("small_ratings.txt"); //= argv[1];



  int response = 1;
  while(response == 1 && 2)
  {
    cout << "Enter 1 for Recommendations" << endl;
    cout << "Enter 2 for Averages" << endl;
    cout << "Enter 3 to quit" << endl;

    cin >> response;
    vector <string> books;

    if(response == 1)
    {
      cout << "Recommendations:" << endl;
      for (vector<string>::const_iterator it = getUserCount().begin(); it != getUserCount().end(); ++it)
      {
        string user = *it;
        cout << user << ": " << printRecommend() << endl;
      }}

    else if(response == 2)
    {
      cout << "Average ratings:" << endl;
      for (vector<string>::const_iterator it = getBookCount().begin(); it != getBookCount().end(); ++it)
      {
        string user = *it;
        cout << books << ": " << printAverage() << endl;

      }
    }
    else
    {
      return 0;
    }

  }
}
  /*if(!myFile.is_open())
  {
    cout << "File did not open" << endl;
    return 0;

  }*/





/*
  if(myFile.is_open())
  {
    int size = getBookCount(myFile);
    //int sizeUser = getUserCount(myFile)/3;

    myFile.clear();
    myFile.seekg(0, std::ifstream::beg); //Used to move the position to the end of the file, and then back to the beginning.

    for(int j = 0; j < size; j++)
    {
      string u, b, r;
      getline(myFile, u);
      getline(myFile, b);
      getline(myFIle, r);
      bookRecommender = new BookRecommender(u, b, r);
      bookRecommender.push_back()

    }



  }


  unordered_multiset<std::string> books;


  string userName, book, line;
  double rating;

  map

/*  while(getline(myFile, line))
  {
    stringstream ss(line);
    getline(ss, book, rating);
    small_ratings.emplace(book);

  }*/


/*  bool prog;
  while(prog == true)
  {
    cout << "Would"
  }*/




/*

  map<string userName, vector<double> ratings> ratedBooks =
  {
    while(getline)
  }
*/
