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
int checkid(int);

void add()
    {
        int n,i,b;
        char c='y';
        fstream fout;
        r:
        system("cls");
        cout<<"\nWhat do you want to add?";
        cout<<"\n1.Processor\n2.MotherBoard\n3.HardDist\n4.DVD\n5.Ram\n6.USB flash drive\n7.Mouse\n8.Keyboard";//\n9.Monitor";7.External HDD\n";
        //cout<<"\n10.Printer\n11.Projector\n12.Scanner\n13.Speaker";
        cout<<"\nEnter your choice:";
        cin>>n;

        if(n==1)
        {
                        processor p1;
                        fout.open("processor.txt",ios::out|ios::app);
                        while(c!='n')
                            {
                            cout<<"\nEnter your data:";
                            p1.input();
                            for(i=1;i<=p1.stock;i++)
                                {
                                                                                                         //f1:
                                p1.change();
                                                                                                         //b=checkid(p1.PID);
                                /*if(b==1)
                                {
                                    goto f1;
                                }
                                else if(b==0)
                                {*/
                                  fout.write((char*)&p1,sizeof(p1));
                                //}

                                }
                            cout<<"\nWant to enter more data?(y/n):";
                            cin>>c;
                            }

        }
        else if(n==2)
        {
            motherboard m1;
                        fout.open("motherboard.txt",ios::out|ios::app);
                        while(c!='n')
                            {
                            cout<<"\nEnter your data:";
                            m1.input();
                            for(i=1;i<=m1.stock;i++)
                                {
                                m1.change();

                                fout.write((char*)&m1,sizeof(m1));
                                }
                            cout<<"\nWant to enter more data?(y/n):";
                            cin>>c;
                            }
        }
        else if(n==3)
        {
            harddisk h1;
                        fout.open("harddisk.txt",ios::out|ios::app);
                        while(c!='n')
                            {
                            cout<<"\nEnter your data:";
                            h1.input();
                            for(i=1;i<=h1.stock;i++)
                                {
                                h1.change();

                                fout.write((char*)&h1,sizeof(h1));
                                }
                                cout<<"\nWant to enter more data?(y/n):";
                            cin>>c;
                            }
        }
        else if(n==4)
        {
            dvd d1;
                        fout.open("dvd.txt",ios::out|ios::app);
                        while(c!='n')
                            {
                            cout<<"\nEnter your data:";
                            d1.input();
                            for(i=1;i<=d1.stock;i++)
                                {
                                d1.change();

                                fout.write((char*)&d1,sizeof(d1));
                                }
                                cout<<"\nWant to enter more data?(y/n):";
                            cin>>c;
                            }
        }
        else if(n==5)
        {
            ram r1;
                        fout.open("ram.txt",ios::out|ios::app);
                        while(c!='n')
                            {
                            cout<<"\nEnter your data:";
                            r1.input();
                            for(i=1;i<=r1.stock;i++)
                                {
                                r1.change();

                                fout.write((char*)&r1,sizeof(r1));
                                }
                                cout<<"\nWant to enter more data?(y/n):";
                            cin>>c;
                            }

        }
        else if(n==6)
        {
            usb u1;
                        fout.open("usb.txt",ios::out|ios::app);
                        while(c!='n')
                            {
                            cout<<"\nEnter your data:";
                            u1.input();
                            for(i=1;i<=u1.stock;i++)
                                {
                                u1.change();

                                fout.write((char*)&u1,sizeof(u1));
                                }
                                cout<<"\nWant to enter more data?(y/n):";
                            cin>>c;
                            }
        }
        else if(n==7)
        {
            mouse mu1;
                        fout.open("mouse.txt",ios::out|ios::app);
                        while(c!='n')
                            {
                            cout<<"\nEnter your data:";
                            mu1.input();
                            for(i=1;i<=mu1.stock;i++)
                                {
                                mu1.change();

                                fout.write((char*)&mu1,sizeof(mu1));
                                }
                                cout<<"\nWant to enter more data?(y/n):";
                            cin>>c;
                            }
        }
     else if(n==8)
        {
            keyboard k1;
                        fout.open("keyboard.txt",ios::out|ios::app);
                        while(c!='n')
                            {
                            cout<<"\nEnter your data:";
                            k1.input();
                            for(i=1;i<=k1.stock;i++)
                                {
                                k1.change();

                                fout.write((char*)&k1,sizeof(k1));
                                }
                                cout<<"\nWant to enter more data?(y/n):";
                            cin>>c;
                            }
        }

        else
        {
                    cout<<"\nTry again";
                    goto r;
        }


    }

int checkid(int l)
{
   fstream f;
//******************************************************************
   f.open("processor.txt",ios::in);
   processor p;
   while(f)
   {
      f.read((char*)&p,sizeof(p));
      if(p.PID==l)
      {
          return 1;
      }
   }
   f.close();
//*****************************************************************
   f.open("motherboard.txt",ios::in);
    motherboard m;
    while(f)
   {
      f.read((char*)&m,sizeof(m));
      if(m.PID==l)
      {
          return 1;
      }
   }
   f.close();
//*******************************************************************
      f.open("harddisk.txt",ios::in);
        harddisk h;
   while(f)
   {
      f.read((char*)&h,sizeof(h));
      if(h.PID==l)
      {
          return 1;
      }
   }
   f.close();
//*******************************************************************
      f.open("dvd.txt",ios::in);
        dvd d;
   while(f)
   {
      f.read((char*)&d,sizeof(d));
      if(d.PID==l)
      {
          return 1;
      }
   }
   f.close();
//*******************************************************************
f.open("ram.txt",ios::in);
        ram r;
   while(f)
   {
      f.read((char*)&r,sizeof(r));
      if(r.PID==l)
      {
          return 1;
      }
   }
   f.close();
//*******************************************************************
f.open("usb.txt",ios::in);
        usb u;
   while(f)
   {
      f.read((char*)&u,sizeof(u));
      if(u.PID==l)
      {
          return 1;
      }
   }
   f.close();
//*******************************************************************
 f.open("mouse.dat",ios::in);
        mouse mo;
   while(f)
   {
      f.read((char*)&mo,sizeof(mo));
      if(mo.PID==l)
      {
          return 1;
      }
   }
   f.close();
//*******************************************************************
f.open("keyboard.dat",ios::in);
        keyboard k;
   while(f)
   {
      f.read((char*)&k,sizeof(k));
      if(k.PID==l)
      {
          return 1;
      }
   }
   f.close();
//*******************************************************************
return 0;
}


/*
        else if(n==9)
        {
            monitor mo1;
                        fout.open("monitor.txt",ios::out|ios::app);
                        while(c!='n')
                            {
                            cout<<"\nEnter your data:";
                            mo1.input();
                            for(i=1;i<=mo1.stock;i++)
                                {
                                mo1.change();

                                fout.write((char*)&mo1,sizeof(mo1));
                                }
                                cout<<"\nWant to enter more data?(y/n):";
                            cin>>c;
                            }
        }
        else if(n==10)
        {
            printer pn1;
                        fout.open("printer.txt",ios::out|ios::app);
                        while(c!='n')
                            {
                            cout<<"\nEnter your data:";
                            pn1.input();
                            for(i=1;i<=pn1.stock;i++)
                                {
                                pn1.change();

                                fout.write((char*)&pn1,sizeof(pn1));
                                }
                                cout<<"\nWant to enter more data?(y/n):";
                            cin>>c;
                            }
        }
        else if(n==11)
        {
            projector pr1;
                        fout.open("projector.txt",ios::out|ios::app);
                        while(c!='n')
                            {
                            cout<<"\nEnter your data:";
                            pr1.input();
                            for(i=1;i<=pr1.stock;i++)
                                {
                                pr1.change();

                                fout.write((char*)&pr1,sizeof(pr1));
                                }
                                cout<<"\nWant to enter more data?(y/n):";
                            cin>>c;
                            }
        }
        else if(n==12)
        {
            scanner sc1;
                        fout.open("scanner.txt",ios::out|ios::app);
                        while(c!='n')
                            {
                            cout<<"\nEnter your data:";
                            sc1.input();
                            for(i=1;i<=sc1.stock;i++)
                                {
                                sc1.change();

                                fout.write((char*)&sc1,sizeof(sc1));
                                }
                                cout<<"\nWant to enter more data?(y/n):";
                            cin>>c;
                            }
        }
        else if(n==13)
        {
            speaker s1;
                        fout.open("speaker.txt",ios::out|ios::app);
                        while(c!='n')
                            {
                            cout<<"\nEnter your data:";
                            s1.input();
                            for(i=1;i<=s1.stock;i++)
                                {
                                s1.change();

                                fout.write((char*)&s1,sizeof(s1));
                                }
                                cout<<"\nWant to enter more data?(y/n):";
                            cin>>c;
                            }
        }
*/

  /*else if(n==7)
        {
            harddisk p1;
                        fout.open("exthdd.txt",ios::out|ios::app);
                        while(c!='n')
                            {
                            cout<<"\nEnter your data:";
                            p1.input();
                            for(i=1;i<=p1.stock;i++)
                                {
                                p1.change();

                                fout.write((char*)&p1,sizeof(p1));
                                }
                                cout<<"\nWant to enter more data?(y/n):";
                            cin>>c;
                            }
        }*/
