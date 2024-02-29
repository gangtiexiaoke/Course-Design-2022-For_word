#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include"UI.h"
#include"SeqenceList.h"

void common(int x, int y, int size, const char *content, int R, int G, int B)
{
	settextcolor(RGB(R, G, B));
	settextstyle(size, 0, _T("�ź�ɽ��������"));
	outtextxy(x, y, content);
	setlinecolor(RGB(R, G, B));
	line(x - (size / 5) * 4, y + size / 2, x - (size / 5), y + size / 2);
	line(x + textwidth(content) + (size / 5), y + size / 2, x + textwidth(content) + (size / 5) * 4, y + size / 2);
}

void contact(int x, int y, int size, const char *content, int R, int G, int B, int cR, int cG, int cB)
{
	settextcolor(RGB(R, G, B));
	settextstyle(size, 0, _T("�ź�ɽ��������"));
	outtextxy(x, y, content);
	setlinecolor(RGB(R, G, B));
	line(x - (size / 5) * 4 * 2, y + size / 2, x - (size / 5) - (size / 5) * 4, y + size / 2);
	line(x + textwidth(content) + (size / 5) + (size / 5) * 4, y + size / 2, x + textwidth(content) + (size / 5) * 4 * 2, y + size / 2);
	setlinecolor(RGB(cR, cG, cB));
	line(x - (size / 5) * 4, y + size / 2, x - (size / 5), y + size / 2);
	line(x + textwidth(content) + (size / 5), y + size / 2, x + textwidth(content) + (size / 5) * 4, y + size / 2);
}

void depart(int x, int y, int size, const char *content, int R, int G, int B, int cR, int cG, int cB)
{
	settextcolor(RGB(R, G, B));
	settextstyle(size, 0, _T("�ź�ɽ��������"));
	outtextxy(x, y, content);
	setlinecolor(RGB(R, G, B));
	line(x - (size / 5) * 4, y + size / 2, x - (size / 5), y + size / 2);
	line(x + textwidth(content) + (size / 5), y + size / 2, x + textwidth(content) + (size / 5) * 4, y + size / 2);
	setlinecolor(RGB(cR,cG,cB));
	line(x - (size / 5) * 4 * 2, y + size / 2, x - (size / 5) - (size / 5) * 4, y + size / 2);
	line(x + textwidth(content) + (size / 5) + (size / 5) * 4, y + size / 2, x + textwidth(content) + (size / 5) * 4 * 2, y + size / 2);
}
void logo(void) 
{
	setfillcolor(WHITE);
	solidrectangle(0, 0, 640, 480);
	setfillcolor(RGB(150, 205, 205));
	solidrectangle(500, 0, 640, 480);
	settextstyle(100, 40, _T("�ź�ɽ��������"));
	settextcolor(RGB(190, 190, 190));
	outtextxy(90, 120, "For");
	settextcolor(RGB(100, 100, 100));
	outtextxy(85, 115, "For");
	settextstyle(75, 40, _T("�ź�ɽ��������"));
	settextcolor(RGB(190, 190, 190));
	outtextxy(230, 130, "word");
	settextcolor(RGB(100, 100, 100));
	outtextxy(225, 125, "word");
	settextstyle(60, 300, _T("�ź�ɽ��������"));
	settextcolor(RGB(190, 190, 190));
	outtextxy(180, 170, "-");
	settextcolor(RGB(100, 100, 100));
	outtextxy(175, 165, "-");
	setlinecolor(RGB(190, 190, 190));
}

void back(bool flag)
{
	setfillcolor(RGB(220, 220, 220));
	setlinecolor(RGB(174, 238, 238));
	fillrectangle(160, 180, 480, 300);
	setfillcolor(WHITE);
	fillrectangle(160, 180, 480, 200);
	settextstyle(30, 0, _T("�ź�ɽ��������"));
	settextcolor(RGB(190, 190, 190));
	if (flag)
		outtextxy(180, 220, "��ʱû��Ҫ��ϰ�ĵ���!");
	else 
		outtextxy(180, 220, "�����Ѿ���ϰ���!");
	common(300, 260, 25, "����", 120, 120, 120);
	MOUSEMSG g;
	while (1)
	{
		g = GetMouseMsg();

		if (g.x >= 280 && g.x <= 350 && g.y >= 260 && g.y <= 285) {
			contact(300, 260, 25, "����", 60, 60, 60, 220, 220, 220);
			if (g.uMsg == WM_LBUTTONUP)
			{
				cleardevice();
				setfillcolor(RGB(150, 205, 205));
				solidrectangle(500, 0, 640, 480);
				settextstyle(60, 0, _T("A Scratch"));
				settextcolor(RGB(150, 150, 150));
				outtextxy(120, 30, "Go Over");
				common(548, 420, 25, "����", 120, 120, 120);
				common(90, 130, 40, "CET.4", 190, 190, 190);
				common(90, 200, 40, "CET.6", 190, 190, 190);
				break;
			}
		}
		else
		{
			depart(300, 260, 25, "����", 120, 120, 120, 220, 220, 220);
		}
	}
}

void Iback(void)
{
	setfillcolor(RGB(220, 220, 220));
	setlinecolor(RGB(174, 238, 238));
	fillrectangle(160, 180, 480, 300);
	setfillcolor(WHITE);
	fillrectangle(160, 180, 480, 200);
	settextstyle(30, 0, _T("�ź�ɽ��������"));
	settextcolor(RGB(190, 190, 190));
	outtextxy(180, 220, "�����ѱ���!");
	common(300, 260, 25, "����", 120, 120, 120);
	MOUSEMSG g;
	while (1)
	{
		g = GetMouseMsg();
		if (g.x >= 280 && g.x <= 350 && g.y >= 260 && g.y <= 285) {
			contact(300, 260, 25, "����", 60, 60, 60, 220, 220, 220);
			if (g.uMsg == WM_LBUTTONUP)
			{
				cleardevice();
				setfillcolor(RGB(150, 205, 205));
				solidrectangle(500, 0, 640, 480);
				settextstyle(60, 0, _T("A Scratch"));
				settextcolor(RGB(150, 150, 150));
				outtextxy(120, 30, "Go Over");
				common(548, 420, 25, "����", 120, 120, 120);
				common(90, 130, 40, "CET.4", 190, 190, 190);
				common(90, 200, 40, "CET.6", 190, 190, 190);
				break;
			}
		}
		else
		{
			depart(300, 260, 25, "����", 120, 120, 120, 220, 220, 220);
		}
	}
}

void Dback(bool flag)
{
	setfillcolor(RGB(220, 220, 220));
	setlinecolor(RGB(174, 238, 238));
	fillrectangle(160, 180, 480, 300);
	setfillcolor(WHITE);
	fillrectangle(160, 180, 480, 200);
	settextstyle(30, 0, _T("�ź�ɽ��������"));
	settextcolor(RGB(190, 190, 190));
	if (flag)
		outtextxy(180, 220, "��ʱû��ҪĬд�ĵ���!");
	else
		outtextxy(180, 220, "����ȫ��Ĭд���!");
	common(300, 260, 25, "����", 120, 120, 120);
	MOUSEMSG g;
	while (1)
	{
		g = GetMouseMsg();
		if (g.x >= 280 && g.x <= 350 && g.y >= 260 && g.y <= 285) {
			contact(300, 260, 25, "����", 60, 60, 60, 220, 220, 220);
			if (g.uMsg == WM_LBUTTONUP)
			{
				cleardevice();
				setfillcolor(RGB(150, 205, 205));
				solidrectangle(500, 0, 640, 480);
				settextstyle(60, 0, _T("A Scratch"));
				settextcolor(RGB(150, 150, 150));
				outtextxy(120, 30, "Dictation");
				common(548, 420, 25, "����", 120, 120, 120);
				common(90, 130, 40, "CET.4", 190, 190, 190);
				common(90, 200, 40, "CET.6", 190, 190, 190);
				break;
			}
		}
		else
		{
			depart(300, 260, 25, "����", 120, 120, 120, 220, 220, 220);
		}
	}
}

void Cback(void)
{
	setfillcolor(RGB(220, 220, 220));
	setlinecolor(RGB(174, 238, 238));
	fillrectangle(160, 180, 480, 300);
	setfillcolor(WHITE);
	fillrectangle(160, 180, 480, 200);
	settextstyle(30, 0, _T("�ź�ɽ��������"));
	settextcolor(RGB(190, 190, 190));
	outtextxy(180, 220, "���óɹ�!");
	common(300, 260, 25, "����", 120, 120, 120);
	MOUSEMSG g;
	while (1)
	{
		g = GetMouseMsg();
		if (g.x >= 280 && g.x <= 350 && g.y >= 260 && g.y <= 285) {
			contact(300, 260, 25, "����", 60, 60, 60, 220, 220, 220);
			if (g.uMsg == WM_LBUTTONUP)
			{
				cleardevice();
				setfillcolor(RGB(150, 205, 205));
				solidrectangle(500, 0, 640, 480);
				settextstyle(60, 0, _T("A Scratch"));
				settextcolor(RGB(150, 150, 150));
				outtextxy(100, 30, "REVIEW");
				settextstyle(40, 0, "�ź�ɽ��������");
				depart(90, 130, 40, "��ϰ", 190, 190, 190, 255, 255, 255);
				depart(90, 200, 40, "Ĭд", 190, 190, 190, 255, 255, 255);
				depart(60, 380, 25, "�����ļ�����״̬", 190, 190, 190, 255, 255, 255);
				depart(60, 420, 25, "������������״̬", 190, 190, 190, 255, 255, 255);
				depart(548, 420, 25, "����", 120, 120, 120, 150, 205, 205);
				break;
			}
		}
		else
		{
			depart(300, 260, 25, "����", 120, 120, 120, 220, 220, 220);
		}
	}
}

void Winterface(int i,NWord L)
{
	BeginBatchDraw();
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
	setfillcolor(WHITE);
	solidrectangle(80, 10, 349, 50);
	setfillcolor(RGB(142, 229, 238));
	solidrectangle(350, 10, 420, 50);
	settextstyle(20, 0, _T("רҵ������Ʒ���/WWW.ZTSGC.COM/"));
	settextcolor(RGB(120, 120, 120));
	outtextxy(360, 20, "search");
	settextstyle(30, 0, _T("רҵ������Ʒ���/WWW.ZTSGC.COM/"));
	outtextxy(40, 65 + (i % 8) * 45, PlaceForWord(i + 1, L)->english);
	outtextxy(40, 65 + ((i + 1) % 8) * 45, PlaceForWord(i + 2, L)->english);
	outtextxy(40, 65 + ((i + 2) % 8) * 45, PlaceForWord(i + 3, L)->english);
	outtextxy(40, 65 + ((i + 3) % 8) * 45, PlaceForWord(i + 4, L)->english);
	outtextxy(40, 65 + ((i + 4) % 8) * 45, PlaceForWord(i + 5, L)->english);
	outtextxy(40, 65 + ((i + 5) % 8) * 45, PlaceForWord(i + 6, L)->english);
	outtextxy(40, 65 + ((i + 6) % 8) * 45, PlaceForWord(i + 7, L)->english);
	outtextxy(40, 65 + ((i + 7) % 8) * 45, PlaceForWord(i + 8, L)->english);
	if (L->length > 3000) {
		if (i + 1 <= 4615)common(400, 70 + (i % 8) * 45, 25, "����", 120, 120, 120);
		if (i + 2 <= 4615)common(400, 70 + ((i + 1) % 8) * 45, 25, "����", 120, 120, 120);
		if (i + 3 <= 4615)common(400, 70 + ((i + 2) % 8) * 45, 25, "����", 120, 120, 120);
		if (i + 4 <= 4615)common(400, 70 + ((i + 3) % 8) * 45, 25, "����", 120, 120, 120);
		if (i + 5 <= 4615)common(400, 70 + ((i + 4) % 8) * 45, 25, "����", 120, 120, 120);
		if (i + 6 <= 4615)common(400, 70 + ((i + 5) % 8) * 45, 25, "����", 120, 120, 120);
		if (i + 7 <= 4615)common(400, 70 + ((i + 6) % 8) * 45, 25, "����", 120, 120, 120);
		if (i + 8 <= 4615)common(400, 70 + ((i + 7) % 8) * 45, 25, "����", 120, 120, 120);
	}
	else {
		if (i + 1 <= 2089)common(400, 70 + (i % 8) * 45, 25, "����", 120, 120, 120);
		if (i + 2 <= 2089)common(400, 70 + ((i + 1) % 8) * 45, 25, "����", 120, 120, 120);
		if (i + 3 <= 2089)common(400, 70 + ((i + 2) % 8) * 45, 25, "����", 120, 120, 120);
		if (i + 4 <= 2089)common(400, 70 + ((i + 3) % 8) * 45, 25, "����", 120, 120, 120);
		if (i + 5 <= 2089)common(400, 70 + ((i + 4) % 8) * 45, 25, "����", 120, 120, 120);
		if (i + 6 <= 2089)common(400, 70 + ((i + 5) % 8) * 45, 25, "����", 120, 120, 120);
		if (i + 7 <= 2089)common(400, 70 + ((i + 6) % 8) * 45, 25, "����", 120, 120, 120);
		if (i + 8 <= 2089)common(400, 70 + ((i + 7) % 8) * 45, 25, "����", 120, 120, 120);
	}
	common(548, 420, 25, "����", 120, 120, 120);
	common(548, 300, 25, "��ת", 120, 120, 120);
	depart(50, 440, 25, "��һҳ", 190, 190, 190, 255, 255, 255);
	depart(370, 440, 25, "��һҳ", 190, 190, 190, 255, 255, 255);
	settextstyle(25, 0, _T("רҵ������Ʒ���/WWW.ZTSGC.COM/"));
	settextcolor(RGB(60, 60, 60));
	outtextxy(195, 440, "��         ҳ");
	outtextxy(230, 440, (i / 8 + 1) / 100 % 10 + '0');
	outtextxy(240, 440, (i / 8 + 1) / 10 % 10 + '0');
	outtextxy(250, 440, (i / 8 + 1) % 10 + '0');
	EndBatchDraw();
}

void detail(int i,NWord L,const char *ch)
{
	cleardevice();
	cleardevice();
	setfillcolor(RGB(150, 205, 205));
	solidrectangle(500, 0, 640, 480);
	setfillcolor(RGB(187, 255, 255));
	solidrectangle(0, 120, 499, 480);
	settextstyle(60, 0, "רҵ������Ʒ���/WWW.ZTSGC.COM/");
	settextcolor(RGB(100, 100, 100));
	outtextxy(40, 38, PlaceForWord(i, L)->english);
	common(548, 420, 25, "����", 120, 120, 120);
	common(530, 150, 20, "��Ϊ����ʶ", 120, 120, 120);
	common(535, 210, 20, "��Ϊ��ʶ", 120, 120, 120);
	common(535, 270, 20, "��Ϊ��Ϥ", 120, 120, 120);
	common(535, 330, 20, "��Ϊ����", 120, 120, 120);
	settextstyle(40, 0, "רҵ������Ʒ���/WWW.ZTSGC.COM/");
	outtextxy(40, 140, PlaceForWord(i, L)->china);
	settextstyle(50, 0, "�ź�ɽ��������");
	settextcolor(RGB(100, 100, 100));
	if (PlaceForWord(i, L)->status == UNKNOWN)
		outtextxy(120, 400, "��ǰ:����ʶ");
	else if(PlaceForWord(i,L)->status==KNOWN|| PlaceForWord(i, L)->status == KNOWNM|| PlaceForWord(i, L)->status == KNOWNMM)
		outtextxy(120, 400, "��ǰ:��ʶ");
	else if (PlaceForWord(i, L)->status == FAMILIAR)
		outtextxy(120, 400, "��ǰ:��Ϥ");
	else if (PlaceForWord(i, L)->status == GRASP)
		outtextxy(120, 400, "��ǰ:����");
	else if(PlaceForWord(i, L)->status == NEVER)
		outtextxy(120, 400, "��ǰ:δ����");
	MOUSEMSG p;
	while (1) {
		p = GetMouseMsg();
        if ((p.x >= 505 && p.x <= 620) && (p.y >= 150 && p.y <= 170))
		{
			contact(530, 150, 20, "��Ϊ����ʶ", 60, 60, 60, 150, 205, 205);
			if (p.uMsg == WM_LBUTTONUP) {
				if (PlaceForWord(i, L)->status == UNKNOWN)
					continue;
				BeginBatchDraw();
				settextstyle(50, 0, "�ź�ɽ��������");
				settextcolor(RGB(187, 255, 255));
				if (PlaceForWord(i, L)->status == KNOWN || PlaceForWord(i, L)->status == KNOWNM || PlaceForWord(i, L)->status == KNOWNMM)
					outtextxy(120, 400, "��ǰ:��ʶ");
				else if (PlaceForWord(i, L)->status == FAMILIAR)
					outtextxy(120, 400, "��ǰ:��Ϥ");
				else if (PlaceForWord(i, L)->status == GRASP)
					outtextxy(120, 400, "��ǰ:����");
				else if (PlaceForWord(i, L)->status == NEVER)
					outtextxy(120, 400, "��ǰ:δ����");
				Rewrite(i, L, UNKNOWN, ch);
				settextcolor(RGB(100, 100, 100));
				outtextxy(120, 400, "��ǰ:����ʶ");
				EndBatchDraw();
			}
		}
		else if ((p.x >= 510 && p.x <= 620) && (p.y >= 210 && p.y <= 230))
		{
			contact(535, 210, 20, "��Ϊ��ʶ", 60, 60, 60, 150, 205, 205);
			if (p.uMsg == WM_LBUTTONUP) {
				if (PlaceForWord(i, L)->status == KNOWN || PlaceForWord(i, L)->status == KNOWNM || PlaceForWord(i, L)->status == KNOWNMM)
					continue;
				BeginBatchDraw();
				settextstyle(50, 0, "�ź�ɽ��������");
				settextcolor(RGB(187, 255, 255));
				if (PlaceForWord(i, L)->status == UNKNOWN)
					outtextxy(120, 400, "��ǰ:����ʶ");
				else if (PlaceForWord(i, L)->status == FAMILIAR)
					outtextxy(120, 400, "��ǰ:��Ϥ");
				else if (PlaceForWord(i, L)->status == GRASP)
					outtextxy(120, 400, "��ǰ:����");
				else if (PlaceForWord(i, L)->status == NEVER)
					outtextxy(120, 400, "��ǰ:δ����");
				Rewrite(i, L, KNOWN, ch);
				settextcolor(RGB(100, 100, 100));
				outtextxy(120, 400, "��ǰ:��ʶ");
				EndBatchDraw();
			}
		}
		else if ((p.x >= 510 && p.x <= 620) && (p.y >= 270 && p.y <= 290))
		{
			contact(535, 270, 20, "��Ϊ��Ϥ", 60, 60, 60, 150, 205, 205);
			if (p.uMsg == WM_LBUTTONUP) {
				if (PlaceForWord(i, L)->status == FAMILIAR)
					continue;
				BeginBatchDraw();
				settextstyle(50, 0, "�ź�ɽ��������");
				settextcolor(RGB(187, 255, 255));
				if (PlaceForWord(i, L)->status == KNOWN || PlaceForWord(i, L)->status == KNOWNM || PlaceForWord(i, L)->status == KNOWNMM)
					outtextxy(120, 400, "��ǰ:��ʶ");
				else if (PlaceForWord(i, L)->status == UNKNOWN)
					outtextxy(120, 400, "��ǰ:����ʶ");
				else if (PlaceForWord(i, L)->status == GRASP)
					outtextxy(120, 400, "��ǰ:����");
				else if (PlaceForWord(i, L)->status == NEVER)
					outtextxy(120, 400, "��ǰ:δ����");
				Rewrite(i, L, FAMILIAR, ch);
				settextcolor(RGB(100, 100, 100));
				outtextxy(120, 400, "��ǰ:��Ϥ");
				EndBatchDraw();
			}
		}
		else if ((p.x >= 510 && p.x <= 620) && (p.y >= 330 && p.y <= 350))
		{
			contact(535, 330, 20, "��Ϊ����", 60, 60, 60, 150, 205, 205);
			if (p.uMsg == WM_LBUTTONUP) {
				if (PlaceForWord(i, L)->status == GRASP)
					continue;
				BeginBatchDraw();
				settextstyle(50, 0, "�ź�ɽ��������");
				settextcolor(RGB(187,255,255));
				if (PlaceForWord(i, L)->status == KNOWN || PlaceForWord(i, L)->status == KNOWNM || PlaceForWord(i, L)->status == KNOWNMM)
					outtextxy(120, 400, "��ǰ:��ʶ");
				else if (PlaceForWord(i, L)->status == FAMILIAR)
					outtextxy(120, 400, "��ǰ:��Ϥ");
				else if (PlaceForWord(i, L)->status == UNKNOWN)
					outtextxy(120, 400, "��ǰ:����ʶ");
				else if (PlaceForWord(i, L)->status == NEVER)
					outtextxy(120, 400, "��ǰ:δ����");
				Rewrite(i, L, GRASP, ch);
				settextcolor(RGB(100, 100, 100));
				outtextxy(120, 400, "��ǰ:����");
				EndBatchDraw();
			}
		}
		else if ((p.x >= 520 && p.x <= 615) && (p.y >= 420 && p.y <= 445))
		{
			contact(548, 420, 25, "����", 60, 60, 60, 150, 205, 205);
			if (p.uMsg == WM_LBUTTONUP) {
				cleardevice();
				Winterface(((i-1) / 8) * 8, L);
				break;
			}
		}
		else
		{
			settextstyle(60, 0, "רҵ������Ʒ���/WWW.ZTSGC.COM/");
			settextcolor(RGB(100, 100, 100));
			outtextxy(40, 38, PlaceForWord(i, L)->english);
			settextstyle(40, 0, "רҵ������Ʒ���/WWW.ZTSGC.COM/");
			settextcolor(RGB(100, 100, 100));
			outtextxy(40, 140, PlaceForWord(i, L)->china);
			depart(548, 420, 25, "����", 120, 120, 120, 150, 205, 205);
			depart(530, 150, 20, "��Ϊ����ʶ", 120, 120, 120, 150, 205, 205);
			depart(535, 210, 20, "��Ϊ��ʶ", 120, 120, 120, 150, 205, 205);
			depart(535, 270, 20, "��Ϊ��Ϥ", 120, 120, 120, 150, 205, 205);
			depart(535, 330, 20, "��Ϊ����", 120, 120, 120, 150, 205, 205);
			settextstyle(50, 0, "�ź�ɽ��������");
			settextcolor(RGB(100, 100, 100));
			if (PlaceForWord(i, L)->status == UNKNOWN)
				outtextxy(120, 400, "��ǰ:����ʶ");
			else if (PlaceForWord(i, L)->status == KNOWN || PlaceForWord(i, L)->status == KNOWNM || PlaceForWord(i, L)->status == KNOWNMM)
				outtextxy(120, 400, "��ǰ:��ʶ");
			else if (PlaceForWord(i, L)->status == FAMILIAR)
				outtextxy(120, 400, "��ǰ:��Ϥ");
			else if (PlaceForWord(i, L)->status == GRASP)
				outtextxy(120, 400, "��ǰ:����");
			else if (PlaceForWord(i, L)->status == NEVER)
				outtextxy(120, 400, "��ǰ:δ����");
		}
	}
}