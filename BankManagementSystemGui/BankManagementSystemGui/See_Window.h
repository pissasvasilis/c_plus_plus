#ifndef _SEE_WINDOW_H_
#define _SEE_WINDOW_H_
#include <wx/wx.h>
#include <Account.h>

class See_Window:public wxDialog{

public:
	See_Window(wxWindow* parent);	
	void execute();
};
#endif
