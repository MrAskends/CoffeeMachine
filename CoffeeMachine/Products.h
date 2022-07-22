#pragma once

//Класс отвечающий за продукты в кофемашине
class Products 
{
private:
	int milk;
	int coffee;
	int water;
	int sugar;

public:

	//Конструктор, который принимает количество всех продуктов в автомате
	Products(int milk, int coffee, int water, int sugar) 
	{
		this->milk = milk;
		this->coffee = coffee;
		this->water = water;
		this->sugar = sugar;
	}

	//Конструктор по умолчанию
	Products() 
	{
		this->milk = 0;
		this->coffee = 0;
		this->water = 0;
		this->sugar = 0;
	}

	~Products()
	{
		//Деструктор
	}

	//Гетеры сетеры всех полей класса
	int GetMilk()
	{
		return milk;
	}

	void SetMilk(int milk)
	{
		this->milk = milk;
	}

	int GetCoffee()
	{
		return coffee;
	}

	void SetCoffee(int coffee)
	{
		this->coffee = coffee;
	}

	int GetWater()
	{
		return water;
	}

	void SetWater(int water)
	{
		this->water = water;
	}

	int GetSugar()
	{
		return sugar;
	}

	void SetSugar(int sugar)
	{
		this->sugar = sugar;
	}

};
//Создание объекта класса
Products amountOfProducts(10, 10, 10, 10);