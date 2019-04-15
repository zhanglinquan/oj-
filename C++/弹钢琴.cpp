/*This is a small piano.这是一个小钢琴哦~*/
#include<stdio.h>
#include<conio.h>    //非缓冲输入
#include<stdlib.h>
#include<Windows.h>
#pragma warning(disable:4996)  //to use getche() in VS needs it
#define TICK 450
#define DOH 523
#define RAY 587
#define MI 659
#define FA  698
#define SOH  784
#define LA   880
#define TEE   980
#define DOHH  1060
#define RAYH  1175
#define MIH   1318
#define FAH  1397
#define SOHH  1568
#define LAH   1760
#define TEEH  1976
 
void welcome(void);
void display(void);
void playmusic1(void);  //play music with color
void playmusic2(void);   //play music without color
void thanks(void);
void choose1(void);    //choose a type
void choose2(void);    //choose a song
void song1(void);
void song2(void);
char a;
int choice,choice2;
 
int main(void)
{
	welcome();
	if (choice == 2)
	{
		printf("Enter numbers to play music:('p' to quit)\n");
		while (1)
		{
			playmusic1();
			if (a == 'p')
				break;
		}
	}
	else
	{
		printf("Please choose the song you want to play:\n"
			"1.Castle In The Sky(天空之城)\n2.星の在り処(星之所在)\n");
		choose2();
	}
	thanks();
	return 0;
}
 
void welcome(void)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	printf("1-DOH  2-RAY   3-MI         数字1到7，字母Q\n"
		"4-FA   5-SOH   6-LA      WERTYU分别对应音阶\n"
		"7-TEE  Q-DOHH  W-RAYH\n"
		"E-MIH  R-FAH   T-SOH\n"
		"Y-LAH  U-TEEH\n");
	display();
	choose1();
}
 
void display(void)
{
	int i;
	for (i = 0; i < 80; i++)
		printf("=");
}
 
void choose1(void)
{
	printf("Choose a game type:\n1.play songs(弹奏模式)\t2.free play(自由模式)\n");
	while ((scanf("%d", &choice)) != 1)
	{
		while (getchar() != '\n');
		printf("Please enter a number ~");
	}
	display();
}
 
void choose2(void)
{
	while ((scanf("%d", &choice2)) != 1)
	{
		while (getchar() != '\n')
			printf("Please enter a number ~");
	}
	display();
	if (choice2 == 1)
		song1();
	else song2();
	printf("Enter numbers to play music:('p' to quit)\n");
	while (1)
	{
		playmusic2();
		if (a == 'p')
			break;
	}
}
 
void playmusic1(void) //发声并设置颜色
{
	a = getch();
	switch (a)
	{
	case '1':Beep(DOH, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30); printf("DOH "); break;
	case '2':Beep(RAY, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 60); printf("RAY "); break;
	case '3':Beep(MI, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 90); printf("MI "); break;
	case '4':Beep(FA, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 120); printf("FA "); break;
	case '5':Beep(SOH, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 150); printf("SOH "); break;
	case '6':Beep(LA, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 180); printf("LA "); break;
	case '7':Beep(TEE, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 210); printf("TEE "); break;
	case 'q':Beep(DOHH, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30); printf("DOHH "); break;
	case 'w':Beep(RAYH, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 60); printf("RAYH "); break;
	case 'e':Beep(MIH, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 90); printf("MIH "); break;
	case 'r':Beep(FAH, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 120); printf("FA "); break;
	case 't':Beep(SOHH, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 150); printf("SOH "); break;
	case 'y':Beep(LAH, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 180); printf("LA "); break;
	case 'u':Beep(TEEH, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 210); printf("TEE "); break;
	case '\n':break;
	default :break;
	}
}
 
void playmusic2(void) //发声
{
	a = getch();
	switch (a)
	{
	case '1':Beep(DOH, TICK);  break;
	case '2':Beep(RAY, TICK); break;
	case '3':Beep(MI, TICK);  break;
	case '4':Beep(FA, TICK);  break;
	case '5':Beep(SOH, TICK);  break;
	case '6':Beep(LA, TICK);  break;
	case '7':Beep(TEE, TICK);  break;
	case 'q':Beep(DOHH, TICK);  break;
	case 'w':Beep(RAYH, TICK);  break;
	case 'e':Beep(MIH, TICK);  break;
	case 'r':Beep(FAH, TICK);  break;
	case 't':Beep(SOHH, TICK);  break;
	case 'y':Beep(LAH, TICK); break;
	case 'u':Beep(TEEH, TICK); break;
	case '\n':break;
	default:break;
	}
}
 
void thanks(void)
{
	putchar('\n');
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	display();
	printf("Thanks for playing~~~\n");
	system("pause");
}
 
void song1(void) //天空之城
{
	printf("67Q7QE7 3656Q5 3434Q3 \n");
}
 
void song2(void) //星之所在
{
	printf("Q7QE7 656Q5 434Q75 67QEW Q7QE75 67QWE REWQ7E\n");
} 
