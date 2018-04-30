// Meria Nensi - 1717051015

void tambah_node_akhir()
  {
  node *temp, *temp2;   // Temporary pointers 
  // menciptakan node baru 
  temp = new node; 
  cout << "Masukkan Data     : ";
  cin >>   temp->urut;
  temp->next = NULL; 

// Set up link pada node
  if (awal_ptr == NULL)
  {
    awal_ptr = temp;
    posisi = awal_ptr;
  }
  else
  {
    temp2 = awal_ptr;
    // node tidak NULL – list tidak kosong
    while (temp2->next != NULL)
    {
      temp2 = temp2->next; 
      // Memindahkan pada next link dalam rantai
    }
  temp2->next = temp;
  }
} 

void display_list()
{
  node *temp;
  temp = awal_ptr;
  cout << endl;
cout << "DATA [";  
  if (temp == NULL)
    cout << "List kosong!" << endl;
  else
  {
    while (temp != NULL)
    {  // Menampilkan detail data
     
     cout << "" << temp->urut << ",";
     
     if (temp == posisi)
        cout << "     <<<< posisi node";
//     cout << endl;
     temp = temp->next; 
    }
    cout << "] ";  
    cout << "Akhir list!" << endl;
  }
  
} 

