#ifndef __ORDER_H_
#define __ORDER_H_

#include "..\Defs.h"

class Order
{

protected:
	int ID;         //Each order has a unique ID (from 1 --> 999 )
	ORD_TYPE type;		//order type: Normal, Frozen, VIP
	REGION Region;  //Region of this order
	int Distance;	//The distance (in meters) between the order location and the resturant 
	                
	double totalMoney;	//Total order money
	double priority ;
	int ArrTime, ServTime, FinishTime;	//arrival, service start, and finish times
	
	
	//
	// TODO: Add More Data Members As Needed
	//

public:
	Order(int ID, ORD_TYPE r_Type, REGION r_region);
	virtual ~Order();

	int GetID();

	int GetType() const;
	REGION GetRegion() const;

	void SetDistance(int d);
	int GetDistance() const;

	void SetMoney (double m) ;													// mine
	int  GetMoney () ;															// mine
	int  GetArrTime () ;														// mine

	bool operator >  (Order) ;													// we will use it for VIP
	bool operator <  (Order) ; 													// we will use it for VIP
	bool operator == (Order) ; 													// we will use it for VIP
	void operator =  (Order) ; 													


	// TODO: Add More Member Functions As Needed
	//

};



#endif