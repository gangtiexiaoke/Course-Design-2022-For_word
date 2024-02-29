#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include"Menu.h"
#include"UI.h"
#include"SeqenceList.h"
void About(void) {
	cleardevice();
	solidrectangle(500, 0, 640, 480);
	settextstyle(30,0, "专业字体设计服务/WWW.ZTSGC.COM/");
	outtextxy(60, 120, "For Word是一款帮助你记忆单词的软");
	outtextxy(30, 160, "件,使用C+EasyX开发,包含CET.4及CET.6的");
	outtextxy(30, 200, "词库,该软件目前依然在开发中,未来将会");
	outtextxy(30, 240, "加入更多功能和词库。(可能)");
	outtextxy(60, 280, " 感谢你的试用，使用时如发现问题或");
	outtextxy(30, 320, "有建议请联系QQ：3269334759。");
	outtextxy(80, 40, "About The Software");
	settextstyle(40,0,"Astron Boy Wonder");
	outtextxy(200, 400, " by smile_zyk");
	common(548, 420, 25, "返回", 120, 120, 120);
	MOUSEMSG n;
	while (1) {
		n = GetMouseMsg();
		if (n.x >= 520 && n.x <= 615 && n.y >= 420 && n.y <= 445)
		{
			contact(548, 420, 25, "返回", 60, 60, 60,150,205,205);
			if (n.uMsg == WM_LBUTTONUP) {
				menu(1);
				break;
			}
		}
		else
		{
			depart(548, 420, 25, "返回", 120, 120, 120,150,205,205);
			setlinecolor(RGB(150, 205, 205));
			line(505, 433, 520, 433);
			line(615, 433, 630, 433);
		}
	}
}

void Recite(void)
{
	cleardevice();
	setfillcolor(RGB(150, 205, 205));
	solidrectangle(500, 0, 640, 480);
	settextstyle(50, 0, _T("A Scratch"));
	settextcolor(RGB(150, 150, 150));
	outtextxy(60, 30, "JUST DO IT");
	common(548, 420, 25, "返回", 120, 120, 120);
	common(90, 130, 40, "CET.4", 190, 190, 190);
	common(90, 200, 40, "CET.6", 190, 190, 190);
	MOUSEMSG q;
	while (1) {
		q = GetMouseMsg();
		if ((q.x >= 60 && q.x <= 220) && (q.y >= 130 && q.y <= 170))
		{
			contact(90, 130, 40, "CET.4", 100, 100, 100, 255, 255, 255);
			if (q.uMsg == WM_LBUTTONUP) {
			    Interface("四级.txt","单词状态4.txt");
			}
		}
		else if ((q.x >= 60 && q.x <= 220) && (q.y >= 200 && q.y <= 240))
		{
			contact(90, 200, 40, "CET.6", 100, 100, 100, 255, 255, 255);
			if (q.uMsg == WM_LBUTTONUP) {
				Interface("六级.txt","单词状态6.txt");
			}
		}
		else if (q.x >= 520 && q.x <= 615 && q.y >= 420 && q.y <= 445)
		{
			contact(548, 420, 25, "返回", 60, 60, 60, 150, 205, 205);
			if (q.uMsg == WM_LBUTTONUP) {
				menu(0);
				break;
			}
		}
		else
		{
			settextstyle(50, 0, _T("A Scratch"));
			settextcolor(RGB(150, 150, 150));
			outtextxy(60, 30, "JUST DO IT");
			settextstyle(40, 0, "张海山草泥马体");
			depart(90, 130, 40, "CET.4", 190, 190, 190, 255, 255, 255);
			depart(90, 200, 40, "CET.6", 190, 190, 190, 255, 255, 255);
			depart(548, 420, 25, "返回", 120, 120, 120, 150, 205, 205);
		}
	}
}

void Review(void)
{
	cleardevice();
	setfillcolor(RGB(150, 205, 205));
	solidrectangle(500, 0, 640, 480);
	settextstyle(60, 0, _T("A Scratch"));
	settextcolor(RGB(150, 150, 150));
	outtextxy(100, 30, "REVIEW");
	common(548, 420, 25, "返回", 120, 120, 120);
	common(60, 380, 25, "重置四级单词状态", 190, 190, 190);
	common(60, 420, 25, "重置六级单词状态", 190, 190, 190);
	common(90, 130, 40, "复习", 190, 190, 190);
	common(90, 200, 40, "默写", 190, 190, 190);
	MOUSEMSG g;
	while (1) {
		g = GetMouseMsg();
		if ((g.x >= 60 && g.x <= 220) && (g.y >= 130 && g.y <= 170))
		{
			contact(90, 130, 40, "复习", 100, 100, 100, 255, 255, 255);
			if (g.uMsg == WM_LBUTTONUP) {
				cleardevice();
				setfillcolor(RGB(150, 205, 205));
				solidrectangle(500, 0, 640, 480);
				settextstyle(60, 0, _T("A Scratch"));
				settextcolor(RGB(150, 150, 150));
				outtextxy(120, 30, "Go Over");
				common(548, 420, 25, "返回", 120, 120, 120);
				common(90, 130, 40, "CET.4", 190, 190, 190);
				common(90, 200, 40, "CET.6", 190, 190, 190);
				MOUSEMSG q;
				while (1) {
					q = GetMouseMsg();
					if ((q.x >= 60 && q.x <= 220) && (q.y >= 130 && q.y <= 170))
					{
						contact(90, 130, 40, "CET.4", 100, 100, 100, 255, 255, 255);
						if (q.uMsg == WM_LBUTTONUP) {
							Rinterface("四级.txt", "单词状态4.txt");
						}
					}
					else if ((q.x >= 60 && q.x <= 220) && (q.y >= 200 && q.y <= 240))
					{
						contact(90, 200, 40, "CET.6", 100, 100, 100, 255, 255, 255);
						if (q.uMsg == WM_LBUTTONUP) {
							Rinterface("六级.txt", "单词状态6.txt");
						}
					}
					else if (q.x >= 520 && q.x <= 615 && q.y >= 420 && q.y <= 445)
					{
						contact(548, 420, 25, "返回", 60, 60, 60, 150, 205, 205);
						if (q.uMsg == WM_LBUTTONUP) {
							cleardevice();
							setfillcolor(RGB(150, 205, 205));
							solidrectangle(500, 0, 640, 480);
							settextstyle(60, 0, _T("A Scratch"));
							settextcolor(RGB(150, 150, 150));
							outtextxy(100, 30, "REVIEW");
							common(548, 420, 25, "返回", 120, 120, 120);
							common(90, 130, 40, "复习", 190, 190, 190);
							common(90, 200, 40, "默写", 190, 190, 190);
							common(60, 380, 25, "重置四级单词状态", 190, 190, 190);
							common(60, 420, 25, "重置六级单词状态", 190, 190, 190);
							break;
						}
					}
					else
					{
						settextstyle(60, 0, _T("A Scratch"));
						settextcolor(RGB(150, 150, 150));
						outtextxy(120, 30, "Go Over");
						settextstyle(40, 0, "张海山草泥马体");
						depart(90, 130, 40, "CET.4", 190, 190, 190, 255, 255, 255);
						depart(90, 200, 40, "CET.6", 190, 190, 190, 255, 255, 255);
						depart(548, 420, 25, "返回", 120, 120, 120, 150, 205, 205);
					}
				}
			}
		}
		else if ((g.x >= 60 && g.x <= 220) && (g.y >= 200 && g.y <= 240))
		{
			contact(90, 200, 40, "默写", 100, 100, 100, 255, 255, 255);
			if (g.uMsg == WM_LBUTTONUP) {
				cleardevice();
				setfillcolor(RGB(150, 205, 205));
				solidrectangle(500, 0, 640, 480);
				settextstyle(60, 0, _T("A Scratch"));
				settextcolor(RGB(150, 150, 150));
				outtextxy(120, 30, "Dictation");
				common(548, 420, 25, "返回", 120, 120, 120);
				common(90, 130, 40, "CET.4", 190, 190, 190);
				common(90, 200, 40, "CET.6", 190, 190, 190);
				MOUSEMSG q;
				while (1) {
					q = GetMouseMsg();
					if ((q.x >= 60 && q.x <= 220) && (q.y >= 130 && q.y <= 170))
					{
						contact(90, 130, 40, "CET.4", 100, 100, 100, 255, 255, 255);
						if (q.uMsg == WM_LBUTTONUP) {
							dictation("四级.txt", "单词状态4.txt");
						}
					}
					else if ((q.x >= 60 && q.x <= 220) && (q.y >= 200 && q.y <= 240))
					{
						contact(90, 200, 40, "CET.6", 100, 100, 100, 255, 255, 255);
						if (q.uMsg == WM_LBUTTONUP) {
							dictation("六级.txt", "单词状态6.txt");
						}
					}
					else if (q.x >= 520 && q.x <= 615 && q.y >= 420 && q.y <= 445)
					{
						contact(548, 420, 25, "返回", 60, 60, 60, 150, 205, 205);
						if (q.uMsg == WM_LBUTTONUP) {
							cleardevice();
							setfillcolor(RGB(150, 205, 205));
							solidrectangle(500, 0, 640, 480);
							settextstyle(60, 0, _T("A Scratch"));
							settextcolor(RGB(150, 150, 150));
							outtextxy(100, 30, "REVIEW");
							common(548, 420, 25, "返回", 120, 120, 120);
							common(90, 130, 40, "复习", 190, 190, 190);
							common(90, 200, 40, "默写", 190, 190, 190);
							common(60, 380, 25, "重置四级单词状态", 190, 190, 190);
							common(60, 420, 25, "重置六级单词状态", 190, 190, 190);
							break;
						}
					}
					else
					{
						settextstyle(60, 0, _T("A Scratch"));
						settextcolor(RGB(150, 150, 150));
						outtextxy(120, 30, "Dictation");
						settextstyle(40, 0, "张海山草泥马体");
						depart(90, 130, 40, "CET.4", 190, 190, 190, 255, 255, 255);
						depart(90, 200, 40, "CET.6", 190, 190, 190, 255, 255, 255);
						depart(548, 420, 25, "返回", 120, 120, 120, 150, 205, 205);
					}
				}
			}
		}
		else if ((g.x >= 40 && g.x <= 280) && (g.y >= 380 && g.y <= 405))
		{
			contact(60, 380, 25, "重置四级单词状态", 100, 100, 100, 255, 255, 255);
			if (g.uMsg == WM_LBUTTONUP) {
				Reset("单词状态4.txt");
				Cback();
			}
		}
		else if ((g.x >= 40 && g.x <= 280) && (g.y >= 420 && g.y <= 445))
		{
			contact(60, 420, 25, "重置六级单词状态", 100, 100, 100, 255, 255, 255);
			if (g.uMsg == WM_LBUTTONUP) {
				Reset("单词状态6.txt");
				Cback();
			}
		}
		else if (g.x >= 520 && g.x <= 615 && g.y >= 420 && g.y <= 445)
		{
			contact(548, 420, 25, "返回", 60, 60, 60, 150, 205, 205);
			if (g.uMsg == WM_LBUTTONUP) {
				menu(0);
				break;
			}
		}
		else
		{
			settextstyle(60, 0, _T("A Scratch"));
			settextcolor(RGB(150, 150, 150));
			outtextxy(100, 30, "REVIEW");
			settextstyle(40, 0, "张海山草泥马体");
			depart(90, 130, 40, "复习", 190, 190, 190, 255, 255, 255);
			depart(90, 200, 40, "默写", 190, 190, 190, 255, 255, 255);
			depart(60, 380, 25, "重置四级单词状态", 190, 190, 190,255,255,255);
			depart(60, 420, 25, "重置六级单词状态", 190, 190, 190,255,255,255);
			depart(548, 420, 25, "返回", 120, 120, 120, 150, 205, 205);
		}
	}
}

void WordList(void)
{	
	int i = 0;
	int s = 0;
	int flag = 0;
	int searchflag = 0;
	int rankflag = 0;
	int m = 0;
	char c[26];
	int width = 0;
	NWord L = (NWord)malloc(sizeof(struct sqlist));
	CreateWordList("四级.txt", "单词状态4.txt", L);
	cleardevice();
	bool a[8] = { 0 };
	setfillcolor(RGB(150, 205, 205));
	solidrectangle(500, 0, 640, 480);
	common(542, 50, 20, "CET.4", 120, 120, 120);
	common(542, 100, 20, "CET.6", 120, 120, 120);
	setfillcolor(RGB(187, 255, 255));
	solidrectangle(0, 0, 499, 60);
	solidrectangle(0, 105, 499, 150);
	solidrectangle(0, 195, 499, 240);
	solidrectangle(0, 285, 499, 330);
	solidrectangle(0, 375, 499, 420);
	MOUSEMSG g;
	setfillcolor(WHITE);
	solidrectangle(80, 10, 349, 50);
	setfillcolor(RGB(142, 229, 238));
	solidrectangle(350, 10, 420, 50);
	settextstyle(20, 0, _T("专业字体设计服务/WWW.ZTSGC.COM/"));
	settextcolor(RGB(120, 120, 120));
	outtextxy(360, 20, "search");
	settextstyle(30, 0, _T("专业字体设计服务/WWW.ZTSGC.COM/"));
	outtextxy(40, 65 + (i % 8) * 45, PlaceForWord(i + 1, L)->english);
	outtextxy(40, 65 + ((i + 1) % 8) * 45, PlaceForWord(i + 2, L)->english);
	outtextxy(40, 65 + ((i + 2) % 8) * 45, PlaceForWord(i + 3, L)->english);
	outtextxy(40, 65 + ((i + 3) % 8) * 45, PlaceForWord(i + 4, L)->english);
	outtextxy(40, 65 + ((i + 4) % 8) * 45, PlaceForWord(i + 5, L)->english);
	outtextxy(40, 65 + ((i + 5) % 8) * 45, PlaceForWord(i + 6, L)->english);
	outtextxy(40, 65 + ((i + 6) % 8) * 45, PlaceForWord(i + 7, L)->english);
	outtextxy(40, 65 + ((i + 7) % 8) * 45, PlaceForWord(i + 8, L)->english);
	if (!rankflag) {
		if (i + 1 <= 4615)
		{
			common(400, 70 + (i % 8) * 45, 25, "详情", 120, 120, 120);
			a[0] = 0;
		}
		else a[0] = 1;
		if (i + 2 <= 4615)
		{
			common(400, 70 + ((i + 1) % 8) * 45, 25, "详情", 120, 120, 120);
			a[1] = 0;
		}
		else a[1] = 1;
		if (i + 3 <= 4615)
		{
			common(400, 70 + ((i + 2) % 8) * 45, 25, "详情", 120, 120, 120);
			a[2] = 0;
		}
		else a[2] = 1;
		if (i + 4 <= 4615)
		{
			common(400, 70 + ((i + 3) % 8) * 45, 25, "详情", 120, 120, 120);
			a[3] = 0;
		}
		else a[3] = 1;
		if (i + 5 <= 4615)
		{
			common(400, 70 + ((i + 4) % 8) * 45, 25, "详情", 120, 120, 120);
			a[4] = 0;
		}
		else a[4] = 1;
		if (i + 6 <= 4615) {
			common(400, 70 + ((i + 5) % 8) * 45, 25, "详情", 120, 120, 120);
			a[5] = 0;
		}
		else a[5] = 1;
		if (i + 7 <= 4615) {
			common(400, 70 + ((i + 6) % 8) * 45, 25, "详情", 120, 120, 120);
			a[6] = 0;
		}
		else a[6] = 1;
		if (i + 8 <= 4615) {
			common(400, 70 + ((i + 7) % 8) * 45, 25, "详情", 120, 120, 120);
			a[7] = 0;
		}
		else a[7] = 1;
	}
	else {
		if (i + 1 <= 2089) {
			common(400, 70 + (i % 8) * 45, 25, "详情", 120, 120, 120);
			a[0] = 0;
		}
		else a[0] = 1;
		if (i + 2 <= 2089) {
			common(400, 70 + ((i + 1) % 8) * 45, 25, "详情", 120, 120, 120);
			a[1] = 0;
		}
		else a[1] = 1;
		if (i + 3 <= 2089) {
			common(400, 70 + ((i + 2) % 8) * 45, 25, "详情", 120, 120, 120);
			a[2] = 0;
		}
		else a[2] = 1;
		if (i + 4 <= 2089) {
			common(400, 70 + ((i + 3) % 8) * 45, 25, "详情", 120, 120, 120);
			a[3] = 0;
		}
		else a[3] = 1;
		if (i + 5 <= 2089) {
			common(400, 70 + ((i + 4) % 8) * 45, 25, "详情", 120, 120, 120);
			a[4] = 0;
		}
		else a[4] = 1;
		if (i + 6 <= 2089) {
			common(400, 70 + ((i + 5) % 8) * 45, 25, "详情", 120, 120, 120);
			a[5] = 0;
		}
		else a[5] = 1;
		if (i + 7 <= 2089) {
			common(400, 70 + ((i + 6) % 8) * 45, 25, "详情", 120, 120, 120);
			a[6] = 0;
		}
		else a[6] = 1;
		if (i + 8 <= 2089) {
			common(400, 70 + ((i + 7) % 8) * 45, 25, "详情", 120, 120, 120);
			a[7] = 0;
		}
		else a[7] = 1;
	}
	common(548, 420, 25, "返回", 120, 120, 120);
	common(548, 300, 25, "跳转", 120, 120, 120);
	depart(50, 440, 25, "上一页", 190, 190, 190, 255, 255, 255);
	depart(370, 440, 25, "下一页", 190, 190, 190, 255, 255, 255);
	settextstyle(25, 0, _T("专业字体设计服务/WWW.ZTSGC.COM/"));
	settextcolor(RGB(60, 60, 60));
	outtextxy(195, 440, "第         页");
	outtextxy(230, 440, (i / 8 + 1) / 100 % 10 + '0');
	outtextxy(240, 440, (i / 8 + 1) / 10 % 10 + '0');
	outtextxy(250, 440, (i / 8 + 1) % 10 + '0');
	int k;
	while (1) {
		if (_kbhit()) {
			k = _getch();
			if (0 == k || 0xE0 == k) k = k << 8 | _getch();
		}
		else break;
	}
	while (1)
	{
		if (searchflag) {	
			if ( s<= 25) 
			{
				settextstyle(20, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
				settextcolor(RGB(100, 100, 100));
				outtextxy(90 + width, 20, '_');
			}
			while (_kbhit())
			{
				c[s] = _getch();
				if ((s >= 25 && c[s] != 8)||110+width>=349&& c[s] != 8)
					break;
				if (c[s] >= 'a'&&c[s] <= 'z' || c[s] >= 'A'&&c[s] <= 'Z') {
					settextstyle(20, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
					settextcolor(WHITE);
					outtextxy(90 + width, 20, '_');
					settextcolor(RGB(100, 100, 100));
					outtextxy(90 + width, 20, c[s]);
					width += textwidth(c[s]);
					s++;
				}
				else if (c[s] == 8) {
					if (s == 0)
						break;
					settextstyle(20, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
					settextcolor(WHITE);
					outtextxy(90 + width, 20, '_');
					s--;
					width -= textwidth(c[s]);
					settextcolor(WHITE);
					outtextxy(90 + width, 20, c[s]);
				}
				else if (c[s] == 13)
				{
					c[s] = '\0';
					int k = 1;
					while (strcmp(PlaceForWord(k++, L)->english, c) < 0);
					i = ((k - 2) / 8)*8;
					BeginBatchDraw();
					cleardevice();
					Winterface(i, L);
					settextstyle(20, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
					outtextxy(90, 20, c);
					EndBatchDraw();
				}
			}
		}
		if (MouseHit())
		{
			g = GetMouseMsg();
			if (g.x >= 530 && g.x <= 620 && g.y >= 420 && g.y <= 445)
			{
				contact(548, 420, 25, "返回", 60, 60, 60, 150, 205, 205);
				if (g.uMsg == WM_LBUTTONUP)
				{
					menu(0);
					break;
				}
			}
			else if (g.x >= 530 && g.x <= 620 && g.y >= 300 && g.y <= 325)
			{
				contact(548, 300, 25, "跳转", 60, 60, 60, 150, 205, 205);
				if (g.uMsg == WM_LBUTTONUP)
				{
					int temp = i;
					char k[5];
					if (InputBox(k, 4, "请输入跳转页码", "跳转", NULL, 300, 100, false))
					{
						searchflag = 0;
						int r;
						sscanf_s(k, "%d", &r);
						settextstyle(30, 0, _T("专业字体设计服务/WWW.ZTSGC.COM/"));
						settextcolor(WHITE);
						outtextxy(40, 65 + (i % 8) * 45, PlaceForWord(i + 1, L)->english);
						outtextxy(40, 65 + ((i + 2) % 8) * 45, PlaceForWord(i + 3, L)->english);
						outtextxy(40, 65 + ((i + 4) % 8) * 45, PlaceForWord(i + 5, L)->english);
						outtextxy(40, 65 + ((i + 6) % 8) * 45, PlaceForWord(i + 7, L)->english);
						settextstyle(25, 0, _T("专业字体设计服务/WWW.ZTSGC.COM/"));
						outtextxy(230, 440, (i / 8 + 1) / 100 % 10 + '0');
						outtextxy(240, 440, (i / 8 + 1) / 10 % 10 + '0');
						outtextxy(250, 440, (i / 8 + 1) % 10 + '0');
						common(400, 70 + (i % 8) * 45, 25, "详情", 255, 255, 255);
						common(400, 70 + ((i + 2) % 8) * 45, 25, "详情", 255, 255, 255);
						common(400, 70 + ((i + 4) % 8) * 45, 25, "详情", 255, 255, 255);
						common(400, 70 + ((i + 6) % 8) * 45, 25, "详情", 255, 255, 255);
						i = 8 * (r - 1);
						if ((rankflag&&i > 2089) || (!rankflag&&i > 4615) || i < 0) {
							i = temp;
							setfillcolor(RGB(220, 220, 220));
							setlinecolor(RGB(174, 238, 238));
							fillrectangle(160, 180, 480, 300);
							setfillcolor(WHITE);
							fillrectangle(160, 180, 480, 200);
							settextstyle(30, 0, _T("张海山草泥马体"));
							settextcolor(RGB(190, 190, 190));
							outtextxy(180, 220, "超出范围");
							common(300, 260, 25, "返回", 120, 120, 120);
							MOUSEMSG g;
							while (1)
							{
								g = GetMouseMsg();
								if (g.x >= 280 && g.x <= 350 && g.y >= 260 && g.y <= 285) {
									contact(300, 260, 25, "返回", 60, 60, 60, 220, 220, 220);
									if (g.uMsg == WM_LBUTTONUP)
									{
										BeginBatchDraw();
										cleardevice();
										Winterface(i, L);
										settextstyle(20, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
										outtextxy(90, 20, c);
										EndBatchDraw();
										break;
									}
								}
								else
								{
									depart(300, 260, 25, "返回", 120, 120, 120, 220, 220, 220);
								}
							}
						}
						BeginBatchDraw();
						cleardevice();
						Winterface(i, L);
						settextstyle(20, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
						outtextxy(90, 20, c);
						EndBatchDraw();
					}
				}
			}
			else if (g.x >= 30 && g.x <= 150 && g.y >= 440 && g.y <= 465)
			{
				contact(50, 440, 25, "上一页", 60, 60, 60, 255, 255, 255);
				if (g.uMsg == WM_LBUTTONUP)
				{
					searchflag = 0;
					i -= 8;
					if (i < 0) {
						i += 8;
						depart(50, 440, 25, "上一页", 190, 190, 190, 255, 255, 255);
						depart(370, 440, 25, "下一页", 190, 190, 190, 255, 255, 255);
						setfillcolor(RGB(220, 220, 220));
						setlinecolor(RGB(174, 238, 238));
						fillrectangle(160, 180, 480, 300);
						setfillcolor(WHITE);
						fillrectangle(160, 180, 480, 200);
						settextstyle(30, 0, _T("张海山草泥马体"));
						settextcolor(RGB(190, 190, 190));
						outtextxy(180, 220, "已在首页，无法向前翻页!");
						common(300, 260, 25, "返回", 120, 120, 120);
						MOUSEMSG g;
						while (1)
						{
							g = GetMouseMsg();
							if (g.x >= 280 && g.x <= 350 && g.y >= 260 && g.y <= 285) {
								contact(300, 260, 25, "返回", 60, 60, 60, 220, 220, 220);
								if (g.uMsg == WM_LBUTTONUP)
								{
									BeginBatchDraw();
									cleardevice();
									Winterface(i, L);
									settextstyle(20, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
									outtextxy(90, 20, c);
									EndBatchDraw();
									break;
								}
							}
							else
							{
								depart(300, 260, 25, "返回", 120, 120, 120, 220, 220, 220);
							}
						}
					}
					else {
						BeginBatchDraw();
						i += 8;
						settextstyle(30, 0, _T("专业字体设计服务/WWW.ZTSGC.COM/"));
						settextcolor(WHITE);
						outtextxy(40, 65 + (i % 8) * 45, PlaceForWord(i + 1, L)->english);
						outtextxy(40, 65 + ((i + 2) % 8) * 45, PlaceForWord(i + 3, L)->english);
						outtextxy(40, 65 + ((i + 4) % 8) * 45, PlaceForWord(i + 5, L)->english);
						outtextxy(40, 65 + ((i + 6) % 8) * 45, PlaceForWord(i + 7, L)->english);
						common(400, 70 + (i % 8) * 45, 25, "详情", 255, 255, 255);
						common(400, 70 + ((i + 2) % 8) * 45, 25, "详情", 255, 255, 255);
						common(400, 70 + ((i + 4) % 8) * 45, 25, "详情", 255, 255, 255);
						common(400, 70 + ((i + 6) % 8) * 45, 25, "详情", 255, 255, 255);
						settextstyle(25, 0, _T("专业字体设计服务/WWW.ZTSGC.COM/"));
						outtextxy(230, 440, (i / 8 + 1) / 100 % 10 + '0');
						outtextxy(240, 440, (i / 8 + 1) / 10 % 10 + '0');
						outtextxy(250, 440, (i / 8 + 1) % 10 + '0');
						i -= 8;
						cleardevice();
						Winterface(i, L);
						settextstyle(20, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
						outtextxy(90, 20, c);
						EndBatchDraw();
					}
				}
			}
			else if (g.x >= 350 && g.x <= 460 && g.y >= 440 && g.y <= 465)
			{
				contact(370, 440, 25, "下一页", 60, 60, 60, 255, 255, 255);
				if (g.uMsg == WM_LBUTTONUP)
				{
					searchflag = 0;
					i += 8;
					int u;
					if (rankflag == 0)
						u = 4615;
					else
						u = 2089;
					if (i > u) {
						i -= 8;
						depart(50, 440, 25, "上一页", 190, 190, 190, 255, 255, 255);
						depart(370, 440, 25, "下一页", 190, 190, 190, 255, 255, 255);
						setfillcolor(RGB(220, 220, 220));
						setlinecolor(RGB(174, 238, 238));
						fillrectangle(160, 180, 480, 300);
						setfillcolor(WHITE);
						fillrectangle(160, 180, 480, 200);
						settextstyle(30, 0, _T("张海山草泥马体"));
						settextcolor(RGB(190, 190, 190));
						outtextxy(180, 220, "已在尾页，无法向后翻页!");
						common(300, 260, 25, "返回", 120, 120, 120);
						MOUSEMSG g;
						while (1)
						{
							g = GetMouseMsg();
							if (g.x >= 280 && g.x <= 350 && g.y >= 260 && g.y <= 285) {
								contact(300, 260, 25, "返回", 60, 60, 60, 220, 220, 220);
								if (g.uMsg == WM_LBUTTONUP)
								{
									BeginBatchDraw();
									cleardevice();
									Winterface(i, L);
									settextstyle(20, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
									outtextxy(90, 20, c);
									EndBatchDraw();
									break;
								}
							}
							else
							{
								depart(300, 260, 25, "返回", 120, 120, 120, 220, 220, 220);
							}
						}
					}
					else {
						BeginBatchDraw();
						i -= 8;
						settextstyle(30, 0, _T("专业字体设计服务/WWW.ZTSGC.COM/"));
						settextcolor(WHITE);
						outtextxy(40, 65 + (i % 8) * 45, PlaceForWord(i + 1, L)->english);
						outtextxy(40, 65 + ((i + 2) % 8) * 45, PlaceForWord(i + 3, L)->english);
						outtextxy(40, 65 + ((i + 4) % 8) * 45, PlaceForWord(i + 5, L)->english);
						outtextxy(40, 65 + ((i + 6) % 8) * 45, PlaceForWord(i + 7, L)->english);
						common(400, 70 + (i % 8) * 45, 25, "详情", 255, 255, 255);
						common(400, 70 + ((i + 2) % 8) * 45, 25, "详情", 255, 255, 255);
						common(400, 70 + ((i + 4) % 8) * 45, 25, "详情", 255, 255, 255);
						common(400, 70 + ((i + 6) % 8) * 45, 25, "详情", 255, 255, 255);
						settextstyle(25, 0, _T("专业字体设计服务/WWW.ZTSGC.COM/"));
						outtextxy(230, 440, (i / 8 + 1) / 100 % 10 + '0');
						outtextxy(240, 440, (i / 8 + 1) / 10 % 10 + '0');
						outtextxy(250, 440, (i / 8 + 1) % 10 + '0');
						i += 8;
						cleardevice();
						Winterface(i, L);
						settextstyle(20, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
						outtextxy(90, 20, c);
						EndBatchDraw();
					}
				}
			}
			else if (g.x >= 80 && g.x <= 359 && g.y >= 10 && g.y <= 50)
			{
				if (g.uMsg == WM_LBUTTONUP) {
					searchflag = 1;
				}
			}
			else if (g.x >= 350 && g.x <= 420 && g.y >= 10 && g.y <= 50)
			{
				while (m != 1) {
					setfillcolor(RGB(122, 197, 205));
					solidrectangle(350, 10, 420, 50);
					settextstyle(20, 0, _T("专业字体设计服务/WWW.ZTSGC.COM/"));
					settextcolor(RGB(60, 60, 60));
					flag = 1;
					m++;
				}
				outtextxy(360, 20, "search");
				if (g.uMsg == WM_LBUTTONUP)
				{
					c[s] = '\0';
					int k = 1;
					while (strcmp(PlaceForWord(k++, L)->english, c) < 0);
					i = ((k - 2) / 8) * 8;
					BeginBatchDraw();
					cleardevice();
					Winterface(i, L);
					settextstyle(20, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
					outtextxy(90, 20, c);
					EndBatchDraw();
				}
			}
			else if (g.x >= 520 && g.x <= 620 && g.y >= 50 && g.y <= 70)
			{
				contact(542, 50, 20, "CET.4", 60, 60, 60, 150, 205, 205);
				if (g.uMsg == WM_LBUTTONUP)
				{
					searchflag = 0;
					width = 0;
					s = 0;
					if (rankflag)
					{
						free(L);
						L = (NWord)malloc(sizeof(struct sqlist));
						CreateWordList("四级.txt", "单词状态4.txt", L);
						i = 0;
						c[s] = '\0';
						BeginBatchDraw();
						cleardevice();
						Winterface(i, L);
						settextstyle(20, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
						outtextxy(90, 20, c);
						EndBatchDraw();
						rankflag = 0;
					}; 
				}
			}
			else if (g.x >= 520 && g.x <= 620 && g.y >= 100 && g.y <= 120)
			{
				contact(542, 100, 20, "CET.6", 60, 60, 60, 150, 205, 205);
				if (g.uMsg == WM_LBUTTONUP)
				{
					searchflag = 0;
					width = 0;
					s = 0;
					if (!rankflag)
					{
						free(L);
						L = (NWord)malloc(sizeof(struct sqlist));
						CreateWordList("六级.txt", "单词状态6.txt", L);
						i = 0;
						c[s] = '\0';
						BeginBatchDraw();
						cleardevice();
						Winterface(i, L);
						settextstyle(20, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
						outtextxy(90, 20, c);
						EndBatchDraw();
						rankflag = 1;
					}
				}
			}
			else if (g.x >= 380 && g.x <= 480 && g.y >= 70 + (i % 8) * 45 && g.y <= 95 + (i % 8) * 45)
			{
				if (!a[0]) {
					contact(400, 70 + (i % 8) * 45, 25, "详情", 60, 60, 60, 255, 255, 255);
					if (g.uMsg == WM_LBUTTONUP)
					{
						s = 0;
						width = 0;
						if (!rankflag)
							detail(i + 1, L, "单词状态4.txt");
						else
							detail(i + 1, L, "单词状态6.txt");
					}
				}
			}
			else if (g.x >= 380 && g.x <= 480 && g.y >= 70 + ((i + 1) % 8) * 45 && g.y <= 95 + ((i + 1) % 8) * 45)
			{
				if (!a[1]) {
					contact(400, 70 + ((i + 1) % 8) * 45, 25, "详情", 60, 60, 60, 187, 255, 255);
					if (g.uMsg == WM_LBUTTONUP)
					{
						s = 0;
						width = 0;
						if (!rankflag)
							detail(i + 2, L, "单词状态4.txt");
						else
							detail(i + 2, L, "单词状态6.txt");
					}
				}
			}
			else if (g.x >= 380 && g.x <= 480 && g.y >= 70 + ((i + 2) % 8) * 45 && g.y <= 95 + ((i + 2) % 8) * 45)
			{
				if (!a[2]) {
					contact(400, 70 + ((i + 2) % 8) * 45, 25, "详情", 60, 60, 60, 255, 255, 255);
					if (g.uMsg == WM_LBUTTONUP)
					{
						s = 0;
						width = 0;
						if (!rankflag)
							detail(i + 3, L, "单词状态4.txt");
						else
							detail(i + 3, L, "单词状态6.txt");
					}
				}
			}
			else if (g.x >= 380 && g.x <= 480 && g.y >= 70 + ((i + 3) % 8) * 45 && g.y <= 95 + ((i + 3) % 8) * 45)
			{
				if (!a[3]) {
					contact(400, 70 + ((i + 3) % 8) * 45, 25, "详情", 60, 60, 60, 187, 255, 255);
					if (g.uMsg == WM_LBUTTONUP)
					{
						s = 0;
						width = 0;
						if (!rankflag)
							detail(i + 4, L, "单词状态4.txt");
						else
							detail(i + 4, L, "单词状态6.txt");
					}
				}
			}
			else if (g.x >= 380 && g.x <= 480 && g.y >= 70 + ((i + 4) % 8) * 45 && g.y <= 95 + ((i + 4) % 8) * 45)
			{
				if (!a[4]) {
					contact(400, 70 + ((i + 4) % 8) * 45, 25, "详情", 60, 60, 60, 255, 255, 255);
					if (g.uMsg == WM_LBUTTONUP)
					{
						s = 0;
						width = 0;
						if (!rankflag)
							detail(i + 5, L, "单词状态4.txt");
						else
							detail(i + 5, L, "单词状态6.txt");
					}
				}
			}
			else if (g.x >= 380 && g.x <= 480 && g.y >= 70 + ((i + 5) % 8) * 45 && g.y <= 95 + ((i + 5) % 8) * 45)
			{
				if (!a[5]) {
					contact(400, 70 + ((i + 5) % 8) * 45, 25, "详情", 60, 60, 60, 187, 255, 255);
					if (g.uMsg == WM_LBUTTONUP)
					{
						s = 0;
						width = 0;
						if (!rankflag)
							detail(i + 6, L, "单词状态4.txt");
						else
							detail(i + 6, L, "单词状态6.txt");
					}
				}
			}
			else if (g.x >= 380 && g.x <= 480 && g.y >= 70 + ((i + 6) % 8) * 45 && g.y <= 95 + ((i + 6) % 8) * 45)
			{
				if (!a[6]) {
					contact(400, 70 + ((i + 6) % 8) * 45, 25, "详情", 60, 60, 60, 255, 255, 255);
					if (g.uMsg == WM_LBUTTONUP)
					{
						s = 0;
						width = 0;
						if (!rankflag)
							detail(i + 7, L, "单词状态4.txt");
						else
							detail(i + 7, L, "单词状态6.txt");
					}
				}
			}
			else if (g.x >= 380 && g.x <= 480 && g.y >= 70 + ((i + 7) % 8) * 45 && g.y <= 95 + ((i + 7) % 8) * 45)
			{
				if (!a[7]) {
					contact(400, 70 + ((i + 7) % 8) * 45, 25, "详情", 60, 60, 60, 187, 255, 255);
					if (g.uMsg == WM_LBUTTONUP)
					{
						s = 0;
						width = 0;
						if (!rankflag)
							detail(i + 8, L, "单词状态4.txt");
						else
							detail(i + 8, L, "单词状态6.txt");
					}
				}
			}
			else {
				if (flag) {
					setfillcolor(RGB(142, 229, 238));
					solidrectangle(350, 10, 420, 50);
					settextstyle(20, 0, _T("专业字体设计服务/WWW.ZTSGC.COM/"));
					settextcolor(RGB(120, 120, 120));
					outtextxy(360, 20, "search");
					flag = 0;
					m = 0;
				}
				if (!rankflag) {
					if (i + 1 <= 4615)
					{
						depart(400, 70 + (i % 8) * 45, 25, "详情", 120, 120, 120, 255, 255, 255);
						a[0] = 0;
					}
					else a[0] = 1;
					if (i + 2 <= 4615)
					{
						depart(400, 70 + ((i + 1) % 8) * 45, 25, "详情", 120, 120, 120, 187, 255, 255);
						a[1] = 0;
					}
					else a[1] = 1;
					if (i + 3 <= 4615)
					{
						depart(400, 70 + ((i + 2) % 8) * 45, 25, "详情", 120, 120, 120, 255, 255, 255);
						a[2] = 0;
					}
					else a[2] = 1;
					if (i + 4 <= 4615)
					{
						depart(400, 70 + ((i + 3) % 8) * 45, 25, "详情", 120, 120, 120, 187, 255, 255);
						a[3] = 0;
					}
					else a[3] = 1;
					if (i + 5 <= 4615)
					{
						depart(400, 70 + ((i + 4) % 8) * 45, 25, "详情", 120, 120, 120, 255, 255, 255);
						a[4] = 0;
					}
					else a[4] = 1;
					if (i + 6 <= 4615) {
						depart(400, 70 + ((i + 5) % 8) * 45, 25, "详情", 120, 120, 120, 187, 255, 255); 
						a[5] = 0;
					}
					else a[5] = 1;
					if (i + 7 <= 4615) {
						depart(400, 70 + ((i + 6) % 8) * 45, 25, "详情", 120, 120, 120, 255, 255, 255);
						a[6] = 0;
					}
					else a[6] = 1;
					if (i + 8 <= 4615) {
						depart(400, 70 + ((i + 7) % 8) * 45, 25, "详情", 120, 120, 120, 187, 255, 255); 
						a[7] = 0;
					}
					else a[7] = 1;
				}
				else {
					if (i + 1 <= 2089) {
						depart(400, 70 + (i % 8) * 45, 25, "详情", 120, 120, 120, 255, 255, 255); 
						a[0] = 0;
					}
					else a[0] = 1;
					if (i + 2 <= 2089) {
						depart(400, 70 + ((i + 1) % 8) * 45, 25, "详情", 120, 120, 120, 187, 255, 255); 
						a[1] = 0;
					}
					else a[1] = 1;
					if (i + 3 <= 2089) {
						depart(400, 70 + ((i + 2) % 8) * 45, 25, "详情", 120, 120, 120, 255, 255, 255); 
						a[2] = 0; 
					}
					else a[2] = 1;
					if (i + 4 <= 2089) {
						depart(400, 70 + ((i + 3) % 8) * 45, 25, "详情", 120, 120, 120, 187, 255, 255);
						a[3] = 0;
					}
					else a[3] = 1;
					if (i + 5 <= 2089) {
						depart(400, 70 + ((i + 4) % 8) * 45, 25, "详情", 120, 120, 120, 255, 255, 255); 
						a[4] = 0;
					}
					else a[4] = 1;
					if (i + 6 <= 2089) {
						depart(400, 70 + ((i + 5) % 8) * 45, 25, "详情", 120, 120, 120, 187, 255, 255); 
						a[5] = 0;
					}
					else a[5] = 1;
					if (i + 7 <= 2089) {
						depart(400, 70 + ((i + 6) % 8) * 45, 25, "详情", 120, 120, 120, 255, 255, 255); 
						a[6] = 0;
					}
					else a[6] = 1;
					if (i + 8 <= 2089) {
						depart(400, 70 + ((i + 7) % 8) * 45, 25, "详情", 120, 120, 120, 187, 255, 255); 
						a[7] = 0;
					}
					else a[7] = 1;
				}
				depart(542, 50, 20, "CET.4", 120, 120, 120, 150, 205, 205);
				depart(542, 100, 20, "CET.6", 120, 120, 120, 150, 205, 205);
				depart(548, 420, 25, "返回", 120, 120, 120, 150, 205, 205);
				depart(548, 300, 25, "跳转", 120, 120, 120, 150, 205, 205);
				depart(50, 440, 25, "上一页", 190, 190, 190, 255, 255, 255);
				depart(370, 440, 25, "下一页", 190, 190, 190, 255, 255, 255);
				settextstyle(25, 0, _T("专业字体设计服务/WWW.ZTSGC.COM/"));
				settextcolor(RGB(60, 60, 60));
				outtextxy(195, 440, "第         页");
				outtextxy(230, 440, (i / 8 + 1) / 100 % 10 + '0');
				outtextxy(240, 440, (i / 8 + 1) / 10 % 10 + '0');
				while (1) {
					if (_kbhit()) {
						k = _getch();
						if (0 == k || 0xE0 == k) k = k << 8 | _getch();
					}
					else break;
				}
				outtextxy(250, 440, (i / 8 + 1) % 10 + '0');
				if (g.uMsg == WM_LBUTTONUP)
				{
					searchflag = 0;
					settextstyle(20, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
					settextcolor(WHITE);
					outtextxy(90 + width, 20, '_');
				}
			}
		}
	}
}
