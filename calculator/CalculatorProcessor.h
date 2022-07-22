#pragma once
#include"Grid.h"

class CalculatorProcessor : Grid 
{

public:
	 CalculatorProcessor& Get()
	{

	}
private:
	CalculatorProcessor() 
	{

		int id = evt.GetId();
		std::string results = "";
		int number = A;
		switch (id)
		{
		case 1:
			txt->AppendText("÷");
			one = txt->GetValue();
			A = wxAtoi(one);
			Case = 4; // ÷
			txt->SetValue("");
		case 2:
			txt->AppendText("X");
			one = txt->GetValue();
			A = wxAtoi(one);
			Case = 3; // X
			txt->SetValue("");
		case 3:
			txt->AppendText("-");
			one = txt->GetValue();
			A = wxAtoi(one);
			Case = 2; // -
			txt->SetValue("");
		case 4:
			txt->AppendText("+");
			one = txt->GetValue();
			A = wxAtoi(one);
			Case = 1; // +
			txt->SetValue("");
		}
	}

	 

};

