#include<time.h>
#include<iostream>
#include<cstdlib>
#include<string.h>
#include<iomanip>
#include<stdlib.h>
#include<fstream>
#include<conio.h>
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



 void process()
    {
        fstream fin;

        int n,x,COUNT=0,m;
        char c,a[10];
        a:
        cout<<"\n\t\t***********WELCOME TO THE SECTION OF PROCESSORS***********";
        cout<<"\n\n\t1.Show all the products\n\t2.Search by brand\n\t3.Search by cores";
        cin>>x;

        fin.open("processor.txt",ios::in);
        processor p;
        if(x==1)
            {
                p.header();
                while(fin)
                {
                    fin.read((char*)&p,sizeof(p));
                    m=checkdeleted(p.PID);
                    if(m==1)
                    {
                        continue;
                    }
                    else
                    {
                      p.display();

                    }
                    COUNT++;
                }
                        if(COUNT==0)
                            cout<<"\n   :( No products found";
               cout<<endl;
            }
        else if(x==2)
        {
            cout<<"\nEnter the Brand:";
            cin>>a;
            p.header();
            while(fin)
                    {

                        fin.read((char*)&p,sizeof(p));
                        if(checkdeleted(p.PID))
                            {
                                continue;
                            }
                        if(strcmp(p.brand,a)==0)
                        {
                        p.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";

        }
        else if(x==3)
        {
                    cout<<"\nEnter no of the cores:";
                    cin>>x;
                     p.header();
                    while(fin)
                            {

                            fin.read((char*)&p,sizeof(p));
                            if(checkdeleted(p.PID))
                            {
                                continue;
                            }
                            if(p.getcores()==x)
                                {
                                p.display();
                                }
                            COUNT++;
                            }
                        if(COUNT==0)
                            cout<<"\n   :( No products found";
;
        }
        else
        {
            cout<<"\nWrong choice entered";
            goto a;
        }

    while(1)
       {
        cout<<"\nEnter Product ID if you want to buy something, if not then enter 0:";
        cin>>x;
        if(x==0)
            break;
        addtocart(x);

       }
       fin.close();
    }
void mother()
    {
        int n,x,COUNT=0;
        char a[10];

        fstream fin;

        cout<<"\n\t\t************WELCOME TO THE SECTION OF MOTHERBOARDS**********";
        cout<<"\nChoose the way you want to explore:";
        cout<<"\n1.Show all Products\n2.Search by FORMFACTOR\n3.Search by Brand";
        cin>>n;

        fin.open("motherboard.txt",ios::in);
        motherboard m;

        if(n==1)
            {
                m.header();
                    while(fin)
                            {

                            fin.read((char*)&m,sizeof(m));
                            if(checkdeleted(m.PID))
                            {
                                continue;
                            }
                            m.display();
                            COUNT++;
                            }
                            if(COUNT==0)
                                cout<<"\n   :( No products found";

                cout<<endl;
            }
        else if(n==2)
            {
                cout<<"\nEnter the formfactor:";
                cin>>a;
                m.header();
                while(fin)
                            {

                            fin.read((char*)&m,sizeof(m));
                            if(checkdeleted(m.PID))
                            {
                                continue;
                            }

                            if(strcmp(m.formfactor,a)==0)
                            {
                                m.display();
                                COUNT++;
                            }

                            if(COUNT==0)
                                cout<<"\n   :( No products found";
                            }


            }
        else if(n==3)
            {
                cout<<"\nEnter the BRAND name:";
                cin>>a;
                m.header();
                while(fin)
                            {

                            fin.read((char*)&m,sizeof(m));
                            if(checkdeleted(m.PID))
                            {
                                continue;
                            }

                            if(strcmp(m.brand,a)==0)
                            {
                                m.display();
                                COUNT++;
                            }

                            if(COUNT==0)
                                cout<<"\n   :( No products found";
                            }

            }

        while(1)
            {
            cout<<"\nEnter Product ID if you want to buy something, if not then enter 0:";
            cin>>x;
            if(x==0)
                break;
            addtocart(x);

            }
    }
void hdd()
    {
        int n,x,p,COUNT=0;
        char a[10];

        fstream fin;

        cout<<"\n\t\t************WELCOME TO THE SECTION OF HDD**********";
        cout<<"\nChoose the way you want to explore:";
        cout<<"\n1.Show all Products\n2.Search by TYPE\n3.Search by Brand\n4.Search by size";
        cin>>n;

        fin.open("harddisk.txt",ios::in);
        harddisk h;

        if(n==1)
        {
            h.header();
            while(fin)
                    {

                        fin.read((char*)&h,sizeof(h));
                        if(checkdeleted(h.PID))
                            {
                                continue;
                            }
                        h.display();
                        COUNT++;
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
         cout<<endl;
        }
        else if(n==2)
        {
            cout<<"\nEnter the TYPE of the interference:";
            cin>>a;
            h.header();
            while(fin)
                    {

                        fin.read((char*)&h,sizeof(h));
                        if(checkdeleted(h.PID))
                            {
                                continue;
                            }
                        if(strcmp(h.type,a)==0)
                        {
                        h.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        else if(n==3)
        {
            h.header();
            cout<<"\nEnter the Brand:";
            cin>>a;
            while(fin)
                    {

                        fin.read((char*)&h,sizeof(h));
                        if(checkdeleted(h.PID))
                            {
                                continue;
                            }
                        if(strcmp(h.brand,a)==0)
                        {
                        h.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        else if(n=4)
        {
            cout<<"\nEnter the Min size of HDD:";
            cin>>p;
            h.header();
            while(fin)
                    {

                        fin.read((char*)&h,sizeof(h));
                        if(checkdeleted(h.PID))
                            {
                                continue;
                            }
                        if(p>=h.SIZE)
                        {
                        h.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }

    while(1)
       {
        cout<<"\nEnter Product ID if you want to buy something, if not then enter 0:";
        cin>>x;
        if(x==0)
            break;
        addtocart(x);

       }
       fin.close();
    }
void writer()
    {
        int n,x,COUNT=0;
        char a[10];

        fstream fin;

        cout<<"\n\t\t************WELCOME TO THE SECTION OF DISC WRITER**********";
        cout<<"\nChoose the way you want to explore:";
        cout<<"\n1.Show all Products\n2.Search by BRAND\n3.Search by TYPE";
        cin>>n;

        fin.open("dvd.txt",ios::in);
        dvd d;

        if(n==1)
        {
            d.header();
            while(fin)
                    {

                        fin.read((char*)&d,sizeof(d));
                        if(checkdeleted(d.PID))
                            {
                                continue;
                            }
                        d.display();
                        COUNT++;
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        cout<<endl;
        }
         else if(n==2)
        {
            cout<<"\nEnter the Brand:";
            cin>>a;
            d.header();
            while(fin)
                    {

                        fin.read((char*)&d,sizeof(d));
                        if(checkdeleted(d.PID))
                            {
                                continue;
                            }
                        if(strcmp(d.brand,a)==0)
                        {
                        d.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        else if(n==3)
        {
            cout<<"\nEnter the TYPE of the Disc writer:";
            cin>>a;
            d.header();
            while(fin)
                    {

                        fin.read((char*)&d,sizeof(d));
                        if(checkdeleted(d.PID))
                            {
                                continue;
                            }
                        if(strcmp(d.type,a)==0)
                        {
                        d.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }

        while(1)
            {
            cout<<"\nEnter Product ID if you want to buy something, if not then enter 0:";
            cin>>x;
            if(x==0)
                break;
            addtocart(x);
            }
        fin.close();
    }
void sdram()
    {
        int n,x,COUNT=0;
        char a[10];

        fstream fin;
        system("cls");


        cout<<"\n\t\t************WELCOME TO THE SECTION OF SD-RAM **********";
        cout<<"\nChoose the way you want to explore:";
        cout<<"\n1.Show all Products\n2.Search by BRAND\n3.Search by TYPE\n4.Search by device supported";
        cin>>n;

        fin.open("ram.txt",ios::in);
        ram r;

        if(n==1)
        {
            r.header();
            while(fin)
                    {

                        fin.read((char*)&r,sizeof(r));
                        if(checkdeleted(r.PID))
                            {
                                continue;
                            }
                        r.display();
                        COUNT++;
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        cout<<endl;
        }
        else if(n==2)
        {
            cout<<"\nEnter the Brand:";
            cin>>a;
            r.header();
            while(fin)
                    {

                        fin.read((char*)&r,sizeof(r));
                        if(checkdeleted(r.PID))
                            {
                                continue;
                            }
                        if(strcmp(r.brand,a)==0)
                        {
                        r.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        else if(n==3)
        {
            cout<<"\nEnter the TYPE of the RAM:";
            cin>>a;
            r.header();
            while(fin)
                    {

                        fin.read((char*)&r,sizeof(r));
                        if(checkdeleted(r.PID))
                            {
                                continue;
                            }
                        if(strcmp(r.type,a)==0)
                        {
                        r.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        else if(n==4)
        {
            cout<<"\nEnter the DEVICE:";
            cin>>a;
            r.header();
            while(fin)
                    {

                        fin.read((char*)&r,sizeof(r));
                        if(checkdeleted(r.PID))
                            {
                                continue;
                            }
                        if(strcmp(r.device,a)==0)
                        {
                        r.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        while(1)
            {
            cout<<"\nEnter Product ID if you want to buy something, if not then enter 0:";
            cin>>x;
            if(x==0)
                break;
            addtocart(x);
            }
        fin.close();
    }
void usbdrive()
    {
        int n,x,COUNT=0;
        char a[10];

        fstream fin;
        system("cls");


        cout<<"\n\t\t************WELCOME TO THE SECTION OF USB-FLASH DRIVE **********";
        cout<<"\nChoose the way you want to explore:";
        cout<<"\n1.Show all Products\n2.Search by BRAND\n3.Search by TYPE";
        cin>>n;

        fin.open("usb.txt",ios::in);
        usb u;

        if(n==1)
        {
            u.header();
            while(fin)
                    {

                        fin.read((char*)&u,sizeof(u));
                        if(checkdeleted(u.PID))
                            {
                                continue;
                            }
                        u.display();
                        COUNT++;
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        cout<<endl;
        }
        else if(n==2)
        {
            cout<<"\nEnter the Brand:";
            cin>>a;
            u.header();
            while(fin)
                    {

                        fin.read((char*)&u,sizeof(u));
                        if(checkdeleted(u.PID))
                            {
                                continue;
                            }
                        if(strcmp(u.brand,a)==0)
                        {
                        u.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
         else if(n==3)
            {
            cout<<"\nEnter the TYPE of the Flash Drive:";
            cin>>a;
            u.header();
            while(fin)
                    {

                        fin.read((char*)&u,sizeof(u));
                        if(checkdeleted(u.PID))
                            {
                                continue;
                            }
                        if(strcmp(u.type,a)==0)
                        {
                        u.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
            }


        while(1)
            {
            cout<<"\nEnter Product ID if you want to buy something, if not then enter 0:";
            cin>>x;
            if(x==0)
                break;
            addtocart(x);
            }
        fin.close();
    }
void mou()
    {
        int n,x,COUNT=0;
        char a[10];

        fstream fin;

        cout<<"\n\t\t************WELCOME TO THE SECTION OF MOUSE**********";
        cout<<"\nChoose the way you want to explore:";
        cout<<"\n1.Show all Products\n2.Search by BRAND\n3.Search by TYPE";
        cin>>n;

        fin.open("mouse.dat",ios::in);
        mouse m;

        if(n==1)
        {
            m.header();
            while(fin)
                    {

                        fin.read((char*)&m,sizeof(m));
                        if(checkdeleted(m.PID))
                            {
                                continue;
                            }
                        m.display();
                        COUNT++;
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        cout<<endl;
        }
        else if(n==2)
        {
            m.header();
            cout<<"\nEnter the Brand:";
            cin>>a;
            while(fin)
                    {

                        fin.read((char*)&m,sizeof(m));
                        if(checkdeleted(m.PID))
                            {
                                continue;
                            }
                        if(strcmp(m.brand,a)==0)
                        {
                        m.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        else if(n==3)
        {
            cout<<"\nEnter the TYPE of the interference:";
            cin>>a;
            m.header();
            while(fin)
                    {

                        fin.read((char*)&m,sizeof(m));
                        if(checkdeleted(m.PID))
                            {
                                continue;
                            }
                        if(strcmp(m.type,a)==0)
                        {
                        m.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        while(1)
            {
                cout<<"\nEnter Product ID if you want to buy something, if not then enter 0:";
                cin>>x;
                if(x==0)
                    break;
                addtocart(x);

            }
        fin.close();
    }
void key()
    {
        int n,x,COUNT=0;
        char a[10];

        fstream fin;

        cout<<"\n\t\t************WELCOME TO THE SECTION OF KEYBOARD**********";
        cout<<"\nChoose the way you want to explore:";
        cout<<"\n1.Show all Products\n2.Search by BRAND\n3.Search by TYPE";
        cin>>n;

        fin.open("keyboard.dat",ios::in);
        keyboard k;

        if(n==1)
        {
            k.header();
            while(fin)
                    {

                        fin.read((char*)&k,sizeof(k));
                        if(checkdeleted(k.PID))
                            {
                                continue;
                            }
                        k.display();
                        COUNT++;
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
      cout<<endl;
        }
        else if(n==2)
        {
            k.header();
            cout<<"\nEnter the Brand:";
            cin>>a;
            while(fin)
                    {

                        fin.read((char*)&k,sizeof(k));
                        if(checkdeleted(k.PID))
                            {
                                continue;
                            }
                        if(strcmp(k.brand,a)==0)
                        {
                        k.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        else if(n==3)
        {
            cout<<"\nEnter the TYPE of the interference:";
            cin>>a;
            k.header();
            while(fin)
                    {

                        fin.read((char*)&k,sizeof(k));
                        if(checkdeleted(k.PID))
                            {
                                continue;
                            }
                        if(strcmp(k.type,a)==0)
                        {
                        k.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        while(1)
            {
                cout<<"\nEnter Product ID if you want to buy something, if not then enter 0:";
                cin>>x;
                if(x==0)
                    break;
                addtocart(x);

            }
        fin.close();
    }


