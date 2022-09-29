#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

class Person
{
private:
  string Name, mm;
  int ID, dd, yy;

public:
  void setID(int Id)
  {
    this->ID = Id;
  }
  void setName(string name)
  {
    this->Name = name;
  }
  void setMonth(string month)
  {
    this->mm = month;
  }
  void setDay(int day)
  {
    this->dd = day;
  }
  void setYear(int year)
  {
    this->yy = year;
  }

  int getID()
  {
    return this->ID;
  }
  string getName()
  {
    return this->Name;
  }
  int getDay()
  {
    return this->dd;
  }
  string getMonth()
  {
    return this->mm;
  }
  int getYear()
  {
    return this->yy;
  }

  Person(int Id, string name, int day, string month, int year)
  {
    ID = Id;
    Name = name;
    dd = day;
    mm = month;
    yy = year;
  };
};

class Student : Person
{
};

void clear()
{
  system("clear") and system("cls");
}

int main()
{
  string personName, personMM, repeat;
  int personDD, personYY, back, menuTerpilih, menuTerpilih2, menuTerpilih3, menuTerpilih4;
  vector<Person> dataPerson;
  bool benar = true;
  int id = 1000;

kembali:
  while (benar)
  {
    clear();
    cout << "\n=================\nJumlah data: " << dataPerson.size() << " Orang\n"
         << endl;

    cout << "Menu:" << endl;
    cout << "1. Tambah Data" << endl;
    cout << "2. Lihat Data" << endl;
    cout << "3. Keluar" << endl;
    cout << "Nomor: ";
    cin >> menuTerpilih;

    switch (menuTerpilih)
    {
    case 1:
    {
      clear();
      id++;
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

      Person inputMasuk = Person(id, personName, personDD, personMM, personYY);
      dataPerson.push_back(inputMasuk);

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
      if (dataPerson.size() == 0)
      {
        clear();
        cout << "============================\nData Tidak Tersedia" << endl;
        cout << "Tekan Enter untuk Kembali..." << endl;
        goto kembali;
      }
      else
      {
        clear();
        cout << "ID" << setw(25) << "NAMA" << setw(25) << "TANGGAL LAHIR" << endl;
        for (int i = 0; i < dataPerson.size(); i++)
        {
          cout << dataPerson[i].getID() << setw(25) << dataPerson[i].getName() << setw(20) << dataPerson[i].getDay() << " " << dataPerson[i].getMonth() << " " << dataPerson[i].getYear() << endl;
        }
        cout << "\n============================\n"
             << "1. Edit Data\n"
             << "2. Kembali" << endl;
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
          int batas = dataPerson.size() + 1000;
          if (menuTerpilih3 <= batas)
          {
            clear();
            cout << "ID    : " << dataPerson[1001 - menuTerpilih3].getID() << endl;
            cout << "Nama : " << dataPerson[1001 - menuTerpilih3].getName() << endl;
            cout << "Tanggal Lahir : " << dataPerson[1001 - menuTerpilih3].getDay() << endl;
            cout << "Bulan Lahir : " << dataPerson[1001 - menuTerpilih3].getMonth() << endl;
            cout << "Tahun Lahir : " << dataPerson[1001 - menuTerpilih3].getYear() << endl;

            cout << "=========================";

            cout << "\n1. Ubah Nama\n"
                 << "2. Ubah Tanggal Lahir\n"
                 << "3. Ubah Bulan Lahir\n"
                 << "4. Ubah Tahun Lahir\n"
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
              dataPerson[1001 - menuTerpilih3].setName(personName);
              clear();
              cout << "ID   : " << dataPerson[1001 - menuTerpilih3].getID() << endl;
              cout << "Nama : " << dataPerson[1001 - menuTerpilih3].getName() << endl;
              cout << "Tanggal Lahir : " << dataPerson[1001 - menuTerpilih3].getDay() << endl;
              cout << "Bulan Lahir : " << dataPerson[1001 - menuTerpilih3].getMonth() << endl;
              cout << "Tahun Lahir : " << dataPerson[1001 - menuTerpilih3].getYear() << endl;

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
              dataPerson[1001 - menuTerpilih3].setDay(personDD);
              clear();
              cout << "ID   : " << dataPerson[1001 - menuTerpilih3].getID() << endl;
              cout << "Nama : " << dataPerson[1001 - menuTerpilih3].getName() << endl;
              cout << "Tanggal Lahir : " << dataPerson[1001 - menuTerpilih3].getDay() << endl;
              cout << "Bulan Lahir : " << dataPerson[1001 - menuTerpilih3].getMonth() << endl;
              cout << "Tahun Lahir : " << dataPerson[1001 - menuTerpilih3].getYear() << endl;

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
              dataPerson[1001 - menuTerpilih3].setMonth(personMM);
              clear();
              cout << "ID   : " << dataPerson[1001 - menuTerpilih3].getID() << endl;
              cout << "Nama : " << dataPerson[1001 - menuTerpilih3].getName() << endl;
              cout << "Tanggal Lahir : " << dataPerson[1001 - menuTerpilih3].getDay() << endl;
              cout << "Bulan Lahir : " << dataPerson[1001 - menuTerpilih3].getMonth() << endl;
              cout << "Tahun Lahir : " << dataPerson[1001 - menuTerpilih3].getYear() << endl;

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
              dataPerson[1001 - menuTerpilih3].setYear(personYY);
              clear();
              cout << "ID   : " << dataPerson[1001 - menuTerpilih3].getID() << endl;
              cout << "Nama : " << dataPerson[1001 - menuTerpilih3].getName() << endl;
              cout << "Tanggal Lahir : " << dataPerson[1001 - menuTerpilih3].getDay() << endl;
              cout << "Bulan Lahir : " << dataPerson[1001 - menuTerpilih3].getMonth() << endl;
              cout << "Tahun Lahir : " << dataPerson[1001 - menuTerpilih3].getYear() << endl;

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
