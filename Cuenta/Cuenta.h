#pragma once  //______________________________________ Cuenta.h  
#include "Resource.h"
class Cuenta : public Win::Dialog
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
	Win::Button btOk;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(95);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(47);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Cuenta";
		btOk.Create(NULL, L"Presionar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 13, 12, 75, 28, hWnd, 1000);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		btOk.Font = fontArial014A;
	}
	//_________________________________________________
	void btOk_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btOk.IsEvent(e, BN_CLICKED)) { btOk_Click(e); return true; }
		return false;
	}
};
