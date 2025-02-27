#include <iostream>
using namespace std;


void test1(int* n1, int* n2) //test 6
{
	*n1 = 10;
	*n2 = 11;
}

int square1(int n)//test 7
{
  //Pass-by-Value
    n *= n;
    return n;
}

void square2(int *n) //test 8
{
  //Pass-by-Reference with Pointer Arguments
    *n *= *n;
}

void square3(int &n) //test 9
{
    n *= n;
}


int main() {
  int test;
  cout << "Enter test number" << endl;
  cin >> test;
  if(test == 1)
  {
    int  x = 27;
    int  *ip;
    ip = &x;
    cout << *ip << endl;
  }


  else if(test == 2)
  {
  int  x = 27;
	int  *ip;
	ip = &x;
        (*ip)++;
	cout << *ip;
  }


  else if(test == 3)
  {
  int *ip;
  int tot = 0;
	int arr[] = { 10, 20, 30, 10, 20, 0 };
	ip = arr;

	for (int x = 0; x < 6; x++)
  {
		tot += *ip;
		ip++;
	}
    cout << tot;
  }


  else if(test == 4)
  {
    int *ip;
    //int tot = 0;
    int arr[] = { 10, 20, 30, 10, 20, 99 };
    ip = arr;

    for (int x = 0; x < 5; x++)
    {
    	ip++;
  	}
    cout << *ip;
  }


  else if(test == 5)
  {
    int *p, x = 30;
    p = &x;
    x *= 2;
    cout << *p;
  }


  else if(test == 6)
  {
    int a = 5, b = 5;
    test1(&a, &b);
    cout << a + b;
  }
  else if(test == 7)
  {
    int n1=8;
    square1(n1);
    cout << n1;
  }
  else if(test == 8)
  {
    //Call-by-Value
    int n2=8;
    square2(&n2);
    cout << n2;
  }
  else if(test == 9)
  {
    int n3=8;
    square3(n3);
    cout << n3;
  }
  else if(test == 10)
  {
    //Declare an array
   int val[3] = { 5, 10, 20 };

   //declare pointer variable
   int *ptr;

   //Assign the address of val[0] to ptr
   // We can use ptr=&val[0];(both are same)
   ptr = val ;

   cout << ptr[0] + ptr[1] + ptr[2];
  }
	return 0;
}
