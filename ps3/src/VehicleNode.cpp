/* Name: Jacob Grendahl
 * NetID: jhgrendahl
 * Date: 2018-01-21
 * Project: ps3
 * File: VehicleNode.cpp
 */
 
/* Description: */
 
/* Libraries: */
 
/* Headers: */
#include "VehicleNode.h"

VehicleNode* VehicleNode::head = NULL;
bool VehicleNode::exist = false;

/*****************************************************************************/
/* Constructors and Destructors */
/*****************************************************************************/
VehicleNode::VehicleNode(VehicleNode* head, Vehicle* v)
{
	if (!exist)
	{
		head = this;
		next = NULL;
		prev = NULL;
		vehicle = v;
		exist = true;
	}

	else
	{
		this->next = head;
		head->prev = NULL;
		vehicle = v;
		this->head = this;
	}
}

VehicleNode::~VehicleNode()
{
	VehicleNode* temp = next;
	std::cout << "Destroying a VehicleNode Object" << std::endl;
	delete vehicle;
	if (this == head)
	{
		next->setPrev(NULL);
		setHead(this);
		delete vehicle;
	}	

	else
	{
		prev->setNext(next);
		temp->setPrev(prev);
		delete vehicle;
	}
}

/*****************************************************************************/
/* Getters */
/*****************************************************************************/
VehicleNode* VehicleNode::getHead()
{
	return head;
}

VehicleNode* VehicleNode::getPrev()
{
	return prev;
}

VehicleNode* VehicleNode::getNext()
{
	return next;
}

Vehicle* VehicleNode::getVehicle()
{
	return vehicle;
}

/*****************************************************************************/
/* Setters */
/*****************************************************************************/
void VehicleNode::setHead(VehicleNode* node)
{
	head = node;
}

void VehicleNode::setPrev(VehicleNode* prev)
{
	this->prev = prev;
}

void VehicleNode::setNext(VehicleNode* next)
{
	this->next = next;
}

/*****************************************************************************/
/* Other Methods */
/*****************************************************************************/
void VehicleNode::output(VehicleNode* head)
{
	VehicleNode* temp = head;

	while (temp != NULL)
	{
		temp->getVehicle()->output();
		temp = temp->getNext();
	}
}

void VehicleNode::showVehicles(VehicleNode* head)
{
	VehicleNode* temp = head;

	while (temp != NULL)
	{
		temp->getVehicle()->print();
		temp = temp->getNext();
	}
}