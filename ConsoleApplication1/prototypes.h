#pragma once

//Commun functions
void onedim();

//One Dimention Array
int minEL(int* Arr, int size);
int sum(int* Arr, int size);
//void ZeroCoor(int*, int*, int);
//void convertarr(int*, int*, int);
//void CooroftheMinEl(int*, int*, int);
int NumofMinEl(int* Arr, int size);
bool CheckArr2(int* Arr, int size);
int* CheckArr3(const int* Arr, int size, int& outSize);

int* findMinIndexes(const int* Arr, int size, int& outSize);
//int* findZeroCoor(const int*, int, int&);
int* convertarr1(int* Arr, int size);
//Two Dimention Array

void twoDimArrMenu();
void FillArr(int& count, int n, float** a);
void DisplayArr(int n, float** a);

void LocalMin(int n, float** a);
bool CheckMin(int i, int j, float** a, int n);
int AbsSum(int n, float** a);

bool CheckArr(int a);

//Char array

int charAr();
bool isVowel(char ch);