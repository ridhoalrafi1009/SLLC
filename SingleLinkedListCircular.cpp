#include <iostream>
using namespace std;
struct node{
  int data;
  node *next;
};

node *head=NULL;

bool isEmpty(){
  return head==NULL;
}

void depan(int nilai){
  node *baru;
  baru=new node;
  baru->data=nilai;
  baru->next=NULL;
  
  if(isEmpty()){
    head=baru;
  }
  else{
    baru->next=head;
    head=baru;
  }
}

void belakang(int nilai){
  node *baru, *bantu;
  baru=new node;
  baru->data=nilai;
  baru->next=NULL;
  if(isEmpty()){
    head=baru;
  }
  else{
    bantu=head;
    while(bantu->next!=NULL){
      bantu=bantu->next;
    }
    bantu->next=baru;
  }
}

void hapusdepan(){
  node *baru;
  baru=head;
  head=head->next;
  delete baru;
}

void hapusbelakang(){
  node *baru, *bantu;
  baru=head;
  if(baru->next==NULL){
    delete baru;
    head=NULL;
  }
  else{
    while(baru->next!=NULL){
      bantu=baru;
      baru=baru->next;
    }
    delete baru;
    bantu->next=NULL;
  }
}

void sisip(){
  node *baru, *bantu;
  int posisi;
  if(head!=NULL){
    cout<<"Sisip setelah data ke? : ";
    cin>>posisil;
    baru=new node;
    bantu=head;
    
    for(int i=0;i<posisi-1;i++){
      if(bantu->next!=NULL){
        bantu=bantu->next;
      }
      else{
        break;
      }
    }
    cout<<Masukkan data : ";
     cin>>baru->data;
    baru->next=bantu->next;
    bantu->next=baru;
  }
  else{
    cout<<"Tidak ada data";
  }
}       

void cetak(){
  node *bantu;
  if(isEmpty()){
    cout<<"List Kosong";
  }
  else{
    bantu=head;
    while(bantu!=NULL){
      cout<<bantu->data<<endl;
      bantu=bantu->next;
    }
  }
}

 int main (){
  depan(3);
  belakang(5);
  cetak();
  return 0;
}
