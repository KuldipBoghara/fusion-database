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
#include"class.cpp"
#include"function.cpp"
#include"display.cpp"
#include"input.cpp"

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
void title();
int entry();
int checkid(int);

//For Administrator purpose
//int flag=1,checkout=0,total=0;

//ALL THE PRODUCT CALSSES STARTS FROM HERE
COORD coord={0,0};
void gotoxy(int x,int y)
 {
   coord.X=x;
 coord.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }

main()
    {
        int n;
        system("color b5");
        system("mode 100,200");
        k:
        loading();


        system("cls");
       title();
        cin.ignore();


        passphrase();

        char c='y';

           // {

                s:
                system("cls");
                cout<<"\n\t\t\t\tMAIN MENU";
                if(flag==1)
                    cout<<"\n\t\t1. Computer Parts\n\t\t2. Computer Accessories\n\t\t4. UPDATE\n\t\t5. CheckOut\n\t\t7. Switch user\n\t\t8. EXIT";//3. Computer Peripherals\n\t\t
                else
                    cout<<"\n\t\t1. Computer Parts\n\t\t2. Computer Accessories\n\t\t5. CheckOut\n\t\t7. Switch user\n\t\t8. EXIT";//3. Computer Peripherals\n\t\t
                cout<<"\nEnter your choice:";
                cin>>n;

                if(n==1)
                {
                    system("cls");
                    cout<<"\nLoading";
                    loading();
                    system("cls");
                    cout<<"\n\t*****************COMPUTER PARTS******************";
                    cout<<"\n\n\t\t1.Processor\n\t\t2.Motherboard\n\t\t3.HDD\n\t\t4.DVD Writer\n\t\t5.SD-RAM\n\t\t6.Main menu";
                    cout<<"\nEnter Your choice:";
                    cin>>n;

                    switch(n)
                        {
                        case 1:process();
                            break;
                        case 2:mother();
                            break;
                        case 3:hdd();
                            break;
                        case 4:writer();
                            break;
                        case 5:sdram();
                            break;
                        case 6:goto s;
                            break;

                        default:cout<<"\nWrong Choice Entered:";
                        }
                    goto s;
                }
                else if(n==2)
                {
                    system("cls");
                    cout<<"\nLoading";
                    loading();
                    system("cls");
                    cout<<"\n\t*****************COMPUTER ACCESSORIES******************";
                    cout<<"\n\n\t\t1.USB FLASH DRIVE\n\t\t2.MOUSE\n\t\t3.KEYBOARD\n\t\t4.Main menu";
                    cout<<"\nEnter Your choice:";
                    cin>>n;

                    switch(n)
                        {
                        case 1:usbdrive();
                            break;
                        case 2:mou();
                            break;
                        case 3:key();
                            break;
                        case 4:goto s;
                            break;
                        default:cout<<"\nWrong Choice Entered:";
                        }
                    goto s;
                }
                else if(n==4&&flag==1)
                {
                    o:
                    system("cls");
                    cout<<"\nLoading";
                    loading();
                    system("cls");
                    cout<<"\n\t\t\t************WECOME TO THE UPDATION CENTER********************";
                    cout<<"\n1.Add products\n2.Remove Products\n3.Main Menu";
                    cout<<"\nEnter your choice:";
                    cin>>n;
                    switch(n)
                    {
                        case 1:add();
                            break;
                        case 2:
                            delpid(0);
                            break;
                        case 3:
                            goto s;
                        default:
                            cout<<"\nTry again";
                            goto o;
                    }
                    goto s;
                }
                else if(n==5)
                {
                    ss:
                    system("cls");
                    cout<<"\nLoading";
                    loading();
                    system("cls");
                    fstream f;
                    f.open("cart.txt",ios::app|ios::out);
                    f<<"\n\n*************************************************************************************************\n\n";
                    f<<setw(10)<<"TOTAL"<<"                                                    "<<total;
                    f.close();
                    f.open("cart.txt",ios::in);
                    int temp=150;
                    char line[temp],ch;
                    cout<<"\n\n\t\t1.Show the bill preview\n\t\t2.CheckOut\n\t\t3.Dump the cart\n\t\t4.Main Menu";
                    cin>>n;

                    if(n==1)
                    {
                        while(f)
                        {
                            f.get(ch);
                            cout<<ch;

                            //f.getline(line,temp);
                            //cout<<line<<endl;
                        }
                        f.close();
                        getch();
                    }
                    else if(n==2)
                    {
                    billing();

                    cout<<"\n\n\n\n\n\t\t\t\tSHOP DETAILS\n\n\n";
		cout<<"\n\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n\n";
		cout<<"\t\t  #   TIMING: 11 AM TO 02 PM & 03 PM TO 05 PM                    \n";
		cout<<"\t\t  #   SHOP WILL CLOSED ON SUNDAY.                                \n";
		cout<<"\t\t  #   GOODS ONCE SOLD WILL NOT BE EXCHANGED/REPLACED.            \n";
		cout<<"\t\t  #   TAKE YOUR SMART CARD WITH YOU.                             \n";
		cout<<"\t\t  #   COLLECT YOUR SMART CARD & BILL AFTER PAYMENT.              \n";
		cout<<"\t\t  #   DO NOT BREAK ANY SHOP ITEMS.                               \n";
		cout<<"\t\t  #   FOR ANY COMPLAINT CONTACT THE CHAIR PERSON.                \n";
		cout<<"\t\t  #   25 YEARS OF EXPERIENCE.                                    \n";
		cout<<"\t\t  #   CHAIR PERSON :- MR. KULDIP BOGHARA AND Mr. UMANG AGRAWAL   \n";
		cout<<"\t\t  #   AN ISO 9001-2000 CERTIFIED COMPANY.                        \n";
		cout<<"\t\t  #   WELL QUALIFIED STAFF MEMBERS.                              \n";
		cout<<"\t\t  #   Email :- fusioncompa&peph@gmail.com                        \n";
		cout<<"\n\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n\n";
		getch();
                    }
                    else if(n==3)
                    {
                        fstream f;
                        f.open("cart.txt",ios::out);
                        f.close();
                    }
                    else if(n==4)
                    goto s;
                    else
                        goto ss;
                }
                //Switch User
                else if(n==7)
                    goto k;
                else if(n==8)
                {
                   /* fstream f;
                   f.open("cart.txt",ios::out);
                   if(f!=NULL)
                   {
                       int v;
                       cout<<"you have item in cart.";
                       cout<<"if you want to buy enter 1: ";
                       cin>>v;
                       if(v==1)
                       {
                           billing();
                       }
                   }
                   f.close();*/
                  exit(0);
                }


               else
                {
                    goto s;
                }
                cin.ignore();
                system("cls");

                cout<<"\nWant to buy something else? :";
                cin>>c;

                if(c!='n')
                    goto s;

           // }


cin.ignore();
        return 0;
    }


void title()
{
      int i;
     char q=186,w=187,e=201,t=205,a=200,b=188;

  gotoxy(10,22);cout<<e;
        for(i=11;i<93;i++)
        {
            gotoxy(i,22);
            cout<<t;
        }
        gotoxy(i,22);cout<<w;
        gotoxy(10,23);
        cout<<q<<"**********************************************************************************"<<q;gotoxy(10,24);
        cout<<q<<"**********************************************************************************"<<q;gotoxy(10,25);
        cout<<q<<"                                    WELCOME TO                                    "<<q;gotoxy(10,26);
        cout<<q<<"                        FUSION COMPUTERS AND PERIPHERALS                          "<<q;gotoxy(10,27);
        cout<<q<<"**********************************************************************************"<<q;gotoxy(10,28);
        cout<<q<<"**********************************************************************************"<<q;gotoxy(10,29);
        cout<<q<<"           Designed And Developed By: Boghara Kuldip AND Umang Agrawal            "<<q;gotoxy(10,30);
        cout<<a;
        for(i=11;i<93;i++)
        {
            gotoxy(i,30);
            cout<<t;
        }
        gotoxy(i,30);cout<<b;
}

int entry()
{
     int i,n;
     char q=186,w=187,e=201,t=205,a=200,b=188;
     gotoxy(15,20);
     gotoxy(15,20);cout<<e;
        for(i=16;i<42;i++)
        {
            gotoxy(i,20);
            cout<<t;
        }
        gotoxy(i,20);cout<<w;
    gotoxy(15,21);
    cout<<q<<"Which way you want log in?"<<q;gotoxy(15,22);
     cout<<a;
    for(i=16;i<42;i++)
        {
            gotoxy(i,22);
            cout<<t;
        }
        gotoxy(i,22);cout<<b;
        gotoxy(15,25);cout<<e;
        char v=202,f=203;;
        gotoxy(16,25);cout<<t;gotoxy(17,25);cout<<t;gotoxy(18,25);cout<<t;gotoxy(19,25);cout<<f;
        for(i=20;i<50;i++)
        {
            gotoxy(i,25);
            cout<<t;
        }
        gotoxy(i,25);cout<<w;
        gotoxy(15,26);cout<<q;
        cout<<"1.";gotoxy(19,26);cout<<q<<"ADMINISTRATOR";
        gotoxy(i,26);cout<<q;
        gotoxy(15,27);cout<<q;
        char z=206;
        gotoxy(16,27);cout<<t;gotoxy(17,27);cout<<t;gotoxy(18,27);cout<<t;gotoxy(19,27);cout<<z;
        for(i=20;i<50;i++)
        {
            gotoxy(i,27);
            cout<<t;
        }
        char x=185;
        gotoxy(i,27);cout<<x;
        gotoxy(15,28);cout<<q;
        cout<<"2.";gotoxy(19,28);cout<<q<<"Employee";
        gotoxy(i,28);cout<<q;
        gotoxy(15,29);cout<<a;
        gotoxy(16,29);cout<<t;gotoxy(17,29);cout<<t;gotoxy(18,29);cout<<t;gotoxy(19,29);cout<<v;
        for(i=20;i<50;i++)
        {
            gotoxy(i,29);
            cout<<t;
        }
        gotoxy(i,29);cout<<b;cout<<"\n";
        //gotoxy(20,30);
        //cin>>n;

        gotoxy(20,31);cout<<e;gotoxy(21,31);cout<<t;gotoxy(22,31);cout<<t;gotoxy(23,31);cout<<w;
        gotoxy(20,32);cout<<q;
        gotoxy(23,32);cout<<q;
        gotoxy(20,33);cout<<a;gotoxy(21,33);cout<<t;gotoxy(22,33);cout<<t;gotoxy(23,33);cout<<b;
        gotoxy(21,32);cin>>n;

    return n;
}
void loading()
    {
        system("cls");
        cout<<"\n\tLOADING";
        for(int i=0;i<5;i++)
        {
            Sleep(500);
            cout<<". ";
        }
    }


void passphrase()
    {
        int i,n,j=0,f;
        char a[10],b[10]="admin",c[10],k[10]="kuldip",u[10]="umang";

        system("cls");
        n=entry();
        //cout<<"\n\tWhich way you want log in?";
        //cout<<"\n\n\t1.ADMINISTRATOR\n\t2.Employee";
        //cin>>n;
        if(n==1)
        {
            for(i=3;i>=0;i--)
                {
                for(f=0;f<10;f++)
                    {
                        a[f]='\0';
                        c[f]='\0';
                    }

                system("cls");
                cout<<"\nNo. of retry(s) remaining: "<<i<<"\n";
                  cout<<"\n Enter your name:- ";
                  cin>>a;
                  j=0;
                   char ch;
                  if(strcmp(a,k)==0||strcmp(a,u)==0)
                  {


                      cout<<" Enter Password:- ";
                      while(j<9)
                      {
                          ch=getch();
                          cout<<"*";
                          c[j]=ch;
                         if(strcmp(c,b)==0)
                      {
                         cout<<"\nAUTHORISED ENTRY";
                        flag=1;
                        Sleep(2000);
                        return;
                      }
                      j++;
                      }

                  }

                }

                cout<<"\nUNAUTHORISED ENTRY";
                Sleep(2000);
                exit(0);
        }
        else
            {
              flag=0;
              Sleep(2000);


            }
    }



