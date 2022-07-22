#pragma once

#include "Products.h"
#include "Money.h"
#include "Coffee.h"
namespace CoffeeMachine {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBoxMenu;
	private: System::Windows::Forms::Label^  labelLatte;
	protected:

	private: System::Windows::Forms::Label^  labelAmericano;
	private: System::Windows::Forms::Label^  labelEspresso;
	private: System::Windows::Forms::Button^  buttonMakeCappuccino;

	private: System::Windows::Forms::Label^  labelCappuccino;
	private: System::Windows::Forms::Button^  buttonMakeLatte;



	private: System::Windows::Forms::Button^  buttonMakeAmericano;

	private: System::Windows::Forms::Button^  buttonMakeEspresso;
	private: System::Windows::Forms::Button^  buttonRemoveSugar;
	private: System::Windows::Forms::Button^  buttonAddSugar;
	private: System::Windows::Forms::Label^  labelAmountOfSugar;


	private: System::Windows::Forms::Label^  labelBalance;
	private: System::Windows::Forms::Button^  buttonAddHundred;
	private: System::Windows::Forms::Button^  buttonAddTen;
	private: System::Windows::Forms::Button^  buttonAddFive;
	private: System::Windows::Forms::Button^  buttonAddFifty;
	private: System::Windows::Forms::Button^  buttonAddTwo;
	private: System::Windows::Forms::Button^  buttonAddOne;
	private: System::Windows::Forms::GroupBox^  groupBoxMoney;

	private: System::Windows::Forms::Button^  buttonTakeChange;
	private: System::Windows::Forms::Button^  buttonAmountOfProducts;
	private: System::Windows::Forms::Button^  buttonAmountOfMoney;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBoxMenu = (gcnew System::Windows::Forms::GroupBox());
			this->buttonAmountOfProducts = (gcnew System::Windows::Forms::Button());
			this->buttonRemoveSugar = (gcnew System::Windows::Forms::Button());
			this->buttonAddSugar = (gcnew System::Windows::Forms::Button());
			this->labelAmountOfSugar = (gcnew System::Windows::Forms::Label());
			this->buttonMakeCappuccino = (gcnew System::Windows::Forms::Button());
			this->labelCappuccino = (gcnew System::Windows::Forms::Label());
			this->buttonMakeLatte = (gcnew System::Windows::Forms::Button());
			this->buttonMakeAmericano = (gcnew System::Windows::Forms::Button());
			this->buttonMakeEspresso = (gcnew System::Windows::Forms::Button());
			this->labelLatte = (gcnew System::Windows::Forms::Label());
			this->labelAmericano = (gcnew System::Windows::Forms::Label());
			this->labelEspresso = (gcnew System::Windows::Forms::Label());
			this->labelBalance = (gcnew System::Windows::Forms::Label());
			this->buttonAddHundred = (gcnew System::Windows::Forms::Button());
			this->buttonAddTen = (gcnew System::Windows::Forms::Button());
			this->buttonAddFive = (gcnew System::Windows::Forms::Button());
			this->buttonAddFifty = (gcnew System::Windows::Forms::Button());
			this->buttonAddTwo = (gcnew System::Windows::Forms::Button());
			this->buttonAddOne = (gcnew System::Windows::Forms::Button());
			this->groupBoxMoney = (gcnew System::Windows::Forms::GroupBox());
			this->buttonAmountOfMoney = (gcnew System::Windows::Forms::Button());
			this->buttonTakeChange = (gcnew System::Windows::Forms::Button());
			this->groupBoxMenu->SuspendLayout();
			this->groupBoxMoney->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBoxMenu
			// 
			this->groupBoxMenu->Controls->Add(this->buttonAmountOfProducts);
			this->groupBoxMenu->Controls->Add(this->buttonRemoveSugar);
			this->groupBoxMenu->Controls->Add(this->buttonAddSugar);
			this->groupBoxMenu->Controls->Add(this->labelAmountOfSugar);
			this->groupBoxMenu->Controls->Add(this->buttonMakeCappuccino);
			this->groupBoxMenu->Controls->Add(this->labelCappuccino);
			this->groupBoxMenu->Controls->Add(this->buttonMakeLatte);
			this->groupBoxMenu->Controls->Add(this->buttonMakeAmericano);
			this->groupBoxMenu->Controls->Add(this->buttonMakeEspresso);
			this->groupBoxMenu->Controls->Add(this->labelLatte);
			this->groupBoxMenu->Controls->Add(this->labelAmericano);
			this->groupBoxMenu->Controls->Add(this->labelEspresso);
			this->groupBoxMenu->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBoxMenu->Location = System::Drawing::Point(12, 12);
			this->groupBoxMenu->Name = L"groupBoxMenu";
			this->groupBoxMenu->Size = System::Drawing::Size(224, 323);
			this->groupBoxMenu->TabIndex = 0;
			this->groupBoxMenu->TabStop = false;
			this->groupBoxMenu->Text = L"Выберите кофе";
			// 
			// buttonAmountOfProducts
			// 
			this->buttonAmountOfProducts->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAmountOfProducts->Location = System::Drawing::Point(24, 277);
			this->buttonAmountOfProducts->Name = L"buttonAmountOfProducts";
			this->buttonAmountOfProducts->Size = System::Drawing::Size(156, 31);
			this->buttonAmountOfProducts->TabIndex = 16;
			this->buttonAmountOfProducts->Text = L"Ингредиенты";
			this->buttonAmountOfProducts->UseVisualStyleBackColor = true;
			this->buttonAmountOfProducts->Click += gcnew System::EventHandler(this, &MyForm::buttonAmountOfProducts_Click);
			// 
			// buttonRemoveSugar
			// 
			this->buttonRemoveSugar->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonRemoveSugar->Location = System::Drawing::Point(118, 246);
			this->buttonRemoveSugar->Name = L"buttonRemoveSugar";
			this->buttonRemoveSugar->Size = System::Drawing::Size(25, 25);
			this->buttonRemoveSugar->TabIndex = 10;
			this->buttonRemoveSugar->Text = L"-";
			this->buttonRemoveSugar->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->buttonRemoveSugar->UseVisualStyleBackColor = true;
			this->buttonRemoveSugar->Click += gcnew System::EventHandler(this, &MyForm::buttonAddOrRemoveSugar_Click);
			// 
			// buttonAddSugar
			// 
			this->buttonAddSugar->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAddSugar->Location = System::Drawing::Point(118, 215);
			this->buttonAddSugar->Name = L"buttonAddSugar";
			this->buttonAddSugar->Size = System::Drawing::Size(25, 25);
			this->buttonAddSugar->TabIndex = 9;
			this->buttonAddSugar->Text = L"+";
			this->buttonAddSugar->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->buttonAddSugar->UseVisualStyleBackColor = true;
			this->buttonAddSugar->Click += gcnew System::EventHandler(this, &MyForm::buttonAddOrRemoveSugar_Click);
			// 
			// labelAmountOfSugar
			// 
			this->labelAmountOfSugar->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelAmountOfSugar->Location = System::Drawing::Point(6, 228);
			this->labelAmountOfSugar->Name = L"labelAmountOfSugar";
			this->labelAmountOfSugar->Size = System::Drawing::Size(106, 30);
			this->labelAmountOfSugar->TabIndex = 8;
			this->labelAmountOfSugar->Text = L"Сахар: ";
			// 
			// buttonMakeCappuccino
			// 
			this->buttonMakeCappuccino->Location = System::Drawing::Point(186, 154);
			this->buttonMakeCappuccino->Name = L"buttonMakeCappuccino";
			this->buttonMakeCappuccino->Size = System::Drawing::Size(32, 32);
			this->buttonMakeCappuccino->TabIndex = 7;
			this->buttonMakeCappuccino->UseVisualStyleBackColor = true;
			this->buttonMakeCappuccino->Click += gcnew System::EventHandler(this, &MyForm::buttonMakeCappuccino_Click);
			// 
			// labelCappuccino
			// 
			this->labelCappuccino->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCappuccino->Location = System::Drawing::Point(6, 155);
			this->labelCappuccino->Name = L"labelCappuccino";
			this->labelCappuccino->Size = System::Drawing::Size(174, 30);
			this->labelCappuccino->TabIndex = 6;
			this->labelCappuccino->Text = L"Капучино 99";
			// 
			// buttonMakeLatte
			// 
			this->buttonMakeLatte->Location = System::Drawing::Point(186, 116);
			this->buttonMakeLatte->Name = L"buttonMakeLatte";
			this->buttonMakeLatte->Size = System::Drawing::Size(32, 32);
			this->buttonMakeLatte->TabIndex = 5;
			this->buttonMakeLatte->UseVisualStyleBackColor = true;
			this->buttonMakeLatte->Click += gcnew System::EventHandler(this, &MyForm::buttonMakeLatte_Click);
			// 
			// buttonMakeAmericano
			// 
			this->buttonMakeAmericano->Location = System::Drawing::Point(186, 78);
			this->buttonMakeAmericano->Name = L"buttonMakeAmericano";
			this->buttonMakeAmericano->Size = System::Drawing::Size(32, 32);
			this->buttonMakeAmericano->TabIndex = 4;
			this->buttonMakeAmericano->UseVisualStyleBackColor = true;
			this->buttonMakeAmericano->Click += gcnew System::EventHandler(this, &MyForm::buttonMakeAmericano_Click);
			// 
			// buttonMakeEspresso
			// 
			this->buttonMakeEspresso->Location = System::Drawing::Point(186, 40);
			this->buttonMakeEspresso->Name = L"buttonMakeEspresso";
			this->buttonMakeEspresso->Size = System::Drawing::Size(32, 32);
			this->buttonMakeEspresso->TabIndex = 3;
			this->buttonMakeEspresso->UseVisualStyleBackColor = true;
			this->buttonMakeEspresso->Click += gcnew System::EventHandler(this, &MyForm::buttonMakeEspresso_Click);
			// 
			// labelLatte
			// 
			this->labelLatte->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLatte->Location = System::Drawing::Point(6, 117);
			this->labelLatte->Name = L"labelLatte";
			this->labelLatte->Size = System::Drawing::Size(174, 30);
			this->labelLatte->TabIndex = 2;
			this->labelLatte->Text = L"Латте 85";
			// 
			// labelAmericano
			// 
			this->labelAmericano->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelAmericano->Location = System::Drawing::Point(6, 79);
			this->labelAmericano->Name = L"labelAmericano";
			this->labelAmericano->Size = System::Drawing::Size(174, 30);
			this->labelAmericano->TabIndex = 1;
			this->labelAmericano->Text = L"Американо 60";
			// 
			// labelEspresso
			// 
			this->labelEspresso->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelEspresso->Location = System::Drawing::Point(6, 39);
			this->labelEspresso->Name = L"labelEspresso";
			this->labelEspresso->Size = System::Drawing::Size(174, 30);
			this->labelEspresso->TabIndex = 0;
			this->labelEspresso->Text = L"Эспрессо 40";
			// 
			// labelBalance
			// 
			this->labelBalance->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelBalance->Location = System::Drawing::Point(4, 39);
			this->labelBalance->Name = L"labelBalance";
			this->labelBalance->Size = System::Drawing::Size(198, 30);
			this->labelBalance->TabIndex = 8;
			this->labelBalance->Text = L"Ваш баланс: 0";
			this->labelBalance->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// buttonAddHundred
			// 
			this->buttonAddHundred->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAddHundred->Location = System::Drawing::Point(22, 84);
			this->buttonAddHundred->Name = L"buttonAddHundred";
			this->buttonAddHundred->Size = System::Drawing::Size(48, 48);
			this->buttonAddHundred->TabIndex = 9;
			this->buttonAddHundred->Text = L"100";
			this->buttonAddHundred->UseVisualStyleBackColor = true;
			this->buttonAddHundred->Click += gcnew System::EventHandler(this, &MyForm::buttonAddMoneyToBalance_Click);
			// 
			// buttonAddTen
			// 
			this->buttonAddTen->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAddTen->Location = System::Drawing::Point(130, 84);
			this->buttonAddTen->Name = L"buttonAddTen";
			this->buttonAddTen->Size = System::Drawing::Size(48, 48);
			this->buttonAddTen->TabIndex = 10;
			this->buttonAddTen->Text = L"10";
			this->buttonAddTen->UseVisualStyleBackColor = true;
			this->buttonAddTen->Click += gcnew System::EventHandler(this, &MyForm::buttonAddMoneyToBalance_Click);
			// 
			// buttonAddFive
			// 
			this->buttonAddFive->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAddFive->Location = System::Drawing::Point(22, 138);
			this->buttonAddFive->Name = L"buttonAddFive";
			this->buttonAddFive->Size = System::Drawing::Size(48, 48);
			this->buttonAddFive->TabIndex = 11;
			this->buttonAddFive->Text = L"5";
			this->buttonAddFive->UseVisualStyleBackColor = true;
			this->buttonAddFive->Click += gcnew System::EventHandler(this, &MyForm::buttonAddMoneyToBalance_Click);
			// 
			// buttonAddFifty
			// 
			this->buttonAddFifty->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAddFifty->Location = System::Drawing::Point(76, 84);
			this->buttonAddFifty->Name = L"buttonAddFifty";
			this->buttonAddFifty->Size = System::Drawing::Size(48, 48);
			this->buttonAddFifty->TabIndex = 12;
			this->buttonAddFifty->Text = L"50";
			this->buttonAddFifty->UseVisualStyleBackColor = true;
			this->buttonAddFifty->Click += gcnew System::EventHandler(this, &MyForm::buttonAddMoneyToBalance_Click);
			// 
			// buttonAddTwo
			// 
			this->buttonAddTwo->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAddTwo->Location = System::Drawing::Point(76, 138);
			this->buttonAddTwo->Name = L"buttonAddTwo";
			this->buttonAddTwo->Size = System::Drawing::Size(48, 48);
			this->buttonAddTwo->TabIndex = 13;
			this->buttonAddTwo->Text = L"2";
			this->buttonAddTwo->UseVisualStyleBackColor = true;
			this->buttonAddTwo->Click += gcnew System::EventHandler(this, &MyForm::buttonAddMoneyToBalance_Click);
			// 
			// buttonAddOne
			// 
			this->buttonAddOne->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAddOne->Location = System::Drawing::Point(130, 138);
			this->buttonAddOne->Name = L"buttonAddOne";
			this->buttonAddOne->Size = System::Drawing::Size(48, 48);
			this->buttonAddOne->TabIndex = 14;
			this->buttonAddOne->Text = L"1";
			this->buttonAddOne->UseVisualStyleBackColor = true;
			this->buttonAddOne->Click += gcnew System::EventHandler(this, &MyForm::buttonAddMoneyToBalance_Click);
			// 
			// groupBoxMoney
			// 
			this->groupBoxMoney->Controls->Add(this->buttonAmountOfMoney);
			this->groupBoxMoney->Controls->Add(this->buttonTakeChange);
			this->groupBoxMoney->Controls->Add(this->buttonAddHundred);
			this->groupBoxMoney->Controls->Add(this->labelBalance);
			this->groupBoxMoney->Controls->Add(this->buttonAddOne);
			this->groupBoxMoney->Controls->Add(this->buttonAddFive);
			this->groupBoxMoney->Controls->Add(this->buttonAddTwo);
			this->groupBoxMoney->Controls->Add(this->buttonAddTen);
			this->groupBoxMoney->Controls->Add(this->buttonAddFifty);
			this->groupBoxMoney->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBoxMoney->Location = System::Drawing::Point(242, 12);
			this->groupBoxMoney->Name = L"groupBoxMoney";
			this->groupBoxMoney->Size = System::Drawing::Size(208, 323);
			this->groupBoxMoney->TabIndex = 15;
			this->groupBoxMoney->TabStop = false;
			this->groupBoxMoney->Text = L"Пополнить баланс";
			// 
			// buttonAmountOfMoney
			// 
			this->buttonAmountOfMoney->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAmountOfMoney->Location = System::Drawing::Point(22, 277);
			this->buttonAmountOfMoney->Name = L"buttonAmountOfMoney";
			this->buttonAmountOfMoney->Size = System::Drawing::Size(156, 31);
			this->buttonAmountOfMoney->TabIndex = 17;
			this->buttonAmountOfMoney->Text = L"Деньги";
			this->buttonAmountOfMoney->UseVisualStyleBackColor = true;
			this->buttonAmountOfMoney->Click += gcnew System::EventHandler(this, &MyForm::buttonAmountOfMoney_Click);
			// 
			// buttonTakeChange
			// 
			this->buttonTakeChange->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonTakeChange->Location = System::Drawing::Point(22, 192);
			this->buttonTakeChange->Name = L"buttonTakeChange";
			this->buttonTakeChange->Size = System::Drawing::Size(156, 48);
			this->buttonTakeChange->TabIndex = 15;
			this->buttonTakeChange->Text = L"Забрать сдачу";
			this->buttonTakeChange->UseVisualStyleBackColor = true;
			this->buttonTakeChange->Click += gcnew System::EventHandler(this, &MyForm::buttonTakeChange_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(455, 347);
			this->Controls->Add(this->groupBoxMoney);
			this->Controls->Add(this->groupBoxMenu);
			this->Name = L"MyForm";
			this->Text = L"CoffeeMachine";
			this->groupBoxMenu->ResumeLayout(false);
			this->groupBoxMoney->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	//Поле отвечающее за отображение количества сахара в labelAmountOfSugar
	int sugar = 0;

	//Обработчик нажатия ЛЮБОЙ кнопки изменения количества сахара в кофе
	private: System::Void buttonAddOrRemoveSugar_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//Создание поля которое получает все атрибуты кнопки, которая была нажата
		System::Windows::Forms::Button^ sentButton = (Button^)sender;
		//Поле, которое отвечает за добавление или убавление сахара, т.к. в switch нельзя засунуть тип string
		short whichButtonWasClicked = -1;
		if (sentButton->Text == "-")
			whichButtonWasClicked = -1;
		else
			whichButtonWasClicked = 1;
		switch (whichButtonWasClicked)
		{
		case -1:
			if (sugar > 0)
			{
				sugar--;
			}
			break;
		case 1:
			if (sugar < 3)
			{
				sugar++;
			}
			break;
		default:
			break;
		}
		labelAmountOfSugar->Text = "Сахар: " + Convert::ToString(sugar);
	}

	//Обработчик нажатия ЛЮБОЙ кнопки добавления баланса через sender
	private: System::Void buttonAddMoneyToBalance_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//Создание поля которое получает все атрибуты кнопки, которая была нажата
		System::Windows::Forms::Button^ sentButton = (Button^)sender;
		//Добавление денег на баланс и добавление количества купюр или монет в автомат
		switch (Convert::ToInt32(sentButton->Text))
		{
		case 100:
			amountOfMoney.SetBalance(amountOfMoney.GetBalance() + Convert::ToInt32(sentButton->Text));
			amountOfMoney.SetAmountOfHundreds(amountOfMoney.GetAmountOfHundreds() + 1);
			break;
		case 50:
			amountOfMoney.SetBalance(amountOfMoney.GetBalance() + Convert::ToInt32(sentButton->Text));
			amountOfMoney.SetAmountOfFifties(amountOfMoney.GetAmountOfFifties() + 1);
			break;
		case 10:
			amountOfMoney.SetBalance(amountOfMoney.GetBalance() + Convert::ToInt32(sentButton->Text));
			amountOfMoney.SetAmountOfTens(amountOfMoney.GetAmountOfTens() + 1);
			break;
		case 5:
			amountOfMoney.SetBalance(amountOfMoney.GetBalance() + Convert::ToInt32(sentButton->Text));
			amountOfMoney.SetAmountOfFives(amountOfMoney.GetAmountOfFives() + 1);
			break;
		case 2:
			amountOfMoney.SetBalance(amountOfMoney.GetBalance() + Convert::ToInt32(sentButton->Text));
			amountOfMoney.SetAmountOfTwos(amountOfMoney.GetAmountOfTwos() + 1);
			break;
		case 1:
			amountOfMoney.SetBalance(amountOfMoney.GetBalance() + Convert::ToInt32(sentButton->Text));
			amountOfMoney.SetAmountOfOnes(amountOfMoney.GetAmountOfOnes() + 1);
			break;
		default:
			break;
		}
		//Изменения баланса в Label
		labelBalance->Text = "Ваш баланс: " + Convert::ToString(amountOfMoney.GetBalance());
	}

	//Обработка нажатия на кнопку выдачи сдачи
	private: System::Void buttonTakeChange_Click(System::Object^  sender, System::EventArgs^  e) 
	//Алгоритм выдачи сдачи
	{
		short backedHundreds = 0;
		short backedFifties = 0;
		short backedTens = 0;
		short backedFives = 0;
		short backedTwos = 0;
		short backedOnes = 0;

		while (amountOfMoney.GetBalance() != 0)
		{

			while (amountOfMoney.GetBalance() >= 100 && amountOfMoney.GetAmountOfHundreds() != 0)
			{
				amountOfMoney.SetBalance(amountOfMoney.GetBalance() - 100);
				amountOfMoney.SetAmountOfHundreds(amountOfMoney.GetAmountOfHundreds() - 1);
				backedHundreds++;
			}
			while (amountOfMoney.GetBalance() >= 50 && amountOfMoney.GetAmountOfFifties() != 0)
			{
				amountOfMoney.SetBalance(amountOfMoney.GetBalance() - 50);
				amountOfMoney.SetAmountOfFifties(amountOfMoney.GetAmountOfFifties() - 1);
				backedFifties++;
			}
			while (amountOfMoney.GetBalance() >= 10 && amountOfMoney.GetAmountOfTens() != 0)
			{
				amountOfMoney.SetBalance(amountOfMoney.GetBalance() - 10);
				amountOfMoney.SetAmountOfTens(amountOfMoney.GetAmountOfTens() - 1);
				backedTens++;
			}
			while (amountOfMoney.GetBalance() >= 5 && amountOfMoney.GetAmountOfFives() != 0)
			{
				amountOfMoney.SetBalance(amountOfMoney.GetBalance() - 5);
				amountOfMoney.SetAmountOfFives(amountOfMoney.GetAmountOfFives() - 1);
				backedFives++;
			}
			while (amountOfMoney.GetBalance() >= 2 && amountOfMoney.GetAmountOfTwos() != 0)
			{
				amountOfMoney.SetBalance(amountOfMoney.GetBalance() - 2);
				amountOfMoney.SetAmountOfTwos(amountOfMoney.GetAmountOfTwos() - 1);
				backedTwos++;
			}
			while (amountOfMoney.GetBalance() >= 1 && amountOfMoney.GetAmountOfOnes() != 0)
			{
				amountOfMoney.SetBalance(amountOfMoney.GetBalance() - 1);
				amountOfMoney.SetAmountOfOnes(amountOfMoney.GetAmountOfOnes() - 1);
				backedOnes++;
			}
			break;
			//Обработка нехватки сдачи
		}
		if (amountOfMoney.GetBalance() != 0)
			MessageBox::Show("В автомате не хватает купюр/монет,\nчтобы вернуть Вам полную сумму сдачи \nЗаберите вашу сдачу: " + "\n 100: " + backedHundreds + "\n 50: " + backedFifties + "\n 10: " + backedTens + "\n 5: " + backedFives + "\n 2: " + backedTwos + "\n 1: " + backedOnes);
		else
		{
			MessageBox::Show("Заберите вашу сдачу: " + "\n 100: " + backedHundreds + "\n 50: " + backedFifties + "\n 10: " + backedTens + "\n 5: " + backedFives + "\n 2: " + backedTwos + "\n 1: " + backedOnes);
		}
		labelBalance->Text = "Ваш баланс: " + Convert::ToString(amountOfMoney.GetBalance());
	}

	//Обработка выдачи эспрессо
private: System::Void buttonMakeEspresso_Click(System::Object^  sender, System::EventArgs^  e) 
{
	//Проверка достаточно ли денег на балансе
	if (amountOfMoney.GetBalance() >= amountOfMoney.costOfEspresso)
	{
		//Проверка достаточно ли ингридиентов для данного кофе
		if (amountOfProducts.GetCoffee() >= 2 && amountOfProducts.GetWater() >= 1 && amountOfProducts.GetSugar() >= sugar)
		{
			amountOfMoney.SetBalance(amountOfMoney.GetBalance() - amountOfMoney.costOfEspresso);
			labelBalance->Text = "Ваш баланс: " + Convert::ToString(amountOfMoney.GetBalance());
			espresso.makeCoffee(sugar);
			sugar = 0;
			labelAmountOfSugar->Text = "Сахар: " + Convert::ToString(sugar);
			MessageBox::Show("Возьмите Ваш Эспрессо");
		}
		else
			MessageBox::Show("В автомате недостаточно ингридиентов, для этого напитка, попробуйте выбрать другой или заберите деньги");

	}
	else
		MessageBox::Show("У вас недостаточно средств на балансе, чтобы приобрести данный напиток");
}

	//Обработка выдачи американо
private: System::Void buttonMakeAmericano_Click(System::Object^  sender, System::EventArgs^  e) 
{
	//Проверка достаточно ли денег на балансе
	if (amountOfMoney.GetBalance() >= amountOfMoney.costOfAmericano)
	{
		//Проверка достаточно ли ингридиентов для данного кофе
		if (amountOfProducts.GetCoffee() >= 2 && amountOfProducts.GetWater() >= 2 && amountOfProducts.GetSugar() >= sugar)
		{
			amountOfMoney.SetBalance(amountOfMoney.GetBalance() - amountOfMoney.costOfAmericano);
			labelBalance->Text = "Ваш баланс: " + Convert::ToString(amountOfMoney.GetBalance());
			americano.makeCoffee(sugar);
			sugar = 0;
			labelAmountOfSugar->Text = "Сахар: " + Convert::ToString(sugar);
			MessageBox::Show("Возьмите Ваш Американо");
		}
		else
			MessageBox::Show("В автомате недостаточно ингридиентов, для этого напитка, попробуйте выбрать другой или заберите деньги");

	}
	else
		MessageBox::Show("У вас недостаточно средств на балансе, чтобы приобрести данный напиток");
}
	
	//Обработка выдачи латте
private: System::Void buttonMakeLatte_Click(System::Object^  sender, System::EventArgs^  e) 
{
	//Проверка достаточно ли денег на балансе
	if (amountOfMoney.GetBalance() >= amountOfMoney.costOfLatte)
	{
		//Проверка достаточно ли ингридиентов для данного кофе
		if (amountOfProducts.GetCoffee() >= 1 && amountOfProducts.GetWater() >= 1 && amountOfProducts.GetMilk() >= 2 && amountOfProducts.GetSugar() >= sugar)
		{
			amountOfMoney.SetBalance(amountOfMoney.GetBalance() - amountOfMoney.costOfLatte);
			labelBalance->Text = "Ваш баланс: " + Convert::ToString(amountOfMoney.GetBalance());
			latte.makeCoffee(sugar);
			sugar = 0;
			labelAmountOfSugar->Text = "Сахар: " + Convert::ToString(sugar);
			MessageBox::Show("Возьмите Ваш Латте");
		}
		else
			MessageBox::Show("В автомате недостаточно ингридиентов, для этого напитка, попробуйте выбрать другой или заберите деньги");

	}
	else
		MessageBox::Show("У вас недостаточно средств на балансе, чтобы приобрести данный напиток");
}

	//Обработка выдачи капучино
private: System::Void buttonMakeCappuccino_Click(System::Object^  sender, System::EventArgs^  e) 
{
	//Проверка достаточно ли денег на балансе
	if (amountOfMoney.GetBalance() >= amountOfMoney.costOfCappuccino)
	{
		//Проверка достаточно ли ингридиентов для данного кофе
		if (amountOfProducts.GetCoffee() >= 1 && amountOfProducts.GetWater() >= 1 && amountOfProducts.GetMilk() >= 1 && amountOfProducts.GetSugar() >= sugar)
		{
			amountOfMoney.SetBalance(amountOfMoney.GetBalance() - amountOfMoney.costOfCappuccino);
			labelBalance->Text = "Ваш баланс: " + Convert::ToString(amountOfMoney.GetBalance());
			cappuccino.makeCoffee(sugar);
			sugar = 0;
			labelAmountOfSugar->Text = "Сахар: " + Convert::ToString(sugar);
			MessageBox::Show("Возьмите Ваш Капучино");
		}
		else
			MessageBox::Show("В автомате недостаточно ингридиентов, для этого напитка, попробуйте выбрать другой или заберите деньги");

	}
	else
		MessageBox::Show("У вас недостаточно средств на балансе, чтобы приобрести данный напиток");
}

	//Кнопка для проверки количества ингридиентов в автомате
private: System::Void buttonAmountOfProducts_Click(System::Object^  sender, System::EventArgs^  e) 
{
	MessageBox::Show("Кофе: " + Convert::ToString(amountOfProducts.GetCoffee()) + "\nВода: " + Convert::ToString(amountOfProducts.GetWater()) + "\nМолоко: " + Convert::ToString(amountOfProducts.GetMilk()) + "\nСахар: " + Convert::ToString(amountOfProducts.GetSugar()));
}

	//Кнопка для проверки количества денег в автомате
private: System::Void buttonAmountOfMoney_Click(System::Object^  sender, System::EventArgs^  e) 
{
	MessageBox::Show("100: " + Convert::ToString(amountOfMoney.GetAmountOfHundreds()) + "\n50: " + Convert::ToString(amountOfMoney.GetAmountOfFifties()) + "\n10: " + Convert::ToString(amountOfMoney.GetAmountOfTens()) + "\n5: " + Convert::ToString(amountOfMoney.GetAmountOfFives()) + "\n2: " + Convert::ToString(amountOfMoney.GetAmountOfTwos()) + "\n1: " + Convert::ToString(amountOfMoney.GetAmountOfOnes()));
}
};
}
