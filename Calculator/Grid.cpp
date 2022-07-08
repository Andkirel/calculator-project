#include "Grid.h"

Grid::Grid():wxFrame(nullptr,wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(392, 392))
{
	btn0 = new wxButton(this, 10000, "÷", wxPoint(0, 50), wxSize(75, 75));
	btn1 = new wxButton(this, 10001, "X", wxPoint(75, 50), wxSize(75, 75));
	btn2 = new wxButton(this, 10002, "-", wxPoint(150, 50), wxSize(75, 75));
	btn3 = new wxButton(this, 10003, "+", wxPoint(225, 50), wxSize(75, 75));
	btn4 = new wxButton(this, 10004, "C", wxPoint(300, 50), wxSize(75, 75));
	btn5 = new wxButton(this, 10005, "0", wxPoint(0, 125), wxSize(75, 75));
	btn6 = new wxButton(this, 10006, "1", wxPoint(75, 125), wxSize(75, 75));
	btn7 = new wxButton(this, 10007, "2", wxPoint(150, 125), wxSize(75, 75));
	btn8 = new wxButton(this, 10008, "3", wxPoint(225, 125), wxSize(75, 75));
	btn9 = new wxButton(this, 10009, "4", wxPoint(300, 125), wxSize(75, 75));
	btn10 = new wxButton(this, 10010, "5", wxPoint(0, 200), wxSize(75, 75));
	btn11 = new wxButton(this, 10011, "6", wxPoint(75, 200), wxSize(75, 75));
	btn12 = new wxButton(this, 10012, "7", wxPoint(150, 200), wxSize(75, 75));
	btn13 = new wxButton(this, 10013, "8", wxPoint(225, 200), wxSize(75, 75));
	btn14 = new wxButton(this, 10014, "9", wxPoint(300, 200), wxSize(75, 75));
	btn15 = new wxButton(this, 10015, ".", wxPoint(0, 275), wxSize(75, 75));
	btn16 = new wxButton(this, 10016, "%", wxPoint(75, 275), wxSize(75, 75));
	btn17 = new wxButton(this, 10017, "+/-", wxPoint(150, 275), wxSize(75, 75));
	btn18 = new wxButton(this, 10018, "()", wxPoint(225, 275), wxSize(75, 75));
	btn19 = new wxButton(this, 10019, "=", wxPoint(300, 275), wxSize(75, 75));
	txt = new wxTextCtrl(this, 10020, "", wxPoint(0,0), wxSize(375,50));


	wxFont font(15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	btn0->SetFont(font);
	btn1->SetFont(font);
	btn2->SetFont(font);
	btn3->SetFont(font);
	btn4->SetFont(font);
	btn5->SetFont(font);
	btn6->SetFont(font);
	btn7->SetFont(font);
	btn8->SetFont(font);
	btn9->SetFont(font);
	btn10->SetFont(font);
	btn11->SetFont(font);
	btn12->SetFont(font);
	btn13->SetFont(font);
	btn14->SetFont(font);
	btn15->SetFont(font);
	btn16->SetFont(font);
	btn17->SetFont(font);
	btn18->SetFont(font);
	btn19->SetFont(font);
	
	/*wxGridSizer* buttonsize = new wxGridSizer(FieldWidth, FieldHeight, 0, 0);*/
//wxGridSizer* textbox = new wxGridSizer(FieldWidth, FieldHeight, 0, 0);


//Field = new int[FieldWidth * FieldHeight];

	//for (int x = 0; x < FieldWidth; x++)
	//{
	//	for (int y = 0; y < FieldHeight; y++)
	//	{
	//		//txt[y * FieldWidth + x] = new wxTextCtrl(this, 10000 + (y * FieldWidth + x));
	//		btn[y * FieldWidth + x] = new wxButton(this, 10000 + (y * FieldWidth + x));
	//		//btn[y * FieldWidth + x]->SetFont(font);
	//		buttonsize->Add(btn[y * FieldWidth + x], 1, wxEXPAND | wxALL);
	//		//textbox->Add(txt[y * FieldWidth + x], 1, wxEXPAND | wxALL);
	//		Field[y * FieldWidth + x] = 0;

	//	}
	//	this->SetSizer(buttonsize);
	//	buttonsize->Layout();
	//	
	//}
	

}

Grid::~Grid()
{

}