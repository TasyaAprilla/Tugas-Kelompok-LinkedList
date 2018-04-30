// Nonik Aisyah - 1717051011

void hapus_node_awal()
{
  node *temp;
  temp = awal_ptr;
  awal_ptr = awal_ptr->next;
  delete temp;
} 

void hapus_node_akhir()
{
  node *temp1, *temp2;
  if (awal_ptr == NULL)
    cout << "List kosong!" << endl;
  else
  {
    temp1 = awal_ptr;
    if (temp1->next == NULL)
    {
      delete temp1;
      awal_ptr = NULL;
    }
    else 
    {
      while (temp1->next != NULL)
      {
        temp2 = temp1;
        temp1 = temp1->next;
      }
      delete temp1;
      temp2->next = NULL;
    }

   }
} 



void menyisipkan_node_tertentu()
{
  node *baru, *bantu;
  int posisi_sisip;
  if(awal_ptr != NULL)
  {
  
   
    cout<<"Akan disisip setelah Data Ke ? : ";
    cin>>posisi_sisip;
    baru =new node;
   bantu=awal_ptr;
     
    for(int i=1;i<posisi_sisip-1;i++) {
      if(bantu->next != NULL)
        bantu=bantu->next;
      else
        break; 
    }
  cout << "Masukkan data: ";
  cin >> baru->urut;
  baru->next=bantu->next;
  bantu->next=baru;
  }
  else
  {
    cout<<"Belum ada data !! silahkan isi data dulu....";
    getch();
  } 
} 
void hapus_node_tertentu()
{
  int banyakdata,posisi_hapus,poshapus;
  node *hapus, *bantu;
  if(awal_ptr != NULL)
  {
    cout<<" Akan dihapus pada data ke : ";
    cin>>posisi_hapus;
    banyakdata=1;
    bantu=awal_ptr;
    while(bantu->next != NULL)
    {
      bantu=bantu->next;
      banyakdata++;
    }
    if((posisi_hapus<1)||(posisi_hapus>banyakdata))
    {
      cout<<"Belum ada data !! masukkan Data dula aja...\n";
    }
    else
    {
      bantu=awal_ptr;
      poshapus=1;
      while(poshapus<(posisi_hapus-1))
      {
        bantu=bantu->next;
        poshapus++;
      }
      hapus=bantu->next;
      bantu->next=hapus->next;
      delete hapus;
    }
 }
 else 
    cout<<"Data Masih kosong, tidak bisa hapus data dari tengah! ";
 getch();
}
 
