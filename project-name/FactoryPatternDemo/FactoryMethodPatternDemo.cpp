/*
	FileName	:FactoryMethodPatternDemo
	Author		:Yu 
	Date		:2017/9/22
	from 		:More information, please go to http://www.jellythink.com
*/

#include <iostream>
using namespace std;

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
	virtual Product* CreateProduct() = 0;
};

class FactoryA : public Factory
{
public:
	Product *CreateProduct()
	{
		return new ProductA();
	}
};

class FactoryB : public Factory
{
public:
	Product *CreateProduct()
	{
		return new ProductB();
	}
};

class FactoryC : public Factory
{
public:
	Product *CreateProduct()
	{
		return new ProductC();
	}
};

int main(int argc, char *argv[])
{
	// First, create a factory object
	Factory *factoryA = new FactoryA ();
	Product *productObjectA = factoryA->CreateProduct();
	if(productObjectA != NULL)
		productObjectA->Show();
	
	Factory *factoryB = new FactoryB();
	Product *productObjectB = factoryB->CreateProduct();
	if(productObjectB != NULL)
		productObjectB->Show();
	
	Factory *factoryC = new FactoryC();
	Product *productObjectC = factoryC->CreateProduct();
	if(productObjectC != NULL)
		productObjectC->Show();
	
	
	if (factoryA != NULL)
	{
		delete factoryA;
		factoryA = NULL;
	}

	if (productObjectA != NULL)
	{
		delete productObjectA;
		productObjectA = NULL;
	}

	if (factoryB != NULL)
	{
		delete factoryB;
		factoryB = NULL;
	}

	if (productObjectB != NULL)
	{
		delete productObjectB;
		productObjectB = NULL;
	}
	
	if (factoryC != NULL)
	{
		delete factoryC;
		factoryC = NULL;
	}

	if (productObjectC != NULL)
	{
		delete productObjectC;
		productObjectC = NULL;
	}
	
	return 0;
}