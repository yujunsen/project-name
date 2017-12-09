/*
	FileName	:SimpleFactory
	Author		:Yu 
	Date		:2017/9/22
	from 		:More information, please go to http://www.jellythink.com
*/

#include <iostream>
//#include <vector>
using namespace std;

typedef enum ProductTypeTag
{
	TypeA,
	TypeB,
	TypeC
}PRDUCTTYPE;

//Here is the product class
class Product
{
public:
	virtual void Show() = 0;
};

class ProductA: public Product
{
public:
	void Show()
	{
		cout << "I'm ProductA" << endl;
	}
};

class ProductB: public Product
{
public:
	void Show()
	{
		cout << "I'm ProductB" << endl;
	}
};

class ProductC: public Product
{
public:
	void Show()
	{
		cout << "I'm ProductC" << endl;
	}
};

// Here is the Factory class
class Factory
{
public:
	Product* CreateProduct(PRDUCTTYPE type)
	{
		switch(type)
		{
			case TypeA:
				return new ProductA;
			case TypeB:
				return new ProductB;
			case TypeC:
				return new ProductC;
			default:
				return NULL;
		}
	}
};

int main()
{
	// First, create a factory object
	Factory *ProductFactory = new Factory();
	
	Product *productObjectA = ProductFactory->CreateProduct(TypeA);
	if(productObjectA != NULL)
		productObjectA->Show();
	
	Product *productObjectB = ProductFactory->CreateProduct(TypeB);
	if(productObjectB != NULL)
		productObjectB->Show();
	
	Product *productObjectC = ProductFactory->CreateProduct(TypeC);
	if(productObjectC != NULL)
		productObjectC->Show();
	
	delete ProductFactory;
	ProductFactory = NULL;
	
	delete productObjectA;
	productObjectA = NULL;
	
	delete productObjectB;
	productObjectB = NULL;
	
	delete productObjectC;
	productObjectC = NULL;
	
	return 0;
}