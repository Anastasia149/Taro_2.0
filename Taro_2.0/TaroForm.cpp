#include "TaroForm.h"
#include <Windows.h>

#define SIZE_BUFFER 400


using namespace Taro20;

[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	//получение имени ПК для записи в файл
	LPWSTR UserName = (LPWSTR)calloc(SIZE_BUFFER + 1, sizeof WCHAR);
	DWORD size = SIZE_BUFFER + 1;
	GetComputerName(UserName, &size);

	//Создание главной формы
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew TaroForm);





	return 0;
}

