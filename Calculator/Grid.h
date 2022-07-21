#pragma once
#include "wx/wx.h"
#include "ButtonFactory.h"


class Grid : public wxFrame
{
public:
	Grid();
	~Grid();

public:

	wxTextCtrl* txt;
	int A, B, Case;
	wxString one, two, three;
	float answer;

	void ButtonClicked(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();

};

	namespace Model
	{
		class Button
		{
		public:
			Button();


		public:

			wxButton* btn0;
			wxButton* btn1;
			wxButton* btn2;
			wxButton* btn3;
			wxButton* btn4;
			wxButton* btn5;
			wxButton* btn6;
			wxButton* btn7;
			wxButton* btn8;
			wxButton* btn9;
			wxButton* btn10;
			wxButton* btn11;
			wxButton* btn12;
			wxButton* btn13;
			wxButton* btn14;
			wxButton* btn15;
			wxButton* btn16;
			wxButton* btn17;
			wxButton* btn18;
			wxButton* btn19;
			wxButton* btn20;
			wxButton* btn21;
			wxButton* btn22;
			wxTextCtrl* txt;
			int A, B, Case;
			wxString one, two, three;
			float answer;

		};
	};

