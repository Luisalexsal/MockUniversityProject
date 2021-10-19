//
//  main.cpp
//  A3
//
//  Created by Alex Salmeronon 12/2/19.
//salme011@cougars.csusm.edu

#include "University.h"


using namespace std;


int main()
{
    University csusm;
    csusm.ProcessTransactionFile("transaction.txt");
    cout << "Hello" << endl;
    system("pause");
}
//----------------------------------------------------------------------------

