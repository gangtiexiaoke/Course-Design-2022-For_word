#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<time.h>
#include<conio.h>
#include<string.h>
#include"SeqenceList.h"
#include"Menu.h"
#include"UI.h"
void Interface(const char *ch,const char*ch2)
{
    const char *ch3;
	if (ch == "四级.txt")
		ch3 = "C E T . 4";
	else 
		ch3 = "C E T . 6";
	NWord L = (NWord)malloc(sizeof(struct sqlist));
	CreateWordList(ch, ch2, L);
	cleardevice();
	setfillcolor(RGB(150, 205, 205));
	solidrectangle(500, 0, 640, 480);
	settextstyle(50, 0, _T("A Scratch"));
	settextcolor(RGB(150, 150, 150));
	outtextxy(120, 30, ch3);
	common(548, 420, 25, "返回", 120, 120, 120);
	common(90, 130, 40, "有序背诵", 190, 190, 190);
	common(90, 200, 40, "乱序背诵", 190, 190, 190);
	MOUSEMSG q;
	while (1) {
		q = GetMouseMsg();
		if ((q.x >= 60 && q.x <= 405) && (q.y >= 130 && q.y <= 170))
		{
			contact(90, 130, 40, "有序背诵", 100, 100, 100, 255, 255, 255);
			if (q.uMsg == WM_LBUTTONUP) {
				cleardevice();
				setfillcolor(RGB(150, 205, 205));
				solidrectangle(500, 0, 640, 480);
				setfillcolor(RGB(187, 255, 255));
				solidrectangle(0, 120, 499, 480);
				settextstyle(60, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
				settextcolor(RGB(100, 100, 100));
				int o = 1;
				int flag2 = 0;
				while (PlaceForWord(o, L)->status != NEVER && PlaceForWord(o, L)->status != UNKNOWN ) {
					o++;
					if (ch == "四级.txt") {
						if (o > 4615)
						{
							Iback();
							flag2 = 1;
							break;
						}
					}
					else
					{
						if (o > 2089)
						{
							Iback();
							flag2 = 1;
							break;
						}
					}
				}
				outtextxy(40, 38, PlaceForWord(o, L)->english);
				common(548, 420, 25, "返回", 120, 120, 120);
				common(540, 150, 20, "太简单", 120, 120, 120);
				common(548, 210, 20, "认识", 120, 120, 120);
				common(540, 270, 20, "不认识", 120, 120, 120);
				settextstyle(30, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
				outtextxy(140, 250, "点击此处获得中文");
				MOUSEMSG p;
				bool flag = 0;
				while (1) {
					if (flag2) {
						setfillcolor(RGB(150, 205, 205));
						solidrectangle(500, 0, 640, 300);
						settextcolor(WHITE);
						settextstyle(30, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
						outtextxy(140, 250, "点击此处获得中文");
						break;
					}
					p = GetMouseMsg();
					if ((p.x >= 0 && p.x <= 499) && (p.y >= 120 && p.y <= 480) && p.uMsg == WM_LBUTTONUP)
					{
						flag = 1;
						settextcolor(RGB(187, 255, 255));
						settextstyle(30, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
						outtextxy(140, 250, "点击此处获得中文");
						settextstyle(40, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
						settextcolor(RGB(100, 100, 100));
						outtextxy(40, 140, PlaceForWord(o, L)->china);
					}
					else if ((p.x >= 525 && p.x <= 630) && (p.y >= 150 && p.y <= 170))
					{
						contact(540, 150, 20, "太简单", 60, 60, 60, 150, 205, 205);
						if (p.uMsg == WM_LBUTTONUP) {
							Rewrite(o, L, FAMILIAR, ch2);
							settextcolor(WHITE);
							settextstyle(60, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
							outtextxy(40, 38, PlaceForWord(o, L)->english);
							if (flag)
							{
								settextstyle(40, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
								settextcolor(RGB(187, 255, 255));
								outtextxy(40, 140, PlaceForWord(o, L)->china);
								settextcolor(RGB(100, 100, 100));
								settextstyle(30, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
								outtextxy(140, 250, "点击此处获得中文");
							}
							o++;
							while (PlaceForWord(o, L)->status != NEVER && PlaceForWord(o, L)->status != UNKNOWN) {
								o++;
								if (ch == "四级.txt") {
									if (o > 4615)
									{
										Iback();
										flag2 = 1;
										break;
									}
								}
								else
								{
									if (o > 2089)
									{
										Iback();
										flag2 = 1;
										break;
									}
								}
							}
							if (flag2) {
								setfillcolor(RGB(150, 205, 205));
								solidrectangle(500, 0, 640, 300);
								settextcolor(WHITE);
								settextstyle(30, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
								outtextxy(140, 250, "点击此处获得中文");
								break;
							}
							settextstyle(60, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
							settextcolor(RGB(100, 100, 100));
							outtextxy(40, 38, PlaceForWord(o, L)->english);
							flag = 0;
							continue;
						}
					}
					else if ((p.x >= 530 && p.x <= 630) && (p.y >= 210 && p.y <= 230))
					{
						contact(548, 210, 20, "认识", 60, 60, 60, 150, 205, 205);
						if (p.uMsg == WM_LBUTTONUP) {
							Rewrite(o, L, KNOWN, ch2);
							settextcolor(WHITE);
							settextstyle(60, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
							outtextxy(40, 38, PlaceForWord(o, L)->english);
							if (flag)
							{
								settextstyle(40, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
								settextcolor(RGB(187, 255, 255));
								outtextxy(40, 140, PlaceForWord(o, L)->china);
								settextcolor(RGB(100, 100, 100));
								settextstyle(30, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
								outtextxy(140, 250, "点击此处获得中文");
							}
							flag = 0;
							o++;
							while (PlaceForWord(o, L)->status != NEVER && PlaceForWord(o, L)->status != UNKNOWN) {
								o++;
								if (ch == "四级.txt") {
									if (o > 4615)
									{
										Iback();
										flag2 = 1;
										break;
									}
								}
								else
								{
									if (o > 2089)
									{
										Iback();
										flag2 = 1;
										break;
									}
								}
							}
							if (flag2) {
								setfillcolor(RGB(150, 205, 205));
								solidrectangle(500, 0, 640, 300);
								settextcolor(WHITE);
								settextstyle(30, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
								outtextxy(140, 250, "点击此处获得中文");
								break;
							}
							settextstyle(60, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
							settextcolor(RGB(100, 100, 100));
							outtextxy(40, 38, PlaceForWord(o, L)->english);
							flag = 0;
							continue;
						}
					}
					else if ((p.x >= 520 && p.x <= 630) && (p.y >= 270 && p.y <= 290))
					{
						contact(540, 270, 20, "不认识", 60, 60, 60, 150, 205, 205);
						if (p.uMsg == WM_LBUTTONUP) {
							Rewrite(o, L, UNKNOWN, ch2);
							settextcolor(WHITE);
							settextstyle(60, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
							outtextxy(40, 38, PlaceForWord(o, L)->english);
							if (flag)
							{
								settextstyle(40, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
								settextcolor(RGB(187, 255, 255));
								outtextxy(40, 140, PlaceForWord(o, L)->china);
								settextcolor(RGB(100, 100, 100));
								settextstyle(30, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
								outtextxy(140, 250, "点击此处获得中文");
							}
							flag = 0;
							o++;
							while (PlaceForWord(o, L)->status != NEVER && PlaceForWord(o, L)->status != UNKNOWN) {
								o++;
								if (ch == "四级.txt") {
									if (o > 4615)
									{
										Iback();
										flag2 = 1;
										break;
									}
								}
								else
								{
									if (o > 2089)
									{
										Iback();
										flag2 = 1;
										break;
									}
								}
							}
							if (flag2) {
								setfillcolor(RGB(150, 205, 205));
								solidrectangle(500, 0, 640, 300);
								settextcolor(WHITE);
								settextstyle(30, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
								outtextxy(140, 250, "点击此处获得中文");
								break;
							}
							settextstyle(60, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
							settextcolor(RGB(100, 100, 100));
							outtextxy(40, 38, PlaceForWord(o, L)->english);
							flag = 0;
							continue;
						}
					}
					else if ((p.x >= 520 && p.x <= 615) && (p.y >= 420 && p.y <= 445))
					{
						contact(548, 420, 25, "返回", 60, 60, 60, 150, 205, 205);
						if (p.uMsg == WM_LBUTTONUP) {
							cleardevice();
							settextstyle(50, 0, _T("A Scratch"));
							settextcolor(RGB(150, 150, 150));
							outtextxy(120, 30, ch3);
							setfillcolor(RGB(150, 205, 205));
							solidrectangle(500, 0, 640, 480);
							common(548, 420, 25, "返回", 120, 120, 120);
							common(90, 130, 40, "有序背诵", 190, 190, 190);
							common(90, 200, 40, "乱序背诵", 190, 190, 190);
							break;
						}
					}
					else
					{
						settextstyle(60, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
						settextcolor(RGB(100, 100, 100));
						outtextxy(40, 38, PlaceForWord(o, L)->english);
						if (flag)
						{
							settextstyle(40, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
							settextcolor(RGB(100, 100, 100));
							outtextxy(40, 140, PlaceForWord(o, L)->china);
						}
						else
						{
							settextcolor(RGB(100, 100, 100));
							settextstyle(30, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
							outtextxy(140, 250, "点击此处获得中文");
						}
						depart(548, 420, 25, "返回", 120, 120, 120, 150, 205, 205);
						depart(540, 150, 20, "太简单", 120, 120, 120, 150, 205, 205);
						depart(548, 210, 20, "认识", 120, 120, 120, 150, 205, 205);
						depart(540, 270, 20, "不认识", 120, 120, 120, 150, 205, 205);
					}
				}
			}
		}
		else if ((q.x >= 60 && q.x <= 440) && (q.y >= 200 && q.y <= 240))
		{
			contact(90, 200, 40, "乱序背诵", 100, 100, 100, 255, 255, 255);
			if (q.uMsg == WM_LBUTTONUP) {
				srand((unsigned)time(NULL));
				cleardevice();
				setfillcolor(RGB(150, 205, 205));
				solidrectangle(500, 0, 640, 480);
				setfillcolor(RGB(187, 255, 255));
				solidrectangle(0, 120, 499, 480);
				settextstyle(60, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
				settextcolor(RGB(100, 100, 100));
				int r;
				if (ch == "四级.txt") {
					r = rand() % 4615 + 1;
					while (PlaceForWord(r, L)->status != NEVER && PlaceForWord(r, L)->status != UNKNOWN)
						r = rand() % 4615 + 1;
				}
				else{
					r = rand() % 2089 + 1;
					while (PlaceForWord(r, L)->status != NEVER && PlaceForWord(r, L)->status != UNKNOWN)
						r = rand() % 2089 + 1;
				}
				outtextxy(40, 38, PlaceForWord(r, L)->english);
				common(548, 420, 25, "返回", 120, 120, 120);
				common(540, 150, 20, "太简单", 120, 120, 120);
				common(548, 210, 20, "认识", 120, 120, 120);
				common(540, 270, 20, "不认识", 120, 120, 120);
				settextstyle(30, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
				outtextxy(140, 250, "点击此处获得中文");
				MOUSEMSG p;
				bool flag = 0;
				while (1) {
					p = GetMouseMsg();
					if ((p.x >= 0 && p.x <= 499) && (p.y >= 120 && p.y <= 480) && p.uMsg == WM_LBUTTONUP)
					{
						flag = 1;
						settextcolor(RGB(187, 255, 255));
						settextstyle(30, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
						outtextxy(140, 250, "点击此处获得中文");
						settextstyle(40, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
						settextcolor(RGB(100, 100, 100));
						outtextxy(40, 140, PlaceForWord(r, L)->china);
					}
					else if ((p.x >= 525 && p.x <= 630) && (p.y >= 150 && p.y <= 170))
					{
						contact(540, 150, 20, "太简单", 60, 60, 60, 150, 205, 205);
						if (p.uMsg == WM_LBUTTONUP) {
							Rewrite(r, L, FAMILIAR, ch2);
							settextcolor(WHITE);
							settextstyle(60, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
							outtextxy(40, 38, PlaceForWord(r, L)->english);
							if (flag)
							{
								settextstyle(40, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
								settextcolor(RGB(187, 255, 255));
								outtextxy(40, 140, PlaceForWord(r, L)->china);
								settextcolor(RGB(100, 100, 100));
								settextstyle(30, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
								outtextxy(140, 250, "点击此处获得中文");
							}
							if (ch == "四级.txt") {
								r = rand() % 4615 + 1;
								while (PlaceForWord(r, L)->status != NEVER && PlaceForWord(r, L)->status != UNKNOWN)
									r = rand() % 4615 + 1;
							}
							else {
								r = rand() % 2089 + 1;
								while (PlaceForWord(r, L)->status != NEVER && PlaceForWord(r, L)->status != UNKNOWN)
									r = rand() % 2089 + 1;
							}
							settextstyle(60, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
							settextcolor(RGB(100, 100, 100));
							outtextxy(40, 38, PlaceForWord(r, L)->english);
							flag = 0;
							continue;
						}
					}
					else if ((p.x >= 530 && p.x <= 630) && (p.y >= 210 && p.y <= 230))
					{
						contact(548, 210, 20, "认识", 60, 60, 60, 150, 205, 205);
						if (p.uMsg == WM_LBUTTONUP) {
							Rewrite(r, L, KNOWN, ch2);
							settextcolor(WHITE);
							settextstyle(60, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
							outtextxy(40, 38, PlaceForWord(r, L)->english);
							if (flag)
							{
								settextstyle(40, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
								settextcolor(RGB(187, 255, 255));
								outtextxy(40, 140, PlaceForWord(r, L)->china);
								settextcolor(RGB(100, 100, 100));
								settextstyle(30, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
								outtextxy(140, 250, "点击此处获得中文");
							}
							flag = 0;
							if (ch == "四级.txt") {
								r = rand() % 4615 + 1;
								while (PlaceForWord(r, L)->status != NEVER && PlaceForWord(r, L)->status != UNKNOWN)
									r = rand() % 4615 + 1;
							}
							else {
								r = rand() % 2089 + 1;
								while (PlaceForWord(r, L)->status != NEVER && PlaceForWord(r, L)->status != UNKNOWN)
									r = rand() % 2089 + 1;
							}
							settextstyle(60, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
							settextcolor(RGB(100, 100, 100));
							outtextxy(40, 38, PlaceForWord(r, L)->english);
							flag = 0;
							continue;
						}
					}
					else if ((p.x >= 520 && p.x <= 630) && (p.y >= 270 && p.y <= 290))
					{
						contact(540, 270, 20, "不认识", 60, 60, 60, 150, 205, 205);
						if (p.uMsg == WM_LBUTTONUP) {
							Rewrite(r, L, UNKNOWN, ch2);
							settextcolor(WHITE);
							settextstyle(60, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
							outtextxy(40, 38, PlaceForWord(r, L)->english);
							if (flag)
							{
								settextstyle(40, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
								settextcolor(RGB(187, 255, 255));
								outtextxy(40, 140, PlaceForWord(r, L)->china);
								settextcolor(RGB(100, 100, 100));
								settextstyle(30, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
								outtextxy(140, 250, "点击此处获得中文");
							}
							flag = 0;
							if (ch == "四级.txt") {
								r = rand() % 4615 + 1;
								while (PlaceForWord(r, L)->status != NEVER && PlaceForWord(r, L)->status != UNKNOWN)
									r = rand() % 4615 + 1;
							}
							else {
								r = rand() % 2089 + 1;
								while (PlaceForWord(r, L)->status != NEVER && PlaceForWord(r, L)->status != UNKNOWN)
									r = rand() % 2089 + 1;
							}
							settextstyle(60, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
							settextcolor(RGB(100, 100, 100));
							outtextxy(40, 38, PlaceForWord(r, L)->english);
							flag = 0;
							continue;
						}
					}
					else if ((p.x >= 520 && p.x <= 615) && (p.y >= 420 && p.y <= 445))
					{
						contact(548, 420, 25, "返回", 60, 60, 60, 150, 205, 205);
						if (p.uMsg == WM_LBUTTONUP) {
							cleardevice();
							settextstyle(50, 0, _T("A Scratch"));
							settextcolor(RGB(150, 150, 150));
							outtextxy(120, 30, ch3);
							setfillcolor(RGB(150, 205, 205));
							solidrectangle(500, 0, 640, 480);
							common(548, 420, 25, "返回", 120, 120, 120);
							common(90, 130, 40, "有序背诵", 190, 190, 190);
							common(90, 200, 40, "乱序背诵", 190, 190, 190);
							break;
						}
					}
					else
					{
						settextstyle(60, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
						settextcolor(RGB(100, 100, 100));
						outtextxy(40, 38, PlaceForWord(r, L)->english);
						if (flag)
						{
							settextstyle(40, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
							settextcolor(RGB(100, 100, 100));
							outtextxy(40, 140, PlaceForWord(r, L)->china);
						}
						else
						{
							settextcolor(RGB(100, 100, 100));
							settextstyle(30, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
							outtextxy(140, 250, "点击此处获得中文");
						}
						depart(548, 420, 25, "返回", 120, 120, 120, 150, 205, 205);
						depart(540, 150, 20, "太简单", 120, 120, 120, 150, 205, 205);
						depart(548, 210, 20, "认识", 120, 120, 120, 150, 205, 205);
						depart(540, 270, 20, "不认识", 120, 120, 120, 150, 205, 205);
					}
				}
			}
		}
		else if (q.x >= 520 && q.x <= 615 && q.y >= 420 && q.y <= 445)
		{
			contact(548, 420, 25, "返回", 60, 60, 60, 150, 205, 205);
			if (q.uMsg == WM_LBUTTONUP) {
				free(L);
				settextstyle(50, 0, _T("A Scratch"));
				settextcolor(WHITE);
				outtextxy(120, 30, ch3);
				settextstyle(40, 0, "张海山草泥马体");
				settextcolor(WHITE);
				outtextxy(90, 130, "有序背诵");
				outtextxy(90, 200, "乱序背诵");
				setlinecolor(WHITE);
				line(200, 150, 490, 150);
				line(200, 220, 490, 220);
				settextstyle(50, 0, _T("A Scratch"));
				settextcolor(RGB(150, 150, 150));
				outtextxy(60, 30, "JUST DO IT");
				common(548, 420, 25, "返回", 120, 120, 120);
				common(90, 130, 40, "CET.4", 190, 190, 190);
				common(90, 200, 40, "CET.6", 190, 190, 190);
				break;
			}
		}
		else
		{
			depart(90, 130, 40, "有序背诵", 190, 190, 190, 255, 255, 255);
			depart(90, 200, 40, "乱序背诵", 190, 190, 190, 255, 255, 255);
			depart(548, 420, 25, "返回", 120, 120, 120, 150, 205, 205);
		}
	}
}

void Rinterface(const char *ch, const char*ch2)
{
	NWord L = (NWord)malloc(sizeof(struct sqlist));
	CreateWordList(ch, ch2, L);
	cleardevice();
	setfillcolor(RGB(150, 205, 205));
	solidrectangle(500, 0, 640, 480);
	setfillcolor(RGB(187, 255, 255));
	solidrectangle(0, 120, 499, 480);
	settextstyle(60, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
	settextcolor(RGB(100, 100, 100));
	int o = 1;
	int flag2 = 0;
	while (PlaceForWord(o, L)->status != KNOWN && PlaceForWord(o, L)->status != KNOWNM && PlaceForWord(o, L)->status != KNOWNMM) {
		o++;
		if (ch == "四级.txt") {
			if (o > 4615)
			{
				back(1);
				flag2 = 1;
				break;
			}
		}
		else
		{
			if (o > 2089)
			{
				back(1);
				flag2 = 1;
				break;
			}
		}
	}
	outtextxy(40, 38, PlaceForWord(o, L)->english);
	common(548, 420, 25, "返回", 120, 120, 120);
	common(548, 150, 20, "记得", 120, 120, 120);
	common(540, 270, 20, "不记得", 120, 120, 120);
	settextstyle(30, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
	outtextxy(140, 250, "点击此处获得中文");
	MOUSEMSG p;
	bool flag = 0;
	while (1) {
		if (flag2) {
			setfillcolor(RGB(150, 205, 205));
			solidrectangle(500, 0, 640, 300);
			settextcolor(WHITE);
			settextstyle(30, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
			outtextxy(140, 250, "点击此处获得中文");
			break;
		}
		p = GetMouseMsg();
		if ((p.x >= 0 && p.x <= 499) && (p.y >= 120 && p.y <= 480) && p.uMsg == WM_LBUTTONUP)
		{
			flag = 1;
			settextcolor(RGB(187, 255, 255));
			settextstyle(30, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
			outtextxy(140, 250, "点击此处获得中文");
			settextstyle(40, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
			settextcolor(RGB(100, 100, 100));
			outtextxy(40, 140, PlaceForWord(o, L)->china);
		}
		else if ((p.x >= 525 && p.x <= 630) && (p.y >= 150 && p.y <= 170))
		{
			contact(548, 150, 20, "记得", 60, 60, 60, 150, 205, 205);
			if (p.uMsg == WM_LBUTTONUP) {
				Rewrite(o, L, PlaceForWord(o, L)->status+1, ch2);
				settextcolor(WHITE);
				settextstyle(60, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
				outtextxy(40, 38, PlaceForWord(o, L)->english);
				if (flag)
				{
					settextstyle(40, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
					settextcolor(RGB(187, 255, 255));
					outtextxy(40, 140, PlaceForWord(o, L)->china);
					settextcolor(RGB(100, 100, 100));
					settextstyle(30, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
					outtextxy(140, 250, "点击此处获得中文");
				}
				o++;
				while (PlaceForWord(o, L)->status != KNOWN && PlaceForWord(o, L)->status != KNOWNM && PlaceForWord(o, L)->status != KNOWNMM) {
					o++;
					if (ch == "四级.txt") {
						if (o > 4615)
						{
							back(0);
							flag2 = 1;
							break;
						}
					}
					else
					{
						if (o > 2089)
						{
							back(0);
							flag2 = 1;
							break;
						}
					}
				}
				if (flag2) {
					settextcolor(WHITE);
					settextstyle(30, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
					outtextxy(140, 250, "点击此处获得中文");
					break;
				}
				settextstyle(60, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
				settextcolor(RGB(100, 100, 100));
				outtextxy(40, 38, PlaceForWord(o, L)->english);
				flag = 0;
				continue;
			}
		}
		else if ((p.x >= 520 && p.x <= 630) && (p.y >= 270 && p.y <= 290))
		{
			contact(540, 270, 20, "不记得", 60, 60, 60, 150, 205, 205);
			if (p.uMsg == WM_LBUTTONUP) {
				settextcolor(WHITE);
				settextstyle(60, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
				outtextxy(40, 38, PlaceForWord(o, L)->english);
				if (flag)
				{
					settextstyle(40, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
					settextcolor(RGB(187, 255, 255));
					outtextxy(40, 140, PlaceForWord(o, L)->china);
					settextcolor(RGB(100, 100, 100));
					settextstyle(30, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
					outtextxy(140, 250, "点击此处获得中文");
				}
				flag = 0;
				o++;
				while (PlaceForWord(o, L)->status != KNOWN && PlaceForWord(o, L)->status != KNOWNM && PlaceForWord(o, L)->status != KNOWNMM) {
					o++;
					if (ch == "四级.txt") {
						if (o > 4615)
						{
							back(0);
							flag2 = 1;
							break;
						}
					}
					else
					{
						if (o > 2089)
						{
							back(0);
							flag2 = 1;
							break;
						}
					}
				}
				if (flag2) {
					settextcolor(WHITE);
					settextstyle(30, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
					outtextxy(140, 250, "点击此处获得中文");
					break;
				}
				settextstyle(60, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
				settextcolor(RGB(100, 100, 100));
				outtextxy(40, 38, PlaceForWord(o, L)->english);
				flag = 0;
				continue;
			}
		}
		else if ((p.x >= 520 && p.x <= 615) && (p.y >= 420 && p.y <= 445))
		{
			contact(548, 420, 25, "返回", 60, 60, 60, 150, 205, 205);
			if (p.uMsg == WM_LBUTTONUP) {
				free(L);
				cleardevice();
				setfillcolor(RGB(150, 205, 205));
				solidrectangle(500, 0, 640, 480);
				settextstyle(60, 0, _T("A Scratch"));
				settextcolor(RGB(150, 150, 150));
				outtextxy(120, 30, "Go Over");
				common(548, 420, 25, "返回", 120, 120, 120);
				common(90, 130, 40, "CET.4", 190, 190, 190);
				common(90, 200, 40, "CET.6", 190, 190, 190);
				break;
			}
		}
		else
		{
			settextstyle(60, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
			settextcolor(RGB(100, 100, 100));
			outtextxy(40, 38, PlaceForWord(o, L)->english);
			if (flag)
			{
				settextstyle(40, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
				settextcolor(RGB(100, 100, 100));
				outtextxy(40, 140, PlaceForWord(o, L)->china);
			}
			else
			{
				settextcolor(RGB(100, 100, 100));
				settextstyle(30, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
				outtextxy(140, 250, "点击此处获得中文");
			}
			depart(548, 420, 25, "返回", 120, 120, 120, 150, 205, 205);
			depart(548, 150, 20, "记得", 120, 120, 120, 150, 205, 205);
			depart(540, 270, 20, "不记得", 120, 120, 120, 150, 205, 205);
		}
	}
}

void dictation(const char *ch, const char*ch2)
{
	NWord L = (NWord)malloc(sizeof(struct sqlist));
	CreateWordList(ch, ch2, L);
	cleardevice();
	setfillcolor(RGB(150, 205, 205));
	solidrectangle(500, 0, 640, 480);
	setfillcolor(RGB(187, 255, 255));
	solidrectangle(0, 0, 499, 160);
	solidrectangle(0, 320, 499, 480);
	int o = 1;
	int flag = 0;
	int flag2 = 0;
	while (PlaceForWord(o, L)->status != FAMILIAR) {
		o++;
		if (ch == "四级.txt") {
			if (o > 4615)
			{
				Dback(1);
				flag2 = 1;
				break;
			}
		}
		else
		{
			if (o > 2089)
			{
				Dback(1);
				flag2 = 1;
				break;
			}
		}
	}
	settextstyle(40, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
	settextcolor(RGB(100, 100, 100));
	outtextxy(40, 60, PlaceForWord(o, L)->china);
	common(548, 420, 25, "返回", 120, 120, 120);
	common(548, 150, 20, "确定", 120, 120, 120);
	common(535, 210, 20, "重新输入", 120, 120, 120);
	common(535, 270, 20, "查看答案", 120, 120, 120);
	common(542, 330, 20, "下一项", 120, 120, 120);
	MOUSEMSG p;
	int i = 0;
	int width = 0;
	int k;
	while (1) {
		if (_kbhit()) {
			k = _getch();
			if (0 == k || 0xE0 == k) k = k << 8 | _getch();
		}
		else break;
	}
	while (1) {
		if (flag2) {
			setfillcolor(RGB(150, 205, 205));
			solidrectangle(500, 0, 640, 400);
			break;
		}
		char c[21];
		if (i < 20) {
			settextstyle(50, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
			settextcolor(RGB(100, 100, 100));
			outtextxy(40 + width, 220, '_');
		}
		while (_kbhit())
		{
			
			c[i] = _getch();
			if ((i >= 20 && c[i] != 8)||70+width>=499&&c[i]!=8)
				break;
			if (c[i] >= 'a'&&c[i] <= 'z' || c[i] >= 'A'&&c[i] <= 'Z') {
				settextstyle(50, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
				settextcolor(WHITE);
				outtextxy(40 + width, 220, '_');
				settextcolor(RGB(100, 100, 100));
				outtextxy(40 + width, 220, c[i]);
				width += textwidth(c[i]);
				i++;
			}
			else if (c[i] == 8) {
				if (i == 0)
					break;
				settextstyle(50, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
				settextcolor(WHITE);
				outtextxy(40 + width, 220, '_');
				i--;
				width -= textwidth(c[i]);
				settextcolor(WHITE);
				outtextxy(40 + width, 220, c[i]);
			}
			else if (c[i] == 13)
			{
				if (flag) {
					setfillcolor(RGB(187, 255, 255));
					solidrectangle(0, 320, 499, 480);
					settextstyle(40, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
					settextcolor(RGB(100, 100, 100));
					outtextxy(40, 360, "你已经查看过答案，回答无效!");
				}
				else {
					c[i] = '\0';
					if (strcmp(PlaceForWord(o, L)->english, c) == 0) {
						setfillcolor(RGB(187, 255, 255));
						solidrectangle(0, 320, 499, 480);
						settextstyle(50, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
						settextcolor(RGB(100, 100, 100));
						outtextxy(100, 360, "答案正确!");
						Rewrite(o, L, GRASP, ch2);
					}
					else {
						setfillcolor(RGB(187, 255, 255));
						solidrectangle(0, 320, 499, 480);
						settextstyle(50, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
						settextcolor(RGB(100, 100, 100));
						outtextxy(100, 360, "答案错误!");
					}
				}
			}
		}
		if (MouseHit()) {
			p = GetMouseMsg();
			if ((p.x >= 525 && p.x <= 630) && (p.y >= 150 && p.y <= 170))
			{
				contact(548, 150, 20, "确定", 60, 60, 60, 150, 205, 205);
				if (p.uMsg == WM_LBUTTONUP) {
					if (flag){
						setfillcolor(RGB(187, 255, 255));
						solidrectangle(0, 320, 499, 480);
						settextstyle(40, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
						settextcolor(RGB(100, 100, 100));
						outtextxy(40, 360, "你已经查看过答案，回答无效!");
					}
					else {
						c[i] = '\0';
						if (strcmp(PlaceForWord(o, L)->english, c) == 0) {
							setfillcolor(RGB(187, 255, 255));
							solidrectangle(0, 320, 499, 480);
							settextstyle(50, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
							settextcolor(RGB(100, 100, 100));
							outtextxy(100, 360, "答案正确!");
							Rewrite(o, L, GRASP, ch2);
						}
						else {
							setfillcolor(RGB(187, 255, 255));
							solidrectangle(0, 320, 499, 480);
							settextstyle(50, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
							settextcolor(RGB(100, 100, 100));
							outtextxy(100, 360, "答案错误!");
						}
					}
				}
			}
			else if ((p.x >= 530 && p.x <= 630) && (p.y >= 210 && p.y <= 230))
			{
				contact(535, 210, 20, "重新输入", 60, 60, 60, 150, 205, 205);
				if (p.uMsg == WM_LBUTTONUP) {
					setfillcolor(WHITE);
					solidrectangle(0, 160, 499, 320);
					for (int i = 0; i < 20; i++)
					{
						c[i] = 0;
					}
					i = 0;
					width = 0;
				}
			}
			else if ((p.x >= 520 && p.x <= 630) && (p.y >= 270 && p.y <= 290))
			{
				contact(535, 270, 20, "查看答案", 60, 60, 60, 150, 205, 205);
				if (p.uMsg == WM_LBUTTONUP) {
					flag = 1;
					setfillcolor(RGB(187, 255, 255));
					solidrectangle(0, 320, 499, 480);
					settextstyle(50, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
					settextcolor(RGB(100, 100, 100));
					outtextxy(40, 360, PlaceForWord(o, L)->english);
				}
			}
			else if ((p.x >= 520 && p.x <= 630) && (p.y >= 330 && p.y <= 350))
			{
				contact(542, 330, 20, "下一项", 60, 60, 60, 150, 205, 205);
				if (p.uMsg == WM_LBUTTONUP) {
					settextcolor(RGB(187, 255, 255));
					settextstyle(40, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
					outtextxy(40, 60, PlaceForWord(o, L)->china);
					o++;
					while (PlaceForWord(o, L)->status != FAMILIAR) {
						o++;
						if (ch == "四级.txt") {
							if (o > 4615)
							{
								Dback(0);
								flag2 = 1;
								break;
							}
						}
						else
						{
							if (o > 2089)
							{
								Dback(0);
								flag2 = 1;
								break;
							}
						}
					}
					if (flag2) {
						setfillcolor(RGB(150, 205, 205));
						solidrectangle(500, 0, 640, 300);
						break;
					}
					settextstyle(40, 0, "专业字体设计服务/WWW.ZTSGC.COM/");
					settextcolor(RGB(100, 100, 100));
					outtextxy(40, 60, PlaceForWord(o, L)->china);
					setfillcolor(RGB(187, 255, 255));
					solidrectangle(0, 320, 499, 480);
					flag = 0;
					setfillcolor(WHITE);
					solidrectangle(0, 160, 499, 320);
					for (int i = 0; i < 20; i++)
					{
						c[i] = 0;
					}
					i = 0;
					width = 0;
					continue;
				}
			}
			else if ((p.x >= 520 && p.x <= 615) && (p.y >= 420 && p.y <= 445))
			{
				contact(548, 420, 25, "返回", 60, 60, 60, 150, 205, 205);
				if (p.uMsg == WM_LBUTTONUP) {
					free(L);
					cleardevice();
					settextstyle(60, 0, _T("A Scratch"));
					settextcolor(RGB(150, 150, 150));
					outtextxy(120, 30, "Dictation");
					setfillcolor(RGB(150, 205, 205));
					solidrectangle(500, 0, 640, 480);
					common(548, 420, 25, "返回", 120, 120, 120);
					common(90, 130, 40, "CET.4", 190, 190, 190);
					common(90, 200, 40, "CET.6", 190, 190, 190);
					break;
				}
			}
			else
			{
				depart(548, 420, 25, "返回", 120, 120, 120, 150, 205, 205);
				depart(548, 150, 20, "确定", 120, 120, 120, 150, 205, 205);
				depart(535, 210, 20, "重新输入", 120, 120, 120, 150, 205, 205);
				depart(535, 270, 20, "查看答案", 120, 120, 120, 150, 205, 205);
				depart(542, 330, 20, "下一项", 120, 120, 120, 150, 205, 205);
			}
		}
	}
}
