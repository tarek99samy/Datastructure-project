#include "Event.h"
#include "../Rest/Restaurant.h"
#include "../Rest/Order.h"

//template <class T> 
class CancelationEvent : public Event		// X
{
	int ID;

public : 

	CancelationEvent (int eTime, int oID) ;

	virtual void Execute(Restaurant* pRest);

};

CancelationEvent :: CancelationEvent (int eTime, int oID ) : Event (eTime , oID) 
{ID = oID;}


void CancelationEvent :: Execute(Restaurant* pRest){

	bool Canceled = false;
	

	/////***************************************A***********************************

	Order * front = pRest->PeekNormalQueueA();
	Order * current;

	if(front->GetID() == ID){
		pRest->DequeueNormalQueueA();
		return;
	}
	
	do{

		current = pRest->DequeueNormalQueueA();

		if(current->GetID() != ID) pRest->AddtoNormalQueueA(current);
		else Canceled = true;

	}while(pRest->PeekNormalQueueA() != front);
	
	if(Canceled) return;




	/////***************************************B***********************************

	front = pRest->PeekNormalQueueB();

	if(front->GetID() == ID){
		pRest->DequeueNormalQueueB();
		return;
	}
	
	do{

		current = pRest->DequeueNormalQueueB();

		if(current->GetID() != ID) pRest->AddtoNormalQueueB(current);
		else Canceled = true;

	}while(pRest->PeekNormalQueueB() != front);
	
	if(Canceled) return;

	
	/////***************************************C***********************************

	Order * front = pRest->PeekNormalQueueC();
	Order * current;

	if(front->GetID() == ID){
		pRest->DequeueNormalQueueC();
		return;
	}
	
	do{

		current = pRest->DequeueNormalQueueC();

		if(current->GetID() != ID) pRest->AddtoNormalQueueC(current);
		else Canceled = true;

	}while(pRest->PeekNormalQueueC() != front);
	
	if(Canceled) return;

	
	/////***************************************D***********************************

	Order * front = pRest->PeekNormalQueueD();
	Order * current;

	if(front->GetID() == ID){
		pRest->DequeueNormalQueueD();
		return;
	}
	
	do{

		current = pRest->DequeueNormalQueueD();

		if(current->GetID() != ID) pRest->AddtoNormalQueueD(current);
		else Canceled = true;

	}while(pRest->PeekNormalQueueD() != front);
	
}

