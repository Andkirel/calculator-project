#include "ButtonFactory.h"
#include "Grid.h"
#include "wx/wx.h"
Model::Button ButtonFactory::GetButton()
{
	btn0 = new wxButton(this, 1, "÷", wxPoint(0, 50), wxSize(75, 75));
	return btn0;
}
Model::Button ButtonFactory::GetButton1()
{
	btn1 = new wxButton(this, 2, "X", wxPoint(75, 50), wxSize(75, 75));
	return btn1;
}
Model::Button ButtonFactory::GetButton2()
{
	btn2 = new wxButton(this, 3, "-", wxPoint(150, 50), wxSize(75, 75));
	return btn2;
}
Model::Button ButtonFactory::GetButton3()
{
	btn3 = new wxButton(this, 4, "+", wxPoint(225, 50), wxSize(75, 75));
	return btn3;
}
Model::Button ButtonFactory::GetButton4()
{
	btn4 = new wxButton(this, 5, "C", wxPoint(300, 50), wxSize(75, 75));
	return btn4;
}
Model::Button ButtonFactory::GetButton5()
{
	btn5 = new wxButton(this, 6, "0", wxPoint(0, 125), wxSize(75, 75));
	return btn5;
}
Model::Button ButtonFactory::GetButton6()
{
	btn6 = new wxButton(this, 7, "1", wxPoint(75, 125), wxSize(75, 75));
	return btn6;
}
Model::Button ButtonFactory::GetButton7()
{
	btn7 = new wxButton(this, 8, "2", wxPoint(150, 125), wxSize(75, 75));
	return btn7;
}
Model::Button ButtonFactory::GetButton8()
{
	btn8 = new wxButton(this, 9, "3", wxPoint(225, 125), wxSize(75, 75));
	return btn8;
}
Model::Button ButtonFactory::GetButton9()
{
	btn9 = new wxButton(this, 10, "4", wxPoint(300, 125), wxSize(75, 75));
	return btn9;
}
Model::Button ButtonFactory::GetButton10()
{
	btn10 = new wxButton(this, 11, "5", wxPoint(0, 200), wxSize(75, 75));
	return btn10;
}
Model::Button ButtonFactory::GetButton11()
{
	btn11 = new wxButton(this, 12, "6", wxPoint(75, 200), wxSize(75, 75));
	return btn11;
}
Model::Button ButtonFactory::GetButton12()
{
	btn12 = new wxButton(this, 13, "7", wxPoint(150, 200), wxSize(75, 75));
	return btn12;
}
Model::Button ButtonFactory::GetButton13()
{
	btn13 = new wxButton(this, 14, "8", wxPoint(225, 200), wxSize(75, 75));
	return btn13;
}
Model::Button ButtonFactory::GetButton14()
{
	btn14 = new wxButton(this, 15, "9", wxPoint(300, 200), wxSize(75, 75));
	return btn14;
}
Model::Button ButtonFactory::GetButton15()
{
	btn15 = new wxButton(this, 16, ".", wxPoint(0, 275), wxSize(75, 75));
	return btn15;
}
Model::Button ButtonFactory::GetButton16()
{
	btn16 = new wxButton(this, 17, "%", wxPoint(75, 275), wxSize(75, 75));
	return btn16;
}
Model::Button ButtonFactory::GetButton17()
{
	btn17 = new wxButton(this, 18, "(-", wxPoint(150, 275), wxSize(75, 75));
	return btn17;
}
Model::Button ButtonFactory::GetButton18()
{
	btn18 = new wxButton(this, 19, "()", wxPoint(225, 275), wxSize(75, 75));
	return btn18;
}
Model::Button ButtonFactory::GetButton19()
{
	btn19 = new wxButton(this, 20, "=", wxPoint(300, 275), wxSize(75, 75));
	return btn19;
}
Model::Button ButtonFactory::GetButton20()
{
	btn20 = new wxButton(this, 21, "MOD", wxPoint(375, 50), wxSize(75, 100));
	return btn20;
}
Model::Button ButtonFactory::GetButton21()
{
	btn21 = new wxButton(this, 22, "Binary", wxPoint(375, 150), wxSize(75, 100));
	return btn21;
}
Model::Button ButtonFactory::GetButton22()
{
	btn22 = new wxButton(this, 23, "HEX", wxPoint(375, 250), wxSize(75, 100));
	return btn22;
}


