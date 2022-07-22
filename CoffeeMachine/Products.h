#pragma once

//����� ���������� �� �������� � ����������
class Products 
{
private:
	int milk;
	int coffee;
	int water;
	int sugar;

public:

	//�����������, ������� ��������� ���������� ���� ��������� � ��������
	Products(int milk, int coffee, int water, int sugar) 
	{
		this->milk = milk;
		this->coffee = coffee;
		this->water = water;
		this->sugar = sugar;
	}

	//����������� �� ���������
	Products() 
	{
		this->milk = 0;
		this->coffee = 0;
		this->water = 0;
		this->sugar = 0;
	}

	~Products()
	{
		//����������
	}

	//������ ������ ���� ����� ������
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
//�������� ������� ������
Products amountOfProducts(10, 10, 10, 10);