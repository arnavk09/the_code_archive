#include <iostream>
#include <stdlib.h>
#include<string.h>
#include<conio.h>


using namespace std;
int m,l; //m IS THE NUMBER OF ENTRIES USERS MIGHT WISH TO ENTER,l IS FOR THE OPTION ENTERED BY USER

//globally defining prototypes
int input();
int display();
int backto();
int major();
int tester();
int Exit();
int lookout();
int eDit();
int simpledisplay();


struct Data
{
    char name[50];
    char phone[100];

}a[100];
struct COMPARE
{
    char comp[100];
    char comp2[100];
    char newest[100];
};                                            COMPARE b,c;

int main()
{ system("COLOR F0");
     major();
    return 0;
}

int major()
{
    cout<<"------------WELCOME TO TELEPHONE DIRECTORY PORTAL--------------";

    cout<<endl<<"ENTER 1 FOR ENTERING INFORMATION"<<endl<<
                "ENTER 2 FOR DISPLAYING INFORMATION"<<endl<<
                "ENTER 3 FOR SEARCHING A PARTICULAR ENTRY"<<endl<<
                "ENTER 4 FOR EDITING A PARTICULAR ENTRY"<<endl;
                cin>>l; tester();
    return 0;

}


int tester()
{
    switch(l)
    {case 1:input(); break;
     case 2:display(); break;
     case 3:lookout(); break;
     case 4:simpledisplay(); eDit(); break;
     }
    return 0;
}
int display()
{
   for(int k=0;k<m-1;k++)
{for(int h=0; h<m; h++)
		{
			if(strcmp(a[h-1].name, a[h].name)>0)
			{
				strcpy(c.comp, a[h-1].name);                       strcpy(c.comp2, a[h-1].phone);
				strcpy(a[h-1].name, a[h].name);                    strcpy(a[h-1].phone, a[h].phone);
				strcpy(a[h].name, c.comp);                         strcpy(a[h].phone, c.comp2);
			}
        }}
			for(int te=0;te<m;te++ )
            {
                cout<<endl<<"SNO. "<<te<<" NAME: "<<a[te].name<<" TELEPHONE NUMBER: "<<a[te].phone;
            }
  Exit(); return 0;}

  int simpledisplay()
{
   for(int k=0;k<m-1;k++)
{for(int h=0; h<m; h++)
		{
			if(strcmp(a[h-1].name, a[h].name)>0)
			{
				strcpy(c.comp, a[h-1].name);                       strcpy(c.comp2, a[h-1].phone);
				strcpy(a[h-1].name, a[h].name);                    strcpy(a[h-1].phone, a[h].phone);
				strcpy(a[h].name, c.comp);                         strcpy(a[h].phone, c.comp2);
			}
        }}
			for(int te=0;te<m;te++ )
            {
                cout<<endl<<"SNO. "<<te<<" NAME: "<<a[te].name<<" TELEPHONE NUMBER: "<<a[te].phone;
            }
  return 0;}



//INPUT FUNCTION
int input()
{ cout<<endl<<"Enter number of entries you wish to enter(numeric value) :"; cin>>m;

    for(int k=0;k<m;k++)
{cout<<endl<<"Enter "<<k+1<<" name: ";
cin>>a[k].name;
cout<<endl<<"Enter "<<k+1<<" phone number: ";
cin>>a[k].phone;
} cout<<endl; Exit();   return 0;
}

int Exit()
{
    cout<<endl<<"TO GO BACK TO MAIN MENU PRESS Y/ TO EXIT PRESS ANY KEY/";
   char o; cin>>o;  int q; q=o;
   switch (q)
 {     case 89:
       system("CLS"); major();
       case 121: system("CLS"); major(); break;

        default : system("CLS");
        cout<<endl<<"THANKS FOR USING THE PROGRAM"<<endl<<"THIS PROJECT WAS BROUGHT TO YOU BY"; system("COLOR 9E"); cout<<" RAJIT KUTHIALA & ARJUN RAJA"; break;} return 0;
}


int lookout()
{
    cout<<endl<<"PRESS 1 TO SEARCH BY NAME"<<endl<<"PRESS 2 TO SEARCH BY PHONE NUMBER"<<endl<<"PRESS ANY KEY TO GO TO EXIT FUNCTION:  ";
    int p;  cin>>p;

               switch(p)
              {

               case 1: cout<<endl<<"ENTER NAME: ";
                                cin>>b.comp;
                            for(int u=0;u<=m;u++)
                            {
                                if(strcmp(b.comp,a[u].name)==0)
                                {
                                    cout<<"NAME: "<<a[u].name<<"  TELEPHONE NUMBER: "<<a[u].phone; exit(Exit()); break; return 0;}

                            } cout<<endl<<"NAME ENTERED WRONG";  cout<<endl; Exit();break;
               case 2: cout<<endl<<"ENTER TELEPONE NUMBER: ";
                                cin>>c.newest;
                            for(int ll=0;ll<=m;ll++)
                            {
                                if(strcmp(c.newest,a[ll].phone)==0)
                                {
                                    cout<<"NAME: "<<a[ll].name<<"  TELEPHONE NUMBER: "<<a[ll].phone; exit(Exit());break; return 0;} }
                    cout<<endl<<"TELEPHONE ENTERED WRONG"; cout<<endl; Exit();break;
                        default:major();            }
    return 0;
}

int eDit()
{ cout<<endl<<"ENTER THE ENTRY SERIAL NUMBER YOU WISH TO EDIT: ";
 int wo;    cin>>wo;         char checkh;
 cout<<"TO EDIT NAME ENTER 'n' "<<endl<<"TO EDIT TELEPHONE NUMBER ENTER 't': ";   cin>>checkh;
               if(checkh=='n')
                    {cout<<endl<<"ENTER NEW NAME:  ";  cin>>a[wo].name;}
               else if(checkh=='t')
                    {cout<<endl<<"ENTER NEW PHONE NUMBER:    ";cin>>a[wo].phone;}
               else {cout<<"INVALID OPTION"; major();}
Exit(); return 0;
}
