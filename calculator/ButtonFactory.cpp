#include "Grid.h"
#include "wx/wx.h"
#include "ButtonFactory.h"

wxButton* ButtonFactory::GetButton(Grid *grid)
{
	wxButton* btn0 = new wxButton(grid, 1, "÷", wxPoint(0, 50), wxSize(75, 75));
	return btn0;
}
wxButton* ButtonFactory::GetButton1(Grid* grid)
{
	wxButton* btn1 = new wxButton(grid, 2, "X", wxPoint(75, 50), wxSize(75, 75));
	return btn1;
}
wxButton* ButtonFactory::GetButton2(Grid* grid)
{
	wxButton* btn2 = new wxButton(grid, 3, "-", wxPoint(150, 50), wxSize(75, 75));
	return btn2;
}
wxButton* ButtonFactory::GetButton3(Grid* grid)
{
	wxButton* btn3 = new wxButton(grid, 4, "+", wxPoint(225, 50), wxSize(75, 75));
	return btn3;
}
wxButton* ButtonFactory::GetButton4(Grid* grid)
{
	wxButton* btn4 = new wxButton(grid, 5, "C", wxPoint(300, 50), wxSize(75, 75));
	return btn4;
}
wxButton* ButtonFactory::GetButton5(Grid* grid)
{
	wxButton* btn5 = new wxButton(grid, 6, "0", wxPoint(0, 125), wxSize(75, 75));
	return btn5;
}
wxButton* ButtonFactory::GetButton6(Grid* grid)
{
	wxButton* btn6 = new wxButton(grid, 7, "1", wxPoint(75, 125), wxSize(75, 75));
	return btn6;
}
wxButton* ButtonFactory::GetButton7(Grid* grid)
{
	wxButton* btn7 = new wxButton(grid, 8, "2", wxPoint(150, 125), wxSize(75, 75));
	return btn7;
}
wxButton* ButtonFactory::GetButton8(Grid* grid)
{
	wxButton* btn8 = new wxButton(grid, 9, "3", wxPoint(225, 125), wxSize(75, 75));
	return btn8;
}
wxButton* ButtonFactory::GetButton9(Grid* grid)
{
	wxButton* btn9 = new wxButton(grid, 10, "4", wxPoint(300, 125), wxSize(75, 75));
	return btn9;
}
wxButton* ButtonFactory::GetButton10(Grid* grid)
{
	wxButton* btn10 = new wxButton(grid, 11, "5", wxPoint(0, 200), wxSize(75, 75));
	return btn10;
}
wxButton* ButtonFactory::GetButton11(Grid* grid)
{
	wxButton* btn11 = new wxButton(grid, 12, "6", wxPoint(75, 200), wxSize(75, 75));
	return btn11;
}
wxButton* ButtonFactory::GetButton12(Grid* grid)
{
	wxButton* btn12 = new wxButton(grid, 13, "7", wxPoint(150, 200), wxSize(75, 75));
	return btn12;
}
wxButton* ButtonFactory::GetButton13(Grid* grid)
{
	wxButton* btn13 = new wxButton(grid, 14, "8", wxPoint(225, 200), wxSize(75, 75));
	return btn13;
}
wxButton* ButtonFactory::GetButton14(Grid* grid)
{
	wxButton* btn14 = new wxButton(grid, 15, "9", wxPoint(300, 200), wxSize(75, 75));
	return btn14;
}
wxButton* ButtonFactory::GetButton15(Grid* grid)
{
	wxButton* btn15 = new wxButton(grid, 16, ".", wxPoint(0, 275), wxSize(75, 75));
	return btn15;
}
wxButton* ButtonFactory::GetButton16(Grid* grid)
{
	wxButton* btn16 = new wxButton(grid, 17, "%", wxPoint(75, 275), wxSize(75, 75));
	return btn16;
}
wxButton* ButtonFactory::GetButton17(Grid* grid)
{
	wxButton* btn17 = new wxButton(grid, 18, "(-", wxPoint(150, 275), wxSize(75, 75));
	return btn17;
}
wxButton* ButtonFactory::GetButton18(Grid* grid)
{
	wxButton* btn18 = new wxButton(grid, 19, "()", wxPoint(225, 275), wxSize(75, 75));
	return btn18;
}
wxButton* ButtonFactory::GetButton19(Grid* grid)
{
	wxButton* btn19 = new wxButton(grid, 20, "=", wxPoint(300, 275), wxSize(75, 75));
	return btn19;
}
wxButton* ButtonFactory::GetButton20(Grid* grid)
{
	wxButton* btn20 = new wxButton(grid, 21, "MOD", wxPoint(375, 50), wxSize(75, 100));
	return btn20;
}
wxButton* ButtonFactory::GetButton21(Grid* grid)
{
	wxButton* btn21 = new wxButton(grid, 22, "Binary", wxPoint(375, 150), wxSize(75, 100));
	return btn21;
}
wxButton* ButtonFactory::GetButton22(Grid* grid)
{
	wxButton* btn22 = new wxButton(grid, 23, "HEX", wxPoint(375, 250), wxSize(75, 100));
	return btn22;
}


