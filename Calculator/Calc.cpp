#include "Calc.h"

wxIMPLEMENT_APP(Calc);

Calc::Calc()
{

}
Calc::~Calc()
{

}

bool Calc::OnInit()
{
	m_frame1 = new Grid();
	m_frame1->Show();

	return true;
}