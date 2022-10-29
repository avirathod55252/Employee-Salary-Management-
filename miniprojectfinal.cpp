
// #include <iostream>
//  #include <ctime>
//  #include <regex>
#include <conio.h>
// #include <cstdlib>
// #include <cstring>
//  #include <cstdio>
#include <bits/stdc++.h>

 #include <windows.h>
// #include <math.h>
// #include <cstddef>
using namespace std;
int Password();
int LoadingEffect();
int LoadingEffect1();
int update();
int edisplay();
int month();
int timee();
int DisplayPost(int n);
int delayname(string s);
int SearchId1(int idd1);

int AddNewEmp();
int ShowEmpList();
int EmpSalTransfer();
int TransferHistory();
int ProjectMembers();
int HomePage();
int HomePage1();

int SearchId(int idd);
int ConditionChecK();
int ValidId();
int edisplay1();

int countDigit(long long n);
bool isValidifscodeyorn(string str);
bool isNumber(string s);

class employee
{
public:
    int sn;
    long long int mn;
    string fname;
    string lname;
    int post;
    string IFSC;
    long long int un;
    int n;
    int t;
    int sal;
    long long int AccountNumber;
    int hour;
    int rate;
    int oh;
    int orate;
    int storee;
    int countt = 0;
    int id;
};

class transfer
{
public:
    int sal;
    int hour;
    int rate;
    int oh;
    int orate;
    int ss;
    int monthh;
};

transfer dd[100][100];
employee aa[100];
int k = 1;
int kk;

int i = 1;
int j = 1;
int ss;
int gst;
int z;
int q;
int ff = 0;
string username;
int pass;
int AccountV;
int idd;

int main()
{
    if (ff == 0)
    {
        ProjectMembers();
        LoadingEffect();
        Password();
        timee();
    }
    ff++;

    while (1)
    {

        HomePage();
        switch (ss)
        {
        case 0:
        {
            LoadingEffect1();
            cout << "---------------------------------\n";
            cout << "EXIT SUCCESSFULLY.\n";
            cout << "---------------------------------\n\n\n";
            exit(0);
        }
        case 1:
        {
            AddNewEmp();
            break;
        }

        case 2:
        {
            ShowEmpList();
            break;
        }
        case 3:
        {

            EmpSalTransfer();
            break;
        }
        case 4:
        {

            TransferHistory();
            break;
        }

        case 5:
        {
            update();
            break;
        }

        case 6:
        {
            edisplay();
            break;
        }
        default:
        {

            cout << "\x1b[31mERROR : ENTER VALID CHOICE!!!\x1b[0m\n";
            cout << "---------------------------------\n";
        }
        }
    }
}

int update()
{
    int dd;
    ConditionChecK();
    ValidId();
    SearchId(idd);
    edisplay1();

    cout << "WHAT YOU WANT TO UPDATE?\n";
    cout << "-------------------------\n";
    cout << "ENTER 1.FIRST NAME\nENTER 2.lAST NAME \nENTER 3.MOBILE NUMBER\nENTER 4.EMPLOYEE POST\n";
    cout << "-------------------------\n";
    cout << "ENTER NUMBER : ";
    cin >> dd;
    cout << "-------------------------\n\n";

    switch (dd)
    {
    case 1:
    {
    upfname:
        cout << "---------------------------------\n";
        cout << "ENTER FIRST NAME : ";
        cin >> aa[z].fname;

        if (isNumber(aa[z].fname))
        {

            cout << "\x1b[31mERROR : ONLY ALPHABETS ARE ALLOWED.\x1b[0m\n";
            cout << "---------------------------------\n";
            goto upfname;
        }
        cout << "-------------------------\n";
        cout << "FIRST NAME OF EMP UPDATED SUCCESSFULLY.\n";
        cout << "-------------------------\n";

        break;
    }

    case 2:
    {

    uplname:
        cout << "---------------------------------\n";
        cout << "ENTER LAST NAME : ";
        cin >> aa[z].lname;

        if (isNumber(aa[z].lname))
        {

            cout << "\x1b[31mERROR : ONLY ALPHABETS ARE ALLOWED.\x1b[0m\n";
            cout << "---------------------------------\n";
            goto uplname;
        }
        cout << "-------------------------\n";
        cout << "LAST NAME OF EMPLOYEE UPDATED SUCCESSFULLY!!!\n";
        cout << "-------------------------\n";
        break;
    }

    case 3:
    {
        // cout << "Enter new mobile number : ";
        // cin >> aa[z].mn;
        // cout << "-------------------------\n";

        // cout << "ENTER MOBILE NUMBER : ";
        // cin >> aa[z].mn;
        // cout << "---------------------------------\n";

    mobilen:
        cout << "---------------------------------\n";
        cout << "ENTER MOBILE NUMBER : ";

        while (!(cin >> aa[z].mn))
        {

            cout << "\x1b[31mERROR: ONLY NUMBERS ARE ALLOWED..\x1b[0m\n";
            cout << "---------------------------------\n";
            cout << "ENTER MOBILE NUMBER : ";
            cin.clear();
            cin.ignore(132, '\n');
        }

        if (countDigit(aa[z].mn) == 10)
        {

            cout << "";
        }

        else
        {

            cout << "\x1b[31mERROR : MOBILE NUMBER SHOULD BE 10 DIGITS.\x1b[0m\n";

            goto mobilen;
        }

        cout << "MOBILE NUMBER OF EMP UPDATED SUCCESSFULLY.\n";
        cout << "-------------------------\n";
        break;
    }

    case 4:
    {
        // cout << "Enter new post\n";
        // cout << "-------------------------\n";

        // cin >> aa[z].post;

        cout << "ENTER EMPLOYEE POST :\nENTER 1 : PROJECT MANAGER\nENTER 2 : SINIOUR DEVELOPER \nENTER 3 : JUNIOR DEVELOPER\n";
        cout << "---------------------------------\n";
    postt:
        cout << "ENTER : ";
        while (!(cin >> aa[z].post))
        {
            cout << "---------------------------------\n";
            cout << "\x1b[31mERROR: ONLY NUMBERS ARE ALLOWED..\x1b[0m\n";
            cout << "---------------------------------\n";
            cout << "ENTER : ";
            cin.clear();
            cin.ignore(132, '\n');
        }
        if (aa[z].post > 0 && aa[z].post < 4)
        {
            cout << "\x1b[32mVALID\x1b[0m\n";

            // cout << "VALID..\n";
        }
        else
        {

            cout << "\x1b[31mERROR : CHOICE MUST BE VALID..\x1b[0m\n";
            cout << "---------------------------------\n";
            goto postt;
        }

        cout << "---------------------------------\n";

        cout << "POST OF EMP UPDATED SUCCESSFULLY.\n";
        cout << "-------------------------\n";
        break;
    }

    default:
    {
        cout << "ENTER VALID CHOICE.\n";
        cout << "---------------------------------\n";
    }
    }
}

int edisplay()
{

    // cout << "Enter serial number of employee : ";
    // cin >> z;
    // cout<<"ENTER ID :";
    // cin>>idd;

    ConditionChecK();
    ValidId();
    z = SearchId(idd);

    cout << "---------------------------------\n";
    cout << "EMP DETAILS : \n";
    cout << "---------------------------------\n";

    cout << "*EMP SR.NO       = ";
    cout << aa[z].sn << endl;

    cout << "*EMP ID          = ";
    cout << aa[z].id << endl;

    cout << "*EMP 1ST NAME    = ";
    cout << aa[z].fname << endl;

    cout << "*EMP LAST NAME   = ";
    cout << aa[z].lname << endl;

    cout << "*MOBILE NUMBER   = ";
    cout << aa[z].mn << endl;
    cout << "*EMP POST        = ";
    DisplayPost(aa[z].post);
    cout << "---------------------------------\n\n";
    cout << "BANK ACCOUNT DETAILS : \n";
    cout << "---------------------------------\n";
    cout << "ACCOUNT NUMBER    : " << aa[z].AccountNumber << endl;
    cout << "IFSC CODE         : " << aa[z].IFSC << endl;
    cout << "---------------------------------\n";
}

int timee()
{
    cout << "---------------------------------\n";

    time_t tt;

    struct tm *ti;

    time(&tt);

    ti = localtime(&tt);

    cout << "DATE & TIME :"
         << asctime(ti);
    cout << "---------------------------------\n";
}

int EmpSalTransfer()
{

    // cout << "Enter employee sr no : ";
    // cin >> k;

    // cin>>idd;
    // k=SearchId(idd);
    // check condition
    ConditionChecK();
    ValidId();
    SearchId(idd);
    //

    cout << "---------------------------------\n";

    cout << "EMPLOYEE NAME = " << aa[k].fname << " " << aa[j].lname << endl;
    cout << "---------------------------------\n";

    ++aa[k].storee;

    ++aa[k].countt;
month:
    cout << "ENTER MONTH : ";
    // cin >> dd[k][aa[k].countt].monthh;

    while (!(cin >> dd[k][aa[k].countt].monthh))
    {

        cout << "\x1b[31mERROR :ONLY DIGITS SHOULD BE ENTERED.\x1b[0m\n";
        cout << "---------------------------------\n";
        cout << "ENTER : ";
        cin.clear();
        cin.ignore(132, '\n');
    }
    if (dd[k][aa[k].countt].monthh > 13 || dd[k][aa[k].countt].monthh == 0)
    {
        cout << "\x1b[31mERROR : MONTH SHOULD BE IN BETWEEN(1-12)\x1b[0m\n";
        cout << "---------------------------------\n";
        goto month;
    }
    cout << "---------------------------------\n";

    // cin >> dd[k][aa[k].countt].hour;
    cout << "TOTAL WORKING HOURS IN A MONTH : ";
    while (!(cin >> dd[k][aa[k].countt].hour))
    {

        cout << "\x1b[31mERROR:ONLY DIGITS SHOULD BE ENTERED.\x1b[0m\n";
        cout << "---------------------------------\n";
        cout << "TOTAL WORKING HOURS IN A MONTH : ";

        cin.clear();
        cin.ignore(132, '\n');
    }

    cout << "---------------------------------\n";

    cout << "ENTER RATE PER HOUR (IN RUPEES) : ";

    while (!(cin >> dd[k][aa[k].countt].rate))
    {

        cout << "\x1b[31mERROR:ONLY DIGITS SHOULD BE ENTERED.\x1b[0m\n";
        cout << "---------------------------------\n";
        cout << "ENTER RATE PER HOUR (IN RUPEES) : ";

        cin.clear();
        cin.ignore(132, '\n');
    }

    cout << "---------------------------------\n";

    cout << "ENTER OVERTIME HOURS (IF ANY) : ";

    while (!(cin >> dd[k][aa[k].countt].oh))
    {

        cout << "\x1b[31mERROR : ONLY DIGITS SHOULD BE ENTERED.\x1b[0m\n";
        cout << "---------------------------------\n";
        cout << "ENTER OVERTIME HOURS (IF ANY) : ";

        cin.clear();
        cin.ignore(132, '\n');
    }

    cout << "---------------------------------\n";

    cout << "ENTER OVERTIME RATE : ";
    while (!(cin >> dd[k][aa[k].countt].orate))
    {

        cout << "\x1b[31mERROR : ONLY DIGITS SHOULD BE ENTERED.\x1b[0m\n";
        cout << "---------------------------------\n";
        cout << "ENTER OVERTIME RATE : ";

        cin.clear();
        cin.ignore(132, '\n');
    }

    cout << "---------------------------------\n";

    dd[k][aa[k].countt].sal = dd[k][aa[k].countt].hour * dd[k][aa[k].countt].rate + dd[k][aa[k].countt].oh * dd[k][aa[k].countt].orate;
    cout << "NET SALARY OF EMP : " << aa[k].fname << " : " << dd[k][aa[k].countt].sal << "/-Rs" << endl;
    cout << "---------------------------------\n";

    cout << "DO YOU WANT TO TRANSFER SALARY(1,2)\nENTER 1: YES\nENTER 2: No\n";
    cout << "---------------------------------\n";

// cin >> aa[k].t;
bpost:
    cout << "ENTER : ";
    while (!(cin >> aa[k].t))
    {

        cout << "\x1b[31mERROR: ONLY NUMBERS ARE ALLOWED..\x1b[0m\n";
        cout << "---------------------------------\n";
        cout << "ENTER : ";
        cin.clear();
        cin.ignore(132, '\n');
    }
    if (aa[k].t > 0 && aa[k].t < 3)
    {
        if (aa[k].t == 1)
        {
            int ch;
            cout << "\n\nPAYMENT OPTION :\n";
            cout << "---------------------------------\n";

            cout << "ENTER 1.ACCOUNTT NUMBER AND IFSC\nENTER 2.UPI ID(Comming soon...)\nENTER 3.UPI NUMBER(Comming soon...)\nENTER 4.QR CODE(Comming soon...)\n";
            cout << "---------------------------------\n";

            cout << "\n\nAVAILABLE BANK ACCOUNT DETAILS : \n";
            cout << "---------------------------------\n";
            cout << "ACCOUNT NUMBER      : " << aa[k].AccountNumber << endl;
            cout << "IFSC CODE           : " << aa[k].IFSC << endl;
            cout << "TOTAL SALARY AMOUNT : " << dd[k][aa[k].countt].sal << "/-Rs" << endl;
            cout << "---------------------------------";
            cout << "\n\n---------------------------------\n";
            cout << "ENTER 1 : CONFIRM\nENTER 2 : CANCEL\n";
            cout << "---------------------------------\n";
        // cout << "ENTER : ";
        postt:
            cout << "ENTER : ";
            while (!(cin >> ch))
            {

                cout << "\x1b[31mERROR: ONLY NUMBERS ARE ALLOWED\x1b[0m\n";
                cout << "---------------------------------\n";
                cout << "ENTER : ";
                cin.clear();
                cin.ignore(132, '\n');
            }
            if (ch > 0 && ch < 3)
            {

                if (ch == 1)
                {
                    cout << "---------------------------------\n";
                    cout << "TOTAL SALARY " << dd[k][aa[k].countt].sal << "SUCCESSFULLY TRANSFERED.\n";
                    cout << "---------------------------------\n";
                }
                if (ch == 2)
                {

                    cout << "PAYMENT HAS BEEN CANCELLED\n";
                    cout << "---------------------------------\n";
                }
            }
            else
            {

                cout << "\x1b[31mERROR : CHOICE MUST BE VALID.\x1b[0m\n";
                cout << "---------------------------------\n";
                goto postt;
            }
        }

        if (aa[k].t == 2)
        {
            cout << "---------------------------------\n";
            cout << "PAYMENT HAS BEEN CANCELLED\n";
            cout << "---------------------------------\n";
        }
    }

    else
    {

        cout << "\x1b[31mERROR : CHOICE MUST BE VALID.\x1b[0m\n";
        cout << "---------------------------------\n";
        goto bpost;
    }
}

int AddNewEmp()
{

    cout << "---------------------------------\n";
    cout << "ENTER EMPLOYEE ID NUMBER : ";


IDDD:
    while (!(cin >> aa[i].id))
    {

        cout << "\x1b[31mERROR: ONLY NUMBERS ARE ALLOWED..\x1b[0m\n";
        cout << "---------------------------------\n";
        cout << "ENTER ID: ";
        cin.clear();
        cin.ignore(132, '\n');
    }
    if (countDigit(aa[i].id) == 4)
    
    {
        // cout << "\x1b[32mVALID\x1b[0m\n";
        
    }

    else
    {

        cout << "\x1b[31mERROR : ID SHOULD BE 4 DIGITS.\x1b[0m\n";
        cout << "---------------------------------\n";
        cout << "ENTER ID: ";

        goto IDDD;
    }
    aa[i].sn = i;
     
    // SearchId1(aa[i].id);
    if(i>1)
    {
       if(SearchId1(aa[i].id))
       {
         
        // cout<<"decalred..";
        
       }

        // cout<<"Id decalred\n";
    } 
        cout << "\x1b[32mVALID\x1b[0m\n";
    
    // for first name
fname:
    cout << "---------------------------------\n";
    cout << "ENTER FIRST NAME : ";
    cin >> aa[i].fname;

    if (isNumber(aa[i].fname))
    {

        cout << "\x1b[31mERROR : ONLY ALPHABETS ARE ALLOWED.\x1b[0m\n";

        goto fname;
    }
    cout << "\x1b[32mVALID\x1b[0m\n";
    
Lname:
    cout << "---------------------------------\n";
    cout << "ENTER LAST NAME : ";
    cin >> aa[i].lname;

    if (isNumber(aa[i].lname))
    {

        cout << "\x1b[31mERROR : ONLY ALPHABETS ARE ALLOWED.\x1b[0m\n";

        goto Lname;
    }
    cout << "\x1b[32mVALID\x1b[0m\n";
  
    cout << "---------------------------------\n";

    

mobilen:

    cout << "ENTER MOBILE NUMBER : ";

    while (!(cin >> aa[i].mn))
    {

        cout << "\x1b[31mERROR: ONLY NUMBERS ARE ALLOWED..\x1b[0m\n";
        cout << "---------------------------------\n";
        cout << "ENTER MOBILE NUMBER : ";
        cin.clear();
        cin.ignore(132, '\n');
    }

    if (countDigit(aa[i].mn) == 10)
    {
        cout << "\x1b[32mVALID\x1b[0m\n";

       
        cout << "---------------------------------\n";
    }

    else
    {

        cout << "\x1b[31mERROR : MOBILE NUMBER SHOULD BE 10 DIGITS.\x1b[0m\n";
        cout << "---------------------------------\n";
        goto mobilen;
    }

    

    cout << "ENTER EMPLOYEE POST :\nENTER 1 : PROJECT MANAGER\nENTER 2 : SINIOUR DEVELOPER \nENTER 3 : JUNIOR DEVELOPER\n";
    cout << "---------------------------------\n";
postt:
    cout << "ENTER : ";
    while (!(cin >> aa[i].post))
    {
        cout << "---------------------------------\n";
        cout << "\x1b[31mERROR: ONLY NUMBERS ARE ALLOWED..\x1b[0m\n";
        cout << "---------------------------------\n";
        cout << "ENTER : ";
        cin.clear();
        cin.ignore(132, '\n');
    }
    if (aa[i].post > 0 && aa[i].post < 4)
    {
        cout << "\n";
    }
    else
    {
        cout << "---------------------------------\n";
        cout << "\x1b[31mERROR : CHOICE MUST BE VALID..\x1b[0m\n";
        cout << "---------------------------------\n";
        goto postt;
    }

    cout << "---------------------------------\n";

    // ACCOUNT VALIDATION

    cout << "ENTER BANK DETAILS :\n";
    cout << "Enter Account Number : ";

AC:

    while (!(cin >> aa[k].AccountNumber))
    {

        cout << "\x1b[31mERROR: ONLY NUMBERS ARE ALLOWED..\x1b[0m\n";
        cout << "---------------------------------\n";
        cout << "Enter Account Number : ";

        cin.clear();
        cin.ignore(132, '\n');
    }

    if (countDigit(aa[k].AccountNumber) < 17 && countDigit(aa[k].AccountNumber) > 10)
    {
        cout << "\x1b[32mVALID\x1b[0m\n";

        // cout << "VALID.\n";
    }
    else
    {

        cout << "\x1b[31mERROR : RANGE MUST BE IN (11-16)\x1b[0m" << endl;
        cout << "---------------------------------\n";
        cout << "Enter Account Number : ";

        goto AC;
    }

    // IFSC VALIDATION

ifsc:
    cout << "---------------------------------\n";
    cout << "ENTER IFSC\n";

    cin >> aa[k].IFSC;
    int a = isValidifscodeyorn(aa[k].IFSC);

    if (a == 0)
    {

        cout << "\x1b[31mERROR : INVALID\x1b[0\n";
        cout << "\x1b[31mERROR : IFSC SHOULD BE LIKE :\n\tEX - SBIN0000367\x1b[0m\n";

        goto ifsc;
    }
    else
    {

        cout << "\x1b[32mVALID\x1b[0m\n";
    }

    //
    cout << "---------------------------------\n";
    cout << "EMPLOYEE DETAILS ARE SUCCESSFULLY ADDED.\n";
    cout << "---------------------------------\n";

    i++;
    


}

int ShowEmpList()
{

    ConditionChecK();
    j = 1;
    cout << "\n\n----------------------------------------------------------------------------------------------------------------------------------\n";
    cout << "EMP SR.NO\t\t"
         << "EMP ID\t\t\t"
         << "EMP NAME\t\t\t"
         << "MOBILE NUM\t\t"
         << "EMP POST\n";
    cout << "\n\n----------------------------------------------------------------------------------------------------------------------------------\n";

    for (j = 1; j < i; j++)
    {

        cout << aa[j].sn << "\t\t\t" << aa[j].id << "\t\t\t" << aa[j].fname << " " << aa[j].lname << "\t\t\t" << aa[j].mn << "\t\t";
        DisplayPost(aa[j].post);

        cout << "-----------------------------------------------------------------------------------------------------------------------------------\n";
    }

    cout << "\n\n\n";
}

int TransferHistory()
{

    ConditionChecK();
    ValidId();
    SearchId(idd);
    // cin>>idd;
    q = SearchId(idd);

    cout << "---------------------------------\n";

    cout << "EMP NAME = " << aa[q].fname << " " << aa[j].lname << endl;
    cout << "-------------------------------------------------------------------------------------------------------\n";

    cout << "MONTH\t\tTOTAL HOURS\tRATE\t\tOVERTIME HOUR\tOVERTIME RATE\tTOTAL SALARY\tPAYMENT STATUS\n";
    cout << "-------------------------------------------------------------------------------------------------------\n";
    for (int v = 1; v <= aa[k].storee; v++)
    {
        cout << dd[q][v].monthh << "\t\t" << dd[q][v].hour << "\t\t" << dd[q][v].rate << "\t\t" << dd[q][v].oh << "\t\t" << dd[q][v].orate << "\t\t" << dd[q][v].sal << "\t\t"
             << "Success\n";
        cout << "-----------------------------------------------------------------------------------------------------\n";
    }
}

int Password()
{
    cout << "\n\n\t\t\t\t>>>>>>>>>>>>>>>>>Enter Admin Details<<<<<<<<<<<<\n\n";
    string pass = "";
    char ch;
    cout << "\t\t\t\t\t\t   ENTER PASSWORD :\n\t\t\t\t\t\t\t";
    ch = _getch();
    while (ch != 13)
    { // character 13 is enter
        pass.push_back(ch);
        cout << '*';
        ch = _getch();
    }

    if (pass == "aniket")
    {
        cout << "\n\n\n\t\t\t\t\t\t     PROCESSING \n\t\t\t\t\t\t";
        for (int a = 1; a < 8; a++) // Change 'a<?' to how many * you want
        {
            Sleep(500);
            cout << "...";
        }
        cout << "\n\n\n\t\t\t\t\t\t\x1b[32m   ACCESS GRANTED.\x1b[0m \n\n\n";

        system("PAUSE");
        system("CLS");

        cout << "---------------------------------\n";

        cout << "\x1b[32mSUCCESSFULLY LOGGED IN.\x1b[0m\n";
    }
    else
    {
        cout << "\n\t\t\t\t\t\t\x1b[31mERROR : ACCESS ABORTED.\n\t\t\t\t\t\t(Due To Wrong Password)\x1b[0m\n\n";
        Password();
    }
}

int LoadingEffect()
{
    cout << "\n\n\n\t\t\t\t\t\tLOADING \n\t\t\t\t\t\t";
    for (int a = 1; a < 8; a++)
    {
        Sleep(500);
        // cout << "...";
        cout << "\x1b[32m...\x1b[0m";
    }

    cout << "\n\n";

    system("PAUSE");
    system("CLS");
}

int LoadingEffect1()
{
    cout << "\n\n\n\t\t\t\t\t\tLOADING \n\t\t\t\t\t\t";
    for (int a = 1; a < 8; a++) // Change 'a<?' to how many * you want
    {
        Sleep(500);
        cout << "\x1b[32m...\x1b[0m";
    }
    // cout << "\n\n\n\t\t\t\t\t\tAccess Granted!! \n\n\n";
    cout << "\n\n";

    // system("PAUSE");
    system("CLS");
}

int ProjectMembers()
{
    // cout<<"\n35. \x1b[35mPINK\x1b[0m";
    // cout<<"\n36. \x1b[36mLIGHTBLUE\x1b[0m";
    //  cout<<"\n33. \x1b[33mPURPLE\x1b[0m";

    cout << "\n\n***************************\x1b[35m PROJECT NAME - EMPLOYEES SALARY MANAGEMENT\x1b[0m************************\n\n";
    cout << "********************************************\x1b[33m STUDENT NAMES-\x1b[0m ***************************************\n\n";

    string aniket = "                        ------------------\x1b[36mANIKET CHAVAN- 05 \x1b[0m------------------\n";
    delayname(aniket);
    string satyavijay = "                        -----------------\x1b[36mSATYAVIJAY SAPKAL-73\x1b[0m-----------------\n";
    delayname(satyavijay);
    string avinash = "                        -------------------\x1b[36mAVINASH RATHOD-50\x1b[0m------------------\n";
    delayname(avinash);
    string laxmi = "                        -------------------\x1b[36mLAXMI SHINDE-74\x1b[0m--------------------\n";
    delayname(laxmi);
    string aishwarya = "                        -------------------\x1b[36mAISHWARYA PATIL-66\x1b[0m----------------\n\n\n";
    delayname(aishwarya);
}

int HomePage()
{
    cout << "\n\t\t\t>>>>>>>>>  EMPLOYEE MANAGEMENT SYSTEM  <<<<<<<<<";
    cout << "\n";
    cout << "\n\t\t\t------------------------------------------------";
    cout << "\n\t\t\tENTER   1:   To Add New Employees";
    cout << "\n\t\t\t------------------------------------------------";
    cout << "\n\t\t\tENTER   2:   To View Employee List";
    cout << "\n\t\t\t------------------------------------------------";
    cout << "\n\t\t\tENTER   3:   To Salary Distribution";
    cout << "\n\t\t\t------------------------------------------------";
    cout << "\n\t\t\tENTER   4:   To Show Privious Salary Transfer Details";
    cout << "\n\t\t\t------------------------------------------------";
    cout << "\n\t\t\tENTER   5:   To Update Employee Details";
    cout << "\n\t\t\t------------------------------------------------";
    cout << "\n\t\t\tENTER   6:   To Show Employee Imformation";
    cout << "\n\t\t\t------------------------------------------------";
    // cout << "\n\t\t\tENTER   7:   To GST Calculator";
    // cout << "\n\t\t\t------------------------------------------------";
    cout << "\n\t\t\tENTER   0:   To Exit     ";
    cout << "\n\t\t\t------------------------------------------------";
    cout << "\n\n\t\t\t\t\t ENTER YOUR CHOICE : ";

    while (!(cin >> ss))
    {

        cout << "\x1b[31mERROR: ONLY NUMBERS ARE ALLOWED..\x1b[0m\n";
        cout << "---------------------------------\n";
        cout << "ENTER : ";
        cin.clear();
        cin.ignore(132, '\n');
    }
    //    cout<<ss;
}

int countDigit(long long n)
{
    if (n == 0)
        return 1;
    long int AccountV = 0;
    while (n != 0)

    {
        n = n / 10;
        ++AccountV;
    }

    return AccountV;
}

bool isValidifscodeyorn(string str) // Function to check IFSC  Code.
{

    const regex pattern("^[A-Z]{4}0[A-Z0-9]{6}$"); // to check IFSC code

    if (str.empty()) // if empty return false
    {
        return false;
    }

    if (regex_match(str, pattern)) // if ifsc matches the regex expression return true.
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isNumber(string s)
{
    for (int i = 0; i < s.length(); i++)
        if (isdigit(s[i]) == true || s[i] > 31 && s[i] < 65)
        {
            return true;
        }
}

int DisplayPost(int n)
{

    if (n == 1)
    {
        cout << "PROJECT MANEGER\n";
    }
    else
    {
        if (n == 2)
        {
            cout << "SINIOR DEVELOPER\n";
        }
        else
        {
            cout << "JUNIOR DEVELOPER\n";
        }
    }
}

int SearchId(int idd)
{
    kk = 1;

    for (kk = 1; kk < i; kk++)
    {

        if (aa[kk].id == idd)

        {
            return kk;
        }
    }

    cout << "ID IS NOT FOUND..\n";
    cout << "---------------------------------\n";
    main();
}

int ConditionChecK()
{
    int f = 1;
    if (aa[f].id == 0)
    {
        cout << "---------------------------------\n";
        cout << "\x1b[31mERROR : EMPLOYEES ARE NOT ADDED YET.\x1b[0m\n";
        cout << "---------------------------------\n";
        main();
    }
}

int ValidId()
{
    cout << "ENTER ID :";
ID:
    while (!(cin >> idd))
    {

        cout << "\x1b[31mERROR: ONLY NUMBERS ARE ALLOWED..\x1b[0m\n";
        cout << "---------------------------------\n";
        cout << "ENTER ID: ";
        cin.clear();
        cin.ignore(132, '\n');
    }
    if (countDigit(idd) == 4)
    {
        // cout << "VALID.\n";
    }

    else
    {

        cout << "\x1b[31mERROR : ID SHOULD BE 4 DIGITS.\x1b[0m\n";
        cout << "---------------------------------\n";
        cout << "ENTER ID: ";

        goto ID;
    }
}

int edisplay1()
{
    z = kk;

    cout << "EMPLOYEE DETAILS.\n";
    cout << "---------------------------------\n";

    cout << "*EMP SR.NO        = ";
    cout << aa[z].sn << endl;

    cout << "*EMP ID           = ";
    cout << aa[z].id << endl;

    cout << "*EMP FIRST NAME   = ";
    cout << aa[z].fname << endl;

    cout << "*EMP LAST NAME    = ";
    cout << aa[z].lname << endl;

    cout << "*MOBILE NUMBER    = ";
    cout << aa[z].mn << endl;

    cout << "*EMP POST         = ";
    DisplayPost(aa[z].post);
    cout << "---------------------------------\n\n\n";
    cout << "BANK ACCOUNT DETAILS : \n";
    cout << "---------------------------------\n";
    cout << "ACCOUNT NUMBER    : " << aa[z].AccountNumber << endl;
    cout << "IFSC CODE         : " << aa[z].IFSC << endl;
    cout << "---------------------------------\n\n\n";
}

int HomePage1()
{
}

int delayname(string s)
{

    for (int j = 0; j < s.size(); j++)
    {
        for (int i = 0; i <= 10000000; i++)
            ;
        cout << s[j];
    }
}

int SearchId1(int idd1)
{
    
     kk = 1;

    for (kk = 1; kk < i; kk++)
    {

        if (aa[kk].id == idd1)

        {
            // return kk;
           cout << "\x1b[31mERROR : ID ALREADY EXITS.\x1b[0m\n";
          cout << "---------------------------------\n";

  
            main();

        }
    }

    
    
}
