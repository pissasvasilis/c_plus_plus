#include <wx/wx.h>
//#include <Menu_Window.h>
//#include <New_Account_Window.h>
#include <Menu_Window.h>

// application class
class wxMiniApp : public wxApp
{
public:
	// function called at the application initialization
	virtual bool OnInit();

};

wxIMPLEMENT_APP(wxMiniApp);

bool wxMiniApp::OnInit()
{
	Menu_Window* startMenu = new Menu_Window();
	startMenu->Show(true);
	
	//Menu* startMenu = new Menu();
	//startMenu->Show(true);
	
	return true;
}
