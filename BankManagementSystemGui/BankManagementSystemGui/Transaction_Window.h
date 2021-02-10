#ifndef _TRANSACTION_WINDOW_H_
#define _TRANSACTION_WINDOW_H_

#include <wx/wx.h>

class Transaction_Window:public wxDialog{
private:
	int transaction_type;
	double amount;
public:
	Transaction_Window(wxWindow* parent);
private:
	bool TransferDataFromWindow();
	void button_save_transaction(wxCommandEvent& event);
	wxDECLARE_EVENT_TABLE();
	};


#endif
