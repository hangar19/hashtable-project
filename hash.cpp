#include <stdio.h>
#include <iostream.h>

int tblSize = 100;
int hash = 0;
int index;
int hash (string key)
  {
  for (i=0; i < key.length(); i++)
    {
    hash = hash + (int)key[i]);
    cout << "hash =" << hash << endl;
    }
  //index = hash % tblSize;
  return index;
  
  }

