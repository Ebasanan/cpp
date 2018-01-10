#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

struct KTM
{
    long int nim;
    string nama;
    string ttl;
    string jenis_kelamin;
    string prodi;
    string agama;
    string status_perkawinan;
    string pekerjaan;
    string kewarganegaraan;
    string berlaku;
};




int main()
{
    cout<<"\t\n\tProgram C++ Pointer Pada Struct (Kartu Tanda Mahasiswa)\n\n\n";
    cout<<"\t\n\tNama: Eko Baskoro";
    cout<<"\t\n\tNIM : 12172771\n\n\n";

    //Isi data Kartu Tanda Mahasiswa
    struct KTM *identitas, kartu;
    kartu.nim = 12172771;
    kartu.nama = "Eko Baskoro";
    kartu.ttl = "Pemalang,24-Agustus-1997";
    kartu.jenis_kelamin = "Laki-Laki";
    kartu.prodi = "MANAJEMEN INFORMATIKA";
    kartu.agama = "ISLAM";
    kartu.status_perkawinan = "BELUM KAWIN";
    kartu.pekerjaan = "MAHASISWA";
    kartu.kewarganegaraan = "WNI";
    kartu.berlaku = "24 - 08 - 2020";



    identitas = &kartu;


    cout<<" Nomor Induk Mahasiswa\t: " <<identitas->nim <<endl;
    cout<<" Nama\t\t\t\t: " <<identitas->nama <<endl;
    cout<<" Tempat / Tanggal Lahir\t\t: " <<identitas->ttl <<endl;
    cout<<" Jenis Kelamin\t\t\t: " <<identitas->jenis_kelamin <<endl;
    cout<<" Prodi\t\t\t\t: " <<identitas->prodi <<endl;
    cout<<" Agama\t\t\t\t: " <<identitas->agama <<endl;
    cout<<" Status Perkawinan\t\t: " <<identitas->status_perkawinan <<endl;
    cout<<" Pekerjaan\t\t\t: " <<identitas->pekerjaan <<endl;
    cout<<" Kewarganegaraan\t\t: " <<identitas->kewarganegaraan <<endl;
    cout<<" Berlaku Hingga\t\t\t: " <<identitas->berlaku <<endl;

    getch();
}
