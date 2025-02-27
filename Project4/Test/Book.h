/*
Name: Colton Owenby
Class: 1020
Date: 4/10/2023
Desc:
Time:
*/
#ifndef BOOK_H
#define BOOK_H_

#include <string>
#include <iostream>

class Book
{
  private:
    string title;
    double totalRating;
    double ratingCount;
  public:
    Book() = default;
    Book(string title);
    string getTitle();
    void addRating(double rating);
    double getAverageRating();
};
