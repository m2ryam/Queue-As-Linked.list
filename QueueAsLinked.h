#include <iostream>
#include <assert.h>

template<class Type>
struct nodeType
{
	Type info;
	nodeType<Type>* link;
};

template<class Type>
class LinkedQueue
{
private:
	nodeType<Type>* queueFront;
	nodeType<Type>* queueRear;

public:
	bool isEmptyQueue();

	void destroyQueue();

	void initializeQueue();

	bool isFullQueue();
	Type front();
	void deQueue(Type& deqElement);

	Type back();
	void addQueue(const Type& newElement);
	LinkedQueue();
	~LinkedQueue();

	const LinkedQueue<Type>& operator= (const LinkedQueue<Type>&);

	LinkedQueue(const LinkedQueue<Type>& otherQueue);

};

template<class Type>
LinkedQueue<Type>::LinkedQueue()
{
	queueFront = NULL;

	queueRear = NULL;

}

template<class Type>

bool LinkedQueue<Type>::isEmptyQueue()
{
	return(queueFront == NULL);
}
template<class Type>

bool LinkedQueue<Type>::isFullQueue()

{
	return false;
}
template<class Type>

void LinkedQueue<Type>::destroyQueue()
{
	nodeType<Type> temp;

	while (queueFront != NULL)

	{

		temp = queueFront;

		queueFront = queueFront->link;

		delete temp;

	}

	queueRear = NULL;
}
template<class Type>
void LinkedQueue<Type>::initializeQueue()
{
	nodeType<Type>* temp;

	while (queueFront != NULL)
	{
		temp = queueFront;

		queueFront = queueFront->link;

		delete temp;
	}
	queueRear = NULL;

}

template<class Type>

Type LinkedQueue<Type>::front()
{
	assert(queueFront != NULL);
	return queueFront->info;
}
template<class Type>
Type LinkedQueue<Type>::back()
{
	assert(queueRear != NULL);
	return queueRear->info;
}
template<class Type>

void LinkedQueue<Type>::addQueue(const Type& newElement)
{
	nodeType<Type>* newNode;

	newNode = new nodeType<Type>;

	newNode->info = newElement;

	newNode->link = NULL;

	if (queueFront ==NULL)
	{
		queueFront = newNode;
		queueRear = newNode;

	}
	else
	{
		
		queueRear->link = newNode;
		queueRear = queueRear->link;
		

	}
}

template<class Type>

void LinkedQueue<Type>::deQueue(Type& deqElement)
{
	nodeType<Type>* temp;

	deqElement = queueFront->info;

	temp = queueFront;

	queueFront = queueFront->link;

	delete temp;

	if (queueFront == NULL)

		queueRear = NULL;
}
template<class Type>
LinkedQueue<Type>::~LinkedQueue()
{
	nodeType<Type>* temp;

	while (queueFront != NULL)
	{
		temp = queueFront;

		queueFront = queueFront->link;

		delete temp;

	}

	queueRear = NULL;
}

template<class Type>const LinkedQueue<Type>& LinkedQueue<Type>::operator= (const LinkedQueue<Type>& otherQueue)
{

}
template<class Type>
LinkedQueue<Type>::LinkedQueue(const LinkedQueue<Type>& otherQueue)
{

}
