#ifndef TContour_HH
#define TContour_HH
#pragma once
#include <stdio.h>
#include <vector>
#include "Point.h"
#include "DataBaseStructure.h"

using namespace System::Drawing;
using namespace std;


class TContour {

private:
	vector <T_Point> *VectorPoints;              // вектор точек
	int NumPoints;                              // количество точек в контуре
	char TypeContour;                           // тип контура (0 - внешний контур, 1 - внутренний контур)
	T_Point minXY;                               // минимальная точка
	T_Point maxXY;                               // максимальная точка
	short Class;                                // класс

public:
	TContour();
	TContour(char typecontour);
	~TContour();
	TContour(const TContour &bj);
	// добавление точки в контур
	void AddPoint(T_Point *point);
	void AddPoint(int x, int y);
	// проверка на нахождении точки в контуре
	bool CheckPointInContour(T_Point *point);
	// удаление точки
	int DeletePoint(int x, int y);
	// проверка на пустоту контура
	bool isEmpty();
	// определяет, является ли контур внешним 
	bool isExternalContour();
	void DrawContour(Graphics ^gr, int Height);
	// возврвщает количество точек в контуре
	int GetNumPoints();
	// возврвщает точки контура по координате x
	int GeT_PointsX(int *pX);
	// возврвщает точки контура по координате y
	int GeT_PointsY(int *pY);
	// возврвщает точки контура по координате x и y
	int GeT_PointsXY(int *pXY);
	// возвращает точку
	T_Point GeT_Point(int nPoint);
	// возвращает тип контура
	char GetTypeContour();
	// перевод в математические координаты
	void ToMathCoord(int height);
	// нахождение min по координате x и y
	T_Point FindMinXY();
	// нахождение max по координате x и y
	T_Point FindMaxXY();
	// приведение к местной системе координат
	void ToLocalSysCoord();
	// запись контура в файл (эталонов)
	int WriteContour(FILE *pHeaderFile);
};
#endif
