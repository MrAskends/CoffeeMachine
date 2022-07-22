#pragma once

//����� ���������� �� ������ � ����������
class Money
{
private:
	//���� ������
	int amountOfHundreds;
	int amountOfFifties;
	int amountOfTens;
	int amountOfFives;
	int amountOfTwos;
	int amountOfOnes;
	int balance;

public:

	//������������, ������ ��������� ������� �������
	enum
	{
		costOfEspresso = 40,
		costOfAmericano = 60,
		costOfLatte = 85,
		costOfCappuccino = 99
	};

	//�����������, ������� ��������� ���������� ���� ����� ������� � ����� ������� ����� ��� � ��������
	Money(int amountOfHundreds, int amountOfFifties, int amountOfTens, int amountOfFives, int amountOfTwos, int amountOfOnes)
	{
		this->amountOfHundreds = amountOfHundreds;
		this->amountOfFifties = amountOfFifties;
		this->amountOfTens = amountOfTens;
		this->amountOfFives = amountOfFives;
		this->amountOfTwos = amountOfTwos;
		this->amountOfOnes = amountOfOnes;
		balance = 0;
	}

	//����������� �� ���������
	Money()
	{
		this->amountOfHundreds = 0;
		this->amountOfFifties = 0;
		this->amountOfTens = 0;
		this->amountOfFives = 0;
		this->amountOfTwos = 0;
		this->amountOfOnes = 0;
		this->balance = 0;
	}

	~Money()
	{
		//����������
	}

	//������ ������ ���� ����� ������
	int GetAmountOfHundreds()
	{
		return amountOfHundreds;
	}

	void SetAmountOfHundreds(int amountOfHundreds)
	{
		this->amountOfHundreds = amountOfHundreds;
	}

	int GetAmountOfFifties()
	{
		return amountOfFifties;
	}

	void SetAmountOfFifties(int amountOfFifties)
	{
		this->amountOfFifties = amountOfFifties;
	}

	int GetAmountOfTens()
	{
		return amountOfTens;
	}

	void SetAmountOfTens(int amountOfTens)
	{
		this->amountOfTens = amountOfTens;
	}

	int GetAmountOfFives()
	{
		return amountOfFives;
	}

	void SetAmountOfFives(int amountOfFives)
	{
		this->amountOfFives = amountOfFives;
	}

	int GetAmountOfTwos()
	{
		return amountOfTwos;
	}

	void SetAmountOfTwos(int amountOfTwos)
	{
		this->amountOfTwos = amountOfTwos;
	}

	int GetAmountOfOnes()
	{
		return amountOfOnes;
	}

	void SetAmountOfOnes(int amountOfOnes)
	{
		this->amountOfOnes = amountOfOnes;
	}

	int GetBalance()
	{
		return balance;
	}

	void SetBalance(int balance)
	{
		this->balance = balance;
	}
};

//�������� ������� ������
Money amountOfMoney(1, 2, 5, 5, 5, 10);