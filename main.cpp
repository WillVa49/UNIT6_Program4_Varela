#include <iostream>
#include <algorithm>
#include "accounts.h"

using namespace std;

void printArray(int[], int);
void sortArrayAsc(int[],int);

int main()
{
  //Using built-in sort ASC to sort in Array
   cout << "\nStart: "  << cpuTime() << endl;
  //Built-in sort sort(nameofArray, nameArray+size);
   sort(accountBalances, accountBalances+maxAccounts);
   printArray(accountBalances, maxAccounts);
   //reverse call sort first!
   //Built-in reverse reverse(nameOfArray, nameArray+size);
   reverse(accountBalances, accountBalances+maxAccounts);
   printArray(accountBalances, maxAccounts);
   cout << "\nEnd: " << cpuTime() << endl;
  return 0;
}

void printArray(int arrayVals[], int size)
{
  cout << "\nPrintes values in array: " << endl;
  for(int i =0; i < size; i++)
  {
    cout << arrayVals[i] << ",";
  }  
 

}
