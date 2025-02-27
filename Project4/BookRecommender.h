/*
Name: Colton Owenby
Class: 1020
Date: 4/10/2023
Desc:
Time:
*/
#ifndef BOOKRECOMMENDER_H_
#define BOOKRECOMMENDER_H_

#include <string>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

class BookRecommender
{
  private:
    vector<string> books; //look at these 2 strings
    vector<string> users;
    map<string /*userName*/, vector<double> /*ratings*/> ratedBooks;
    map<string /*bookTitle*/, double /*average*/> averages;


  public:
    BookRecommender() = default;
    BookRecommender(string fileName);
    void printRecommend(string userName);
    void printAverages();
    double getAverage(string bookTitle);
    double getSimilarity(string userName1, string userName2);
    int getBookCount();
    int getUserCount();
    double getUserBookRating(string userName, string bookTitle);
    //may be a few more methods tbd

};

#endif

//for makefile if needed
//Book.cpp User.cpp BookRecommender.cpp
//Book.cpp User.cpp BookRecommender.cpp
