// Wulan Seftiani - 1717051031


int init(int nilai){
 node *baru;
  baru = new node;
  baru->urut=nilai;
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

int main()
{
 cout << "===============================================" << endl;
 cout << "NAMA KELOMPOK : " << endl;
  cout << "TASYA APRILLA AY - 1717051006" << endl;
  cout << "NONIK AISYAH - 1717051011" << endl;
  cout << "MERIA NENSI - 171701015" <<endl;
  cout << "WULAN SEFTIANI - 1717051031"<<endl;
  cout << "SINGLE LINKED LIST CIRCULAR" << endl;
  cout << "==============================================" << endl;
  awal_ptr = NULL;
  init(10);
  init(12);
  init(5);
  init(7);
  init(22);
  do
  {
//    clrscr();
 
    display_list();
    cout << endl;
    cout << "MENU PILIHAN : " << endl;
    cout << "0. Keluar program." << endl;
    cout << "1. Tambah Node Depan." << endl;
    cout << "2. Tambah Node Belakang." << endl;
    cout << "3. Hapus Node Depan."<< endl;
    cout << "4. Hapus Node Belakang." << endl;
    cout << "5. Menyisipkan Node diposisi Tertentu." << endl;
    cout << "6. Hapus Node Tertentu." << endl;
    cout << endl << " Pilihan >> ";
    cin >> option; 

switch (option)
  {
  case 1 : tambah_node_awal(); 
    break;
  case 2 : tambah_node_akhir();
    break;
  case 3 : hapus_node_awal();
    break;
  case 4 : hapus_node_akhir();
    break;
  case 5 : menyisipkan_node_tertentu();
  	break;
  case 6 : hapus_node_tertentu();
  }
 }  
while (option != 0); 
}
