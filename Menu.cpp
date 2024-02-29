#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include"Menu.h"
#include"SeqenceList.h"
#include"UI.h"
int main(void)
{
	
	initgraph(640, 480);
	setbkcolor(WHITE);
	setbkmode(TRANSPARENT);
	setfillcolor(WHITE);
	logo();
	menu(1);
	MOUSEMSG m;
	while (1) {
		m = GetMouseMsg();
		if (m.x >= 140 && m.x <= 317 && m.y >= 245 && m.y <= 270)
		{
			contact(160, 245, 25, "Start Recite", 100, 100, 100, 255, 255, 255);
			if (m.uMsg == WM_LBUTTONUP)
			{
				Recite();
			}
		}
		else if (m.x >= 175 & m.x <= 285 && m.y >= 280 & m.y <= 305)
		{
			contact(190, 280, 25, "Review", 100, 100, 100, 255, 255, 255);
			if (m.uMsg == WM_LBUTTONUP) {
				Review();
			}
		}
		else if (m.x >= 160 & m.x <= 300 && m.y >= 315 & m.y <= 340)
		{
			contact(180, 315, 25, "Word List", 100, 100, 100, 255, 255, 255);
			if (m.uMsg == WM_LBUTTONUP) {
				WordList();
			}
		}
		else if (m.x >= 170 & m.x <= 280 && m.y >= 350 & m.y <= 375)
		{
			contact(195, 350, 25, "About", 100, 100, 100, 255, 255, 255);
			if (m.uMsg == WM_LBUTTONUP) {
				About();
			}
		}
		else if (m.x >= 120 && m.x <= 335 && m.y >= 385 && m.y <= 410)
		{
			contact(140, 385, 25, "Quit To Desktop", 100, 100, 100, 255, 255, 255);
			if (m.uMsg == WM_LBUTTONUP) {
				closegraph();
				exit(0);
			}
		}
		else
		{
			depart(160, 245, 25, "Start Recite", 190, 190, 190, 255, 255, 255);
			depart(190, 280, 25, "Review", 190, 190, 190, 255, 255, 255);
			depart(180, 315, 25, "Word List", 190, 190, 190, 255, 255, 255);
			depart(195, 350, 25, "About", 190, 190, 190, 255, 255, 255);
			depart(140, 385, 25, "Quit To Desktop", 190, 190, 190, 255, 255, 255);
		}
	}
}

void menu(bool flag)
{
	logo();
	if (flag)
	{
		common(160, 245, 25, "Start Recite", 190, 190, 190);
		common(190, 280, 25, "Review", 190, 190, 190);
		common(180, 315, 25, "Word List", 190, 190, 190);
		common(195, 350, 25, "About", 190, 190, 190);
		common(140, 385, 25, "Quit To Desktop", 190, 190, 190);
	}
	else
	{
		depart(160, 245, 25, "Start Recite", 190, 190, 190, 255, 255, 255);
		depart(190, 280, 25, "Review", 190, 190, 190, 255, 255, 255);
		depart(180, 315, 25, "Word List", 190, 190, 190, 255, 255, 255);
		depart(195, 350, 25, "About", 190, 190, 190, 255, 255, 255);
		depart(140, 385, 25, "Quit To Desktop", 190, 190, 190, 255, 255, 255);
	}
}

