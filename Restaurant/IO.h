#pragma once
#include<string>
#include"Rest/Restaurant.h"
#include"Events/ArrivalEvent.h"
#include"Events/CancelationEvent.h"
#include"Events/PromotionEvent.h"
#include"Rest/Motorcycle.h"
#include"Defs.h"
//#include"GUI/GUI.h"
class GUI;
class Io{
private:
	string FileName;
	Restaurant* pRest;
	GUI* pGUI;
	ifstream fileIN;
	ofstream fileOUT;
public:
	Io(Restaurant* pR, GUI* pG);
	void load();
	void print(); //phase 2...
	~Io();

};
