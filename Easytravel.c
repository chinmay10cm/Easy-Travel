// INTRODUCTORY CODE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{   system ("color 3F");
    FILE *ptr =NULL;
int a=0,i=0,n,mode,Y;
    char uname[10],c=' ';
    char pword[10],code[10];
    char user[10]="trvelgeek";
    char pass[10]="geek";
    char str [10];
    system("cls");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("  \t       EASY TRAVEL");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    printf("    \xcd\xcd\xcd\xcd\xcd\xcd\xcd 1. LOGIN FORM  \xcd\xcd\xcd\xcd\xcd\xcd\xcd \n\n ");
    scanf("\n\n%d",&n);
    switch(n)
   {
    case 1:
        do{
    printf("\n\n   ENTER USERNAME: ");
	scanf("%s", &uname);
	printf(" \n   ENTER PASSWORD: ");
	while(i<10)
	{  pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	//char code=pword;
	i=0;
	//scanf("%s",&pword);
		if(strcmp(uname,"travelgeek")==0 && strcmp(pword,"geek")==0)
	{
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
	printf("  \n\n   WELCOME USER !!!!");
	printf("\n\n\n   Press any key to continue...");
	getch();//holds the screen
	break;
	}
	else
	{printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
		printf("\n\n   LOGIN IS UNSUCESSFUL...PLEASE TRY AGAIN...");
		a++;
		getch();//holds the screen
	}
}
	while(a<=2);
	if (a>2)
	{  printf("\nSorry you have entered the wrong username and password for three times!!!");
		getch();}
}
system("cls");
do{printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("  \t       EASY TRAVEL");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    char destination[20];
    char initial_city[20];
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    printf("ENTER BELOW DETAILS IF YOU WANT TO TRAVEL BY FLIGHT OR TRAIN(1.YES 2.NO):"); scanf("%d",&Y);
    switch(Y) {
        case 1:
    printf("  Enter the name of the place you would like to travel to:  ");
    gets(destination);
    printf("\n  Enter the name of the initial city:  ");
    gets(initial_city);
    char dep_date[10];
    printf("\n  Enter departure date in DD/MM/YYYY format: ");
    gets(dep_date);
    char re_date[10];
    printf("\n  Enter return date in DD/MM/YYYY format: ");
    gets(re_date);
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    break;}
    getch();
    system("cls");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("  \t       EASY TRAVEL");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
     printf(" \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\n\n");
    printf("\n  MODES OF TRANSPORT AVAILABLE :- \n  1.  FLIGHTS \n  2.  BUSES \n  3.  TRAINS \n  4.  SKIP TO HOTEL BOOKINGS \n  5.  EXIT ");
    printf("\n\n \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\n\n");
    printf("\nENTER THE PREFERRED MODE OF TRAVEL: ");
    scanf("%d", &mode);
   	switch (mode)
   	{case 1 :flightbooking();
   		break;
		case 2:bus_begin();
   		break;
		case 3:trainbooking();
   		break;
		case 4:hotelbooking();
		break;}
   	}while(mode != 5);
    system("CLS");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("   THANK YOU FOR USING EASY TRAVELS");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    getch();
    return 0;
}
void bus_begin ();
void bus_begin()
{char c1[20],s1[20],c2[20],s2[20];
int mo,da;
int o,B;
int year, num;
do{system("cls");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t\t\xba ALL INDIA BUS RESERVATION \xba");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    printf(" \t     \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  MAIN MENU  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    printf(" \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\n\n");
    printf("   [1] BOOK TICKETS\n\n");
    printf("   [2] CANCEL BOOKING \n\n");
    printf("   [3] EXIT \n\n");
    printf(" \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\n\n");
    printf(" OPTION No. : ");
    scanf("%d",&o);
   switch (o)
   {case 1:system("cls");
        printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t\t\xba ALL INDIA BUS RESERVATION \xba");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    printf(" \t   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  BOOK TICKET  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n\n");
    printf("\t\tFROM (CITY,STATE):");
    scanf("%s,%s",c1,s1);
    printf("\n\t\tTO   (CITY,STATE):");
    scanf("%s,%s",c2,s2);
printf("\n\t\tENTER (YEAR,MONTH) :");
scanf("%d,%d",&year,&mo);
printf("\n\t\tENTER SUITABLE DATE:");
scanf("%d",&da);
bus1();
 printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
break;
    case 2:
    cancle ();
    break;
   }
    }while(o!=3);
    system("CLS");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t\t\xba ALL INDIA BUS RESERVATION \xba");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("   THANK YOU FOR USING THIS BUS RESERVATION SYSTEM OF EASY TRAVEL !!!");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
getch();
 printf("  DO YOU WANT TO SWITCH TO HOTEL BOOKING(1.yes/2.no): ");scanf("%d",&B);
if(B==1) hotelbooking();
else main();
   }
void bus1()
{int n1,n2;
char ch[10][130]={"6:00 a.m.-VOLVO(A.C.)","6:20 a.m.-VOLVO(N)","12:00 p.m.-DUKE(A.C.)","12:25 p.m.-DUKE(N)","2:40p.m.-VENUE(A.C.)","3:15p.m.-VENUE(N)","6:45p.m.-ACCESS(A.C.)","7:15p.m.-ACCESS(N)","9:15p.m.-VOLVO(A.C.)","10:00p.m.-VOLVO(N)"};

    system("cls");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t\t\xba ALL INDIA BUS RESERVATION \xba");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    printf(" \t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  BUS LIST  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n");
    printf(" \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\n\n");
    printf("   [1]  =>  %s\n\n",ch[0]);
    printf("   [2]  =>  %s\n\n",ch[1]);
printf("   [3]  =>  %s\n\n",ch[2]);
printf("   [4]  =>  %s\n\n",ch[3]);
printf("   [5]  =>  %s\n\n",ch[4]);
printf("   [6]  =>  %s\n\n",ch[5]);
printf("   [7]  =>  %s\n\n",ch[6]);
printf("   [8]  =>  %s\n\n",ch[7]);
printf("   [9]  =>  %s\n\n",ch[8]);
printf("   [10]  =>  %s\n\n",ch[9]);
printf(" \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\n\n");
printf("\xbaA.C. BUS -PER PERSON 220 rupees\xba\t\xba NON A.C. BUS-PER PERSON 200 rupees\xba ");
printf("\nENTER THE BUS NUMBER :");
scanf("%d",&n1);
 booking(n1);
}
void booking(int trno)
{char ch[10][130]={"6:00 a.m.-VOLVO(A.C.)","6:20 a.m.-VOLVO(N)","12:00 p.m.-DUKE(A.C.)","12:25 p.m.-DUKE(N)","2:40p.m.-VENUE(A.C.)","3:15p.m.-VENUE(N)","6:45p.m.-ACCESS(A.C.)","7:15p.m.-ACCESS(N)","9:15p.m.-VOLVO(A.C.)","10:00p.m.-VOLVO(N)"};
 int i=0,payment_method;
    char numstr[100];
system("cls");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t\t\xba ALL INDIA BUS RESERVATION \xba");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  BOOK TICKET  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n\n");
 printf("\xbaYour Bus Number is %d ********** %s\xba",trno,ch[trno-1]);
status_1(trno);
 FILE *f1, *fopen();//for reading the seats from the user.
 char str1[80]="32",str2[4],str3[4];
 int seat1,seat2,booking=0;
if(trno == 1)
{ f1 = fopen("tv1.txt","r+");
 fgets(str1,80,f1);
 fclose(f1);
}else if(trno == 2)
{f1 = fopen("tv2.txt","r+");
 fgets(str1,80,f1);
 fclose(f1);
}else if(trno == 3)
{f1 = fopen("tv3.txt","r+");
 fgets(str1,80,f1);
 fclose(f1);
}
else if(trno == 4)
{f1 = fopen("tv4.txt","r+");
 fgets(str1,80,f1);
 fclose(f1);
}
else if(trno == 5)
{f1 = fopen("tv5.txt","r+");
 fgets(str1,80,f1);
 fclose(f1);
}
else if (trno==6)
{f1 =fopen ("tv6.txt","r+");
    fgets(str1,80,f1);
 fclose(f1);
}
else if (trno==7)
{f1 =fopen ("tv7.txt","r+");
    fgets(str1,80,f1);
 fclose(f1);
}
else if (trno==8)
{f1 =fopen ("tv8.txt","r+");
     fgets(str1,80,f1);
 fclose(f1);
}
else if (trno==9)
{f1 =fopen ("tv9.txt","r+");
     fgets(str1,80,f1);
 fclose(f1);
}
else if (trno==10)
{f1 =fopen ("tv10.txt","r+");
    fgets(str1,80,f1);
 fclose(f1);
}
seat1=atoi(str1);//covert the string into number
if(seat1 <= 0)
{ printf("There is no blank seat in this bus. ");
}else
{printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
printf("\n   AVAILABLE SEATS: %d\n",seat1);
printf("\n   NUMBER OF TICKETS: ");
scanf("%d",&booking);
printf("\n");
seat1=seat1-booking;
itoa(trno,numstr,10);
if(trno%2==0)
printf("\n\n   The Total booking amount is %d",200*booking+name_number(booking,numstr));
else printf("\n\n   The Total booking amount is %d",220*booking+name_number(booking,numstr));
system("cls");
printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t\t\xba ALL INDIA BUS RESERVATION \xba");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
printf("\n\nThe following payment methods are available:\n1. Debit Card/Credit Card\n2. Net Banking\n3. UPI");
    printf("\nENTER YOUR DESIRED PAYMENT METHOD: ");
    scanf("%d", &payment_method);
    int card_number, cvv_number, otp, pin;
    switch(payment_method)
    {case 1 :
        printf("\nThe debit/credit card number is : ");
        scanf("%d", &card_number);
        printf("\nEnter the 3-digit CVV number: ");
        scanf("%d", &cvv_number);
        printf("\nThe OPT is : ");
        scanf("%d", &otp);
        printf("\n\nCONGRATULATIONS!!TRANSACTION SUCCESSFUL");
   		break;
        case 2:
        printf("\nEnter the OTP sent to you on your registered mobile number: ");
        scanf("%d", &otp);
        printf("\n\nTRANSACTION SUCCESSFUL");
        break;
        case 3:
        printf("\nEnter your pin: ");
        scanf("%d", &pin);
        printf("\nEnter the OTP sent to you on your registered mobile number: ");
        scanf("%d", &otp);
        printf("\n\nTRANSACTION SUCCESSFUL. ");
        break;
    }
        printf("\nTHANK YOU YOUR TICKET HAS BEEN BOOKED");
    getch();
itoa(seat1, str1, 10);//for reading the seats from the user.
if(trno == 1)
{f1 = fopen("tv1.txt","w");
 fputs(str1,f1);
 fclose(f1);
}
else if(trno == 2)
{ f1 = fopen("tv2.txt","w");
 fputs(str1,f1);
  fclose(f1);
}
else if(trno == 3)
{f1 = fopen("tv3.txt","w");
 fputs(str1,f1);
  fclose(f1);
}
else if(trno == 4)
{f1 = fopen("tv4.txt","w");
 fputs(str1,f1);
  fclose(f1);
}
else if(trno == 5)
{f1 = fopen("tv5.txt","w");
 fputs(str1,f1);
 fclose(f1);
}
else if(trno == 6)
{ f1 = fopen("tv6.txt","w");
 fputs(str1,f1);
 fclose(f1);
}
else if(trno == 7)
{f1 = fopen("tv7.txt","w");
 fputs(str1,f1);
 fclose(f1);
}
else if(trno == 8)
{f1 = fopen("tv8.txt","w");
 fputs(str1,f1);
 fclose(f1);
}
else if(trno == 9)
{
 f1 = fopen("tv9.txt","w");
 fputs(str1,f1);
 fclose(f1);
}
else if(trno == 10)
{f1 = fopen("tv10.txt","w");
 fputs(str1,f1);
 fclose(f1);
}
}
}
int name_number(int booking,char numstr[100])
{
char tempstr[100],tempstr1[12]="status",tempstr2[12]="number";
int number,snac,age,F,n,t=0,C=0,P;
 int c1=40,c2=20,c3=30,c4=40;//c1,c2,c3,c4 are cost of burger french fries,maza and sandwich
char name[32][100]={'\0'};
    FILE *a,*b;
    int i=0;
    printf(" \t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  BOOK TICKET  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n\n");
   strcat(numstr,".txt");
   strcat(tempstr1,numstr);
   strcat(tempstr2,numstr);
   a = fopen(tempstr1,"a");//for open the file to write the name in the file
   b = fopen(tempstr2,"a");//for open the file for writing the number in the file
for(i=0; i<booking; i++)//for entering the person name and seat number in the file
{     printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd Enter the details for ticket no %d \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n",i+1);
      printf("   ENTER THE SEAT NUMBER: ");
      scanf("%d",&number);
      printf("\n   ENTER THE PERSON NAME: ");
      scanf("%s",name[number-1]);
      printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
      printf("\n");
      itoa(number, tempstr, 10);
      fprintf(a,"%s ",name[number-1]);
      fprintf(b,"%s ",tempstr);
}fclose(a);
fclose(b);
for(i=0; i<booking; i++){
printf("\n  ENTER THE AGE OF THE PERSON %d :",i+1); scanf("%d",&age);
      if (age>=80)
      {printf("\tAS PER YOUR AGE YOU WILL GET 10% DISCOUNT ON YOUR TICKET.");
          P=200*(0.10);
      }
      else{printf("\tNO DISCOUNTAT YOUR AGE");}
      getch();
      system("cls");
      printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t\t\xba ALL INDIA BUS RESERVATION \xba");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
      printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
      printf("\tPREORDER SNACKS (1.YES/2.NO) :");
      scanf("%d",&snac);
      while (snac==1)
      {printf("\n1. COST OF BURGER=40rupees");
           printf(" \n2. COST OF FRENCH FRIES=20rupees");
           printf("\n3. COST OF MAZA=30rupees");
           printf("\n4. COST OF SANDWICH =40rupees");
    printf("\n\nENTER YOUR CHOICE OF FOOD (BURGER(1),FRENCH FRIES(2),MAZA(3),SANDWICH(4) ):");
    scanf("%d",&F);
    switch (F)
    {case 1:
        printf("\nENTER THE NUMBER OF BURGERS YOU NEED,:");
        scanf("%d",&n);
    printf("\ncost of your burger(s) is/are %drupees.",n*c1);
            t+=n*c1;
    break;
    case 2:
    printf("\nENTER THE NUMBER OF FRENCH FRIES YOU NEED:");
    scanf("%d",&n);
    printf("\ncost of your french fries are %drupees.",n*c2);
    t+=n*c2;
    break;
    case 3:
     printf("\nENTER THE NUMBER OF MAZZA YOU NEED:");
     scanf("%d",&n);
      printf("\ncost of your pizza(s) is/are %drupees.",n*c3);
      t+=n*c3;
    break;
    case 4:
        printf("\nENTER THE NUMBER OF SANDWICH YOU NEED:");
     scanf("%d",&n);
      printf("\ncost of your sandwich(s) is/are %drupees.",n*c4);
      t+=n*c4;
    break;
    default :
        printf("\noops! your choice does not exist.");}
          snac++;
      }
      C+=t-P;
}
getch();
return C;
}
void status_1(int trno)
{char name[32][100]={'\0'};
char number[32][2]={'\0'};
int num1[32]={0};
int read_number(int trno);
char ch[10][130]={"6:00 a.m.-VOLVO(A.C.)","6:20 a.m.-VOLVO(N)","12:00 p.m.-DUKE(A.C.)","12:25 p.m.-DUKE(N)","2:40p.m.-VENUE(A.C.)","3:15p.m.-VENUE(N)","6:45p.m.-ACCESS(A.C.)","7:15p.m.-ACCESS(N)","9:15p.m.-VOLVO(A.C.)","10:00p.m.-VOLVO(N)"};
    system("cls");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t\t\xba ALL INDIA BUS RESERVATION \xba");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
  int i,index=0,j;
    j=read_number(trno);
    read_name(trno);
    printf("\t\tBus No.%d: %s\n",trno,ch[trno-1]);
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
char tempname[33][10]={"Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty "};
    for(i=0; i<j; i++)
    {strcpy(tempname[num1[i]],name[i]);
    }
    for(i=0; i<8; i++)
    {
        printf("   ");
        for(j=0; j<4; j++)
            {
        printf("%d.%s\t",index+1,tempname[index+1]);
        index++;
            }
            printf("\n");}
}
int read_number(int trno)//for putting the numeric value in the array
{char tempstr[100],tempstr2[12]="number";
char number[32][2]={'\0'};
FILE *a,*b;
char numstr[100];
int num1[32]={0};
int i=0,j=0,k;
itoa(trno,numstr,10);
strcat(numstr,".txt");
strcat(tempstr2,numstr);
a = fopen(tempstr2,"a+");//for open the file to write the name in the file
   while(!feof(a))
   {number[i][j] = fgetc(a);
  if(number[i][j] == ' ')
      {
          j=0;
          i++;
      }
      else
      {
      j++;
      }
   }
   k=i;
   for(i=0; i<k; i++)
   {
       num1[i] = atoi(number[i]);
   }
   fclose(a);
   return k;
}
void read_name(int trno)//for putting the numeric value in the array
{char name[32][100]={'\0'};
char tempstr1[12]="status";
FILE *b;
char numstr[100];
int i=0,j=0,k=0;
itoa(trno,numstr,10);
strcat(numstr,".txt");
strcat(tempstr1,numstr);
b = fopen(tempstr1,"a+");//for open the file to write the name in the file
   while(!feof(b))
   {name[i][j] = fgetc(b);
if(name[i][j] == ' ')
      {
          j=0;
          i++;
      }
      else
      {
        j++;
      }
   }
   name[i][j]='\0';
   k=i;
   fclose(b);
}
void cancle()
{ int num1[32]={0};char name[32][100]={'\0'};
    int trno;
int seat_no,i,j;
char numstr[100],tempstr2[15]="number",tempstr1[15]="status";
 system("cls");
 char ch[10][130]={"6:00 a.m.-VOLVO(A.C.)","6:20 a.m.-VOLVO(N)","12:00 p.m.-DUKE(A.C.)","12:25 p.m.-DUKE(N)","2:40p.m.-VENUE(A.C.)","3:15p.m.-VENUE(N)","6:45p.m.-ACCESS(A.C.)","7:15p.m.-ACCESS(N)","9:15p.m.-VOLVO(A.C.)","10:00p.m.-VOLVO(N)"};
  printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t\t\xba ALL INDIA BUS RESERVATION \xba");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    printf(" \t    \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd CANCEL TICKET \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    printf("\t    \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd BUS LIST \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n\n");
printf(" \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\n\n");
    printf("   [1]  =>  %s\n\n",ch[0]);
    printf("   [2]  =>  %s\n\n",ch[1]);
printf("   [3]  =>  %s\n\n",ch[2]);
printf("   [4]  =>  %s\n\n",ch[3]);
printf("   [5]  =>  %s\n\n",ch[4]);
printf("   [6]  =>  %s\n\n",ch[5]);
printf("   [7]  =>  %s\n\n",ch[6]);
printf("   [8]  =>  %s\n\n",ch[7]);
printf("   [9]  =>  %s\n\n",ch[8]);
printf("   [10]  =>  %s\n\n",ch[9]);printf(" \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\n\n");
 printf("\n   ENTER THE BUS NUMBER: ");
scanf("%d",&trno);
itoa(trno,numstr,10);
strcat(numstr,".txt");
strcat(tempstr1,numstr);
strcat(tempstr2,numstr);
read_number(trno);
read_name(trno);
status_1(trno);
printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
printf("   ENTER THE SEAT NUMBER: ");
scanf("%d",&seat_no);
FILE *a,*b;
a = fopen(tempstr1,"w+");
b = fopen(tempstr2,"w+");
for(i=0; i<32; i++)
{
     if(num1[i] == seat_no)
     {
         for(j=0; j<32; j++)
         {if(num1[j] != seat_no && num1[j] != 0)
             {fprintf(b,"%d ",num1[j]);
                 fprintf(a,"%s",name[j]);
             }
             else if(num1[j] == seat_no && num1[j] != 0)
             {
                 strcpy(name[j],"Empty ");
             }
         }
     }
}
fclose(a);
fclose(b);
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
if(trno%2==0)
 printf("  CANCELLATION SUCCESSFUL ! Your 190 rupees will be Returned\n");
 else
    printf("   CANCELLATION SUCCESSFUL! Your 210 rupees will be Returned\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    getch();
}
//flight booking code
void flightbooking()
{struct book
{char dep_date[10];
    char ret_date[10];
};
	struct book b;
	FILE *fp;
    int num_tickets, i, passport_num, age, flight_choice, price_for_one, total_price, payment_method;
    char name[20];
    system("cls");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t\t\t\xba FLIGHT BOOKING \xba");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
//Input number of tickets to be booked
	printf("\n\nEnter the number of tickets to be booked (for 3+ years old only) :");
	scanf("%d", &num_tickets);
//Input information
	for(i=1; i<=num_tickets; i++)
    {printf("\nThe name of the customer is %d: ",i);
        scanf("%s", &name);
        printf("\nEnter passport number of person %d= ", i);
        scanf("%d", &passport_num);
        printf("\nEnter age of person %d= ", i);
        scanf("%d", &age);
    }
//Select flight according to your convenience
FlightOptions:
    printf("\nThe following flight options are available for your chosen departure and return dates: ");
    printf("\n\n1.(ECONOMY)-\nSpice Jet Departure flight @00:05 - 05:45\nIndigo Return flight @13:20 - 19:10\nfor Rs.10,034 per person");
    printf("\n\n2.(ECONOMY)-\nGo Air Departure flight @03:30 - 08:50\nSpice Jet Return flight @10:35 - 16:05\nfor Rs.11,780 per person");
    printf("\n\n3.(PREMIUM ECONOMY)-\nAir Asia Departure flight @01:05 - 06:45\nAir India Return flight @16:30 - 21:20\nfor Rs.19,400 per person");
    printf("\n\n4.(PREMIUM ECONOMY)-\nSpice Jet Departure flight @05:50 - 10:45\nQatar Return flight @06:20 - 11:10\nfor Rs.20,100 per person");
    printf("\n\n5.(BUSINESS CLASS)-\nLufthansa Departure flight @07:40 - 12:15\nEmirates Return flight @09:40 - 14:55\nfor Rs.30,500 per person");
    printf("\n\n6.(BUSINESS CLASS)-\nEthiad Airways Departure flight @11:50 - 16:50\nQatar Return flight @19:10 - 23:30\nfor Rs.30,450 per person");
    printf("\n\n7.(FIRST CLASS)-\nEmirates Departure flight @12:40 - 17:45\nLufthansa Return flight @11:25 - 16:35\nfor Rs.40,800 per person");
    printf("\n\n8.(FIRST CLASS)-\nQatar Departure flight @13:10 - 18:15\nEthiad Airways Return flight @18:20 - 23:50\nfor Rs.43,670 per person");
    printf("\n\nEnter your choice: ");
    scanf("%d", &flight_choice);
//Display  total price
    switch(flight_choice)
    {case 1 :
        price_for_one= 10034;
        total_price= num_tickets*price_for_one;
        printf("\nThe total price for %d tickets will be= %d", num_tickets, total_price);
   		break;
   		case 2 :
        price_for_one= 11780;
        total_price= num_tickets*price_for_one;
        printf("\nThe total price for %d tickets will be= %d", num_tickets, total_price);
   		break;
   		case 3 :
        price_for_one= 19400;
        total_price= num_tickets*price_for_one;
        printf("\nThe total price for %d tickets will be= %d", num_tickets, total_price);
   		break;
   		case 4 :
        price_for_one= 20100;
        total_price= num_tickets*price_for_one;
        printf("\nThe total price for %d tickets will be= %d", num_tickets, total_price);
   		break;
   		case 5 :
        price_for_one= 30500;
        total_price= num_tickets*price_for_one;
        printf("\nThe total price for %d tickets will be= %d", num_tickets, total_price);
   		break;
   		case 6 :
        price_for_one= 30450;
        total_price= num_tickets*price_for_one;
        printf("\nThe total price for %d tickets will be= %d", num_tickets, total_price);
   		break;
   		case 7 :
        price_for_one= 40800;
        total_price= num_tickets*price_for_one;
        printf("\nThe total price for %d tickets will be= %d", num_tickets, total_price);
   		break;
   		case 8 :
        price_for_one= 43670;
        total_price= num_tickets*price_for_one;
        printf("\nThe total price for %d tickets will be= %d", num_tickets, total_price);
   		break;
        default:
           printf("\nThe entered choice of flight is not available. Please reselect your choice.");
           goto  FlightOptions;
    }
//Payment
Payment:
    printf("\n\nThe following payment methods are available:\n1. Debit Card/Credit Card\n2. Net Banking\n3. UPI");
    printf("\nEnter your desired payment method: ");
    scanf("%d", &payment_method);
    int card_number, cvv_number, otp, pin;
    switch(payment_method)
    {
    case 1 :
        printf("\nEnter debit/credit card number: ");
        scanf("%d", &card_number);
        printf("\nEnter the 3-digit CVV number: ");
        scanf("%d", &cvv_number);
        printf("\nAmount to be paid: Rs.%d", total_price);
        printf("\nEnter the OTP sent to you on your registered mobile number: ");
        scanf("%d", &otp);
        printf("\n\nTRANSACTION SUCCESSFUL");
   		break;
    case 2:
        printf("\nAmount to be paid: Rs.%d", total_price);
        printf("\nEnter the OTP sent to you on your registered mobile number: ");
        scanf("%d", &otp);
        printf("\n\nTRANSACTION SUCCESSFUL");
        break;
    case 3:
        printf("\nAmount to be paid: Rs.%d", total_price);
        printf("\nEnter your pin: ");
        scanf("%d", &pin);
        printf("\nEnter the OTP sent to you on your registered mobile number: ");
        scanf("%d", &otp);
        printf("\n\nTRANSACTION SUCCESSFUL");
        break;
     default:
           printf("\n \nThe entered choice of flight is not available. Please reselect your choice.");
           goto Payment;
    }
    printf("\n\nYOUR FLIGHT(S) HAVE BEEN SUCCESSFULLY BOOKED.\nYou are requested to take a screenshot of the flight related information provided below.");
	switch(flight_choice)
    {
        case 1 :
         printf("\n\n%d flight ticket(s) booked for\n(ECONOMY)-\nSpice Jet Departure flight @00:05 - 05:45\nIndigo Return flight @13:20 - 19:10.", num_tickets);
   		 printf("\nProof of vaccination or negative RT-PCR test report of less than 72 hours ago to be carried by the passengers.");
         printf("\n\nLuggage weight should not exceed 20 Kilograms per person.");
   		break;
   		case 2 :
         printf("\n\n%d flight ticket(s) booked for\n(ECONOMY)-\nGo Air Departure flight @03:30 - 08:50\nSpice Jet Return flight @10:35 - 16:05.", num_tickets);
   		 printf("\nProof of vaccination or negative RT-PCR test report of less than 72 hours ago to be carried by the passengers.");
         printf("\n\nLuggage weight should not exceed 20 Kilograms per person.");
   		break;
   		case 3 :
         printf("\n\n%d flight ticket(s) booked for\n(PREMIUM ECONOMY)-\nAir Asia Departure flight @01:05 - 06:45\nAir India Return flight @16:30 - 21:20.", num_tickets);
   		 printf("\nProof of vaccination or negative RT-PCR test report of less than 72 hours ago to be carried by the passengers.");
         printf("\n\nLuggage weight should not exceed 25 Kilograms per person.");
   		break;
   		case 4 :
         printf("\n\n%d flight ticket(s) booked for\n(PREMIUM ECONOMY)-\nSpice Jet Departure flight @05:50 - 10:45\nQatar Return flight @06:20 - 11:10.", num_tickets);
   		 printf("\nProof of vaccination or negative RT-PCR test report of less than 72 hours ago to be carried by the passengers.");
         printf("\n\nLuggage weight should not exceed 25 Kilograms per person.");
   		break;
   		case 5 :
         printf("\n\n%d flight ticket(s) booked for\n(BUSINESS CLASS)-\nLufthansa Departure flight @07:40 - 12:15\nEmirates Return flight @09:40 - 14:55.", num_tickets);
   		 printf("\nProof of vaccination or negative RT-PCR test report of less than 72 hours ago to be carried by the passengers.");
         printf("\n\nLuggage weight should not exceed 30 Kilograms per person.");
   		break;
   		case 6 :
         printf("\n\n%d flight ticket(s) booked for\n(BUSINESS CLASS)-\nEthiad Airways Departure flight @11:50 - 16:50\nQatar Return flight @19:10 - 23:30.", num_tickets);
   		 printf("\nProof of vaccination or negative RT-PCR test report of less than 72 hours ago to be carried by the passengers.");
         printf("\n\nLuggage weight should not exceed 30 Kilograms per person.");
   		break;
   		case 7 :
         printf("\n\n%d flight ticket(s) booked for\n(FIRST CLASS)-\nEmirates Departure flight @12:40 - 17:45\nLufthansa Return flight @11:25 - 16:35.", num_tickets);
   		 printf("\nProof of vaccination or negative RT-PCR test report of less than 72 hours ago to be carried by the passengers.");
         printf("\n\nLuggage weight should not exceed 35 Kilograms per person.");
   		break;
   		case 8 :
         printf("\n\n%d flight ticket(s) booked for\n(FIRST CLASS)-\nQatar Departure flight @13:10 - 18:15\nEthiad Airways Return flight @18:20 - 23:50.", num_tickets);
   		 printf("\nProof of vaccination or negative RT-PCR test report of less than 72 hours ago to be carried by the passengers.");
         printf("\n\nLuggage weight should not exceed 35 Kilograms per person.");
   		break;
    }
//Proceed to hotel booking or end
    int a;
    printf("\n\nIf you wish to explore hotel options enter 1, otherwise enter 2.");
    scanf("%d", &a);
    switch(a)
    {
    case 1 :hotelbooking();
    break;
    case 2 :
    printf("\nThank you for using our services. We hope you have a safe trip.");
    main();
    break ;
    }
	fclose(fp);
}
// TRAIN BOOKING CODE
// This code is made with aim for booking of train tickets
// the code will input the details of the place where the customer wants to go and where he/she  is starting from
void trainbooking()
{struct book
{char dep_date[10];
    char ret_date[10];
};
struct book b;
FILE *fp;
int num_tickets, i, Aadhaar_num, age,train_choice, price_for_one, total_price, payment_method;
	char customer_name[1];
     //input the number of tickets to be booked for trains
system("cls");
  printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t\t\xba TRAIN BOOKING \xba");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
     printf("\n\nThe number of tickets to be booked are  (for 6+ years old only) :");
scanf("%d", &num_tickets);
for(i=1; i<=num_tickets; i++)
{printf("\nThe name of the customer is :%d: ",i);
       scanf("%s", &customer_name);
        printf("\nThe Aadhaar number of the passenger is :%d= ", i);
        scanf("%d", &Aadhaar_num);
        printf("\nThe age of the customer is : %d= ", i);
        scanf("%d", &age);
    }
    // Chose the Train as per the customer's convenience
    TrainOptions:
    printf("\nThe following Train options are available for your chosen arrival and departure : ");
    printf("\n\n1.First ac-\n Rajdhani express 00:00 - 05:30\n Gatiman express return train 13:00 - 18:10\nfor Rs-1000 per person");

    printf("\n\n2.Second ac-\n Shatabdi express 03:30 - 08:50\n Taj express return train 10:30 - 15:09\nfor Rs-1100 per person");
    printf("\n\n3.First ac-\n Gatiman express 01:00 - 06:00\n Vivek express return train 16:30 - 21:30\nfor Rs-2000 per person");

    printf("\n\n4.Seond ac-\n Taj superfast express 10:00 - 14:30\n Himsagar express return train 06:30 - 10:15\nfor Rs-800 per person");

    printf("\n\n5.Sleeper class-\n Jabalpur superfast express07:40 - 12:15\n Maitree express return train 09:40 - 14:55\nfor Rs-500 per person");

    printf("\n\n6.Third ac-\n Vande bharat express 11:50 - 16:50\n Ranchee express return train 19:10 - 23:30\nfor Rs-1300 per person");

    printf("\n\n7.Sleeper class-\n Sealdah Duronto Express 22:00 - 05:45\n Jaisalmer express return train 11:25 - 18:55\nfor Rs-600 per person");

    printf("\n\n8.First ac-\n Maharaja express 13:00 - 18:35\n Rajdhani express return train 18:50 - 23:30\nfor Rs-10000 per person");
    printf("\n\n9.Second ac-\n Bandra Nizamuddin Express-12:00 - 18:00\n Goa express return train 20:00 - 01:00\n for Rs 1100 per person");
    printf("\n\n10.First ac-\nJaipur superfast express- 13:00 - 15:30\n Udaipur superfast express return train- 16:30-19:45\n for Rs 1000 per person");
    printf("\n\n11.Sleeper class\n-Karnataka express- 11:00 - 21:00\n Mysore express return train - 20:00 - 05:30\n for Rs 900 per person");
    // Below are the few special trains which run only on selected week days
    // generally the below Trains are only for long routes
    // They also have an increased fare in comparision to the normal trains
    printf("\n\n12.First ac-\n Lifeline express - 11:00 - 17:50\n Golden Chariot express return train -16:30 - 22:45\n Rs 12000 per person");
    printf("\n\n13.First ac-\n Darjeeling Himalayan express -8:50 - 17:50\n Konkan express return train - 18:30 - 04:12\n Rs 15000 per person");
    printf("\n\n14.First ac-\n Rameswaram express - 06:30 - 13:48\n Bhubaneshwar express return train - 14:35 - 19:45\n Rs 25000 per person");
    printf("\n\n15.First ac-\n Pune express - 12:45 - 07:30 \n Ahemdabad express return train - 14:12 - 18:55\n Rs 35000 ");
    printf("\n\nEnter your choice: ");

    scanf("%d", &train_choice);

    // Now the code has been designed in such a way that it displays the total price for the tickets
    // After the user has selected the Train and ac/non ac type
    switch(train_choice)
    {  case 1 :
        price_for_one= 1000;
        total_price= num_tickets*price_for_one;
        printf("\nThe total price for %d tickets will be= %d", num_tickets, total_price);
   		break;
   		case 2 :
        price_for_one= 1100;
        total_price= num_tickets*price_for_one;
        printf("\nThe total price for %d tickets will be= %d", num_tickets, total_price);
   		break;
   		case 3 :
        price_for_one= 2000;
        total_price= num_tickets*price_for_one;
        printf("\nThe total price for %d tickets will be= %d", num_tickets, total_price);
   		break;
   		case 4 :
        price_for_one= 800;
        total_price= num_tickets*price_for_one;
        printf("\nThe total price for %d tickets will be= %d", num_tickets, total_price);
   		break;
   		case 5 :
        price_for_one= 500;
        total_price= num_tickets*price_for_one;
        printf("\nThe total price for %d tickets will be= %d", num_tickets, total_price);
   		break;
   		case 6 :
        price_for_one= 1300;
        total_price= num_tickets*price_for_one;
        printf("\nThe total price for %d tickets will be= %d", num_tickets, total_price);
   		break;
   		case 7 :
        price_for_one= 600;
        total_price= num_tickets*price_for_one;
        printf("\nThe total price for %d tickets will be= %d", num_tickets, total_price);
   		break;
   		case 8 :
        price_for_one= 10000;
        total_price= num_tickets*price_for_one;
        printf("\nThe total price for %d tickets will be= %d", num_tickets, total_price);
   		break;
   		case 9 :
   		price_for_one= 1100;
   		total_price= num_tickets*price_for_one;
   		printf("\nThe total price for %d tickets will be= %d", num_tickets, total_price);
   		break;
   		case 10 :
   		price_for_one= 1000;
   		total_price= num_tickets*price_for_one;
   		printf("\nThe total price for %d tickets will be= %d", num_tickets, total_price);
   		break;
   		case 11 :
   		price_for_one= 900;
   		total_price= num_tickets*price_for_one;
   		printf("\nThe total price for %d tickets will be= %d", num_tickets, total_price);
   		break;
   		case 12 :
   		price_for_one= 12000;
   		total_price= num_tickets*price_for_one;
   		printf("\nThe total price for %d tickets will be= %d", num_tickets, total_price);
   		break;
   		case 13 :
   		price_for_one= 15000;
   		total_price= num_tickets*price_for_one;
   		printf("\nThe total price for %d tickets will be= %d", num_tickets, total_price);
   		break;
   		case 14 :
   		price_for_one= 25000;
   		total_price= num_tickets*price_for_one;
   		printf("\nThe total price for %d tickets will be= %d", num_tickets, total_price);
   		break;
   		case 15 :
   		price_for_one= 35000;
   		total_price= num_tickets*price_for_one;
   		printf("\nThe total price for %d tickets will be= %d", num_tickets, total_price);
   		break;
   		default:
           printf("\nThe entered choice of flight is not available. Please reselect your choice.");
           goto TrainOptions;
           }
    // The following code will give the customer a few options from which he/she can complete his payment
    // The code will also ask for CVV as well as OTP
    // The code has been desgined in such a way that the Payment is fast,complete and secure
    Payment:
    printf("\n\nThe following payment methods are available:\n1. Debit Card/Credit Card\n2. Net Banking\n3. UPI");
    printf("\nEnter your desired payment method: ");
    scanf("%d", &payment_method);
    int card_number, cvv_number, otp, pin;
    switch(payment_method)
    {case 1 :
        printf("\nThe debit/credit card number is : ");
        scanf("%d", &card_number);
        printf("\nEnter the 3-digit CVV number: ");
        scanf("%d", &cvv_number);
        printf("\n Total Amount to be paid is : Rs.%d", total_price);
        printf("\nThe OPT is : ");
        scanf("%d", &otp);
        printf("\n\nCONGRATULATIONS!!TRANSACTION SUCCESSFUL");
   		break;
        case 2:
        printf("\nAmount to be paid: Rs.%d", total_price);
        printf("\nEnter the OTP sent to you on your registered mobile number: ");
        scanf("%d", &otp);
        printf("\n\nTRANSACTION SUCCESSFUL");
        break;
        case 3:
        printf("\nAmount to be paid: Rs.%d", total_price);
        printf("\nEnter your pin: ");
        scanf("%d", &pin);
        printf("\nEnter the OTP sent to you on your registered mobile number: ");
        scanf("%d", &otp);
        printf("\n\nTRANSACTION SUCCESSFUL");
        break;
     default:
           printf("\n \nThe entered choice of your Train  is not available. Please reselect your choice.");
           goto Payment;}
printf("\n\nYOUR TRAIN TICKETS HAVE BEEN SUCCESSFULLY BOOKED.\nYou are requested to take a screenshot of the Train related information provided below.");
	switch(train_choice)
    {case 1 :
         printf("\n\n%d Train ticket(s) booked for\nFirst ac-\nRajdhani express 00:00 - 05:30\nGatiman express return train 13:00 - 18:10", num_tickets);
   		 printf("\nProof of vaccination or negative RT-PCR test report of less than 72 hours ago to be carried by the passengers.");
   		break;
   		case 2 :
         printf("\n\n%d Train ticket(s) booked for\nSecond ac-\nShatabdi express 03:30 - 08:50\nTaj express return train 10:30 - 15:09", num_tickets);
   		 printf("\nProof of vaccination or negative RT-PCR test report of less than 72 hours ago to be carried by the passengers.");
   		break;
   		case 3 :
         printf("\n\n%d Train ticket(s) booked for\nFirst ac-\nGatiman express 01:00 - 06:00\nVivek express return train 16:30 - 21:30", num_tickets);
   		 printf("\nProof of vaccination or negative RT-PCR test report of less than 72 hours ago to be carried by the passengers.");
   		break;
   		case 4 :
         printf("\n\n%d Train ticket(s) booked for\nSecond ac-\nTaj superfast express 10:00 - 14:30\nHimsagar express return train 06:30 - 10:15", num_tickets);
   		 printf("\nProof of vaccination or negative RT-PCR test report of less than 72 hours ago to be carried by the passengers.");
   		break;
   		case 5 :
         printf("\n\n%d Train ticket(s) booked for\nSleeper class-\nJabalpur superfast express07:40 - 12:15\nMaitree express return train 09:40 - 14:55", num_tickets);
   		 printf("\nProof of vaccination or negative RT-PCR test report of less than 72 hours ago to be carried by the passengers.");
   		break;
   		case 6 :
         printf("\n\n%d Train ticket(s) booked for\nThird ac-\nVande bharat express 11:50 - 16:50\nRanchee express return train 19:10 - 23:30", num_tickets);
   		 printf("\nProof of vaccination or negative RT-PCR test report of less than 72 hours ago to be carried by the passengers.");
   		break;
   		case 7 :
         printf("\n\n%d Train ticket(s) booked for\nSleeper class-\nSealdah Duronto Express 22:00 - 05:45\nJaisalmer express return train 11:25 - 18:55", num_tickets);
   		 printf("\nProof of vaccination or negative RT-PCR test report of less than 72 hours ago to be carried by the passengers.");
   		break;
   		case 8 :
         printf("\n\n%d Train ticket(s) booked for\nFirst ac-\nMaharaja express 13:00 - 18:35\nRajdhani express return train 18:50 - 23:30", num_tickets);
   		 printf("\nProof of vaccination or negative RT-PCR test report of less than 72 hours ago to be carried by the passengers.");
   		break;
   		case 9 :
   		printf("\n\n%d Train ticket(s) booked for\nSecond ac-\nBandra Nizamuddin Express-12:00 - 18:00\nGoa express return train 20:00 - 01:00",num_tickets);
   		printf("\nProof of vaccination or negative RT-PCR test report of less than 72 hours ago to be carried by the passengers.");
   		break;
   		case 10 :
   		printf("\n\n%d Train ticket(s) booked for\nFirst ac-\nJaipur superfast express- 13:00 - 15:30\nUdaipur superfast express return train- 16:30-19:45",num_tickets);
   		printf("\nProof of vaccination or negative RT-PCR test report of less than 72 hours ago to be carried by the passengers.");
   		break;
   		case 11 :
   		printf("\n\n%d Train ticket(s) booked for\nSleeper class-\nKarnataka express- 11:00 - 21:00\nMysore express return train - 20:00 - 05:30",num_tickets);
   		printf("\nProof of vaccination or negative RT-PCR test report of less than 72 hours ago to be carried by the passengers.");
   		break;
   		case 12 :
   		printf("\n\n%d Train tickets(s) booked for\nFirst ac-\nLifeline express - 11:00 - 17:50\nGolden Chariot express return train -16:30 - 22:45",num_tickets);
   		printf("\nProof of vaccination or negative RT-PCR test report of less than 72 hours ago to be carried by the passengers.");
   		break;
   		case 13 :
   		printf("\n\n%d Train tickets(s) booked for\nFirst ac-\nDarjeeling Himalayan express -8:50 - 17:50\n Konkan express return train - 18:30 - 04:12",num_tickets);
   		printf("\nProof of vaccination or negative RT-PCR test report of less than 72 hours ago to be carried by the passengers.");
   		break;
   		case 14 :
   		printf("\n\n%d Train tickets(s) booked for\nFirst ac-\nRameswaram express - 06:30 - 13:48\nBhubaneshwar express return train - 14:35 - 19:45",num_tickets);
   		printf("\nProof of vaccination or negative RT-PCR test report of less than 72 hours ago to be carried by the passengers.");
   		break;
   		case 15 :
   		printf("\n\n%d Train tickets(s) booked for\n First ac-\nPune express - 12:45 - 07:30\nAhemdabad express return train - 14:12 - 18:55",num_tickets);
   		printf("\nProof of vaccination or negative RT-PCR test report of less than 72 hours ago to be carried by the passengers.");
   		break;
    }

//Proceed to hotel booking or end
    int a;
    printf("\n\nIf you wish to explore hotel options enter 1, otherwise enter 2.");
    scanf("%d", &a);
    switch(a)
    {
    case 1 :
    hotelbooking();
    break ;
    case 2:
    printf("\nThank you for using our services. We hope you have a safe trip.");
    main();
    break;
    }
	fclose(fp);
}
//hotel booking
void hotelbooking()
{struct book
{char dep_date[10];
    char ret_date[10];
};
  struct book b;
	FILE *fp;
	int num_guests, i, age,bed_choice, hotel_choice, price_for_one,filter,nights, total_price, payment_method,aadhar_num,age1;
    char name[40];
    system("cls");
    printf(" -------------------------------------------------------------------------\n");
 	printf("\t\t*************************************************\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*       ----------------------------------      *\n");
	printf("\t\t*        WELCOME TO HOTEL BOOKING SERVICE       *\n");
	printf("\t\t*       ----------------------------------      *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*************************************************\n\n\n");
	printf("Enter the number of guests:\n");
	scanf("%d",&num_guests);
	//Input information
	for(i=1; i<=num_guests; i++)
    {printf("\nEnter full name of person %d= ", i);
        scanf("%s", &name);
        printf("\nEnter aadhar number of %s= ", name);
        scanf("%d", &aadhar_num);
        printf("\nEnter age of %s= ", name);
        scanf("%d", &age1);
        printf("Are you vaccinated?(both the doses?)\t1.YES\t2.NO\n");
        int choice3;
        scanf("%d",&choice3);
        if (choice3 ==1)
        {
            printf("DO bring the complete vaccination certificate\n");
        }
        else
        {
            printf("Do produce a corona virus test report at the time of check in \n rapid test or RTPCR both are acceptable\n");
        }
    }
    printf("Enter number of nights you want to stay:\n");
    scanf("%d",&nights);
// 	select hotel of choice
HotelOptions:
	printf("\nThe following hotel options are available for your chosen departure, return dates and location: ");
	printf("\n\n1.  ROYAL ORCHID (@Rs.6000/per night,per person)     (*****) ");
    printf("\n\n2.  HYATT REGENCY (@Rs.7000/per night,per person)    (*****) ");
    printf("\n\n3.  TRIDENT (@Rs.5800/per night,per person)          (****)");
    printf("\n\n4.  THE LEELA (@Rs.5600/per night,per person)        (****)");
    printf("\n\n5.  CONARD(@Rs.5900/per night,per person)            (****)");
    printf("\n\n6.  RADISSON(@Rs.5500/per night,per person)          (***)");
    printf("\n\n7.  HOTEL NOON(@Rs.5300/per night,per person)        (**)");
    printf("\n\n8.  HOTEL NIGHT QUEEN(@Rs.6300/per night,per person) (****)");
    printf("\n\n9.  HOTEL MAD NIGHT (@Rs.3300/per night,per person)  (***)");
    printf("\n\n10 .HOTEL SKY HIGH (@Rs.3400/per night,per person)   (***)");
    printf("\t\t*****************************************************\n\n\n");
    printf("\t\t*       -----------------------------           *\n");
	printf("\t\t*               HOTEL  FILTER                   *\n");
	printf("\t\t*       -----------------------------           *\n");

	//sorting hotels on the basis of customer reviews
    printf("\t*************************************************\n");
	printf("\tHOTELS SORTED ON THE BASIS OF CUSTOMER REVIEWS!!:\n");
	printf("\t*************************************************\n");
	printf("\t|\t\t\t|\t\t\t|\t\t\t\t\t\t\t\n");
	printf("\t|\t\t\t|\t\t\t|\t\t\t\t\t\t\t\n");
	printf("\t|\t\t\t|\t\t\t|\t\t\t\t\t\t\t\n");
	printf("\t|\t\t\t|\t\t\t|\t\t\t\t\t\t\t\n");
	printf("\tV\t\t\tV\t\t\tV\t\t\t\t\t\t\t\n");
	printf("HOTEL ROYAL ORCHID   has    --------> 8K+     positive  reviews!!\n");
	printf("HOTEL HYATT REGENCY  has    --------> 6K+     positive  reviews!!\n");
	printf("HOTEL THE LEELA      has    --------> 5.8K+   positive  reviews!!\n");
	printf("HOTEL SKY HIGH       has    --------> 5.6K+   positive  reviews!!\n");
	printf("HOTEL RADISSON       has    --------> 5.5K+   positive  reviews!!\n");
	printf("HOTEL CONARD         has    --------> 5.5K+   positive  reviews!!\n");
	printf("HOTEL TRIDENT        has    --------> 5.3K+   positive  reviews!!\n");
	printf("HOTEL MAD NIGHT      has    --------> 5K+     positive  reviews!!\n");
	printf("HOTEL NOON           has    --------> 4.8K+   positive  reviews!!\n\n");
	printf("HOTEL NIGHT QUEEN    has    --------> 4.4K+   positive  reviews!!\n\n");
	//filter on the basis of services
	printf("YOU CAN FILTER THE LIST OF HOTELS ACCORDING TO YOUR REQUIREMENTS!!\n");
Filteroptions:
    printf("\n\n1. Show hotels with swimming pool");
    printf("\n\n2. Show hotels with GYM");
    printf("\n\n3. Show hotels with conference halls and meeting rooms");
    printf("\n\n4. Show hotels providing complementary meals");
    printf("\n\n5. Show hotels with celebration hall");
    printf("\n\n6. Show hotels with arcade gaming arena");
    printf("\n\n7. Show hotels providing complementary transport ");

    printf("Enter your choice:\n");
    scanf("%d",&filter);

    switch(filter)
    {case 1 :
        printf("Only these hotels have SWIMMING POOL:\n 1.ROYAL ORCHID \n 4.THE LEELA\n 8.  HOTEL NIGHT QUEEN\n");
        break;
        case 2 :
        printf("Only these hotels have GYM:\n 6.RADISSON \n 7.HOTEL NOON\n 9.HOTEL MAD NIGHT\n");
        break;
        case 3 :
        printf("Only these hotels have CONFERENCE HALLS and MEETING ROOMS:\n 6.RADISSON \n 3.TRIDENT \n 5.CONARD\n");
        break;
        case 4 :
        printf("Only these hotels provide COMPLEMENTARY MEALS\n 3.TRIDENT \n 7.HOTEL NOON \n 5.CONARD \n 2.HYATT REGENCY\n");
        break;
        case 5 :
        printf("Only these hotels have CELEBRATION HALL:\n 6.RADISSON \n 7.HOTEL NOON \n 3.TRIDENT \n 4.THE LEENA\n 10.HOTEL SKY HIGH\n");
        break;
        case 6 :
        printf("Only these hotels have ARCADE GAMING ARENA:\n 6.RADISSON\n");
        break;
        case 7:
        printf("Only these hotels provide COMPLEMENTARY TRANSPORT :\n 6.RADISSON \n 7.HOTEL MOON \n 4.THE LEELA\n");
        break;
        default:
           printf("\nThe entered choice of filter is not available. Please reselect your choice.");
           goto  Filteroptions;
    }
    printf("Enter your hotel choice:\n");
    scanf("%d",&hotel_choice);
//Display total price
    switch(hotel_choice)
    {case 1 :
        price_for_one= 6000;
        printf("\t\t*       -----------------------------           *\n");
	    printf("\t\t*          WELCOME TO ROYAL ORCHID              *\n");
	    printf("\t\t*       -----------------------------           *\n");
        total_price= num_guests*price_for_one*nights;
        printf("\nThe total price will be= %d",  total_price);
   		break;
   		case 2 :
   		printf("\t\t*       -----------------------------           *\n");
	    printf("\t\t*         WELCOME TO HYATT REGENCY              *\n");
	    printf("\t\t*       -----------------------------           *\n");
        price_for_one= 7000;
        total_price= num_guests*price_for_one*nights;
        printf("\nThe total price will be= %d",  total_price);
   		break;
   		case 3 :
        printf("\t\t*       -----------------------------           *\n");
	    printf("\t\t*            WELCOME TO TRIDENT                 *\n");
	    printf("\t\t*       -----------------------------           *\n");
        price_for_one= 5800;
        total_price= num_guests*price_for_one*nights;
        printf("\nThe total price  will be= %d",  total_price);
   		break;
   		case 4 :
   		printf("\t\t*       -----------------------------           *\n");
        printf("\t\t*           WELCOME TO THE LEELA                *\n");
	    printf("\t\t*       -----------------------------           *\n");
        price_for_one= 5600;
        total_price= num_guests*price_for_one*nights;
        printf("\nThe total price  will be= %d",  total_price);
   		break;
   		case 5 :
        printf("\t\t*       -----------------------------           *\n");
	    printf("\t\t*            WELCOME TO CONARD                  *\n");
	    printf("\t\t*       -----------------------------           *\n");
        price_for_one= 5900;
        total_price= num_guests*price_for_one*nights;
        printf("\nThe total price will be= %d",  total_price);
   		break;
   		case 6 :
        printf("\t\t*       -----------------------------           *\n");
	    printf("\t\t*           WELCOME TO RADISSON                 *\n");
	    printf("\t\t*       -----------------------------           *\n");
        price_for_one= 5500;
        total_price= num_guests*price_for_one*nights;
        printf("\nThe total price will be= %d", total_price);
   		break;
   		case 7 :
   		printf("\t\t*       -----------------------------           *\n");
	    printf("\t\t*           WELCOME TO HOTEL MOON               *\n");
	    printf("\t\t*       -----------------------------           *\n");
        price_for_one= 5300;
        total_price= num_guests*price_for_one*nights;
        printf("\nThe total price will be= %d",  total_price);
        printf("\n");
   		break;
   		case 8 :
        printf("\t\t*       -----------------------------           *\n");
	    printf("\t\t*        WELCOME TO HOTEL NIGHT QUEEN           *\n");
	    printf("\t\t*       -----------------------------           *\n");
        price_for_one= 6300;
        total_price= num_guests*price_for_one*nights;
        printf("\nThe total price will be= %d", total_price);
        break;
        case 9 :
        printf("\t\t*       -----------------------------           *\n");
	    printf("\t\t*        WELCOME TO HOTEL MAD NIGHT             *\n");
	    printf("\t\t*       -----------------------------           *\n");
        price_for_one= 3300;
        total_price= num_guests*price_for_one*nights;
        printf("\nThe total price will be= %d", total_price);
        break;
        case 10 :
        printf("\t\t*       -----------------------------           *\n");
	    printf("\t\t*         WELCOME TO HOTEL SKY HIGH             *\n");
	    printf("\t\t*       -----------------------------           *\n");
        price_for_one= 3400;
        total_price= num_guests*price_for_one*nights;
        printf("\nThe total price will be= %d", total_price);
        break;
        default:
        printf("\nThe entered choice of hotel is not available. Please reselect your choice.\n");
        goto  HotelOptions;
    }
//extra perks
    printf("\n Do you want extra bed?\n 1.YES \n 2.NO\n");
    scanf("%d",&bed_choice);
    if (bed_choice == 1)
    {printf("Extra bed will be provided.");
    }
    else
    {printf("\nExtra bed will not be provided.\n");
    }
    printf("\nIs this a corporate visit? ");
    printf("Enter your choice : \n1.YES\t2.NO\n");
    int choice1;
    int choice2;
    int roomcount;
    scanf("%d",&choice1);
    if (choice1 == 1)
    {printf("Do you want meeting rooms during your stay?\t 1.YES\t2.NO\n");
        scanf("%d",&choice2);
        if (choice2 ==1)
        {printf("Charge for one meeting room is Rs.2000/hr\n ");
            printf("As per COVID-19 guidelines only 30 people are allowed at a time\n ");
            printf("with proper social distancing\n");
            printf("How many meeting rooms you want during your stay?\n");
            scanf("%d",&roomcount);
            printf("YOU HAVE BOOKED %d MEETING ROOMS SUCCESSFULLY!!",roomcount);
            printf("Bill for meeting rooms will be charged at the time of check out");
        }
        else
        {printf("ITS NOT A CORPORATE VISIT\n");
        }
    }

//Payment
Payment1:
    printf("\nThe total price will be= %d", total_price);
    printf("\n\nThe following payment methods are available:\n1. Debit Card/Credit Card\n2. Net Banking\n3. UPI");
    printf("\nEnter your desired payment method: ");
    scanf("%d", &payment_method);
    int card_number, cvv_number, otp, pin;
    switch(payment_method)
    {
    case 1 :
        printf("\nEnter debit/credit card number: ");
        scanf("%d", &card_number);
        printf("\nEnter the 3-digit CVV number: ");
        scanf("%d", &cvv_number);
        printf("\nAmount to be paid: Rs.%d", total_price);
        printf("\nEnter the OTP sent to you on your registered mobile number: ");
        scanf("%d", &otp);
        printf("\n\nTRANSACTION SUCCESSFUL");
        break;
    case 2:
        printf("\nAmount to be paid: Rs.%d", total_price);
        printf("\nEnter the OTP sent to you on your registered mobile number: ");
        scanf("%d", &otp);
        printf("\n\nTRANSACTION SUCCESSFUL");
        break;
    case 3:
        printf("\nAmount to be paid: Rs.%d", total_price);
        printf("\nEnter your pin: ");
        scanf("%d", &pin);
        printf("\nEnter the OTP sent to you on your registered mobile number: ");
        scanf("%d", &otp);
        printf("\n\nTRANSACTION SUCCESSFUL");
        break;
    default:
        printf("\n \nThe entered choice of payment is not available. Please reselect your choice.");
        goto Payment1;
    }
    printf("\t\n*************************************************************\n");
    printf("THANKS FOR CHOOSING OUR HOTEL BOOKING SERVICES\n");
    printf("\nYOUR SATISFACTION IS OUR RESPONSIBILITY");
    main();
	fclose(fp);
getch();
}

