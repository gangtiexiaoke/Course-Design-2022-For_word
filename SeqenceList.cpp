#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"SeqenceList.h"
void CreateWordList(const char*ch,const char *ch2, NWord &L)
{
	L->length = 0;
	errno_t err;
	FILE *fp, *fp1;
	err = fopen_s(&fp, ch, "r");
	if (err != 0)
	{
		printf("∂¡»Î ß∞‹");
		exit(0);
	}
	err = fopen_s(&fp1, ch2, "r");
	if (err != 0)
	{
		printf("∂¡»Î ß∞‹");
		exit(0);
	}
	while (1)
	{
		int i = 0;
		while (getc(fp) == ' ');
		fseek(fp, -1, SEEK_CUR);
		while ((L->word[L->length].english[i] = getc(fp)) != ' ')i++;
		L->word[L->length].english[i] = '\0';
		while (getc(fp) == ' ');
		fseek(fp, -1, SEEK_CUR);
		fgets(L->word[L->length].china, 60, fp);
		if (L->word[L->length].china[strlen(L->word[L->length].china) - 1] == '\n') {
			L->word[L->length].china[strlen(L->word[L->length].china) - 1] = '\0';
		}
		L->word[L->length].status = getc(fp1)-'0';
		getc(fp1);
		L->length++;
		if (feof(fp))break;
	}
	fclose(fp);
	fclose(fp1);
}

struct Word* PlaceForWord(int i, NWord L)
{
	return &L->word[i - 1];
}

void Rewrite(int i, NWord L, int o,const char *ch2)
{
	L->word[i - 1].status = o ;
	errno_t err;
	FILE *fp1, *temp;
	err = fopen_s(&fp1, ch2, "r+");
	if (err != 0)
	{
		printf("∂¡»Î ß∞‹");
		exit(0);
	}
	char ch[4615];
	for (int i = 0; i < 4615; i++)
	{
		ch[i] = getc(fp1);
		getc(fp1);
	}
	ch[i - 1] = o + '0';
	err = fopen_s(&temp, "temp.txt", "w");
	if (err != 0)
	{
		printf("∂¡»Î ß∞‹");
		exit(0);
	}
	for (int i = 0; i < 4615; i++)
	{
		putc(ch[i], temp);
		putc('\n', temp);
	}
	fclose(fp1);
	remove(ch2);
	fclose(temp);
	rename("temp.txt", ch2);
}

void Reset(const char *ch2)
{
	errno_t err;
	FILE  *temp,*fp1;
	err = fopen_s(&fp1, ch2, "r");
	if (err != 0)
	{
		printf("∂¡»Î ß∞‹");
		exit(0);
	}
	err = fopen_s(&temp, "temp.txt", "w");
	if (err != 0)
	{
		printf("∂¡»Î ß∞‹");
		exit(0);
	}
	if (ch2 == "µ•¥ ◊¥Ã¨4.txt") {
		for (int i = 0; i < 4615; i++)
		{
			putc('0', temp);
			putc('\n', temp);
		}
	}
	else {
		for (int i = 0; i < 2089; i++)
		{
			putc('0', temp);
			putc('\n', temp);
		}
	}
	fclose(fp1);
	remove(ch2);
	fclose(temp);
	rename("temp.txt", ch2);
}