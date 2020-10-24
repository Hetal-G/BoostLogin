#include "LoginForm.h"
#include "TheOpenSSL.h"
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace msclr::interop;

int main(cli::array<System::String ^> ^args)
{
	if (args->Length < 1)
	{
		MessageBox::Show("Please provide configuration from command line !!!");
		return 0;
	}
	String^ arg1 = args[0];
	string configFile = marshal_as<std::string>(arg1);
	if (configFile.empty())
	{
		MessageBox::Show("Please provide configuration from command line !!!");
		return 0;
	}
	ConfigService config(configFile);

	//openssl specific static initialization
	TheOpenSSL::StaticInitialize sslInitializer;

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LoginApp::LoginForm form;
	Application::Run(%form);
	return 0;
}