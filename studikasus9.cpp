#include <iostream>
using namespace std;

class Rak{
  public:
    void proses();
    void urutkan();
    void outputbefore();
    void outputrak();
  private:
    int code[24] = {14, 25, 66, 48, 54, 46, 44, 28, 37, 79, 44, 78, 89, 99, 97, 64, 70, 30, 96, 47, 17, 12, 16, 62};
    int rak[4][6];
};

void Rak::outputbefore(){
  cout<<"Daftar code buku Andi : "<<endl;
  for(int i=0; i<24; i++){
    cout<<"["<<code[i]<<"] ";
  }
  cout<<endl<<endl;
}

void Rak::urutkan(){
  int temp;
  for(int i=0; i<23; i++){
    for(int j=i+1; j<24; j++){
      if(code[i]>code[j]){
        temp=code[i];
        code[i]=code[j];
        code[j]=temp;
      }
    }
  }
  cout<<"Setelah di urutkan dari yang terkecil : "<<endl;
  for(int i=0; i<24; i++){
    cout<<"["<<code[i]<<"] ";
  }
  cout<<endl<<endl;
}

void Rak::proses(){
  int y=1;
  for(int i=0; i<4; i++){
    for(int j=0; j<6; j++){
      rak[i][j]=code[y];
      y++;
    }
  }
}

void Rak::outputrak(){
    cout<<"Rak buku 1 : "<<endl;
    for (int j=0; j<6; j++){
        cout<<"["<<rak[0][j]<<"]";
    }
    cout<<endl<<endl<<"Rak buku 2 : "<<endl;
    for (int j=0; j<6; j++){
        cout<<"["<<rak[1][j]<<"]";
    }
    cout<<endl<<endl<<"Rak buku 3 : "<<endl;
    for (int j=0; j<6; j++){
        cout<<"["<<rak[2][j]<<"]";
    }
    cout<<endl<<endl<<"Rak buku 4 : "<<endl;
    for (int j=0; j<6; j++){
        cout<<"["<<rak[3][j]<<"]";
    }
}

int main() {
  Rak x;
  x.outputbefore();
  x.urutkan();
  x.proses();
  x.outputrak();
}
