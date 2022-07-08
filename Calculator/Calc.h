#pragma once
#include "wx/wx.h"
#include "Grid.h"

class Calc : public wxApp
{
public:
	Calc();
	~Calc();

private:
	Grid* m_frame1 = nullptr;

public:
	virtual bool OnInit();

};

