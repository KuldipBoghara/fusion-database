#include<time.h>
#include<iostream>
#include<cstdlib>
#include<string.h>
#include<stdlib.h>
#include<fstream>
#include<conio.h>
#include<iomanip>
#include<windows.h>
#include<stdio.h>
using namespace std;

void loading();
void passphrase();
void process();
void mother();
void hdd();
void writer();
void sdram();
void accessories();
void usbdrive();
void externalhdd();
void mou();
void key();

void add();
void addtocart(int);
void reducestock(int);
void delpid(int);
int pidgen();
int checkdeleted(int);
int check(int);
void billing();
void write();
void read();
void SEARCH();
void del();




//For Administrator purpose
int flag=1,checkout=0,total=0;

class processor
{
public:
    char modelid[20],socket[10],clock[10];
    int cores,stock,PID,price;
    //float clock;
    char brand[20];


    void input()
    {
        PID=pidgen();
       // cout<<"\nPID generated:"<<PID;
    cout<<"\nEnter Brand Name:";
    cin>>brand;
    cin.ignore();
    cout<<"\nEnter Modelno.";
    cin>>modelid;
    cout<<"\nEnter Socket Type:";
    cin>>socket;
    cout<<"\nEnter clock speed:";
    cin>>clock;
    cout<<"\nEnter no of cores:";
    cin>>cores;
    cout<<"Enter the price:";
    cin>>price;
    cout<<"\nEnter the quantity:";
    cin>>stock;
    }
    void header()
        {
            cout<<endl;
            cout.width(10);cout<<"PID";
            cout.width(10);cout<<"BRAND";
            cout.width(20);cout<<"ModelID";
            cout.width(15);cout<<"Socket";
            cout.width(10);cout<<"Clock";
            cout.width(10);cout<<"Cores";
            cout.width(10);cout<<"Price";
            cout<<"\n***************************************************************************************************";
        }
    void display()
    {
            cout<<endl;
            cout.width(10);cout<<PID;
            cout.width(10);cout<<brand;
            cout.width(20);cout<<modelid;
            //puts(modelid);
            cout.width(15);cout<<socket;
            cout.width(10);cout<<clock;
            cout.width(10);cout<<cores;
            cout.width(10);cout<<price;
    }
    void change()
        {
            PID=pidgen();
        }

    int getcores()
       {
           return cores;
       }

};

class motherboard
    {
    public:
        char brand[10],formfactor[10],modelid[10];
        int stock,PID,price;

        void input()
            {
               PID=pidgen();
               // cout<<"\nPID generated:"<<PID;
                cout<<"\nEnter Brand:";
                cin>>brand;
                cout<<"\nEnter ModelID:";
                cin>>modelid;
                cout<<"\nEnter FormFactor:";
                cin>>formfactor;
                cout<<"\nEnter Price:";
                cin>>price;
                cout<<"\nEnter quantity:";
                cin>>stock;
            }
        void header()
            {
                cout<<endl;
                cout.width(10);cout<<"PID";
                cout.width(10);cout<<"BRAND";
                cout.width(10);cout<<"ModelID";
                cout.width(15);cout<<"FormFactor";
                cout.width(10);cout<<"PRICE";
                cout<<"\n********************************************************************";

            }
        void display()
            {   cout<<endl;
                cout.width(10);cout<<PID;
                cout.width(10);cout<<brand;
                cout.width(10);cout<<modelid;
                cout.width(10);cout<<formfactor;
                cout.width(10);cout<<price;

            }
            void change()
        {
            PID=pidgen();
        }
    };

class harddisk
    {
    public:
        char brand[10],type[5],modelid[10];
        int PID,stock,speed,price,SIZE;

        void input()
            {
                PID=pidgen();
                //cout<<"\nPID generated:"<<PID;
                cout<<"\nEnter Brand:";
                cin>>brand;
                cout<<"\nEnter ModelID:";
                cin>>modelid;
                cout<<"\nEnter TYPE(SATA or PATA):";
                cin>>type;
                cout<<"\nEnter Size in(GB):";
                cin>>SIZE;
                cout<<"\nEnter speed(in Gbps):";
                cin>>speed;
                cout<<"\nEnter price:";
                cin>>price;
                cout<<"\nEnter stock:";
                cin>>stock;
            }
        void header()
            {
                cout<<endl;
                cout.width(6);cout<<"PID";
                cout.width(10);cout<<"BRAND";
                cout.width(10);cout<<"ModelID";
                cout.width(6);cout<<"TYPE";
                cout.width(6);cout<<"SIZE";
                cout.width(6);cout<<"SPEED";
                cout.width(6);cout<<"PRICE";
                cout<<"\n********************************************************************************";
            }
        void display()
            {
                cout<<endl;
                cout.width(6);cout<<PID;
                cout.width(10);cout<<brand;
                cout.width(10);cout<<modelid;
                cout.width(6);cout<<type;
                cout.width(6);cout<<SIZE;
                cout.width(6);cout<<speed;
                cout.width(6);cout<<price;
            }
            void change()
        {
            PID=pidgen();
        }
    };

// DVD WRITER CLASS
class dvd
    {
    public:
        int stock,price,PID,speed;
        char brand[10],modelid[10],type[10];

        void input()
            {
                PID=pidgen();
               // cout<<"\nPID generated:"<<PID;
                cout<<"\nEnter Brand:";
                cin>>brand;
                cout<<"\nEnter Model Id:";
                cin>>modelid;
                cout<<"\nEnter Type(eg. supermulti,combo):";
                cin>>type;
                cout<<"\nEnter max. Speed:";
                cin>>speed;
                cout<<"\nEnter Price:";
                cin>>price;
                cout<<"\nEnter Stock:";
                cin>>stock;
            }
        void header()
            {
                cout<<endl;
                cout.width(6);cout<<"PID";
                cout.width(10);cout<<"BRAND";
                cout.width(10);cout<<"ModelID";
                cout.width(10);cout<<"TYPE";
                cout.width(6);cout<<"Speed";
                cout.width(6);cout<<"Price";
                cout<<"\n*************************************************************************";

            }
        void display()
            {
                cout<<endl;
                cout.width(6);cout<<PID;
                cout.width(10);cout<<brand;
                cout.width(10);cout<<modelid;
                cout.width(10);cout<<type;
                cout.width(6);cout<<speed;
                cout.width(6);cout<<price;
            }
            void change()
        {
            PID=pidgen();
        }
    };


class ram
    {
    public:
        int PID,stock,price,clock;
        char modelid[10],brand[10],type[10],device[10];

        void input()
            {
                PID=pidgen();
              //  cout<<"\nProduct id generated:"<<PID;
                cout<<"\nEnter Brand:";
                cin>>brand;
                cout<<"Enter ModelId:";
                cin>>modelid;
                cout<<"Enter Type(eg. DDR3):";
                cin>>type;
                cout<<"Enter device supported:";
                cin>>device;
                cout<<"Enter clock speed:";
                cin>>clock;
                cout<<"Enter price:";
                cin>>price;
                cout<<"Enter Quantity:";
                cin>>stock;
            }
        void header()
            {
                cout<<"\n";
                cout.width(6);cout<<"PID";
                cout.width(10);cout<<"BRAND";
                cout.width(10);cout<<"ModelID";
                cout.width(6);cout<<"TYPE";
                cout.width(10);cout<<"Device";
                cout.width(6);cout<<"Clock";
                cout.width(6);cout<<"Price";
                cout<<"\n**********************************************************************";
            }

        void display()
            {
                cout<<"\n";
                cout.width(6);cout<<PID;
                cout.width(10);cout<<brand;
                cout.width(10);cout<<modelid;
                cout.width(6);cout<<type;
                cout.width(10);cout<<device;
                cout.width(6);cout<<clock;
                cout.width(6);cout<<price;
            }
            void change()
        {
            PID=pidgen();
        }
    };

class usb
    {
    public:
        int PID,price,stock,speed;
        char brand[10],modelid[10],type[6];

        void input()
            {
                PID=pidgen();
               // cout<<"\nPID generated"<<PID;
                cout<<"\nEnter Brand:";
                cin>>brand;
                cout<<"Enter ModelId:";
                cin>>modelid;
                cout<<"Enter Type:";
                cin>>type;
                cout<<"Enter Speed:";
                cin>>speed;
                cout<<"Enter Price:";
                cin>>price;
                cout<<"Enter Quantity:";
                cin>>stock;

            }
        void header()
            {

                cout<<endl;
                cout.width(6);cout<<"PID";
                cout.width(10);cout<<"BRAND";
                cout.width(10);cout<<"ModelID";
                cout.width(6);cout<<"Type";
                cout.width();cout<<"Speed";
                cout.width();cout<<"Price";
                cout<<"\n**********************************************************************";
            }
        void display()
            {
                cout<<endl;
                cout.width(6);cout<<PID;
                cout.width(10);cout<<brand;
                cout.width(10);cout<<modelid;
                cout.width(6);cout<<type;
                cout.width(6);cout<<speed;
                cout.width(6);cout<<price;
            }
            void change()
        {
            PID=pidgen();
        }
    };

class mouse
    {
    public:
        int PID,stock,price;
        char brand[10],modelid[10],type[10];

        void input()
            {
                PID=pidgen();
               // cout<<"\nPID generated:"<<PID;
                cout<<"\nEnter Brand:";
                cin>>brand;
                cout<<"Enter ModelID:";
                cin>>modelid;
                cout<<"Enter Type(wired/Wireless):";
                cin>>type;
                cout<<"Enter Price:";
                cin>>price;
                cout<<"Enter quantity:";
                cin>>stock;
            }

        void header()
            {
                cout<<endl;
                cout.width(6);cout<<"PID";
                cout.width(10);cout<<"BRAND";
                cout.width(10);cout<<"ModelId";
                cout.width(10);cout<<"TYPE";
                cout.width(6);cout<<"PRICE";
                cout<<"\n*********************************************************************************";
            }

        void display()
            {
                cout<<endl;
                cout.width(6);cout<<PID;
                cout.width(10);cout<<brand;
                cout.width(10);cout<<modelid;
                cout.width(10);cout<<type;
                cout.width(6);cout<<price;
            }
            void change()
        {
            PID=pidgen();
        }
    };


class keyboard
    {
   public:
        int PID,stock,price;
        char brand[10],modelid[10],type[10];

        void input()
            {
                PID=pidgen();
              //  cout<<"\nPID generated:"<<PID;
                cout<<"\nEnter Brand:";
                cin>>brand;
                cout<<"Enter ModelID:";
                cin>>modelid;
                cout<<"Enter Type(wired/Wireless):";
                cin>>type;
                cout<<"Enter Price:";
                cin>>price;
                cout<<"Enter quantity:";
                cin>>stock;
            }

        void header()
            {
                cout<<endl;
                cout.width(6);cout<<"PID";
                cout.width(10);cout<<"BRAND";
                cout.width(10);cout<<"ModelId";
                cout.width(10);cout<<"TYPE";
                cout.width(6);cout<<"PRICE";
                cout<<"\n*********************************************************************************";
            }

        void display()
            {
                cout<<endl;
                cout.width(6);cout<<PID;
                cout.width(10);cout<<brand;
                cout.width(10);cout<<modelid;
                cout.width(10);cout<<type;
                cout.width(6);cout<<price;
            }
            void change()
        {
            PID=pidgen();
        }
    };

class pid
    {
    public:
        int PID;
    };

