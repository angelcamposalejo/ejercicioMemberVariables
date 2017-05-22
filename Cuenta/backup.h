#pragma once  //______________________________________ Cuenta.h  
#include "Resource.h"
class Cuenta: public Win::Dialog
{
public:
	Cuenta()
	{
	}
	~Cuenta()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Button bt1;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(95);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(41);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Cuenta";
		bt1.Create(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 13, 12, 75, 22, hWnd, 1000);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		bt1.Font = fontArial014A;
	}
	//_________________________________________________
	void bt1_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (bt1.IsEvent(e, BN_CLICKED)) {bt1_Click(e); return true;}
		return false;
	}
};
