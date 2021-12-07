#include "QForm.h"
#include <Windows.h>
using namespace QueueForm;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew QForm);
	return 0;
}
