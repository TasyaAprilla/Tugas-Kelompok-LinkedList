// Tasya Aprilla AY - 1717051006

#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <conio.h> 
using namespace std;
struct node 
{
  int urut;
  node *next; 
}; 


node *awal_ptr = NULL;
  node *posisi;         //digunakan untuk membaca sepanjang list 
  int option = 0; 
  
  void tambah_node_awal()
{
  node *baru;
  baru = new node;
  cout << "Masukkan Data     : ";
  cin >> baru->urut;
  baru->next = NULL;
  if(awal_ptr == NULL)
  {
    awal_ptr=baru;
    awal_ptr->next = NULL;
  }
  else
  {
    baru->next = awal_ptr;
    awal_ptr = baru;
  }
} 

