#pragma once
#include<iostream>
#include "Products.h"

//����������� ����� ����
class Coffee 
{
public:
	//����������� �����
	virtual void makeCoffee(int sugar) = 0;
};

//�����, ������������ ����� �������� - �����������
class Espresso : Coffee
{
public:
	//��������������� ������������ ������, ������������� ������
	void makeCoffee(int sugar) override
	{
		amountOfProducts.SetSugar(amountOfProducts.GetSugar() - sugar);
		amountOfProducts.SetCoffee(amountOfProducts.GetCoffee() - 2);
		amountOfProducts.SetWater(amountOfProducts.GetWater() - 1);
	}
};

class Americano : Coffee
{
public:
	void makeCoffee(int sugar) override
	{
		amountOfProducts.SetSugar(amountOfProducts.GetSugar() - sugar);
		amountOfProducts.SetCoffee(amountOfProducts.GetCoffee() - 2);
		amountOfProducts.SetWater(amountOfProducts.GetWater() - 2);
	}
};

class Latte : Coffee
{
public:
	void makeCoffee(int sugar) override
	{
		amountOfProducts.SetSugar(amountOfProducts.GetSugar() - sugar);
		amountOfProducts.SetCoffee(amountOfProducts.GetCoffee() - 1);
		amountOfProducts.SetWater(amountOfProducts.GetWater() - 1);
		amountOfProducts.SetMilk(amountOfProducts.GetMilk() - 2);
	}
};

class Cappuccino : Coffee
{
public:
	void makeCoffee(int sugar) override
	{
		amountOfProducts.SetSugar(amountOfProducts.GetSugar() - sugar);
		amountOfProducts.SetCoffee(amountOfProducts.GetCoffee() - 1);
		amountOfProducts.SetWater(amountOfProducts.GetWater() - 1);
		amountOfProducts.SetMilk(amountOfProducts.GetMilk() - 1);
	}
};

//�������� �������� ������
Espresso espresso;
Americano americano;
Latte latte;
Cappuccino cappuccino;