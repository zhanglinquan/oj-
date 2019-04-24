#include<iostream>
#include<time.h>
#include<stdio.h>
#include<graphics.h>			//图形库
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")		//音频设备接口
#define N 10  //格子数
#define M 50  //图片大小
using namespace std;
IMAGE image[13];		//存放图片
int map[N+2][N+2];			//存放雷  -1 表示雷
int gamemodel;
int win = N*N - 15;
void StartWindow();		//开始界面
void normalModel();     //10雷模式
void BTmodel();			//99雷模式
void DrawGraph();		//画图形
int MouseClick();	    //鼠标点击事件
void loadingPlay(int x,int y);	//运用递归实现点击一大片
void  main() {
	initgraph(N*M, N*M);
	StartWindow();
	if (gamemodel == 0) {
		normalModel();
	}
	else {
		BTmodel();
	}
	closegraph();
}
void StartWindow() {
	mciSendString(L"open ./风动草.mp3 alias bgm",0,0,0);
	mciSendString(L"play bgm repeat", 0, 0, 0);
	loadimage(&image[0], L"./image/blank.jpg",M,M);
	loadimage(&image[1], L"./image/1.jpg", M, M);
	loadimage(&image[2], L"./image/2.jpg", M, M);
	loadimage(&image[3], L"./image/3.jpg", M, M);
	loadimage(&image[4], L"./image/4.jpg", M, M);
	loadimage(&image[5], L"./image/5.jpg", M, M);
	loadimage(&image[6], L"./image/6.jpg", M, M);
	loadimage(&image[7], L"./image/7.jpg", M, M);
	loadimage(&image[8], L"./image/8.jpg", M, M);
	loadimage(&image[9], L"./image/lei.jpg", M, M);
	loadimage(&image[10], L"./image/tag.jpg", M, M);
	loadimage(&image[11], L"./image/start.jpg", N*M, N*M);
	loadimage(&image[12], L"./image/0.jpg", M, M);
	putimage(0, 0, &image[11]);
	MOUSEMSG msg = { 0 };
	setbkmode(TRANSPARENT);		 //设置背景 透明风格
	settextstyle(40, 18, L"楷体");
	while (1) {
		msg = GetMouseMsg();
		if (msg.x > 180 && msg.x < 320 && msg.y >250 && msg.y < 290){
			settextcolor(RGB(255, 0, 0));		//设置字体颜色
			outtextxy(180, 250, L"15雷模式");
		}
		else if (msg.x > 180 && msg.x < 320 && msg.y >330 && msg.y < 370) {
			settextcolor(RGB(255, 0, 0));		//设置字体颜色
			outtextxy(180, 330, L"99雷模式");
		}
		else if (msg.x > 180 && msg.x < 320 && msg.y >410 && msg.y < 450) {
			settextcolor(RGB(255, 0, 0));		//设置字体颜色
			outtextxy(180, 410, L"退出");
		}
		else {
			settextcolor(RGB(0, 0, 0));		//设置字体颜色
			outtextxy(180, 250, L"15雷模式");
			outtextxy(180, 330, L"99雷模式");
			outtextxy(180, 410, L"退出");
		}
		switch (msg.uMsg) {
		case WM_LBUTTONDOWN:
			if (msg.x > 180 && msg.x < 320 && msg.y >250 && msg.y < 290) {
				gamemodel = 0;
				return;
			}
			else if (msg.x > 180 && msg.x < 320 && msg.y >330 && msg.y < 370) {
				gamemodel = 1;
				return;
			}
			else if (msg.x > 180 && msg.x < 320 && msg.y >410 && msg.y < 450) {
				exit(0);
			}
		}
	}
}
void normalModel() {
	while (1) {
		cleardevice();
		win = N*N - 15;
		int type = 0;
		HWND hWnd = GetHWnd();
		int x, y, flag = 0;
		srand((unsigned)time(NULL));
		for(int i = 0; i < N + 2; i++) {
			for(int j = 0; j < N + 2; j++) {
				map[i][j] = 0;
			}
		}
		while (flag < 15) {  //实现埋15颗雷
			x = rand() % 10 + 1;
			y = rand() % 10 + 1;
			if (map[x][y] != -1) {
				map[x][y] = -1;
				flag++;
			}
		}
		for (int i = 1; i <= N; i++) {	//扫描数组10X10显示部分 实现显示周围8个格子中雷的数目
			for (int j = 1; j <= N; j++) {
				if (map[i][j] != -1) {
					for (int m = i - 1; m <= i + 1; m++) {//扫描包含该数字的九个格子
						for (int n = j - 1; n <= j + 1; n++) {
							if (map[m][n] == -1) {
								map[i][j]++;
							}
						}
					}
				}
			}
		}
		while (1) {
			DrawGraph();
			type = MouseClick();
			if (type == -1) {
				DrawGraph();
				if (MessageBox(hWnd, L"按下确定重玩", L"Lose", MB_OK) == IDOK) break;
			}
			if (win == 0) {
				DrawGraph();
				if (MessageBox(hWnd, L"按下确定重玩", L"Win", MB_OK) == IDOK) break;
			}
		}
	}
}
void BTmodel() {
	cleardevice();
	int x, y,type;
	HWND hWnd = GetHWnd();
	srand((unsigned)time(NULL));
	while (1) {
		win = 1;
		for (int i = 0; i < N + 2; i++) {
			for (int j = 0; j < N + 2; j++) {
				map[i][j] = -1;
			}
		}
		x = rand() % 10 + 1;
		y = rand() % 10 + 1;
		map[x][y] = 0;
		for (int i = 1; i <= N; i++) {	//扫描数组10X10显示部分
			for (int j = 1; j <= N; j++) {
				if (map[i][j] != -1) {
					for (int m = i - 1; m <= i + 1; m++) {//扫描包含该数字的九个格子
						for (int n = j - 1; n <= j + 1; n++) {
							if (map[m][n] == -1) {
								map[i][j]++;
							}
						}
					}
				}
			}
		}
		while (1) {
			DrawGraph();
			type = MouseClick();
			if (type == -1) {
				DrawGraph();
				if (MessageBox(hWnd, L"按下确定重玩", L"Lose", MB_OK) == IDOK) break;
			}
			if (win == 0) {
				DrawGraph();
				if (MessageBox(hWnd, L"按下确定重玩", L"Lose", MB_OK) == IDOK) break;
			}
		}
	}
}
void DrawGraph() {
	for (int i = 1; i <= N;i++) {
		for (int j = 1; j <= N; j++) {
			switch (map[i][j])
			{
			case 9:putimage((i - 1)*M, (j - 1)*M, &image[9]); break;
			case 10:putimage((i - 1)*M, (j - 1)*M, &image[0]); break;
			case 11:putimage((i - 1)*M, (j - 1)*M, &image[1]); break;
			case 12:putimage((i - 1)*M, (j - 1)*M, &image[2]); break;
			case 13:putimage((i - 1)*M, (j - 1)*M, &image[3]); break; 
			case 14:putimage((i - 1)*M, (j - 1)*M, &image[4]); break;
			case 15:putimage((i - 1)*M, (j - 1)*M, &image[5]); break;
			case 16:putimage((i - 1)*M, (j - 1)*M, &image[6]); break;
			case 17:putimage((i - 1)*M, (j - 1)*M, &image[7]); break;
			case 18:putimage((i - 1)*M, (j - 1)*M, &image[8]); break;
			case 29:putimage((i - 1)*M, (j - 1)*M, &image[10]); break;
			case 30:putimage((i - 1)*M, (j - 1)*M, &image[10]); break;
			case 31:putimage((i - 1)*M, (j - 1)*M, &image[10]); break;
			case 32:putimage((i - 1)*M, (j - 1)*M, &image[10]); break;
			case 33:putimage((i - 1)*M, (j - 1)*M, &image[10]); break;
			case 34:putimage((i - 1)*M, (j - 1)*M, &image[10]); break;
			case 35:putimage((i - 1)*M, (j - 1)*M, &image[10]); break;
			case 36:putimage((i - 1)*M, (j - 1)*M, &image[10]); break;
			case 37:putimage((i - 1)*M, (j - 1)*M, &image[10]); break;
			case 38:putimage((i - 1)*M, (j - 1)*M, &image[10]); break;
			default:putimage((i - 1)*M, (j - 1)*M, &image[12]); break;
			}
		}
	}
}
int MouseClick() {
	MOUSEMSG msg = {0};
	while (1) {
		msg = GetMouseMsg();
		switch (msg.uMsg)
		{
		case WM_LBUTTONDOWN:
			if (map[msg.x / M + 1][msg.y / M + 1] == 0) {
				loadingPlay(msg.x / M + 1, msg.y / M + 1);
			}
			else if (map[msg.x / M + 1][msg.y / M + 1] <= 8) {
				map[msg.x / M + 1][msg.y / M + 1] += 10;
				win--;
			}
			if (map[msg.x / M + 1][msg.y / M + 1] == 9) {
				return -1;
			}
			break;
		case WM_RBUTTONDOWN:
			if (map[msg.x / M + 1][msg.y / M + 1] <= 8) {
				map[msg.x / M + 1][msg.y / M + 1] += 30;
			}
			else if (map[msg.x / M + 1][msg.y / M + 1] >= 29) {
				map[msg.x / M + 1][msg.y / M + 1] -= 30;
			}
			break;
		}
		return 0;
	}
}
void loadingPlay(int x, int y) {
	map[x][y] += 10;
	win--;
	for (int i = x - 1; i <= x + 1; i++) {
		for (int j = y - 1; j <= y + 1; j++) {
			if (i <= 0 || i >= 11 || j <= 0 || j >= 11)  continue; //防止越界
			if (map[i][j] <= 8) {
				if (map[i][j] == 0) {
					loadingPlay(i, j);
				}
				else if(map[i][j]!=-1) {
					map[i][j] += 10;
					win--;
				}
			}
		}
	}
}

