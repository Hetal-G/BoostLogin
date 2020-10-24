#pragma once
#include"LoginService.h"
#include <msclr\marshal_cppstd.h>

namespace LoginApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;


	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			loginService = new LoginService();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}

		}
	private: System::Windows::Forms::Panel^  loginPanel;
	protected:
		LoginService* loginService;
	private: Bunifu::Framework::UI::BunifuTextbox^  passwordTextbox;
	protected:

	private: Bunifu::Framework::UI::BunifuTextbox^  usernameTextbox;

	private: System::Windows::Forms::Label^  loginLabel;
	private: System::Windows::Forms::LinkLabel^  singupLabel;
	private: System::Windows::Forms::LinkLabel^  forgotPasswordLink;
	private: Bunifu::Framework::UI::BunifuThinButton2^  loginButton;
	private: System::Windows::Forms::Panel^  signupPanel;

	private: Bunifu::Framework::UI::BunifuTextbox^  singupUsernameTextBox;
	private: Bunifu::Framework::UI::BunifuTextbox^  singupConfirmPasswdTextBox;



	private: System::Windows::Forms::Label^  label1;
	private: Bunifu::Framework::UI::BunifuThinButton2^  registerButton;
	private: Bunifu::Framework::UI::BunifuTextbox^  singupPasswdTextBox;



	private: Bunifu::Framework::UI::BunifuImageButton^  signupBackButton;
	private: Bunifu::Framework::UI::BunifuTextbox^  singupEmailTextBox;
	private: System::Windows::Forms::Panel^  resetPasswordPanel;
	private: Bunifu::Framework::UI::BunifuCustomLabel^  resetOTPLabel;
	private: Bunifu::Framework::UI::BunifuThinButton2^  resetSendOTP;
	private: Bunifu::Framework::UI::BunifuTextbox^  resetOtpTextBox;
	private: Bunifu::Framework::UI::BunifuImageButton^  ResetPasswordBackButton;

	private: Bunifu::Framework::UI::BunifuTextbox^  resetUsernameTextbox;

	private: Bunifu::Framework::UI::BunifuTextbox^  resetConfirmPasswordTextBox;
	private: System::Windows::Forms::Label^  label2;
	private: Bunifu::Framework::UI::BunifuThinButton2^  resetResetButton;

	private: Bunifu::Framework::UI::BunifuTextbox^  resetPasswordTextBox;
	private: System::Windows::Forms::Panel^  appPanel;
	private: System::Windows::Forms::Label^  welcomeLabel;
	private: Bunifu::Framework::UI::BunifuImageButton^  appPanelBackButton;




	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->loginPanel = (gcnew System::Windows::Forms::Panel());
			this->loginLabel = (gcnew System::Windows::Forms::Label());
			this->singupLabel = (gcnew System::Windows::Forms::LinkLabel());
			this->forgotPasswordLink = (gcnew System::Windows::Forms::LinkLabel());
			this->loginButton = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->passwordTextbox = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->usernameTextbox = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->signupPanel = (gcnew System::Windows::Forms::Panel());
			this->singupEmailTextBox = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->signupBackButton = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->singupUsernameTextBox = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->singupConfirmPasswdTextBox = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->registerButton = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->singupPasswdTextBox = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->resetPasswordPanel = (gcnew System::Windows::Forms::Panel());
			this->resetOTPLabel = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->resetSendOTP = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->resetOtpTextBox = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->ResetPasswordBackButton = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->resetUsernameTextbox = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->resetConfirmPasswordTextBox = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->resetResetButton = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->resetPasswordTextBox = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->appPanel = (gcnew System::Windows::Forms::Panel());
			this->appPanelBackButton = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->welcomeLabel = (gcnew System::Windows::Forms::Label());
			this->loginPanel->SuspendLayout();
			this->signupPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->signupBackButton))->BeginInit();
			this->resetPasswordPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ResetPasswordBackButton))->BeginInit();
			this->appPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->appPanelBackButton))->BeginInit();
			this->SuspendLayout();
			// 
			// loginPanel
			// 
			this->loginPanel->BackColor = System::Drawing::Color::Transparent;
			this->loginPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"loginPanel.BackgroundImage")));
			this->loginPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->loginPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->loginPanel->Controls->Add(this->loginLabel);
			this->loginPanel->Controls->Add(this->singupLabel);
			this->loginPanel->Controls->Add(this->forgotPasswordLink);
			this->loginPanel->Controls->Add(this->loginButton);
			this->loginPanel->Controls->Add(this->passwordTextbox);
			this->loginPanel->Controls->Add(this->usernameTextbox);
			this->loginPanel->Location = System::Drawing::Point(99, 26);
			this->loginPanel->Name = L"loginPanel";
			this->loginPanel->Size = System::Drawing::Size(284, 420);
			this->loginPanel->TabIndex = 0;
			// 
			// loginLabel
			// 
			this->loginLabel->AutoSize = true;
			this->loginLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginLabel->ForeColor = System::Drawing::Color::White;
			this->loginLabel->Location = System::Drawing::Point(107, 15);
			this->loginLabel->Name = L"loginLabel";
			this->loginLabel->Size = System::Drawing::Size(70, 25);
			this->loginLabel->TabIndex = 5;
			this->loginLabel->Text = L"Login";
			// 
			// singupLabel
			// 
			this->singupLabel->AutoSize = true;
			this->singupLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->singupLabel->LinkArea = System::Windows::Forms::LinkArea(0, 25);
			this->singupLabel->LinkColor = System::Drawing::Color::White;
			this->singupLabel->Location = System::Drawing::Point(112, 366);
			this->singupLabel->Name = L"singupLabel";
			this->singupLabel->Size = System::Drawing::Size(56, 22);
			this->singupLabel->TabIndex = 4;
			this->singupLabel->TabStop = true;
			this->singupLabel->Text = L"SignUp";
			this->singupLabel->UseCompatibleTextRendering = true;
			this->singupLabel->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::singupLabel_LinkClicked);
			// 
			// forgotPasswordLink
			// 
			this->forgotPasswordLink->AutoSize = true;
			this->forgotPasswordLink->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->forgotPasswordLink->LinkArea = System::Windows::Forms::LinkArea(0, 25);
			this->forgotPasswordLink->LinkColor = System::Drawing::Color::White;
			this->forgotPasswordLink->Location = System::Drawing::Point(132, 243);
			this->forgotPasswordLink->Name = L"forgotPasswordLink";
			this->forgotPasswordLink->Size = System::Drawing::Size(135, 22);
			this->forgotPasswordLink->TabIndex = 2;
			this->forgotPasswordLink->TabStop = true;
			this->forgotPasswordLink->Text = L"Forgot Password \?";
			this->forgotPasswordLink->UseCompatibleTextRendering = true;
			this->forgotPasswordLink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::forgotPasswordLink_LinkClicked);
			// 
			// loginButton
			// 
			this->loginButton->ActiveBorderThickness = 1;
			this->loginButton->ActiveCornerRadius = 30;
			this->loginButton->ActiveFillColor = System::Drawing::Color::DimGray;
			this->loginButton->ActiveForecolor = System::Drawing::Color::LightGreen;
			this->loginButton->ActiveLineColor = System::Drawing::Color::Green;
			this->loginButton->BackColor = System::Drawing::Color::Transparent;
			this->loginButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"loginButton.BackgroundImage")));
			this->loginButton->ButtonText = L"Login";
			this->loginButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->loginButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginButton->ForeColor = System::Drawing::Color::DimGray;
			this->loginButton->IdleBorderThickness = 1;
			this->loginButton->IdleCornerRadius = 20;
			this->loginButton->IdleFillColor = System::Drawing::Color::White;
			this->loginButton->IdleForecolor = System::Drawing::Color::DimGray;
			this->loginButton->IdleLineColor = System::Drawing::Color::DimGray;
			this->loginButton->Location = System::Drawing::Point(51, 300);
			this->loginButton->Margin = System::Windows::Forms::Padding(5);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(181, 43);
			this->loginButton->TabIndex = 3;
			this->loginButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->loginButton->Click += gcnew System::EventHandler(this, &LoginForm::loginButton_Click);
			// 
			// passwordTextbox
			// 
			this->passwordTextbox->BackColor = System::Drawing::Color::Silver;
			this->passwordTextbox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"passwordTextbox.BackgroundImage")));
			this->passwordTextbox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->passwordTextbox->ForeColor = System::Drawing::Color::DimGray;
			this->passwordTextbox->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"passwordTextbox.Icon")));
			this->passwordTextbox->Location = System::Drawing::Point(17, 171);
			this->passwordTextbox->Name = L"passwordTextbox";
			this->passwordTextbox->Size = System::Drawing::Size(250, 42);
			this->passwordTextbox->TabIndex = 1;
			this->passwordTextbox->text = L"Password";
			// 
			// usernameTextbox
			// 
			this->usernameTextbox->BackColor = System::Drawing::Color::Silver;
			this->usernameTextbox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"usernameTextbox.BackgroundImage")));
			this->usernameTextbox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->usernameTextbox->ForeColor = System::Drawing::Color::DimGray;
			this->usernameTextbox->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"usernameTextbox.Icon")));
			this->usernameTextbox->Location = System::Drawing::Point(17, 90);
			this->usernameTextbox->Name = L"usernameTextbox";
			this->usernameTextbox->Size = System::Drawing::Size(250, 42);
			this->usernameTextbox->TabIndex = 0;
			this->usernameTextbox->text = L"Username";
			// 
			// signupPanel
			// 
			this->signupPanel->BackColor = System::Drawing::Color::Transparent;
			this->signupPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"signupPanel.BackgroundImage")));
			this->signupPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->signupPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->signupPanel->Controls->Add(this->singupEmailTextBox);
			this->signupPanel->Controls->Add(this->signupBackButton);
			this->signupPanel->Controls->Add(this->singupUsernameTextBox);
			this->signupPanel->Controls->Add(this->singupConfirmPasswdTextBox);
			this->signupPanel->Controls->Add(this->label1);
			this->signupPanel->Controls->Add(this->registerButton);
			this->signupPanel->Controls->Add(this->singupPasswdTextBox);
			this->signupPanel->Location = System::Drawing::Point(99, 26);
			this->signupPanel->Name = L"signupPanel";
			this->signupPanel->Size = System::Drawing::Size(284, 440);
			this->signupPanel->TabIndex = 6;
			this->signupPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &LoginForm::signupPanel_Paint);
			// 
			// singupEmailTextBox
			// 
			this->singupEmailTextBox->BackColor = System::Drawing::Color::Silver;
			this->singupEmailTextBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"singupEmailTextBox.BackgroundImage")));
			this->singupEmailTextBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->singupEmailTextBox->ForeColor = System::Drawing::Color::DimGray;
			this->singupEmailTextBox->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"singupEmailTextBox.Icon")));
			this->singupEmailTextBox->Location = System::Drawing::Point(17, 90);
			this->singupEmailTextBox->Name = L"singupEmailTextBox";
			this->singupEmailTextBox->Size = System::Drawing::Size(250, 42);
			this->singupEmailTextBox->TabIndex = 5;
			this->singupEmailTextBox->text = L"Email";
			// 
			// signupBackButton
			// 
			this->signupBackButton->BackColor = System::Drawing::Color::Transparent;
			this->signupBackButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"signupBackButton.BackgroundImage")));
			this->signupBackButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->signupBackButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"signupBackButton.Image")));
			this->signupBackButton->ImageActive = nullptr;
			this->signupBackButton->Location = System::Drawing::Point(17, 15);
			this->signupBackButton->Name = L"signupBackButton";
			this->signupBackButton->Size = System::Drawing::Size(42, 36);
			this->signupBackButton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->signupBackButton->TabIndex = 8;
			this->signupBackButton->TabStop = false;
			this->signupBackButton->Zoom = 10;
			this->signupBackButton->Click += gcnew System::EventHandler(this, &LoginForm::signupBackButton_Click);
			// 
			// singupUsernameTextBox
			// 
			this->singupUsernameTextBox->BackColor = System::Drawing::Color::Silver;
			this->singupUsernameTextBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"singupUsernameTextBox.BackgroundImage")));
			this->singupUsernameTextBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->singupUsernameTextBox->ForeColor = System::Drawing::Color::DimGray;
			this->singupUsernameTextBox->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"singupUsernameTextBox.Icon")));
			this->singupUsernameTextBox->Location = System::Drawing::Point(17, 150);
			this->singupUsernameTextBox->Name = L"singupUsernameTextBox";
			this->singupUsernameTextBox->Size = System::Drawing::Size(250, 42);
			this->singupUsernameTextBox->TabIndex = 6;
			this->singupUsernameTextBox->text = L"Username";
			// 
			// singupConfirmPasswdTextBox
			// 
			this->singupConfirmPasswdTextBox->BackColor = System::Drawing::Color::Silver;
			this->singupConfirmPasswdTextBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"singupConfirmPasswdTextBox.BackgroundImage")));
			this->singupConfirmPasswdTextBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->singupConfirmPasswdTextBox->ForeColor = System::Drawing::Color::DimGray;
			this->singupConfirmPasswdTextBox->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"singupConfirmPasswdTextBox.Icon")));
			this->singupConfirmPasswdTextBox->Location = System::Drawing::Point(17, 271);
			this->singupConfirmPasswdTextBox->Name = L"singupConfirmPasswdTextBox";
			this->singupConfirmPasswdTextBox->Size = System::Drawing::Size(250, 42);
			this->singupConfirmPasswdTextBox->TabIndex = 8;
			this->singupConfirmPasswdTextBox->text = L"Confirm Password";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(107, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 25);
			this->label1->TabIndex = 5;
			this->label1->Text = L"SignUp";
			// 
			// registerButton
			// 
			this->registerButton->ActiveBorderThickness = 1;
			this->registerButton->ActiveCornerRadius = 30;
			this->registerButton->ActiveFillColor = System::Drawing::Color::DimGray;
			this->registerButton->ActiveForecolor = System::Drawing::Color::LightGreen;
			this->registerButton->ActiveLineColor = System::Drawing::Color::Green;
			this->registerButton->BackColor = System::Drawing::Color::Transparent;
			this->registerButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"registerButton.BackgroundImage")));
			this->registerButton->ButtonText = L"Register";
			this->registerButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->registerButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registerButton->ForeColor = System::Drawing::Color::DimGray;
			this->registerButton->IdleBorderThickness = 1;
			this->registerButton->IdleCornerRadius = 20;
			this->registerButton->IdleFillColor = System::Drawing::Color::White;
			this->registerButton->IdleForecolor = System::Drawing::Color::DimGray;
			this->registerButton->IdleLineColor = System::Drawing::Color::DimGray;
			this->registerButton->Location = System::Drawing::Point(51, 345);
			this->registerButton->Margin = System::Windows::Forms::Padding(5);
			this->registerButton->Name = L"registerButton";
			this->registerButton->Size = System::Drawing::Size(181, 43);
			this->registerButton->TabIndex = 9;
			this->registerButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->registerButton->Click += gcnew System::EventHandler(this, &LoginForm::registerButton_Click);
			// 
			// singupPasswdTextBox
			// 
			this->singupPasswdTextBox->BackColor = System::Drawing::Color::Silver;
			this->singupPasswdTextBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"singupPasswdTextBox.BackgroundImage")));
			this->singupPasswdTextBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->singupPasswdTextBox->ForeColor = System::Drawing::Color::DimGray;
			this->singupPasswdTextBox->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"singupPasswdTextBox.Icon")));
			this->singupPasswdTextBox->Location = System::Drawing::Point(17, 210);
			this->singupPasswdTextBox->Name = L"singupPasswdTextBox";
			this->singupPasswdTextBox->Size = System::Drawing::Size(250, 42);
			this->singupPasswdTextBox->TabIndex = 7;
			this->singupPasswdTextBox->text = L"Password";
			// 
			// resetPasswordPanel
			// 
			this->resetPasswordPanel->BackColor = System::Drawing::Color::Transparent;
			this->resetPasswordPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resetPasswordPanel.BackgroundImage")));
			this->resetPasswordPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resetPasswordPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->resetPasswordPanel->Controls->Add(this->resetOTPLabel);
			this->resetPasswordPanel->Controls->Add(this->resetSendOTP);
			this->resetPasswordPanel->Controls->Add(this->resetOtpTextBox);
			this->resetPasswordPanel->Controls->Add(this->ResetPasswordBackButton);
			this->resetPasswordPanel->Controls->Add(this->resetUsernameTextbox);
			this->resetPasswordPanel->Controls->Add(this->resetConfirmPasswordTextBox);
			this->resetPasswordPanel->Controls->Add(this->label2);
			this->resetPasswordPanel->Controls->Add(this->resetResetButton);
			this->resetPasswordPanel->Controls->Add(this->resetPasswordTextBox);
			this->resetPasswordPanel->Location = System::Drawing::Point(99, 26);
			this->resetPasswordPanel->Name = L"resetPasswordPanel";
			this->resetPasswordPanel->Size = System::Drawing::Size(284, 444);
			this->resetPasswordPanel->TabIndex = 7;
			// 
			// resetOTPLabel
			// 
			this->resetOTPLabel->AutoSize = true;
			this->resetOTPLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->resetOTPLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->resetOTPLabel->Location = System::Drawing::Point(14, 188);
			this->resetOTPLabel->Name = L"resetOTPLabel";
			this->resetOTPLabel->Size = System::Drawing::Size(240, 13);
			this->resetOTPLabel->TabIndex = 11;
			this->resetOTPLabel->Text = L"OTP will be sent to your registered email.";
			// 
			// resetSendOTP
			// 
			this->resetSendOTP->ActiveBorderThickness = 1;
			this->resetSendOTP->ActiveCornerRadius = 30;
			this->resetSendOTP->ActiveFillColor = System::Drawing::Color::DimGray;
			this->resetSendOTP->ActiveForecolor = System::Drawing::Color::LightGreen;
			this->resetSendOTP->ActiveLineColor = System::Drawing::Color::Green;
			this->resetSendOTP->BackColor = System::Drawing::Color::Transparent;
			this->resetSendOTP->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resetSendOTP.BackgroundImage")));
			this->resetSendOTP->ButtonText = L"Send OTP";
			this->resetSendOTP->Cursor = System::Windows::Forms::Cursors::Hand;
			this->resetSendOTP->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->resetSendOTP->ForeColor = System::Drawing::Color::DimGray;
			this->resetSendOTP->IdleBorderThickness = 1;
			this->resetSendOTP->IdleCornerRadius = 20;
			this->resetSendOTP->IdleFillColor = System::Drawing::Color::White;
			this->resetSendOTP->IdleForecolor = System::Drawing::Color::DimGray;
			this->resetSendOTP->IdleLineColor = System::Drawing::Color::DimGray;
			this->resetSendOTP->Location = System::Drawing::Point(130, 140);
			this->resetSendOTP->Margin = System::Windows::Forms::Padding(5);
			this->resetSendOTP->Name = L"resetSendOTP";
			this->resetSendOTP->Size = System::Drawing::Size(137, 43);
			this->resetSendOTP->TabIndex = 11;
			this->resetSendOTP->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->resetSendOTP->Click += gcnew System::EventHandler(this, &LoginForm::resetSendOTP_Click);
			// 
			// resetOtpTextBox
			// 
			this->resetOtpTextBox->BackColor = System::Drawing::Color::Silver;
			this->resetOtpTextBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resetOtpTextBox.BackgroundImage")));
			this->resetOtpTextBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resetOtpTextBox->ForeColor = System::Drawing::Color::DimGray;
			this->resetOtpTextBox->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resetOtpTextBox.Icon")));
			this->resetOtpTextBox->Location = System::Drawing::Point(17, 230);
			this->resetOtpTextBox->Name = L"resetOtpTextBox";
			this->resetOtpTextBox->Size = System::Drawing::Size(250, 22);
			this->resetOtpTextBox->TabIndex = 12;
			this->resetOtpTextBox->text = L"OTP";
			// 
			// ResetPasswordBackButton
			// 
			this->ResetPasswordBackButton->BackColor = System::Drawing::Color::Transparent;
			this->ResetPasswordBackButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ResetPasswordBackButton.BackgroundImage")));
			this->ResetPasswordBackButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ResetPasswordBackButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ResetPasswordBackButton.Image")));
			this->ResetPasswordBackButton->ImageActive = nullptr;
			this->ResetPasswordBackButton->Location = System::Drawing::Point(17, 15);
			this->ResetPasswordBackButton->Name = L"ResetPasswordBackButton";
			this->ResetPasswordBackButton->Size = System::Drawing::Size(42, 36);
			this->ResetPasswordBackButton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->ResetPasswordBackButton->TabIndex = 8;
			this->ResetPasswordBackButton->TabStop = false;
			this->ResetPasswordBackButton->Zoom = 10;
			this->ResetPasswordBackButton->Click += gcnew System::EventHandler(this, &LoginForm::ResetPasswordBackButton_Click);
			// 
			// resetUsernameTextbox
			// 
			this->resetUsernameTextbox->BackColor = System::Drawing::Color::Silver;
			this->resetUsernameTextbox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resetUsernameTextbox.BackgroundImage")));
			this->resetUsernameTextbox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resetUsernameTextbox->ForeColor = System::Drawing::Color::DimGray;
			this->resetUsernameTextbox->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resetUsernameTextbox.Icon")));
			this->resetUsernameTextbox->Location = System::Drawing::Point(17, 90);
			this->resetUsernameTextbox->Name = L"resetUsernameTextbox";
			this->resetUsernameTextbox->Size = System::Drawing::Size(250, 42);
			this->resetUsernameTextbox->TabIndex = 10;
			this->resetUsernameTextbox->text = L"Username";
			// 
			// resetConfirmPasswordTextBox
			// 
			this->resetConfirmPasswordTextBox->BackColor = System::Drawing::Color::Silver;
			this->resetConfirmPasswordTextBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resetConfirmPasswordTextBox.BackgroundImage")));
			this->resetConfirmPasswordTextBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resetConfirmPasswordTextBox->ForeColor = System::Drawing::Color::DimGray;
			this->resetConfirmPasswordTextBox->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resetConfirmPasswordTextBox.Icon")));
			this->resetConfirmPasswordTextBox->Location = System::Drawing::Point(17, 327);
			this->resetConfirmPasswordTextBox->Name = L"resetConfirmPasswordTextBox";
			this->resetConfirmPasswordTextBox->Size = System::Drawing::Size(250, 25);
			this->resetConfirmPasswordTextBox->TabIndex = 14;
			this->resetConfirmPasswordTextBox->text = L"Confirm Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(85, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(182, 25);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Reset Password";
			// 
			// resetResetButton
			// 
			this->resetResetButton->ActiveBorderThickness = 1;
			this->resetResetButton->ActiveCornerRadius = 30;
			this->resetResetButton->ActiveFillColor = System::Drawing::Color::DimGray;
			this->resetResetButton->ActiveForecolor = System::Drawing::Color::LightGreen;
			this->resetResetButton->ActiveLineColor = System::Drawing::Color::Green;
			this->resetResetButton->BackColor = System::Drawing::Color::Transparent;
			this->resetResetButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resetResetButton.BackgroundImage")));
			this->resetResetButton->ButtonText = L"Reset";
			this->resetResetButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->resetResetButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->resetResetButton->ForeColor = System::Drawing::Color::DimGray;
			this->resetResetButton->IdleBorderThickness = 1;
			this->resetResetButton->IdleCornerRadius = 20;
			this->resetResetButton->IdleFillColor = System::Drawing::Color::White;
			this->resetResetButton->IdleForecolor = System::Drawing::Color::DimGray;
			this->resetResetButton->IdleLineColor = System::Drawing::Color::DimGray;
			this->resetResetButton->Location = System::Drawing::Point(55, 378);
			this->resetResetButton->Margin = System::Windows::Forms::Padding(5);
			this->resetResetButton->Name = L"resetResetButton";
			this->resetResetButton->Size = System::Drawing::Size(181, 36);
			this->resetResetButton->TabIndex = 15;
			this->resetResetButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->resetResetButton->Click += gcnew System::EventHandler(this, &LoginForm::resetResetButton_Click);
			// 
			// resetPasswordTextBox
			// 
			this->resetPasswordTextBox->BackColor = System::Drawing::Color::Silver;
			this->resetPasswordTextBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resetPasswordTextBox.BackgroundImage")));
			this->resetPasswordTextBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resetPasswordTextBox->ForeColor = System::Drawing::Color::DimGray;
			this->resetPasswordTextBox->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resetPasswordTextBox.Icon")));
			this->resetPasswordTextBox->Location = System::Drawing::Point(17, 277);
			this->resetPasswordTextBox->Name = L"resetPasswordTextBox";
			this->resetPasswordTextBox->Size = System::Drawing::Size(250, 27);
			this->resetPasswordTextBox->TabIndex = 13;
			this->resetPasswordTextBox->text = L"Password";
			// 
			// appPanel
			// 
			this->appPanel->BackColor = System::Drawing::Color::Transparent;
			this->appPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"appPanel.BackgroundImage")));
			this->appPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->appPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->appPanel->Controls->Add(this->appPanelBackButton);
			this->appPanel->Controls->Add(this->welcomeLabel);
			this->appPanel->Location = System::Drawing::Point(99, 26);
			this->appPanel->Name = L"appPanel";
			this->appPanel->Size = System::Drawing::Size(284, 432);
			this->appPanel->TabIndex = 6;
			// 
			// appPanelBackButton
			// 
			this->appPanelBackButton->BackColor = System::Drawing::Color::Transparent;
			this->appPanelBackButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"appPanelBackButton.BackgroundImage")));
			this->appPanelBackButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->appPanelBackButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"appPanelBackButton.Image")));
			this->appPanelBackButton->ImageActive = nullptr;
			this->appPanelBackButton->Location = System::Drawing::Point(112, 188);
			this->appPanelBackButton->Name = L"appPanelBackButton";
			this->appPanelBackButton->Size = System::Drawing::Size(42, 36);
			this->appPanelBackButton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->appPanelBackButton->TabIndex = 9;
			this->appPanelBackButton->TabStop = false;
			this->appPanelBackButton->Zoom = 10;
			this->appPanelBackButton->Click += gcnew System::EventHandler(this, &LoginForm::appPanelBackButton_Click);
			// 
			// welcomeLabel
			// 
			this->welcomeLabel->AutoSize = true;
			this->welcomeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->welcomeLabel->ForeColor = System::Drawing::Color::White;
			this->welcomeLabel->Location = System::Drawing::Point(46, 23);
			this->welcomeLabel->Name = L"welcomeLabel";
			this->welcomeLabel->Size = System::Drawing::Size(115, 25);
			this->welcomeLabel->TabIndex = 5;
			this->welcomeLabel->Text = L"Welcome ";
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(510, 487);
			this->Controls->Add(this->appPanel);
			this->Controls->Add(this->signupPanel);
			this->Controls->Add(this->resetPasswordPanel);
			this->Controls->Add(this->loginPanel);
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LoginForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &LoginForm::LoginForm_Closing);
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->loginPanel->ResumeLayout(false);
			this->loginPanel->PerformLayout();
			this->signupPanel->ResumeLayout(false);
			this->signupPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->signupBackButton))->EndInit();
			this->resetPasswordPanel->ResumeLayout(false);
			this->resetPasswordPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ResetPasswordBackButton))->EndInit();
			this->appPanel->ResumeLayout(false);
			this->appPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->appPanelBackButton))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void signupBackButton_Click(System::Object^  sender, System::EventArgs^  e) {

		showLoginPanel();
	}
private: System::Void singupLabel_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {

	showSignupPanel();
}
private: System::Void LoginForm_Load(System::Object^  sender, System::EventArgs^  e) {

	showLoginPanel();

	passwordTextbox->_TextBox->PasswordChar='*';
	singupPasswdTextBox->_TextBox->PasswordChar = '*';
	singupConfirmPasswdTextBox->_TextBox->PasswordChar = '*';
	resetPasswordTextBox->_TextBox->PasswordChar = '*';
	resetConfirmPasswordTextBox->_TextBox->PasswordChar = '*';
}
private: System::Void LoginForm_Closing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {

	if (loginService)
		delete loginService;
}
		
private: System::Void signupPanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void registerButton_Click(System::Object^  sender, System::EventArgs^  e) {
	
	try
	{
		string passwd = marshal_as<std::string>(this->singupPasswdTextBox->text);
		string confirmPasswd = marshal_as<std::string>(this->singupConfirmPasswdTextBox->text);
		
		if (passwd != confirmPasswd)
		{
			MessageBox::Show("Confirm Password doesn't match. Please try again");
			return;
		}

		string username = marshal_as<std::string>(this->singupUsernameTextBox->text);
		string email = marshal_as<std::string>(this->singupEmailTextBox->text);

		if (! loginService->is_email_valid(email))
		{
			MessageBox::Show("Please enter valid email address !!!");
			return;
		}
		
		int res = loginService->registerUser(username, passwd, email);
		if(res == 0)
			MessageBox::Show("User with this name is already registered.");
		if (res == 1)
		{
			MessageBox::Show("User registration succesfull !!! Congratulations.");
			showLoginPanel();
		}
	}
	catch (exception e) {
		string exRes("Failure registering user !!!");
		exRes.append(e.what());
		String^ error_str = gcnew String(exRes.c_str());
		MessageBox::Show(error_str);
	}
}

private: System::Void loginButton_Click(System::Object^  sender, System::EventArgs^  e) {

	string username = marshal_as<std::string>(this->usernameTextbox->text);
	string passwd = marshal_as<std::string>(this->passwordTextbox->text);

	bool res = loginService->validateUser(username, passwd);

	if (res)
	{
		MessageBox::Show("Congratulations !!! Login Succesfull");
		this->welcomeLabel->Text = "Welcome " + this->usernameTextbox->text + " !!! ";
		showWelcomePanel();
	}
	else
		MessageBox::Show("Username or Password incoreect. Please try again...");
}
private: System::Void forgotPasswordLink_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {

	showResetPasswordPanel();
	
}
private: System::Void ResetPasswordBackButton_Click(System::Object^  sender, System::EventArgs^  e) {

	showLoginPanel();
}
private: System::Void resetSendOTP_Click(System::Object^  sender, System::EventArgs^  e) {

	string username = marshal_as<std::string>(this->resetUsernameTextbox->text);
	if (loginService->sendOTPToUser(username) == 0)
	{
		MessageBox::Show("User does not Exist. Please try again !!");
	}
	else
	{
		MessageBox::Show("OTP to set new password is succesfully sent to your registered email address !!!");
	}
}
private: System::Void resetResetButton_Click(System::Object^  sender, System::EventArgs^  e) {

	string otp = marshal_as<std::string>(this->resetOtpTextBox->text);
	string username = marshal_as<std::string>(this->resetUsernameTextbox->text);

	if (loginService->isOTPValid(otp))
	{
		string password = marshal_as<std::string>(this->resetPasswordTextBox->text);
		string confirmPasswd = marshal_as<std::string>(this->resetConfirmPasswordTextBox->text);

		if (password != confirmPasswd)
		{
			MessageBox::Show("Confirm Password doesn't match. Please try again");
			return;
		}

		if (loginService->updateUserPassword(username, password)) {
			MessageBox::Show("New Password Succesfully Updated.");
			showLoginPanel();
		}
		else {
			MessageBox::Show("Failure Updating New Password.");
		}
	}
	else {
		MessageBox::Show("Invalid OTP !!! Please enter One Time Password Sent to your registered email or Try again..");
	}

}

private:
	void showLoginPanel()
	{
		this->loginPanel->Visible = true;
		this->loginPanel->BringToFront();
		this->resetPasswordPanel->Visible = false;
		this->signupPanel->Visible = false;
		this->appPanel->Visible = false;
		
	}

	void showResetPasswordPanel()
	{
		this->resetPasswordPanel->Visible = true;
		this->resetPasswordPanel->BringToFront();
		this->signupPanel->Visible = false;
		this->loginPanel->Visible = false;
		this->appPanel->Visible = false;
	}

	void showSignupPanel()
	{
		this->signupPanel->Visible = true;
		this->signupPanel->BringToFront();
		this->resetPasswordPanel->Visible = false;
		this->loginPanel->Visible = false;
		this->appPanel->Visible = false;
	}

	void showWelcomePanel()
	{
		this->appPanel->Visible = true;
		this->appPanel->BringToFront();
		this->resetPasswordPanel->Visible = false;
		this->loginPanel->Visible = false;
		this->signupPanel->Visible = false;
	}
private: System::Void appPanelBackButton_Click(System::Object^  sender, System::EventArgs^  e) {

	showLoginPanel();
}

};
}
