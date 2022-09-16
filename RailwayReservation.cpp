#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <fstream>
#include <windows.h>
using namespace std;
// void clr(void);
string f= "f";
string s= "s";
int addr, ad, flag, f1, d, m, i, amt;
float tamt;

class login
{
public:
    string id;
    string pass;
    void getid()
    {
        cout << "\nEnter your id :";
        cin>>id;
        cout<<"Enter the password : ";
        cin>>pass;
    }
    void displayid()
    {
        cout << "Id : "<<id<<"\t";
        cout << "Password : "<<pass;
    }
};


class details
{
public:
    int tno;
    string tname;
    string bp, dest;
    int c1, c1fare, c2, c2fare, d, m, y;
    void getdetails()
    {
        cout << "Enter the details as follows\n";
        cout << "Train no. : ";
        cin >> tno;
        cout << "Train name : ";
        cin>>tname;
        cout << "Boarding point : ";
        cin>>bp;
        cout << "Destination point : ";
        cin>>dest;
        cout << "No. of seats and fare per ticket in first class : ";
        cin >> c1;
        cout << " ";
        cin >> c1fare;
        cout << "No. of seats and fare per ticket in second class : ";
        cin >> c2;
        cout << " ";
        cin >> c2fare;
        cout << "Date of travel : ";
        cin >> d;
        cout << "\t";
        cin >> m;
        cout << "\t";
        cin >> y;
    }
    void displaydetail()
    {
        int q;
        cout << "------------------------------------------------------------------------------------------------------------";
        cout << "\nTno.\tTrain name\tBoard.pt.\tDest.pt.\tIseats.\tfare\tIIseats.\tfare\tDOTravel"<<endl;
        cout << "------------------------------------------------------------------------------------------------------------";
        cout << endl
             << tno << "\t" << tname << "\t" << bp << "\t" << dest << "\t";
        cout << c1 << "\t" << c1fare << "\t" << c2 << "\t" << c2fare << "\t";
        cout << d << "-" << m << "-" << y << endl;
        cout << "Next >> ";
        cin >> q;
    }
};


class reser
{
public:
    int pnr, tno, age[20], nosr, i, d, m, y, con;
    string tname, bp, dest, pname[10], clas;
    float amc;
    void getresdet()
    {
        cout << "\nEnter the details as follows ";
        cout << "\nTrain no. : ";
        cin >> tno;
        cout << "\nTrain name : ";
        cin>>tname;
        cout << "\nBoarding point : ";
        cin>>bp;
        cout << "\nDestination point : ";
        cin>>dest;
        cout << "\nNo. of seats required : ";
        cin >> nosr;
        for (i = 0; i < nosr; ++i)
        {
            cout << "\nPassenger name : ";
            cin>>pname[i];
            cout << "\nPassenger age : ";
            cin >> age[i];
        }
        cout << "\nEnter the class f-first class , s-second class : ";
        cin>>clas;
        cout << "\nDate of travel : ";
        cin >> d >> m >> y;
        cout << "\nEnter the concession category ";
        cout << "\n1.Military\n2.Senior citizen\n3.Children below 5 years \n4.None";
        cin >> con;
        cout << "\n............END OF GETTING DETAILS............";
    }
    void displayresdet()
    {
        int x;
        cout << "\n...................................................\n";
        cout << "....................................................";
        cout << "\nPnr no. : " << pnr;
        cout << "\nTrain no. : " << tno;
        cout << "\nTrain name : ";
        cout<<tname;
        cout << "\nBoarding point : ";
        cout<<bp;
        cout << "\nDestination : ";
        cout<<dest;
        cout << "\nNo. of seats reserved : " << nosr;
        for (i = 0; i < nosr; ++i)
        {
            cout << "\nPassenger name : ";
            cout<<pname[i];
            cout << "\nPassenger age : " << age[i];
        }
        cout << "\nYour class : ";
        cout<<clas;
        cout << "\nDate of reservation : " << d << "-" << m << "-" << y;
        cout << "\nYour concession category : " << con;
        cout << "\nYou must pay : " << amc << endl;
        cout << "\n******************************************";
        cout << "\n*********************End of reservation***************** ";
        cout << "\n******************************************";
        cout << "<< Back ";
        cin >> x;
    }
};


class canc
{
public:
    int nosc, pnr, tno, age[20], i, d, m, y;
    string tname, bp, dest;
    string clas, pname[10];
    float amr;
    void getcancdet()
    {
        cout << "\nEnter the details as follows : ";
        cout << "\nPnr no. : ";
        cin >> pnr;
        cout << "\nDate of cancellation : ";
        cin >> d >> m >> y;
        cout << "\n.............End of getting details..................";
    }
    void displaycancdet()
    {
        cout << "\n...............................................";
        cout << "\n...............................................";
        cout << "\nPnr no. : " << pnr;
        cout << "\nTrain no. : " << tno;
        cout << "\nTrain name : ";
        cout<<tname;
        cout << "\nBoarding point : ";
        cout<<bp;
        cout << "\nDestination : ";
        cout<<dest;
        cout << "\nYour class : ";
        cout<<clas;
        cout << "\nNo. of seats to be cancelled : " << nosc;
        for (i = 0; i < nosc; ++i)
        {
            cout << "\nPassenger name : ";
            cout<<pname[i];
            cout << "\nPassenger age : " << age[i];
        }
        cout << "\nDate of cancellation : " << d << "-" << m << "-" << y;
        cout << "\nYou can collect : Rs." << amr << endl;
        cout << "\n****************End of cancellation********************";
        cout << "\n*************************************************";
    }
};


void manage();
void can();
void user();
void database();
void res();
void reserve();
void displaypassdetail();
void cancel();
void enquiry();
void intro()
{
    // clrscr();
    COORD c;
    c.X = 25;
    c.Y = 10;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
    cout << "\t\tRailway Ticket Reservation";
    cout << "\n\t--------------------------------------------";
    cout << endl
         << endl
         << endl
         << endl;
    cout << "\n\tPresented By:\tTushar";
    cout << "\n\tRoll NO.:\t101903670 ";
    // cout << "\n\tFrom : TIET , Hostel B ";
    getch();
}
/*******************************************************************************
MAIN FUNCTION
*******************************************************************************/
int main()
{
    // clrscr();
    intro();
    int ch;
    do
    {
        // clrscr();
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~;";
        cout << "\n\t\tWELCOME TO RAILWAY RESERVATION" << endl;
        cout << "\n\tMain menu : ";
        cout << "\n\t1.Admin mode \n\t2.User mode\n\t3.Exit";
        cout << "\n\tEnter your choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            database();
            break;
        case 2:
            user();
            break;
        case 3:
            exit(0);
            break;
        default:
            cout << "\nWrong choice!";
        }
    } while (ch <= 3);
    getch();
    return 0;
}


void database()
{
    string password;
    string pass = "12345678";
    cout<<"\tEnter the administrator password (default:12345678): ";
    cin>>password;
    details a;
    fstream f;
    int ch;
    char c;
    if (pass!=password)
    {
        cout << "\nYou are not permitted to login";
        cout << "\nEnter correct password";
        // goto h;
    }
    else
    {
        char c;
        do
        {
            // clrscr();
            cout << "\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
            cout << "\n\t\tAdministrator menu";
            cout << "\n\n1.Create detail data base";
            cout << "\n2.Add details ";
            cout << "\n3.Display details \n4.User management";
            cout << "\n5.Display passenger details";
            cout << "\n6.Return to main menu ";
            cout << "\nEnter your choice : ";
            cin >> ch;
            switch (ch)
            {
            case 1:
                f.open("t1.dat", ios::out | ios::binary);
                do
                {
                    a.getdetails();
                    f.write((char *)&a, sizeof(a));
                    cout << "\nWant to enter more ?";
                    cin >> c;
                } while (c == 'y' || c == 'Y');
                f.close();
                break;
            case 2:
                f.open("t1.dat", ios::in | ios::out | ios::app | ios::binary);
                a.getdetails();
                f.write((char *)&a, sizeof(a));
                f.close();
                break;
            case 3:
                f.open("t1.dat", ios::in | ios::binary);
                f.seekg(0);
                while (f.read((char *)&a, sizeof(a)))
                {
                    a.displaydetail();
                }
                f.close();
                break;
            case 4:
                manage();
                break;
            case 5:
                displaypassdetail();
                break;
            default:
                cout << "\nWrong choice !!!!";
            }
        } while (ch <= 5);
        f.close();
    }
// h:
}


void reserve()
{
    // clrscr();
    int ch;
    do
    {
        cout << "\n1.Reserve \n2.Return to the main menu";
        cout << "\nEnter your choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            res();
            break;
        }
    } while (ch == 1);
    getch();
}


void res()
{
    details a;
    reser b;
    fstream f1, f2;
    time_t t;
    f1.open("t1.dat", ios::in | ios::out | ios::binary);
    f2.open("p1.dat", ios::in | ios::out | ios::binary | ios::app);
    int ch;
    b.getresdet();
    while (f1.read((char *)&a, sizeof(a)))
    {
        if (a.tno == b.tno)
        {
            if (b.clas==f)
            {
                if (a.c1 >= b.nosr)
                {
                    amt = a.c1fare;
                    addr = f1.tellg();
                    ad = sizeof(a.c1);
                    f1.seekp(addr - (7 * ad));
                    a.c1 = a.c1 - b.nosr;
                    f1.write((char *)&a.c1, sizeof(a.c1));
                    if (b.con == 1)
                    {
                        cout << "\nConcession category : Military person ";
                        b.amc = b.nosr * ((amt * 50) / 100);
                    }
                    else if (b.con == 2)
                    {
                        cout << "\nConcession category : Senior citizen";
                        b.amc = b.nosr * ((amt * 60) / 100);
                    }
                    else if (b.con == 3)
                    {
                        cout << "\nConcession category : Children below five";
                        b.amc = 0.0;
                    }
                    else if (b.con == 4)
                    {
                        cout << "\nYou cannot get concession. ";
                        b.amc = b.nosr * amt;
                    }
                    srand((unsigned)time(&t));
                    b.pnr = rand();
                    f2.write((char *)&b, sizeof(b));
                    b.displayresdet();
                    cout << "\n-----------------YOUR TICKET IS RESERVED------------------------";
                    cout << "\n****************End of reservation menu***********************";
                }
                else
                {
                    cout << "\n***********Sorry req seats not available************";
                }
            }
            else if (b.clas==s)
            {
                if (a.c2 >= b.nosr)
                {
                    amt = a.c2fare;
                    addr = f1.tellg();
                    ad = sizeof(a.c2);
                    f1.seekp(addr - (5 * ad));
                    a.c2 = a.c2 - b.nosr;
                    f1.write((char *)&a.c2, sizeof(a.c2));
                    if (b.con == 1)
                    {
                        cout << "\nConcession caregory : Military person ";
                        b.amc = b.nosr * ((amt * 50) / 100);
                    }
                    else if (b.con == 2)
                    {
                        cout << "\nConcession category : Senior citizen";
                        b.amc = b.nosr * ((amt * 60) / 100);
                    }
                    else if (b.con == 3)
                    {
                        cout << "\nConcession category : Children below five ";
                        b.amc = 0.0;
                    }
                    else if (b.con == 4)
                    {
                        cout << "\nYou cannot get any concession. ";
                        b.amc = b.nosr * amt;
                    }
                    f2.write((char *)&b, sizeof(b));
                    b.displayresdet();
                    cout << "\n--------------YOUR TICKET IS RESERVED--------------";
                    cout << "\n**************End of reservation*******************";
                }
                else
                {
                    cout << "\n****************Sorry no. of seats not available***************";
                }
            }
            getch();
            break;
        }
        else
        {
            flag = 0;
        }
    }

    if (flag == 0)
    {
        cout << "\n******************Wrong train no.*****************";
        cout << "\n******************Enter the train no from database**************";
    }
    f1.close();
    f2.close();
    getch();
// h:
}


void displaypassdetail()
{
    fstream f;
    reser b;
    f.open("p1.dat", ios::in | ios::out | ios::binary);
    f.seekg(0);
    while (f.read((char *)&b, sizeof(b)))
    {
        b.displayresdet();
    }
    f.close();
    getch();
}


void enquiry()
{
    fstream f;
    f.open("t1.dat", ios::in | ios::out | ios::binary);
    details a;
    while (f.read((char *)&a, sizeof(a)))
    {
        a.displaydetail();
    }
    getch();
}


void cancel()
{
    details a;
    reser b;
    canc c;
    fstream f1, f2, f3;
    f1.open("t1.dat", ios::in | ios::out | ios::binary);
    f2.open("p1.dat", ios::in | ios::out | ios::binary);
    f3.open("cn1.dat", ios::in | ios::out | ios::binary);
    cout << "\n***************Cancellation menu*****************";
    c.getcancdet();
    while (f2.read((char *)&b, sizeof(b)))
    {
        if (b.pnr == c.pnr)
        {
            c.tno = b.tno;
            c.tname=b.tname;
            c.bp=b.bp;
            c.dest=b.dest;
            c.nosc = b.nosr;
            for (int j = 0; j < c.nosc; ++j)
            {
                c.pname[j]=b.pname[j];
                c.age[j] = b.age[j];
            }
            c.clas=b.clas;
            if (c.clas==f)
            {
                while (f1.read((char *)&a, sizeof(a)))
                {
                    if (a.tno == c.tno)
                    {
                        a.c1 = a.c1 + c.nosc;
                        d = a.d;
                        m = a.m;
                        addr = f1.tellg();
                        ad = sizeof(a.c1);
                        f1.seekp(addr - (7 * ad));
                        f1.write((char *)&a.c1, sizeof(a.c1));
                        tamt = b.amc;
                        if ((c.d == d) && (c.m == m))
                        {
                            cout << "\nYou are cancelling at the date of departure.";
                            c.amr = tamt - ((tamt * 60) / 100);
                        }
                        else if (c.m == m)
                        {
                            cout << "\nYou are cancelling in the month of departure.";
                            c.amr = tamt - ((tamt * 50) / 100);
                        }
                        else if (m > c.m)
                        {
                            cout << "\nYou are cancelling a month from departure.";
                            c.amr = tamt - ((tamt * 20) / 100);
                        }
                        else
                        {
                            cout << "\nCancelling after the departure.";
                            cout << "\nYour request cannot be completed.";
                        }
                        goto h;
                        c.displaycancdet();
                    }
                }
            }
            else if (c.clas==s)
            {
                while (f1.read((char *)&a, sizeof(a)))
                {
                    if (a.tno == c.tno)
                    {
                        a.c2 = a.c2 + c.nosc;
                        d = a.d;
                        m = a.m;
                        addr = f1.tellg();
                        ad = sizeof(a.c2);
                        f1.seekp(addr - (5 * ad));
                        f1.write((char *)&a.c2, sizeof(a.c2));
                        tamt = b.amc;
                        if ((c.d == d) && (c.m == m))
                        {
                            cout << "\nYor are cancelling on the date of deparure.";
                            c.amr = tamt - ((tamt * 60) / 100);
                        }
                        else if (c.m == m)
                        {
                            cout << "\nYor are cancelling in the month of depature.";
                            c.amr = tamt - ((tamt * 50) / 100);
                        }
                        else if (m > c.m)
                        {
                            cout << "\nYor are cancelling in a month before depature.";
                            c.amr = tamt - ((tamt * 20) / 100);
                        }
                        else
                        {
                            cout << "\nCancelling after the departure";
                            cout << "\nYour request cannot be completed";
                        }
                        goto h;
                        c.displaycancdet();
                    }
                }
            }
        }
        else
        {
            flag = 0;
        }
    }
h:
    if (flag == 0)
    {
        cout << "\nEnter the correct pnr no. ";
    }
    f1.close();
    f2.close();
    f3.close();
    getch();
}


void can()
{
    int ch;
    do
    {
        cout << "\nCancellation menu : ";
        cout << "\n1.Cancel\n2.Return to the main menu";
        cout << "\nEnter your choice";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cancel();
            break;
        }
    } while (ch == 1);
    getch();
}


void user()
{
    login a;
    int ch;
    string id;
    string password;
    cout << "\n------------------Welcome to the user menu-----------------";
    cout<<"\nEnter your id : ";
    cin>>id;
    cout<<"Enter your password : ";
    cin>>password;
    int finder=0;
    fstream f;
    f.open("id1.dat", ios::in | ios::out | ios::binary);
    f.seekg(0);
    while (f.read((char *)&a, sizeof(a)))
    {
        a.displayid();
        cout<<"called while loop"<<endl;
        a.displayid();
        if (a.id==id && a.pass==password)
        {   finder=1;
            cout<<"calledmeee"<<endl;
            do
            {
                cout << "\n1.Reserve\n2.Cancel\n3.Enquiry";
                cout << "\n4.Return to the main menu ";
                cout << "\nEnter your choice : ";
                cin >> ch;
                switch (ch)
                {
                case 1:
                    reserve();
                    break;
                case 2:
                    cancel();
                    break;
                case 3:
                    enquiry();
                    break;
                default:
                    cout << "\nWrong choice!!!";
                }
            } while (ch <= 3);
            break;
        }
    }
    if (finder == 0)
        cout << "\nEnter your ID and Password correctly. ";
    getch();
}


void manage()
{
    int ch;
    fstream f;
    char c;
    login a;
    cout << "\n*************Welcome to the user management menu****************** ";
    do
    {
        cout << "\n1.Create ID database\n2.Add details";
        cout << "\n3.Display details\n4.Return to the main menu";
        cout << "\nEnter your choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            f.open("id1.dat", ios::out | ios::binary);
            do
            {
                a.getid();
                f.write((char *)&a, sizeof(a));
                cout << "\nWant to enter more record ? ";
                cout << "\ny-Yes\nn-No :";
                cin >> c;
            } while (c == 'y');
            f.close();
            break;
        case 2:
            f.open("id1.dat", ios::in | ios::out | ios::binary | ios::app);
            a.getid();
            f.write((char *)&a, sizeof(a));
            f.close();
            break;
        case 3:
            f.open("id1.dat", ios::in | ios::out | ios::binary);
            f.seekg(0);
            while (f.read((char *)&a, sizeof(a)))
            {
                a.displayid();
                cout<<endl;
            }
            f.close();
            break;
        }
    } while (ch <= 3);
    getch();
}