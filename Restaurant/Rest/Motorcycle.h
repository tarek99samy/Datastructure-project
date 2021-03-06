#ifndef __MOTORCYCLE_H_
#define __MOTORCYCLE_H_


#include "..\Defs.h"

#pragma once
class Motorcycle	
{
	int ID;
	ORD_TYPE type;	//for each order type there is a corresponding motorcycle type 
	int speed;		//meters it can move in one clock tick (in one timestep)
	REGION	region;	//region of the motorcycle
	STATUS	status;	//idle or in-service

public:
	Motorcycle();
	Motorcycle(int sp, REGION rg, STATUS s=IDLE);
	int GetID();
	int GetSpeed();
	REGION GetRegion();
	STATUS GetStatus();
	ORD_TYPE GetType();
	void setID(int id);
	void setType(ORD_TYPE typ);
	void setStatus(STATUS st);
	virtual ~Motorcycle();
};

#endif