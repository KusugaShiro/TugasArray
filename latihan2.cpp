#include <iostream>
using namespace std;
string kelas[30];
int pos = 0; // posisi data dimasukkan
void inputData(string nama); //
void outputData(); // deklarasi procedur tampilkan data


int main(){

    //cout << "hello world";
    
    inputData("indomi goreng plus telor"); // pemanggilan procedure
    outputData();
    inputData("ayam bacem sambal mata");// pemanggilan procedure
    outputData();
    inputData("lontong sayur lauk haruan"); // pemanggilan procedure
    outputData();
    return 0;
}

void inputData(string nama){
    kelas [pos]=nama;// masukkan data kedalam array
    pos++; // geser posisi masukkan data
    }

void outputData(){
    for (int i = 0; i < pos; i++)
    {
        cout << kelas[i];
        if (i<pos-1)
        {
            cout <<","; //koma pemisah data
         }else{
             cout <<"."<<endl; //titik pemisah data akhir dan pindah baris
            }
    }

}