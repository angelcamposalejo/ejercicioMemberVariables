#include "stdafx.h"  //________________________________________ Cuenta.cpp
#include "Cuenta.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	Cuenta app;
	return app.BeginDialog(IDI_Cuenta, hInstance);
}

void Cuenta::Window_Open(Win::Event& e)
{
}

void Cuenta::btOk_Click(Win::Event& e)
{
	static int contador=0;
	contador++;
	btOk.Text = Sys::Convert::ToString(contador);
}

