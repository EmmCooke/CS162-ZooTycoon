/*************************************************
* Author: Emmet Cooke
* Date: 10/20/2017
* Description: This is the header file for the Tiger
* class.
*************************************************/
#ifndef TIGER_HPP
#define TIGER_HPP

#include "Animal.hpp"
class Tiger :
	public Animal
{
public:
	// Default Constructor
	Tiger();

	// Constructor that takes one int
	// Initializes an bought adult tiger
	Tiger(int ageIn);
	
	// Destructor
	~Tiger();

	// Getters
	virtual int getNumBabies() { return numBabies; }
	virtual double getCost() { return cost; }
	virtual double getBaseFoodCost() { return baseFoodCost; }
	virtual double getPayoff() { return payoff; }

	// Setters
	virtual void setNumBabies(int babiesIn) { numBabies = babiesIn; }
	virtual void setCost(double costIn) { cost = costIn; }
	virtual void setBaseFoodCost(double foodCostIn) { baseFoodCost = foodCostIn; }
	virtual void setPayoff(double payoffIn) { payoff = payoffIn; }

	// Increase age
	Tiger operator+(int);
};

#endif