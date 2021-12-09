#include "Processors.h"
#include <Windows.h>
using namespace CPUTaskQueue;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Processors);
	return 0;
}
