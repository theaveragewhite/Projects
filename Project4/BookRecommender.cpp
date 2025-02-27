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
#include <vector>
#include <unordered_set>
#include "BookRecommender.h"

using namespace std;

BookRecommender::BookRecommender(string fileName)
{
  ifstream myFile(fileName);

  string bookTitle;
  while (myFile >> bookTitle)
  {
       books.push_back(bookTitle);
  }

  string userName;
  double rating;
  while (myFile >> userName)
  {
    vector<double> ratings;
    for (int i = 0; i < books.size(); i++)
    {
      myFile >> rating;
      ratings.push_back(rating);
    }
      ratedBooks[userName] = ratings;
      users.push_back(userName);
  }

}

void BookRecommender::printRecommend(string username)
{
  // Get the user's ratings
    vector<double>& ratings = ratedBooks[username];

    // Create a vector to hold the recommended books
    vector<pair<double, string>> recommendations;

    // Iterate over all the books
    for (auto& book : books) {
        // Check if the user has already rated the book
    if (ratings[getBookIndex(book)] == 0)
    {
            // Calculate the similarity between the user and all other users who have rated the book
    double similaritySum = 0;
    double weightSum = 0;
    for (auto& user : users)
    {
                // Skip the current user
    if (user == username)
    { continue; }
                // Check if the user has rated the book
    double userRating = ratings[getBookIndex(book)];
    if (userRating == 0) { continue;  }
                // Calculate the similarity between the two users
    double similarity = getSimilarity(username, user
    similaritySum += similarity * userRating;
    weightSum += similarity;
    }
            // Calculate the weighted average rating and add it to the recommendations
    if (weightSum > 0)
    {
    double weightedAverage = similaritySum / weightSum;
    recommendations.push_back({weightedAverage, book});
    }}}
}

void BookRecommender::printAverages()
{
  for (auto& [bookTitle, average] : averages)
  {
      std::cout << bookTitle << ": " << average << std::endl;
  }
}

double BookRecommender::getAverage(string bookTitle)
{
  if (averages.find(bookTitle) != averages.end())
  {
        return averages[bookTitle];
  }

  double sum = 0.0;
  int count = 0;
  for (auto& user : ratedBooks)
  {
    auto& ratings = user.second;
    auto it = find(books.begin(), books.end(), bookTitle);
    if (it != books.end())
    {
      int index = distance(books.begin(), it);
    if (index < ratings.size())
    {
      double rating = ratings[index];
    if (rating != 0.0)
    {
      sum += rating;
      count++;
    }}}
  }

    double average = (count > 0) ? sum / count : 0.0;
    averages[bookTitle] = average;
    return average;
}

double BookRecommender::getSimilarity(string userName1, string userName2)
{

}

int BookRecommender::getBookCount()
{
  //vector<string bookTitle> books
  //map<string, vector<double>> ratedBooks;
  return books.size();
}

int BookRecommender::getUserCount()
{
  //could use vector if problems
  //  map<string, double> averages;
  //vector<string userName> users;
  return users.size();
}

double BookRecommender::getUserBookRating(string userName, string bookTitle)
{

}
