#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <fstream>

#include "person.hpp"
#include "siswa.hpp"

using namespace std;

void clear()
{
  system("clear") and system("cls");
}

int main()
{
  string personName, personMM, siswaNRP, siswaDepartemen, repeat;
  int personDD, personYY, siswaYearEntries, siswaSemester, back, menuTerpilih, menuTerpilih2, menuTerpilih3, menuTerpilih4;
  vector<Student> dataSiswa;
  float IPS[] = {};
  float IPK;
  bool benar = true;
  int id = 1000;

kembali:
  while (benar)
  {
    clear();
    cout << "Selamat Datang di Sistem Akademik" << endl;
    cout << "===========================\nJumlah data: " << dataSiswa.size() << " Mahasiswa\n"
         << endl;

    cout << "Menu:" << endl;
    cout << "1. Tambah Data Mahasiswa" << endl;
    cout << "2. Lihat Data Mahasiswa" << endl;
    cout << "3. Keluar" << endl;
    cout << "Nomor: ";
    cin >> menuTerpilih;

    switch (menuTerpilih)
    {
    case 1:
    {
      clear();
      id++;
      siswaNRP = "502" + to_string(id);
      cout << "Masukkan Nama:";
      cin.ignore();
      getline(cin, personName);
      clear();
      cout << "Masukkan Tanggal Lahir: ";
      cin >> personDD;
      clear();
      cout << "Masukkan Bulan Lahir: ";
      cin >> personMM;
      clear();
      cout << "Masukkan Tahun Lahir: ";
      cin >> personYY;
      clear();
      cout << "Masukkan Departemen:";
      cin.ignore();
      getline(cin, siswaDepartemen);
      clear();
      cout << "Masukkan Tahun Masuk: ";
      cin >> siswaYearEntries;
      clear();
      cout << "Masukkan Semester: ";
      cin >> siswaSemester;

      Student inputMasuk = Student(id, personName, personDD, personMM, personYY, siswaNRP, siswaDepartemen, siswaYearEntries, siswaSemester);
      dataSiswa.push_back(inputMasuk);

      clear();
      cout << "Apakah Ingin Menginput Lagi? (y/n): ";
      cin >> repeat;
      break;

      if (repeat == "n" || repeat == "N")
      {
        benar = false;
      }
      else if (repeat == "y" || repeat == "Y")
      {
        benar = true;
      }
    }
    break;

    case 2:
    {
      if (dataSiswa.size() == 0)
      {
        clear();
        cout << "============================\nData Tidak Tersedia" << endl;
        cout << "\n============================\n";
        cout
            << "Tekan Enter untuk Kembali..." << endl;
        cin.ignore();
        cin.ignore();
        goto kembali;
      }
      else
      {
        clear();
        cout << "ID" << setw(25) << "NRP" << setw(25) << "NAMA" << setw(25) << "TANGGAL LAHIR" << setw(25) << "DEPARTEMEN" << setw(25) << setw(25) << "TAHUN MASUK" << setw(25) << "SEMESTER" << endl;
        for (int i = 0; i < dataSiswa.size(); i++)
        {
          cout << dataSiswa[i].getID() << setw(25) << dataSiswa[i].getNRP() << setw(25) << dataSiswa[i].getName() << setw(20) << dataSiswa[i].getDay() << " " << dataSiswa[i].getMonth() << " " << dataSiswa[i].getYear() << setw(25) << dataSiswa[i].getDepartment() << setw(25) << dataSiswa[i].getYearEntry() << setw(25) << dataSiswa[i].getSemester() << endl;
        }
        cout << "\n============================\n"
             << "1. Edit Data\n"
             << "2. Cetak Data\n"
             << "3. Kembali" << endl;
        cout << "Masukkan Angka: ";
        cin >> menuTerpilih2;

        switch (menuTerpilih2)
        {
        case 1:
        {
          clear();
          cout << "Masukkan ID: ";
          cin >> menuTerpilih3;
          cout << "\n";

        pilihan:
          int batas = dataSiswa.size() + 1000;
          if (menuTerpilih3 <= batas)
          {
            clear();
            cout << "ID             : " << dataSiswa[1001 - menuTerpilih3].getID() << endl;
            cout << "NRP            : " << dataSiswa[1001 - menuTerpilih3].getNRP() << endl;
            cout << "Nama           : " << dataSiswa[1001 - menuTerpilih3].getName() << endl;
            cout << "Tanggal Lahir  : " << dataSiswa[1001 - menuTerpilih3].getDay() << endl;
            cout << "Bulan Lahir    : " << dataSiswa[1001 - menuTerpilih3].getMonth() << endl;
            cout << "Tahun Lahir    : " << dataSiswa[1001 - menuTerpilih3].getYear() << endl;
            cout << "Departemen     : " << dataSiswa[1001 - menuTerpilih3].getDepartment() << endl;
            cout << "Tahun Masuk    : " << dataSiswa[1001 - menuTerpilih3].getYearEntry() << endl;
            cout << "Semester       : " << dataSiswa[1001 - menuTerpilih3].getSemester() << endl;

            cout << "=========================";

            cout << "\n1. Ubah Nama\n"
                 << "2. Ubah Tanggal Lahir\n"
                 << "3. Ubah Bulan Lahir\n"
                 << "4. Ubah Tahun Lahir\n"
                 << "5. Ubah Departemen\n"
                 << "6. Ubah Tahun Masuk\n"
                 << "7. Ubah Semester\n"
                 << "8. Kembali Ke Menu Utama\n"
                 << "9. Keluar\n"
                 << "Masukkan Pilihan: ";
            cin >> menuTerpilih4;

            switch (menuTerpilih4)
            {
            case 1:
            {
              clear();
              cout << "Masukkan Nama: ";
              cin.ignore();
              getline(cin, personName);
              dataSiswa[1001 - menuTerpilih3].setName(personName);
              clear();
              cout << "ID             : " << dataSiswa[1001 - menuTerpilih3].getID() << endl;
              cout << "NRP            : " << dataSiswa[1001 - menuTerpilih3].getNRP() << endl;
              cout << "Nama           : " << dataSiswa[1001 - menuTerpilih3].getName() << endl;
              cout << "Tanggal Lahir  : " << dataSiswa[1001 - menuTerpilih3].getDay() << endl;
              cout << "Bulan Lahir    : " << dataSiswa[1001 - menuTerpilih3].getMonth() << endl;
              cout << "Tahun Lahir    : " << dataSiswa[1001 - menuTerpilih3].getYear() << endl;
              cout << "Departemen     : " << dataSiswa[1001 - menuTerpilih3].getDepartment() << endl;
              cout << "Tahun Masuk    : " << dataSiswa[1001 - menuTerpilih3].getYearEntry() << endl;
              cout << "Semester       : " << dataSiswa[1001 - menuTerpilih3].getSemester() << endl;

              cout << "\n=========================\n";
              cout << "Masukkan Angka 1 untuk Kembali Utama" << endl;
              cout << "Masukkan Angka 2 untuk Kembali Mengubah Data" << endl;
              cin >> back;
              if (back == 1)
              {
                goto kembali;
              }
              else if (back == 2)
              {
                goto pilihan;
              }
            }
            case 2:
            {
              clear();
              cout << "Masukkan Tanggal Lahir: ";
              cin >> personDD;
              dataSiswa[1001 - menuTerpilih3].setDay(personDD);
              clear();
              cout << "ID             : " << dataSiswa[1001 - menuTerpilih3].getID() << endl;
              cout << "NRP            : " << dataSiswa[1001 - menuTerpilih3].getNRP() << endl;
              cout << "Nama           : " << dataSiswa[1001 - menuTerpilih3].getName() << endl;
              cout << "Tanggal Lahir  : " << dataSiswa[1001 - menuTerpilih3].getDay() << endl;
              cout << "Bulan Lahir    : " << dataSiswa[1001 - menuTerpilih3].getMonth() << endl;
              cout << "Tahun Lahir    : " << dataSiswa[1001 - menuTerpilih3].getYear() << endl;
              cout << "Departemen     : " << dataSiswa[1001 - menuTerpilih3].getDepartment() << endl;
              cout << "Tahun Masuk    : " << dataSiswa[1001 - menuTerpilih3].getYearEntry() << endl;
              cout << "Semester       : " << dataSiswa[1001 - menuTerpilih3].getSemester() << endl;

              cout << "\n=========================\n";
              cout << "Masukkan Angka 1 untuk Kembali Utama" << endl;
              cout << "Masukkan Angka 2 untuk Kembali Mengubah Data" << endl;
              cin >> back;
              if (back == 1)
              {
                goto kembali;
              }
              else if (back == 2)
              {
                goto pilihan;
              }
            }
            case 3:
            {
              clear();

              cout << "Masukkan Bulan Lahir: ";
              cin >> personMM;
              dataSiswa[1001 - menuTerpilih3].setMonth(personMM);
              clear();
              cout << "ID             : " << dataSiswa[1001 - menuTerpilih3].getID() << endl;
              cout << "NRP            : " << dataSiswa[1001 - menuTerpilih3].getNRP() << endl;
              cout << "Nama           : " << dataSiswa[1001 - menuTerpilih3].getName() << endl;
              cout << "Tanggal Lahir  : " << dataSiswa[1001 - menuTerpilih3].getDay() << endl;
              cout << "Bulan Lahir    : " << dataSiswa[1001 - menuTerpilih3].getMonth() << endl;
              cout << "Tahun Lahir    : " << dataSiswa[1001 - menuTerpilih3].getYear() << endl;
              cout << "Departemen     : " << dataSiswa[1001 - menuTerpilih3].getDepartment() << endl;
              cout << "Tahun Masuk    : " << dataSiswa[1001 - menuTerpilih3].getYearEntry() << endl;
              cout << "Semester       : " << dataSiswa[1001 - menuTerpilih3].getSemester() << endl;

              cout << "\n=========================\n";
              cout << "Masukkan Angka 1 untuk Kembali Utama" << endl;
              cout << "Masukkan Angka 2 untuk Kembali Mengubah Data" << endl;
              cin >> back;
              if (back == 1)
              {
                goto kembali;
              }
              else if (back == 2)
              {
                goto pilihan;
              }
            }
            case 4:
            {
              clear();
              cout << "Masukkan Tahun Lahir: ";
              cin >> personYY;
              dataSiswa[1001 - menuTerpilih3].setYear(personYY);
              clear();
              cout << "ID             : " << dataSiswa[1001 - menuTerpilih3].getID() << endl;
              cout << "NRP            : " << dataSiswa[1001 - menuTerpilih3].getNRP() << endl;
              cout << "Nama           : " << dataSiswa[1001 - menuTerpilih3].getName() << endl;
              cout << "Tanggal Lahir  : " << dataSiswa[1001 - menuTerpilih3].getDay() << endl;
              cout << "Bulan Lahir    : " << dataSiswa[1001 - menuTerpilih3].getMonth() << endl;
              cout << "Tahun Lahir    : " << dataSiswa[1001 - menuTerpilih3].getYear() << endl;
              cout << "Departemen     : " << dataSiswa[1001 - menuTerpilih3].getDepartment() << endl;
              cout << "Tahun Masuk    : " << dataSiswa[1001 - menuTerpilih3].getYearEntry() << endl;
              cout << "Semester       : " << dataSiswa[1001 - menuTerpilih3].getSemester() << endl;

              cout << "\n=========================\n";
              cout << "Masukkan Angka 1 untuk Kembali Utama" << endl;
              cout << "Masukkan Angka 2 untuk Kembali Mengubah Data" << endl;
              cin >> back;
              if (back == 1)
              {
                goto kembali;
              }
              else if (back == 2)
              {
                goto pilihan;
              }
            }
            case 5:
            {
              clear();
              cout << "Masukkan Departemen: ";
              cin.ignore();
              getline(cin, siswaDepartemen);
              dataSiswa[1001 - menuTerpilih3].setDepartment(siswaDepartemen);
              clear();
              cout << "ID             : " << dataSiswa[1001 - menuTerpilih3].getID() << endl;
              cout << "NRP            : " << dataSiswa[1001 - menuTerpilih3].getNRP() << endl;
              cout << "Nama           : " << dataSiswa[1001 - menuTerpilih3].getName() << endl;
              cout << "Tanggal Lahir  : " << dataSiswa[1001 - menuTerpilih3].getDay() << endl;
              cout << "Bulan Lahir    : " << dataSiswa[1001 - menuTerpilih3].getMonth() << endl;
              cout << "Tahun Lahir    : " << dataSiswa[1001 - menuTerpilih3].getYear() << endl;
              cout << "Departemen     : " << dataSiswa[1001 - menuTerpilih3].getDepartment() << endl;
              cout << "Tahun Masuk    : " << dataSiswa[1001 - menuTerpilih3].getYearEntry() << endl;
              cout << "Semester       : " << dataSiswa[1001 - menuTerpilih3].getSemester() << endl;

              cout << "\n=========================\n";
              cout << "Masukkan Angka 1 untuk Kembali Utama" << endl;
              cout << "Masukkan Angka 2 untuk Kembali Mengubah Data" << endl;
              cin >> back;
              if (back == 1)
              {
                goto kembali;
              }
              else if (back == 2)
              {
                goto pilihan;
              }
            }
            case 6:
            {
              clear();
              cout << "Masukkan Tahun Masuk: ";
              cin >> siswaYearEntries;
              dataSiswa[1001 - menuTerpilih3].setYearEntry(siswaYearEntries);
              clear();
              cout << "ID             : " << dataSiswa[1001 - menuTerpilih3].getID() << endl;
              cout << "NRP            : " << dataSiswa[1001 - menuTerpilih3].getNRP() << endl;
              cout << "Nama           : " << dataSiswa[1001 - menuTerpilih3].getName() << endl;
              cout << "Tanggal Lahir  : " << dataSiswa[1001 - menuTerpilih3].getDay() << endl;
              cout << "Bulan Lahir    : " << dataSiswa[1001 - menuTerpilih3].getMonth() << endl;
              cout << "Tahun Lahir    : " << dataSiswa[1001 - menuTerpilih3].getYear() << endl;
              cout << "Departemen     : " << dataSiswa[1001 - menuTerpilih3].getDepartment() << endl;
              cout << "Tahun Masuk    : " << dataSiswa[1001 - menuTerpilih3].getYearEntry() << endl;
              cout << "Semester       : " << dataSiswa[1001 - menuTerpilih3].getSemester() << endl;

              cout << "\n=========================\n";
              cout << "Masukkan Angka 1 untuk Kembali Utama" << endl;
              cout << "Masukkan Angka 2 untuk Kembali Mengubah Data" << endl;
              cin >> back;
              if (back == 1)
              {
                goto kembali;
              }
              else if (back == 2)
              {
                goto pilihan;
              }
            }
            case 7:
            {
              clear();
              cout << "Masukkan Semester: ";
              cin >> siswaSemester;
              dataSiswa[1001 - menuTerpilih3].setSemester(siswaSemester);
              clear();
              cout << "ID             : " << dataSiswa[1001 - menuTerpilih3].getID() << endl;
              cout << "NRP            : " << dataSiswa[1001 - menuTerpilih3].getNRP() << endl;
              cout << "Nama           : " << dataSiswa[1001 - menuTerpilih3].getName() << endl;
              cout << "Tanggal Lahir  : " << dataSiswa[1001 - menuTerpilih3].getDay() << endl;
              cout << "Bulan Lahir    : " << dataSiswa[1001 - menuTerpilih3].getMonth() << endl;
              cout << "Tahun Lahir    : " << dataSiswa[1001 - menuTerpilih3].getYear() << endl;
              cout << "Departemen     : " << dataSiswa[1001 - menuTerpilih3].getDepartment() << endl;
              cout << "Tahun Masuk    : " << dataSiswa[1001 - menuTerpilih3].getYearEntry() << endl;
              cout << "Semester       : " << dataSiswa[1001 - menuTerpilih3].getSemester() << endl;

              cout << "\n=========================\n";
              cout << "Masukkan Angka 1 untuk Kembali Utama" << endl;
              cout << "Masukkan Angka 2 untuk Kembali Mengubah Data" << endl;
              cin >> back;
              if (back == 1)
              {
                goto kembali;
              }
              else if (back == 2)
              {
                goto pilihan;
              }
            }
            case 8:
            {
              goto kembali;
            }
            case 9:
            {
              break;
            }
            default:
              break;
            }
          }

          else
          {
            cout << "Data tidak ditemukan!!" << endl;
            clear();
            goto kembali;
          }
        }
        break;
        case 2:
        {
          clear();
          cout << "Maaf layanan belum tersedia" << endl;
          cout << "\n============================\n";
          cout << "Tekan enter untuk kembali..." << endl;
          cin.ignore();
          cin.ignore();
          goto kembali;
          // ofstream fw("D:\\Programming\\C++\\file.csv", ofstream::out);
          // if (fw.is_open)
          // {
          //   for (int i = 0; i < dataSiswa.size(); i++)
          //   {
          //     fw << dataSiswa[i] << "\n";
          //   }
          //   fw.close();
          // }
        }
        case 3:
        {
          clear();
          goto kembali;
          break;
        }
        }
      }
    }
    case 3:
    {
      benar = false;
    }
    default:
      break;
    }
  }
}
