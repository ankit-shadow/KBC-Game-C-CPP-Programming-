#include<stdio.h>
#include<iostream.h>
#include<dos.h>
#include<conio.h>
#include<string.h>
void main()
{
char S[15];
clrscr();
int j,i,q1,q2,q3,q4,q5,h1,h2,h3,h4,h5;
for(i=1;i<=40;i++)
{
textcolor(i);
cprintf("**");
delay(50);
}
for(i=1;i<=22;i++)
{
textcolor(i);
gotoxy(80,i);
cprintf("*");
delay(50);
}
for(i=80;i>=1;i--)
{
textcolor(i);
gotoxy(i,22);
cprintf("**");
delay(50);
}
for(i=22;i>=1;i--)
{
textcolor(i);
gotoxy(1,i);
cprintf("*");
delay(50);
}
for(i=1;i<=3;i++)
{
textcolor(i);
gotoxy(10,4+i);
cprintf("*");
gotoxy(17,7+i);
cprintf("*");
delay(50);
}
for(i=1;i<=6;i++)
{
textcolor(i);
gotoxy(10+i,4);
cprintf("*");
gotoxy(10+i,8);
cprintf("*");
gotoxy(10+i,11);
cprintf("*");
gotoxy(35+i,8);
cprintf("*");
gotoxy(55+i,4);
cprintf("*");
gotoxy(55+i,11);
cprintf("*");
delay(20);
}
for(i=1;i<=6;i++)
{
textcolor(i);
gotoxy(55,4+i);
cprintf("*");
delay(30);
}
for(i=1;i<=15;i++)
{
textcolor(i);
gotoxy(25,15);
cprintf("SUPER                 CHALLANGE");
textcolor(16-i);
gotoxy(20,17);
cprintf("Programm Made By : M R. Hacker AnKiT");
delay(300);
}
{
printf("\n\tPLEASE ENTER YOUR NAME:");
scanf("%s",&S);
}
cout<<"\tHello   "<<S;
cout<<"\n\tHave pleasure to meet u."<<"\tHope You Will Enjoy This Game"<<"\n\tEnter Any No. to NEXT:_";
cin>>j;
clrscr();
for(i=1;i<=40;i++)
{
textcolor(i);
gotoxy(i,13);
cprintf("HI ! Welcome To My Game SUPER CHALLAnGE");
gotoxy(i,15);
cprintf("HACKER ANKIT GUPTA");
delay(100);
if(i>40)
i=1;
clrscr();
}
for(i=1;i<=14;i++)
{
textcolor(i);
gotoxy(30,13);
cprintf("HI ! Welcome To My Game SUPER CHALLAnGE");
gotoxy(30,15);
cprintf("HACKER ANKIT GUPTA");
delay(400);
}
clrscr();
//Itroduction Of the Game
cout<<"HI, "<<S<<"   you are most welcome to my Game";
textcolor(5);
cout<<"SUPER CHALLANGE\n";
for(i=1;i<=80;i++)
{
textcolor(3+i);
cprintf("+");
delay(50);
}
cout<<"\nINTRODUCTION AND RULES:\n\n";
cout<<"@. In full game u must use only No. key and Enter.\n"<<"@. This is related with Computer Science\n";
cout<<"If u have good knowledge then u may clear this challange.\n";
cout<<"Other wise NEVER\n";
cout<<"But you have a good chance to learn somthing different by this game.\n";
cout<<"Plz, don't press any key without guidence.\n";
cout<<"In this Game if u gives correct answere then you may go to next.\n";
cout<<"If you gives wrong answere of wrong keywords u may lose your game n will be quite from the game.\n";
textcolor(15);
cout<<"\nThank you! Wishing u good luck!\n";
cout<<"Press a no. to Start the Game:___";
cin>>j;
clrscr();
//Begining Of the Game
cout<<"Press 5 for Audience Vote !\n";
cout<<"Press 6 for 50-50 !\n\n";
{
textcolor(4);
gotoxy(1,3);
cprintf(" Q 1. What is the command for shutdown in CMD(Command Prompt)?");
}
cout<<"\n\n1. Shutdown\t\t\t"<<"2. Power Off\n\n"<<"3. Shutdown -s\t\t\t"<<"4. Log off\n\n";
cout<<"Enter your Ans(1-4):";
cin>>q1;
cout<<"\n\nResult : ";
switch(q1)
{
case 1: cout<<"Wrong Ans\n";
	cin>>h1;
	switch(h1)
	{
	case 1: cout<<" Played Not Well YOu Have To Learn";
	return;
	break
	;
	default: return; break;
	}
break;
case 2: cout<<"OH shit !\n";
	cin>>h1;
	switch(h1)
	{
	case 1: cout<<" Played Not Well YOu Have To Learn";
	return;
	break;
	default: return; break;
	}
break;
case 3: cout<<"Wow! hurrey, you are right yaar!\n";
break;
case 4: cout<<"Sorry Boss plz learn Somthing\n";
	cin>>h1;
	switch(h1)
	{
	case 1: cout<<"\n\n Played Not Well YOu Have To Learn";
	return;
	break;
	default: return; break;
	}
break;
case 5: cout<<" Ans 1=15%    Ans 2=20%    Ans 3=60%    Ans 4=5%";
	cin>>h1;
	switch(h1)
	{
	case 1: cout<<"Wrong\n"; return; break;
	case 2: cout<<"Wrong\n"; return; break;
	case 3: cout<<"! You are Right !\n"; break;
	case 4: cout<<"Wrong Sir !\n"; return; break;
	default : cout<<"error\n"; return; break;
	}
break;
case 6: cout<<"3. shutdown -s\t\t\t"<<"4. Log off\n";
	cout<<"Enter Your Ans:";
	cin>>h1;
	switch(h1)
	{
	case 3: cout<<"Right Ans\n";
	break;
	case 4: cout<<"Wrong ans\n";
	return;
	break;
	default : cout<<"error";
	return;
	break;
	}
	break;
default : cout<<"Plz Enter A Valid Answere\n";
return;
break;
}
cout<<"\nPress Any No. to go ahead:";
cin>>j;
clrscr();
cout<<"Press 5 for Audience Vote !\n";
cout<<"Press 6 for 50-50 !\n\n";
{
textcolor(2);
gotoxy(1,3);
cprintf("Q2. Who is the best Hacker at this time in the world?");
}
cout<<"\n\n1. Julien Assange\t\t\t"<<"2. Ramalingan Raju\n\n"<<"3. Chris Martin\t\t\t"<<"Ian Murphy\n\n";
cout<<"Enter your Ans(1-4):";
cin>>q2;
cout<<"\n\nResult : ";
switch(q2)
{
case 1: cout<<"You Are A Awsome guy, You Have Good Knowledge\n";
break;
case 2: cout<<"OH shit !\n";
	cin>>h2;
	switch(h2)
	{
	case 1: cout<<"\n Played Not Well YOu Have To Learn";
	return;
	break;
	default: return; break;
	}
break;
case 3: cout<<"Busted!\n";
	cin>>h2;
	switch(h2)
	{
	case 1: cout<<" Played Not Well YOu Have To Learn";
	return;
	break;
	default: return; break;
	}
break;
case 4: cout<<"Sorry Boss plz learn Somthing\n";
	cin>>h2;
	switch(h2)
	{
	case 1: cout<<" Played Not Well YOu Have To Learn";
	return;
	break;
	default: return; break;
	}
break;
case 5: cout<<" Ans 1=70%    Ans 2=5%    Ans 3=4%    Ans 4=21%";
	cin>>h2;
	switch(h2)
	{
	case 1: cout<<"Superb Ans"; break;
	case 2: cout<<"Too Wrong\n"; return; break;
	case 3: cout<<"Wrong Ans !\n"; return; break;
	case 4: cout<<"Wrong Sir !\n"; return; break;
	default : cout<<"error\n"; return; break;
	}
break;
case 6: cout<<"1. Julien Assange\t\t\t"<<"4. Ian Murphy\n";
	cout<<"Enter Your Ans(1-2):";
	cin>>h2;
	switch(h2)
	{
	case 1: cout<<"Right Ans\n";
	break;
	case 4: cout<<"Wrong ans\n";
	return;
	break;
	default : cout<<"error";
	break;
	}
	break;
default : cout<<"Plz Enter A Valid Answere\n";
break;
}
cout<<"\nPress Any No. to go ahead:";
cin>>j;
clrscr();
cout<<"Press 5 for Audience Vote !\n";
cout<<"Press 6 for 50-50 !\n\n";
{
textcolor(9);
gotoxy(1,3);
cprintf("Q3. Due to which the programming Lang. is named as JAVA?");
}
cout<<"\n\n1. Tea Flavour\t\t\t"<<"2. Coffee Flavour\n\n"<<"3. Greek Word\t\t\t"<<"4. Oracle\n\n";
cout<<"Enter you Ans(1-4):";
cin>>q3;
cout<<"\n\nResult : ";
switch(q3)
{
case 1: cout<<"OH shit !\n";
	cin>>h3;
	switch(h3)
	{
	case 1: cout<<"\n Played Not Well YOu Have To Learn";
	return;
	break;
	default: return; break;
	}
break;
case 2: cout<<"You Are A Awsome guy, You Have Good Knowledge\n";
break;
case 3: cout<<"Busted!\n";
	cin>>h3;
	switch(h3)
	{
	case 1: cout<<" Played Not Well YOu Have To Learn";
	return;
	break;
	default: return; break;
	}
break;
case 4: cout<<"Sorry Boss plz learn Somthing\n";
	cin>>h3;
	switch(h3)
	{
	case 1: cout<<" Played Not Well YOu Have To Learn";
	return;
	break;
	default: return; break;
	}
break;
case 5: cout<<" Ans 1=2%    Ans 2=80%    Ans 3=3%    Ans 4=10%";
	cin>>h3;
	switch(h3)
	{
	case 1: cout<<"Wrong\n"; return; break;
	case 2: cout<<"! You are Right !\n"; break;
	case 3: cout<<"Wrong\n"; return; break;
	case 4: cout<<"Wrong Sir !\n"; return; break;
	default : cout<<"error\n"; return; break;
	}
break;
case 6: cout<<"1. Tea Flavour\t\t\t"<<"2. Coffee Flavour\n\n";
	cout<<"Enter Your Ans:";
	cin>>h3;
	switch(h3)
	{
	case 1: cout<<"Wrong Ans Go get Some knowledge\n";
	return;
	break;
	case 2: cout<<"Right Ans\n";
	break;
	default : cout<<"error";
	return;
	break;
	}
	break;
default : cout<<"Plz Enter A Valid Answere\n";
return;
break;
}
cout<<"\nPress Any No. to go ahead:";
cin>>j;
clrscr();
cout<<"Press 5 for Audience Vote !\n";
cout<<"Press 6 for 50-50 !\n\n";
{
textcolor(1);
gotoxy(1,3);
cprintf("Q4. What is the full form of W3C ?");
}
cout<<"\n\n1. World Wide Web Comittee\t\t\t"<<"2. www.com\n\n"<<"3. Window Wing for Web Company\t\t\t"<<"\4. Wordl Wide Web Consortium\n\n";
cout<<"Enter Your Answere:";
cin>>q4;
cout<<"\n\nResult : ";
switch(q4)
{
case 1: cout<<"OH shit !\n";
	cin>>h4;
	switch(h4)
	{
	case 1: cout<<"\n Played Not Well YOu Have To Learn";
	return;
	break;
	default: return; break;
	}
break;
case 2:  cout<<"Sorry Boss plz learn Somthing\n";
	cin>>h4;
	switch(h4)
	{
	case 1: cout<<" Played Not Well YOu Have To Learn";
	return;
	break;
	default: return; break;
	}
break;
case 3: cout<<"Busted!\n";
	cin>>h4;
	switch(h4)
	{
	case 1: cout<<" Played Not Well YOu Have To Learn";
	return;
	break;
	default: return; break;
	}
break;
case 4: cout<<"You Are A Awsome guy, You Have Good Knowledge\n";
break;
case 5: cout<<" Ans 1=10%    Ans 2=10%    Ans 3=30%    Ans 4=50%";
	cin>>h4;
	switch(h4)
	{
	case 1: cout<<"Wrong\n"; break;
	case 2: cout<<"Wrong\n"; break;
	case 3: cout<<"Wrong Sir !\n"; break;
	case 4:cout<<"! You are Right !\n"; break;
	default : cout<<"error\n"; break;
	}
break;
case 6: cout<<"1.Word Wide Web Committee\t\t\t"<<"4. World Wide Web Consortium\n";
	cout<<"Enter Your Ans:";
	cin>>h4;
	switch(h4)
	{
	case 1: cout<<"Wrong Ans\n";
	return;
	break;
	case 4: cout<<"Correct Ans\n";
	break;
	default : cout<<"error";
	return;
	break;
	}
	break;
default : cout<<"Plz Enter A Valid Answere\n";
return;
break;
}
cout<<"\nEnter Any no. to go ahead:";
cin>>j;
clrscr();
cout<<"Press 5 for Audience Vote !\n";
cout<<"Press 6 for 50-50 !\n\n";
{
textcolor(3);
gotoxy(1,3);
cprintf("Q5. Where is the use of DTD?");
}
cout<<"\n\n1. XML\t\t\t"<<"2. Java\n\n"<<"3. HTML\t\t\t"<<"\4. C++\n\n";
cout<<"Enter Your Answere:";
cin>>q5;
cout<<"\n\nResult : ";
switch(q5)
{
case 1: cout<<"You Are A Awsome guy, You Have Good Knowledge\n";
break;
case 2: cout<<"OH shit !\n";
	cin>>h5;
	switch(h5)
	{
	case 1: cout<<"\n Played Not Well YOu Have To Learn";
	return;
	break;
	default: return; break;
	}
break;
case 3: cout<<"Busted!\n";
	cin>>h5;
	switch(h5)
	{
	case 1: cout<<" Played Not Well YOu Have To Learn";
	return;
	break;
	default: return; break;
	}
break;
case 4: cout<<"Sorry Boss plz learn Somthing\n";
	cin>>h5;
	switch(h5)
	{
	case 1: cout<<" Played Not Well YOu Have To Learn";
	return;
	break;
	default: return; break;
	}
break;
case 5: cout<<" Ans 1=70%    Ans 2=5%    Ans 3=4%    Ans 4=21%";
	cin>>h2;
	switch(h2)
	{
	case 1: cout<<"Superb Ans"; break;
	case 2: cout<<"Too Wrong\n"; return; break;
	case 3: cout<<"Wrong Ans !\n"; return; break;
	case 4: cout<<"Wrong Sir !\n"; return; break;
	default : cout<<"error\n"; return; break;
	}
break;
case 6: cout<<"1. XML\t\t\t"<<"4. HTML\n";
	cout<<"Enter Your Ans(1-2):";
	cin>>h5;
	switch(h5)
	{
	case 1: cout<<"Right Ans\n";
	break;
	case 3: cout<<"Wrong ans\n";
	return;
	break;
	default : cout<<"error";
	break;
	}
	break;
default : cout<<"Plz Enter A Valid Answere\n";
break;
}
{
textcolor(4);
cprintf("%s",S);
}
for(i=1;i<=15;i++)
{
gotoxy(2,15);
textcolor(i);
cprintf("YOU HAVE WON !");
delay(600);
}
cout<<"\nEnter Any No. To Turn Off  The Game";
cin>>j;
return;
getch();
}