#pragma once
#define NEVER 0
#define UNKNOWN 1
#define KNOWN 2
#define KNOWNM 3
#define KNOWNMM 4
#define FAMILIAR 5
#define GRASP 6
struct Word {
	char english[20];
	char china[60];
	int status;
};
struct sqlist {
	struct Word word[4700];
	int length;
};
typedef struct sqlist*NWord;
void CreateWordList(const char*ch,const char*ch2,NWord &L);
struct Word* PlaceForWord(int i, NWord L);
void Rewrite(int i, NWord L, int o,const char*ch2);
void Reset(const char *ch2);
void Winterface(int i, NWord L);
void detail(int i, NWord L, const char *ch);