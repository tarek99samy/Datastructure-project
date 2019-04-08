#include "Motorcycle.h"


Motorcycle::Motorcycle()
{
}

Motorcycle::Motorcycle(int sp, REGION rg, STATUS s = IDLE):speed(sp),region(rg),status(s){}

int Motorcycle::GetID()
{
	return ID;
}

int Motorcycle::GetSpeed()
{
	return speed;
}

REGION Motorcycle::GetRegion()
{
	return region;
}

STATUS Motorcycle::GetStatus()
{
	return status;
}

ORD_TYPE Motorcycle::GetType()
{
	return type;
}

void Motorcycle::setID(int id){
	ID = id;
}

void Motorcycle::setType(ORD_TYPE  typ){
	type = typ;
}

void Motorcycle::setStatus(STATUS  st){
	status = st;
}


Motorcycle::~Motorcycle()
{
}
