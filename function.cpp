#include<time.h>
#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<string.h>
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


//For Administrator purpose
//int flag=1,checkout=0,total=0;





//CART FUNCTIONS STARTS FROM HERE

void addtocart(int x)
    {
        fstream f,fin,f2;
        char name[20],conno[15];
        f.open("cart.txt",ios::out|ios::app);
        f2.open("object.txt",ios::out|ios::app);
        pid z;
        if(checkout==0)
        {
            checkout=1;
            f<<"*************************************BILL***********************************************\n";
            cout<<"Enter your Name: ";
            cin>>name;
            cout<<"Enter your Contact Number: ";
            cin>>conno;
            f<<"NAME:- "<<name<<"\n";
            f<<"Contact Number:- "<<conno<<"\n";
            f<<"*****************************************************************************************\n";
            f<<setw(20)<<"BRAND"<<setw(20)<<"MODEL ID"<<setw(20)<<"PRICE"<<"\n";
            f<<"*****************************************************************************************\n";

            total=0;
        }

        //*********************************************************
        fin.open("processor.txt",ios::in);
        processor p;
        while(fin)
                            {
                            fin.read((char*)&p,sizeof(p));
                            if(x==p.PID)
                                {
                                    //f.setf(ios::internal,ios::adjustfield);
                                  f<<setw(20)<<p.brand<<setw(20)<<p.modelid<<setw(20)<<p.price<<"\n";
                                //f<<endl<<p.brand<<"   "<<p.modelid<<"                    "<<p.price;
                                total+=p.price;
                                z.PID=p.PID;
                                f2.write((char*)&z,sizeof(z));
                                f.close();
                                f2.close();
                                fin.close();
                                return;
                                }
                            }
                            fin.close();
//*********************************************************
        fin.open("motherboard.txt",ios::in);
        motherboard m;
         while(fin)
                            {
                            fin.read((char*)&m,sizeof(m));
                            if(x==m.PID)
                            {
                                f.setf(ios::internal,ios::adjustfield);
                                f<<setw(20)<<m.brand<<setw(20)<<m.modelid<<setw(20)<<m.price<<"\n";
                                //f<<endl<<m.brand<<"   "<<m.modelid<<"                    "<<m.price;
                                total+=m.price;
                                z.PID=m.PID;
                                f2.write((char*)&z,sizeof(z));
                                f2.close();
                                f.close();
                                fin.close();
                            return;
                            }
                            }
            fin.close();
//**********************************************************
        fin.open("harddisk.txt",ios::in);
        harddisk h;
        while(fin)
                    {
                        fin.read((char*)&h,sizeof(h));
                        if(x==h.PID)
                        {
                            f.setf(ios::internal,ios::adjustfield);
                            f<<setw(20)<<h.brand<<setw(20)<<h.modelid<<setw(20)<<h.price<<"\n";
                            //f<<endl<<h.brand<<"   "<<h.modelid<<"                    "<<h.price;
                                total+=h.price;fin.close();
                                z.PID=h.PID;
                                f2.write((char*)&z,sizeof(z));
                                f.close();
                                f2.close();
                            return;
                        }
                    }
        fin.close();
//************************************************************
        fin.open("dvd.txt",ios::in);
        dvd d;
        while(fin)
                    {
                        fin.read((char*)&d,sizeof(d));
                        if(x==d.PID)
                        {
                            f.setf(ios::internal,ios::adjustfield);
                            f<<setw(20)<<d.brand<<setw(20)<<d.modelid<<setw(20)<<d.price<<"\n";
                            //f<<endl<<d.brand<<"   "<<d.modelid<<"                    "<<d.price;
                                total+=d.price;fin.close();
                                z.PID=d.PID;
                                f2.write((char*)&z,sizeof(z));
                                f.close();
                                f2.close();
                            return;
                        }
                    }
        fin.close();
//*************************************************************
        fin.open("ram.txt",ios::in);
        ram r;
        while(fin)
                    {
                        fin.read((char*)&r,sizeof(r));
                        if(x==r.PID)
                        {
                            f.setf(ios::internal,ios::adjustfield);
                            f<<setw(20)<<r.brand<<setw(20)<<r.modelid<<setw(20)<<r.price<<"\n";
                           // f<<endl<<r.brand<<"   "<<r.modelid<<"                    "<<r.price;
                                total+=r.price;fin.close();
                                z.PID=r.PID;
                                f2.write((char*)&z,sizeof(z));
                                f.close();
                                f2.close();
                            return;
                        }
                    }
        fin.close();
//*************************************************************
        fin.open("usb.txt",ios::in);
        usb u;
        while(fin)
                    {

                        fin.read((char*)&u,sizeof(u));
                        if(x==u.PID)
                        {
                            f.setf(ios::internal,ios::adjustfield);
                            f<<setw(20)<<u.brand<<setw(20)<<u.modelid<<setw(20)<<u.price<<"\n";
                        //    f<<endl<<u.brand<<"   "<<u.modelid<<"                    "<<u.price;
                                total+=u.price;fin.close();
                                z.PID=u.PID;
                                f2.write((char*)&z,sizeof(z));
                                f.close();
                                f2.close();
                            return;
                        }
                    }
        fin.close();
//*****************************************************************
/*fin.open("exthdd.txt",ios::in);
        harddisk j;
        while(fin)
                    {
                        fin.read((char*)&j,sizeof(j));
                        if(x==j.PID)
                        {
                            f<<endl<<j.brand<<"   "<<j.modelid<<"                    "<<j.price;
                                total+=j.price;fin.close();
                                z.PID=j.PID;
                                f2.write((char*)&z,sizeof(z));
                                f.close();
                                f2.close();
                            return;
                        }
                    }
        fin.close();*/
//******************************************************************
fin.open("mouse.txt",ios::in);
        mouse n;
        while(fin)
                    {
                        fin.read((char*)&n,sizeof(n));
                        if(x==n.PID)
                        {
                            f.setf(ios::internal,ios::adjustfield);
                            f<<setw(20)<<n.brand<<setw(20)<<n.modelid<<setw(20)<<n.price<<"\n";
                            //f<<endl<<n.brand<<"   "<<n.modelid<<"                    "<<n.price;
                                total+=n.price;fin.close();
                                z.PID=n.PID;
                                f2.write((char*)&z,sizeof(z));
                                f.close();
                                f2.close();
                            return;
                        }
                    }
        fin.close();
//***********************************************************************
fin.open("keyboard.txt",ios::in);
        keyboard k;
        while(fin)
                    {
                        fin.read((char*)&k,sizeof(k));
                        if(x==k.PID)
                        {
                            f.setf(ios::internal,ios::adjustfield);
                            f<<setw(20)<<k.brand<<setw(20)<<k.modelid<<setw(20)<<k.price<<"\n";
                            //f<<endl<<k.brand<<"   "<<k.modelid<<"                    "<<k.price;
                                total+=k.price;fin.close();
                                z.PID=k.PID;
                                f2.write((char*)&z,sizeof(z));
                                f.close();
                                f2.close();
                            return;
                        }
                    }
        fin.close();
//**********************************************************************
/*fin.open("monitor.txt",ios::in);
        monitor o;
        while(fin)
                    {
                        fin.read((char*)&o,sizeof(o));
                        if(x==o.PID)
                        {
                            f<<endl<<o.brand<<"   "<<o.modelid<<"                    "<<o.price;
                                total+=o.price;fin.close();
                                z.PID=o.PID;
                                f2.write((char*)&z,sizeof(z));
                                f.close();
                                f2.close();
                            return;
                        }
                    }
        fin.close();
    //**********************************************************************
fin.open("printer.txt",ios::in);
        printer q;
        while(fin)
                    {
                        fin.read((char*)&q,sizeof(q));
                        if(x==q.PID)
                        {
                            f<<endl<<q.brand<<"   "<<q.modelid<<"                    "<<q.price;
                                total+=q.price;fin.close();
                                z.PID=q.PID;
                                f2.write((char*)&z,sizeof(z));
                                f.close();
                                f2.close();
                            return;
                        }
                    }
        fin.close();
//*************************************************************************
fin.open("projector.txt",ios::in);
        projector c;
        while(fin)
                    {
                        fin.read((char*)&c,sizeof(c));
                        if(x==c.PID)
                        {
                            f<<endl<<c.brand<<"   "<<c.modelid<<"                    "<<c.price;
                                total+=c.price;fin.close();
                                z.PID=c.PID;
                                f2.write((char*)&z,sizeof(z));
                                f.close();
                                f2.close();
                            return;
                        }
                    }
        fin.close();
//**************************************************************************
fin.open("scanner.txt",ios::in);
        scanner s;
        while(fin)
                    {
                        fin.read((char*)&s,sizeof(s));
                        if(x==s.PID)
                        {
                            f<<endl<<s.brand<<"   "<<s.modelid<<"                    "<<s.price;
                                total+=s.price;fin.close();
                                z.PID=s.PID;
                                f2.write((char*)&z,sizeof(z));
                                f.close();
                                f2.close();
                            return;
                        }
                    }
        fin.close();
//***************************************************************************
fin.open("speaker.txt",ios::in);
        speaker t;
        while(fin)
                    {
                        fin.read((char*)&t,sizeof(t));
                        if(x==t.PID)
                        {
                            f<<endl<<t.brand<<"   "<<t.modelid<<"                    "<<t.price;
                                total+=t.price;fin.close();
                                z.PID=t.PID;
                                f2.write((char*)&z,sizeof(z));
                                f.close();
                                f2.close();
                            return;
                        }
                    }
        fin.close();*/
//*******************************************************************************

    }
void reducestock(int x)
    {
fstream fin;

         fin.open("processor.txt",ios::in);
        processor p;
         while(fin)
                            {
                            fin.read((char*)&p,sizeof(p));
                            if(x==p.PID)
                                {
                                delpid(x);
                                fin.close();
                                return;
                                }
                            }
            fin.close();
//*********************************************************
        fin.open("motherboard.txt",ios::in);
        motherboard m;
         while(fin)
                            {
                            fin.read((char*)&m,sizeof(m));
                            if(x==m.PID)
                                {
                                delpid(x);
                                fin.close();
                                return;
                                }
                            }
            fin.close();
//**********************************************************
        fin.open("harddisk.txt",ios::in);
        harddisk h;
        while(fin)
                    {
                        fin.read((char*)&h,sizeof(h));
                        if(x==h.PID)
                        {
                            delpid(x);

                                fin.close();
                            return;
                        }
                    }
        fin.close();
//************************************************************
        fin.open("dvd.txt",ios::in);
        dvd d;
        while(fin)
                    {
                        fin.read((char*)&d,sizeof(d));
                        if(x==d.PID)
                        {
                            delpid(x);

                                fin.close();
                            return;
                        }
                    }
        fin.close();
//*************************************************************
        fin.open("ram.txt",ios::in);
        ram r;
        while(fin)
                    {
                        fin.read((char*)&r,sizeof(r));
                        if(x==r.PID)
                        {
                            delpid(x);

                                fin.close();
                            return;
                        }
                    }
        fin.close();
//*************************************************************
        fin.open("usb.txt",ios::in);
        usb u;
        while(fin)
                    {
                        fin.read((char*)&u,sizeof(u));
                        if(x==u.PID)
                        {
                            delpid(x);

                                fin.close();
                            return;
                        }
                    }
        fin.close();
//*****************************************************************
fin.open("mouse.txt",ios::in);
        mouse n;
        while(fin)
                    {
                        fin.read((char*)&n,sizeof(n));
                        if(x==n.PID)
                        {
                            delpid(x);

                                fin.close();
                            return;
                        }
                    }
        fin.close();

//***********************************************************************
fin.open("keyboard.txt",ios::in);
        keyboard k;
        while(fin)
                    {
                        fin.read((char*)&k,sizeof(k));
                        if(x==k.PID)
                        {
                            delpid(x);

                                fin.close();
                            return;
                        }
                    }
        fin.close();
//**********************************************************************
}




//Deletion of the object
void delpid(int x)
    {
        fstream f;
        f.open("deleted.txt",ios::out|ios::app);
        if(x==0)
        {
            cout<<"\nENTER PRODUCT ID TO DELETE:";
            cin>>x;
        }
        pid p;
        p.PID=x;
        f.write((char*)&p,sizeof(p));


        f.close();

    }
int checkdeleted(int x)
    {
        fstream f;
        f.open("deleted.txt",ios::in);

        pid p;

        while(f)
        {
            f.read((char*)&p,sizeof(p));
            if(p.PID==x)
            {
                f.close();
               return 1;
            }


        }
        f.close();
        return 0;
    }
//********************************************************************************************************
//Random no generator for generating product it.
int pidgen()
    {
        int x=5000,a;
        while(1)
       {

           x=rand()%10000;
           if((x>999)&&(x<10000))
           {
              a=check(x);
              if(a==1)
              {
                  return x;
              }

           }

       }
    }
int check(int x)
    {

        fstream fin;
//*********************************************************
        fin.open("processor.txt",ios::in);
        processor p;
        while(fin)
                            {
                            fin.read((char*)&p,sizeof(p));
                            if(x==p.PID)
                                {
                                return 0;
                                }
                            }
                            fin.close();
//*********************************************************
        fin.open("motherboard.txt",ios::in);
        motherboard m;
         while(fin)
                            {
                            fin.read((char*)&m,sizeof(m));
                            if(x==m.PID)
                            {
                            return 0;
                            }
                            }
            fin.close();
//**********************************************************
        fin.open("harddisk.txt",ios::in);
        harddisk h;
        while(fin)
                    {
                        fin.read((char*)&h,sizeof(h));
                        if(x==h.PID)
                        {
                            return 0;
                        }
                    }
        fin.close();
//************************************************************
        fin.open("dvd.txt",ios::in);
        dvd d;
        while(fin)
                    {
                        fin.read((char*)&d,sizeof(d));
                        if(x==d.PID)
                        {
                            return 0;
                        }
                    }
        fin.close();
//*************************************************************
        fin.open("ram.txt",ios::in);
        ram r;
        while(fin)
                    {
                        fin.read((char*)&r,sizeof(r));
                        if(x==r.PID)
                        {
                            return 0;
                        }
                    }
        fin.close();
//*************************************************************
        fin.open("usb.txt",ios::in);
        usb u;
        while(fin)
                    {
                        fin.read((char*)&u,sizeof(u));
                        if(x==u.PID)
                        {
                            return 0;
                        }
                    }
        fin.close();
//*****************************************************************
/*fin.open("exthdd.txt",ios::in);
        harddisk j;
        while(fin)
                    {
                        fin.read((char*)&j,sizeof(j));
                        if(x==j.PID)
                        {
                            return 0;
                        }
                    }
        fin.close();*/
//******************************************************************
fin.open("mouse.txt",ios::in);
        mouse n;
        while(fin)
                    {
                        fin.read((char*)&n,sizeof(n));
                        if(x==n.PID)
                        {
                            return 0;
                        }
                    }
        fin.close();
//***********************************************************************
fin.open("keyboard.txt",ios::in);
        keyboard k;
        while(fin)
                    {
                        fin.read((char*)&k,sizeof(k));
                        if(x==k.PID)
                        {
                            return 0;
                        }
                    }
        fin.close();
//**********************************************************************
/*fin.open("monitor.txt",ios::in);
        monitor o;
        while(fin)
                    {
                        fin.read((char*)&o,sizeof(o));
                        if(x==o.PID)
                        {
                            return 0;
                        }
                    }
        fin.close();
    //**********************************************************************
fin.open("printer.txt",ios::in);
        printer q;
        while(fin)
                    {
                        fin.read((char*)&q,sizeof(q));
                        if(x==q.PID)
                        {
                            return 0;
                        }
                    }
        fin.close();
//*************************************************************************
fin.open("projector.txt",ios::in);
        projector c;
        while(fin)
                    {
                        fin.read((char*)&c,sizeof(c));
                        if(x==c.PID)
                        {
                            return 0;
                        }
                    }
        fin.close();
//**************************************************************************
fin.open("scanner.txt",ios::in);
        scanner s;
        while(fin)
                    {
                        fin.read((char*)&s,sizeof(s));
                        if(x==s.PID)
                        {
                            return 0;
                        }
                    }
        fin.close();
//***************************************************************************
fin.open("speaker.txt",ios::in);
        speaker t;
        while(fin)
                    {
                        fin.read((char*)&t,sizeof(t));
                        if(x==t.PID)
                        {
                            return 0;
                        }
                    }
        fin.close();*/
//*******************************************************************************

        return 1;

    }
void billing()
    {
    char ch;

    fstream fin("cart.txt", ios::in);
    if(!fin)
    {
        cerr<<"\n Cannot open file !\n";
        getch();
        return;
    }
     char  const * const PrinterName = "usb001.txt"; // Identify the printer port.
    fstream printer;
    printer.open(PrinterName,ios::out); // Open the printer stream.
    if(!printer) // Ensure the printer stream opened ok.
    {
        cerr << "\a\n\tERROR: Unable to open " << PrinterName << endl;
        cout << "\n\tPress the [ENTER] key to return ";
        loading();
        return;
    }
    int s=150;
    char line[s];
    while (fin)    //!fin.eof()
    {
        fin.get(ch);
        printer << (ch);
        //fin.getline(line,s);
        //printer<<line<<endl;
    }
    fin.close();


    //printer << endl << ends << flush;
    printer.close(); // Finish the print job by closing the printer stream.

     fin.open("cart.txt",ios::in);
    //fin.close(); // Close file./
    cout << "\n\n\t\t\tPrinting...\n\n";
      while(fin)
         {
           fin.get(ch);
           cout<<ch;
           //fin.getline(line,s);
           //cout<<line<<"\n";
         }
         getch();
    fstream f,f2;
    fin.close();

    f.open("object.txt",ios::in);
    pid p;
        while(f)
        {
            f.read((char*)&p,sizeof(p));
            reducestock(p.PID);

        }
    f.close();
    f.open("object.txt",ios::out);
    //f<<" ";
    f.close();

    f2.open("cart.txt",ios::out);
    f2.close();
    total=0;
    checkout=0;
    //cout << "\n\n Please press the [ENTER] key to return";
    //cin.ignore();
    }





