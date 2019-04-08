#include "Order.h"
#include <type_traits>

Order::Order(int id, ORD_TYPE r_Type, REGION r_region)
{
	ID = (id>0&&id<1000)?id:0;	//1<ID<999
	type = r_Type;
	Region = r_region;	
	if (r_Type == TYPE_VIP)priority = 10000 + totalMoney  +  ArrTime  -  Distance ;
	else priority = ArrTime ;
}

Order::~Order()
{
}

int Order::GetID()
{
	return ID;
}


int Order::GetType() const
{
	return type;
}

REGION Order::GetRegion() const
{
	return Region;
}

void Order::SetDistance(int d)
{
	Distance = d>0?d:0;
}

bool Order ::  operator <  (const  Order o)
{
	if ( (o.priority) > (priority) ) return 1 ;
	else return 0 ;
}
void Order::SetMoney(double m){
	totalMoney = m;
}
int Order::GetMoney()
{
	return totalMoney;
}
int Order::GetArrTime()
{
	return ArrTime;
}
bool Order ::  operator >  (const  Order o)
{
	if ( (o.totalMoney+o.ArrTime-o.Distance) < (totalMoney+ArrTime-Distance) ) return 1 ;
	else return 0 ;
}
bool Order ::  operator == (const  Order o)					
{
	if ( ((o.priority) == (priority)) || ID == o.ID ) return 1 ;		// true "ID" ?? 
	else return 0 ;
}
void Order ::  operator =  (const  Order o)
{
	ID = o.ID;       
	type = type;		
	Region = Region;  
	Distance = Distance;
	totalMoney =  totalMoney ;
	ArrTime = ArrTime ;
	ServTime = o.ServTime ;
	FinishTime = o.FinishTime ;
	priority = o.priority ;
}


int Order::GetDistance() const
{
	return Distance;
}
