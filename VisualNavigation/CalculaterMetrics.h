#pragma once
#ifndef ContourModel_HH
#define ContourModel_HH
#pragma once
#include "Scene.h"
#include "Contour.h"
// ������� ������� ������������� ��������
void FindListContour(TShtrihPicture *shtrpic, TScene *SceneIn);
// ������������� �������� �������
void FindExternalContour(TShtrihPicture *shtrpic, TContour *extcontour, int NumStr, int NumShtr);
// ������������� ����������� �������
void FindInternalContour(TShtrihPicture *shtrpic, TContour *intercontour, int NumStr, int NumShtr);
// �������� �� ���������� ����� � ������ ��������
bool CheckPointInListContour(TScene *wSceneIn, int x, int y);


int AutoRecognition(TScene *SceneIn, char NameFileEtalon[], long *AllKmpObj, double stepxin, double stepyin, bool useKmpObj);
int Save_KML(char* sFileNameEtal, char* sFileNameKM, double stepxin, double stepyin);
#endif