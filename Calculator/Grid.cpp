#include "Grid.h"
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"

wxBEGIN_EVENT_TABLE(Grid, wxFrame)
    EVT_BUTTON(wxID_ANY, ButtonClicked)
wxEND_EVENT_TABLE()


Grid::Grid():wxFrame(nullptr,wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(467, 392))
{
	ButtonFactory factory;
	std::vector<wxButton> Button;

	wxButton* btn0  = factory.GetButton(this);
	wxButton* btn1 = factory.GetButton1(this);
	wxButton* btn2 = factory.GetButton2(this);
	wxButton* btn3 = factory.GetButton3(this);
	wxButton* btn4 = factory.GetButton4(this);
	wxButton* btn5 = factory.GetButton5(this);
	wxButton* btn6 = factory.GetButton6(this);
	wxButton* btn7 = factory.GetButton7(this);
	wxButton* btn8 = factory.GetButton8(this);
	wxButton* btn9 = factory.GetButton9(this);
	wxButton* btn10 = factory.GetButton10(this);
	wxButton* btn11 = factory.GetButton11(this);
	wxButton* btn12 = factory.GetButton12(this);
	wxButton* btn13 = factory.GetButton13(this);
	wxButton* btn14 = factory.GetButton14(this);
	wxButton* btn15 = factory.GetButton15(this);
	wxButton* btn16 = factory.GetButton16(this);
	wxButton* btn17 = factory.GetButton17(this);
	wxButton* btn18 = factory.GetButton18(this);
	wxButton* btn19 = factory.GetButton19(this);
	wxButton* btn20 = factory.GetButton20(this);
	wxButton* btn21 = factory.GetButton21(this);
	wxButton* btn22 = factory.GetButton22(this);
	txt = new wxTextCtrl(this, 10020, "", wxPoint(0, 0), wxSize(450, 50));




}

Grid::~Grid()
{

}

void Grid::ButtonClicked(wxCommandEvent& evt)
{
	CalculatorProcessor::Get();

	//int id = evt.GetId();
	//std::string results = "";
	//int number = A;
	//switch (id)
	//{
	//case 1:
	//	txt->AppendText("÷");
	//	one = txt->GetValue();
	//	A = wxAtoi(one);
	//	Case = 4; // ÷
	//	txt->SetValue("");
	//case 2:
	//	txt->AppendText("X");
	//	one = txt->GetValue();
	//	A = wxAtoi(one);
	//	Case = 3; // X
	//	txt->SetValue("");
	//case 3:
	//	txt->AppendText("-");
	//	one = txt->GetValue();
	//	A = wxAtoi(one);
	//    Case = 2; // -
	//	txt->SetValue("");
	//case 4:
	//	 txt->AppendText("+");
	//	 one = txt->GetValue();
	//	 A = wxAtoi(one);
	//	 Case = 1; // +
	//	 txt->SetValue("");
	//case 5:
	//	txt->SetValue("");
	//	evt.Skip();
	//case 6:
	//	txt->AppendText("0");
	//	break;
	//case 7:
	//	txt->AppendText("1");
	//	break;
	//case 8:
	//	txt->AppendText("2");
	//	break;
	//case 9:
	//	txt->AppendText("3");
	//	break;
	//case 10:
	//	txt->AppendText("4");
	//	break;
	//case 11:
	//	txt->AppendText("5");
	//	break;
	//case 12:
	//	txt->AppendText("6");
	//	break;
	//case 13:
	//	txt->AppendText("7");
	//	break;
	//case 14:
	//	txt->AppendText("8");
	//	break;
	//case 15:
	//	txt->AppendText("9");
	//	break;
	//case 16:
	//	txt->AppendText(".");
	//	break;
	//case 17:
	//	txt->AppendText("%");
	//	break;
	//case 18:
	//	txt->AppendText("(-");
	//	break;
	//case 19:
	//	txt->AppendText("()");
	//	break;
	//case 20:
	//	two = txt->GetValue();
	//	B = wxAtoi(two);
	//	switch (Case)
	//	{
	//	case 1:
	//		answer = float(A) + float(B);
	//		three = wxString::Format(wxT("%g"), answer);
	//		txt->SetValue(three);
	//		break;
	//	case 2:
	//		answer = float(A) - float(B);
	//		three = wxString::Format(wxT("%g"), answer);
	//		txt->SetValue(three);
	//		break;
	//	case 3:
	//		answer = float(A) * float(B);
	//		three = wxString::Format(wxT("%g"), answer);
	//		txt->SetValue(three);
	//		break;
	//	case 4:
	//		answer = float(A) / float(B);
	//		three = wxString::Format(wxT("%g"), answer);
	//		txt->SetValue(three);
	//		break;
	//	}
	//	break;
	//case 21:
	//	txt->AppendText("MOD");
	//	break;
	//case 22:
	//	for (int i = 0; i < 32; i++)
	//	{
	//		if (number % 2 == 0)
	//		{
	//			results = "0" + results;
	//		}
	//		else
	//		{
	//			results = "1" + results;
	//		}
	//		number = number / 2;
	//	
	//		txt->SetValue(results);
	//		
	//	}
	//case 23:
	//	while (number > 0)
	//	{
	//		int mod = number % 16;
	//		if (mod < 10)
	//		{
	//			results = std::to_string(mod) = results;
	//		}
	//		else if(mod == 11)
	//		{
	//			results = "B" + results;
	//		}
	//		else if (mod == 12)
	//		{
	//			results = "C" + results;
	//		}
	//		else if (mod == 13)
	//		{
	//			results = "D" + results;
	//		}
	//		else if (mod == 14)
	//		{
	//			results = "E" + results;
	//		}
	//		else if (mod == 15)
	//		{
	//			results = "F" + results;
	//		}
	//		number = number / 16;
	//	}
	//	results = "0x" + results;
	//	txt->SetValue(results);
	//	break;

	//}
}

