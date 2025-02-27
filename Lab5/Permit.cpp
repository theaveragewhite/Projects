#include "Permit.h"
#include "VehicleInfo.h"
#include "Truck.h"
#include "Employee.h"





int calcTotal()
{
  int total;

switch(input){

{
case 1:
  if(student == true || communter == true)
  {
    total = 184;
    if(motorcycle)
      {
        total = total - 146;
        return total;
      }
    else if(truck || sportscar)
      {
        total = total + 16;
        return total;
      }
    else if(sedan)
      {
        return total;
      }
  }
  else if(employee || vendor)
  {
    total = 150;
    total = total - 20;
    if(motorcycle)
      {
        total = total - 92;
        return total;
      }
    else if(truck)
      {
        total = total + 70;
        return  total;
      }
    else if(sedan || sportscar)
      {
        return total;
      }
  }
  }
  break;

case 2:
if(student || communter)
{
  total = 92;
  if(motorcycle)
    {
      total = total - 54;
      return total;
    }
  else if(truck || sportscar)
    {
      total = total + 8;
      return total;
    }
  else if(sedan)
    {
      return total;
    }
}
else if(employee || vendor)
{
  total = 92;
  total = total - 20;
  if(motorcycle)
    {
      total = total - 54;
      return total;
    }
  else if(truck)
    {
      total = total + 18;
      return  total;
    }
  else if(sedan || sportscar)
    {
      return total;
    }
}
  total = 92;
  break;
case 3:

  total = 4;
  return total;
}
