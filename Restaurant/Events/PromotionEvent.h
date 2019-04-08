#include "Event.h"


//template <class T> 
class PromotionEvent : public Event		// P
{
	int ExMoney	;				// Extra money the customer paid

public : 

	PromotionEvent (int eTime, int oID , int exMoney) ;

	virtual void Execute(Restaurant* pRest) {}

};

PromotionEvent :: PromotionEvent (int eTime, int oID , int exMoney) : Event (eTime , oID) 
{
	ExMoney = exMoney ;
}