#include "Grid.h"
#include "ButtonFactory.h"

wxBEGIN_EVENT_TABLE(Grid, wxFrame)
    EVT_BUTTON(wxID_ANY, ButtonClicked)
wxEND_EVENT_TABLE()


Grid::Grid():wxFrame(nullptr,wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(467, 392))
{
	ButtonFactory factory;
	std::vector<Model::Button> button;

	Model::Button btn0  = factory.GetButton();
	Model::Button btn1 = factory.GetButton1();
	Model::Button btn2 = factory.GetButton2();
	Model::Button btn3 = factory.GetButton3();
	Model::Button btn4 = factory.GetButton4();
	Model::Button btn5 = factory.GetButton5();
	Model::Button btn6 = factory.GetButton6();
	Model::Button btn7 = factory.GetButton7();
	Model::Button btn8 = factory.GetButton8();
	Model::Button btn9 = factory.GetButton9();
	Model::Button btn10 = factory.GetButton10();
	Model::Button btn11 = factory.GetButton11();
	Model::Button btn12 = factory.GetButton12();
	Model::Button btn13 = factory.GetButton13();
	Model::Button btn14 = factory.GetButton14();
	Model::Button btn15 = factory.GetButton15();
	Model::Button btn16 = factory.GetButton16();
	Model::Button btn17 = factory.GetButton17();
	Model::Button btn18 = factory.GetButton18();
	Model::Button btn19 = factory.GetButton19();
	Model::Button btn20 = factory.GetButton20();
	Model::Button btn21 = factory.GetButton21();
	Model::Button btn22 = factory.GetButton22();
	txt = new wxTextCtrl(this, 10020, "", wxPoint(0, 0), wxSize(375, 50));

}

Grid::~Grid()
{

}

void Grid::ButtonClicked(wxCommandEvent& evt)
{
	int id = evt.GetId();
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
	case 5:
		txt->SetValue("");
		evt.Skip();
	case 6:
		txt->AppendText("0");
		break;
	case 7:
		txt->AppendText("1");
		break;
	case 8:
		txt->AppendText("2");
		break;
	case 9:
		txt->AppendText("3");
		break;
	case 10:
		txt->AppendText("4");
		break;
	case 11:
		txt->AppendText("5");
		break;
	case 12:
		txt->AppendText("6");
		break;
	case 13:
		txt->AppendText("7");
		break;
	case 14:
		txt->AppendText("8");
		break;
	case 15:
		txt->AppendText("9");
		break;
	case 16:
		txt->AppendText(".");
		break;
	case 17:
		txt->AppendText("%");
		break;
	case 18:
		txt->AppendText("(-");
		break;
	case 19:
		txt->AppendText("()");
		break;
	case 20:
		two = txt->GetValue();
		B = wxAtoi(two);
		switch (Case)
		{
		case 1:
			answer = float(A) + float(B);
			three = wxString::Format(wxT("%g"), answer);
			txt->SetValue(three);
			break;
		case 2:
			answer = float(A) - float(B);
			three = wxString::Format(wxT("%g"), answer);
			txt->SetValue(three);
			break;
		case 3:
			answer = float(A) * float(B);
			three = wxString::Format(wxT("%g"), answer);
			txt->SetValue(three);
			break;
		case 4:
			answer = float(A) / float(B);
			three = wxString::Format(wxT("%g"), answer);
			txt->SetValue(three);
			break;
		}
		break;
	case 21:
		txt->AppendText("MOD");
		break;
	case 22:
		std::string results = "";
		int number = A;
		for (int i = 0; i < 32; i++)
		{
			if (number % 2 == 0)
			{
				results = "0" + results;
			}
			else
			{
				results = "1" + results;
			}
			number = number / 2;
		}
	case 23:
		txt->AppendText("HEX");
		break;

	}
}

