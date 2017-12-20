#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <Windows.h>
#include <MMSystem.h>


namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	int room = 0;
	bool exploded_chem = 0;

	bool pfhishzeract = 0;
	bool arbulary_antenna = 1;
	bool superconducting_antenna = 1;
	bool human_brain = 0;
	bool quantum_entangler = 0;

	bool chem1 = 0;
	bool chem2 = 0;
	bool spill = 0;
	bool shower = 0;
	//ADDING STUFF HERE WOO
	bool redLed1 = 0;
	bool greenLed1 = 0;
	bool redLed2 = 0;
	bool greenLed2 = 0;
	bool redLed3 = 0;
	bool greenLed3 = 0;

	bool pressedPrinter = 0;


	//GREG ADDING ON 

	bool vent_open = 0;
	int vent_count = 0;

	


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			this->BackgroundImage = Image::FromFile("The Fourth Floor.png");
			InitializeComponent();
			
			//
			//TODO: Add the constructor code here
			//
		}
	private: void changeImageState()
	//private: System::Void changeImageState(System::Object^  sender, System::EventArgs^  e) 
	{
		int room;
		if (this->BackgroundImage == Image::FromFile("The Fourth Floor.png"))
			room = 0;
		else if (this->BackgroundImage == Image::FromFile("room1.png")) {
			room = 1;
		}

		switch (room) {
			case 0:
				this->button1->Visible = true;
				break;
			case 1:
				this->button1->Visible = false;
				break;
		}

		
		//System::list<Bitmap> rooms = new list<Bitmap>();
	
		


}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;


	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Timer^  boomTime;
	private: System::Windows::Forms::PictureBox^  pictureBox2;


	private: System::Windows::Forms::Button^  pfhishButton;
	private: System::Windows::Forms::Button^  printerButton;
	private: System::Windows::Forms::Button^  entangleButton;
	private: System::Windows::Forms::PictureBox^  pfhishPic;
	private: System::Windows::Forms::PictureBox^  carbantPic;
	private: System::Windows::Forms::PictureBox^  supercondPic;
	private: System::Windows::Forms::PictureBox^  entanglePic;

	private: System::Windows::Forms::PictureBox^  brainPic;
	private: System::Windows::Forms::Button^  fredNote;
	private: System::Windows::Forms::PictureBox^  telescope;
	private: System::Windows::Forms::PictureBox^  flying_papers;
	private: System::Windows::Forms::PictureBox^  crab_nebula;
	private: System::Windows::Forms::PictureBox^  vent;
	private: System::Windows::Forms::PictureBox^  screws;
	private: System::Windows::Forms::PictureBox^  vent_open_picture;
	private: System::Windows::Forms::PictureBox^  brain;
	private: System::Windows::Forms::PictureBox^  vent_hole;
	private: System::Windows::Forms::PictureBox^  pictureBox4;






	private: System::ComponentModel::IContainer^  components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->boomTime = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pfhishButton = (gcnew System::Windows::Forms::Button());
			this->printerButton = (gcnew System::Windows::Forms::Button());
			this->entangleButton = (gcnew System::Windows::Forms::Button());
			this->pfhishPic = (gcnew System::Windows::Forms::PictureBox());
			this->carbantPic = (gcnew System::Windows::Forms::PictureBox());
			this->supercondPic = (gcnew System::Windows::Forms::PictureBox());
			this->entanglePic = (gcnew System::Windows::Forms::PictureBox());
			this->brainPic = (gcnew System::Windows::Forms::PictureBox());
			this->fredNote = (gcnew System::Windows::Forms::Button());
			this->telescope = (gcnew System::Windows::Forms::PictureBox());
			this->flying_papers = (gcnew System::Windows::Forms::PictureBox());
			this->crab_nebula = (gcnew System::Windows::Forms::PictureBox());
			this->vent = (gcnew System::Windows::Forms::PictureBox());
			this->screws = (gcnew System::Windows::Forms::PictureBox());
			this->vent_open_picture = (gcnew System::Windows::Forms::PictureBox());
			this->brain = (gcnew System::Windows::Forms::PictureBox());
			this->vent_hole = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pfhishPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->carbantPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->supercondPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->entanglePic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->brainPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->telescope))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flying_papers))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->crab_nebula))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vent))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->screws))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vent_open_picture))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->brain))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vent_hole))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"SWLink", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(54, 365);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(436, 42);
			this->button1->TabIndex = 0;
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"SWLink", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(0, -1);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(56, 412);
			this->button2->TabIndex = 2;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"SWLink", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(490, -1);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(54, 412);
			this->button3->TabIndex = 3;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"SWLink", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(54, -1);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(436, 48);
			this->button4->TabIndex = 4;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"SWLink", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(253, 324);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(207, 53);
			this->button5->TabIndex = 5;
			this->button5->Text = L"E   M   B   A   R   K";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"SWLink", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(565, 376);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(96, 20);
			this->button6->TabIndex = 6;
			this->button6->Text = L"M  e  n  u";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"SWLink", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(387, 217);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(29, 33);
			this->button7->TabIndex = 7;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"SWLink", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(338, 222);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(27, 37);
			this->button8->TabIndex = 8;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Visible = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Font = (gcnew System::Drawing::Font(L"SWLink", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pictureBox1->Location = System::Drawing::Point(117, 308);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(82, 40);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Transparent;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"SWLink", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(129, 62);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(57, 88);
			this->button9->TabIndex = 10;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Visible = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// boomTime
			// 
			this->boomTime->Interval = 1000;
			this->boomTime->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(0, -1);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(692, 412);
			this->pictureBox2->TabIndex = 11;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// pfhishButton
			// 
			this->pfhishButton->AccessibleName = L"";
			this->pfhishButton->BackColor = System::Drawing::Color::Transparent;
			this->pfhishButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pfhishButton.BackgroundImage")));
			this->pfhishButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pfhishButton->FlatAppearance->BorderSize = 0;
			this->pfhishButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->pfhishButton->Font = (gcnew System::Drawing::Font(L"SWLink", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pfhishButton->Location = System::Drawing::Point(283, 170);
			this->pfhishButton->Name = L"pfhishButton";
			this->pfhishButton->Size = System::Drawing::Size(73, 80);
			this->pfhishButton->TabIndex = 14;
			this->pfhishButton->UseVisualStyleBackColor = true;
			this->pfhishButton->Visible = false;
			this->pfhishButton->Click += gcnew System::EventHandler(this, &MyForm::pfhishButton_Click);
			// 
			// printerButton
			// 
			this->printerButton->BackColor = System::Drawing::Color::Transparent;
			this->printerButton->FlatAppearance->BorderSize = 0;
			this->printerButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->printerButton->Font = (gcnew System::Drawing::Font(L"SWLink", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->printerButton->Location = System::Drawing::Point(324, 164);
			this->printerButton->Name = L"printerButton";
			this->printerButton->Size = System::Drawing::Size(75, 98);
			this->printerButton->TabIndex = 15;
			this->printerButton->UseVisualStyleBackColor = true;
			this->printerButton->Visible = false;
			this->printerButton->Click += gcnew System::EventHandler(this, &MyForm::printerButton_Click);
			// 
			// entangleButton
			// 
			this->entangleButton->BackColor = System::Drawing::Color::Transparent;
			this->entangleButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"entangleButton.BackgroundImage")));
			this->entangleButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->entangleButton->FlatAppearance->BorderSize = 0;
			this->entangleButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->entangleButton->Font = (gcnew System::Drawing::Font(L"SWLink", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->entangleButton->Location = System::Drawing::Point(274, 235);
			this->entangleButton->Name = L"entangleButton";
			this->entangleButton->Size = System::Drawing::Size(46, 46);
			this->entangleButton->TabIndex = 16;
			this->entangleButton->UseVisualStyleBackColor = false;
			this->entangleButton->Visible = false;
			this->entangleButton->Click += gcnew System::EventHandler(this, &MyForm::entangleButton_Click);
			// 
			// pfhishPic
			// 
			this->pfhishPic->BackColor = System::Drawing::Color::Transparent;
			this->pfhishPic->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pfhishPic.BackgroundImage")));
			this->pfhishPic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pfhishPic->Location = System::Drawing::Point(581, 24);
			this->pfhishPic->Name = L"pfhishPic";
			this->pfhishPic->Size = System::Drawing::Size(59, 59);
			this->pfhishPic->TabIndex = 17;
			this->pfhishPic->TabStop = false;
			this->pfhishPic->Visible = false;
			// 
			// carbantPic
			// 
			this->carbantPic->BackColor = System::Drawing::Color::Transparent;
			this->carbantPic->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"carbantPic.BackgroundImage")));
			this->carbantPic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->carbantPic->Location = System::Drawing::Point(579, 97);
			this->carbantPic->Name = L"carbantPic";
			this->carbantPic->Size = System::Drawing::Size(68, 45);
			this->carbantPic->TabIndex = 18;
			this->carbantPic->TabStop = false;
			this->carbantPic->Visible = false;
			// 
			// supercondPic
			// 
			this->supercondPic->BackColor = System::Drawing::Color::Transparent;
			this->supercondPic->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"supercondPic.BackgroundImage")));
			this->supercondPic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->supercondPic->Location = System::Drawing::Point(579, 164);
			this->supercondPic->Name = L"supercondPic";
			this->supercondPic->Size = System::Drawing::Size(68, 52);
			this->supercondPic->TabIndex = 19;
			this->supercondPic->TabStop = false;
			this->supercondPic->Visible = false;
			// 
			// entanglePic
			// 
			this->entanglePic->BackColor = System::Drawing::Color::Transparent;
			this->entanglePic->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"entanglePic.BackgroundImage")));
			this->entanglePic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->entanglePic->Location = System::Drawing::Point(584, 290);
			this->entanglePic->Name = L"entanglePic";
			this->entanglePic->Size = System::Drawing::Size(59, 53);
			this->entanglePic->TabIndex = 21;
			this->entanglePic->TabStop = false;
			this->entanglePic->Visible = false;
			// 
			// brainPic
			// 
			this->brainPic->BackColor = System::Drawing::Color::Transparent;
			this->brainPic->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"brainPic.BackgroundImage")));
			this->brainPic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->brainPic->Location = System::Drawing::Point(581, 233);
			this->brainPic->Name = L"brainPic";
			this->brainPic->Size = System::Drawing::Size(64, 44);
			this->brainPic->TabIndex = 20;
			this->brainPic->TabStop = false;
			this->brainPic->Visible = false;
			this->brainPic->Click += gcnew System::EventHandler(this, &MyForm::pictureBox7_Click);
			// 
			// fredNote
			// 
			this->fredNote->BackColor = System::Drawing::Color::Transparent;
			this->fredNote->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fredNote.BackgroundImage")));
			this->fredNote->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->fredNote->FlatAppearance->BorderSize = 0;
			this->fredNote->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->fredNote->Location = System::Drawing::Point(192, 128);
			this->fredNote->Name = L"fredNote";
			this->fredNote->Size = System::Drawing::Size(74, 64);
			this->fredNote->TabIndex = 22;
			this->fredNote->UseVisualStyleBackColor = false;
			this->fredNote->Visible = false;
			this->fredNote->Click += gcnew System::EventHandler(this, &MyForm::fredNote_Click);
			// 
			// telescope
			// 
			this->telescope->BackColor = System::Drawing::Color::Transparent;
			this->telescope->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"telescope.BackgroundImage")));
			this->telescope->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->telescope->ErrorImage = nullptr;
			this->telescope->Location = System::Drawing::Point(284, 212);
			this->telescope->Name = L"telescope";
			this->telescope->Size = System::Drawing::Size(145, 157);
			this->telescope->TabIndex = 14;
			this->telescope->TabStop = false;
			this->telescope->Visible = false;
			this->telescope->Click += gcnew System::EventHandler(this, &MyForm::telescope_Click);
			// 
			// flying_papers
			// 
			this->flying_papers->BackColor = System::Drawing::Color::Transparent;
			this->flying_papers->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flying_papers.BackgroundImage")));
			this->flying_papers->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->flying_papers->Location = System::Drawing::Point(117, -6);
			this->flying_papers->Name = L"flying_papers";
			this->flying_papers->Size = System::Drawing::Size(312, 217);
			this->flying_papers->TabIndex = 15;
			this->flying_papers->TabStop = false;
			this->flying_papers->Visible = false;
			// 
			// crab_nebula
			// 
			this->crab_nebula->BackColor = System::Drawing::Color::Transparent;
			this->crab_nebula->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"crab_nebula.BackgroundImage")));
			this->crab_nebula->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->crab_nebula->Location = System::Drawing::Point(0, -1);
			this->crab_nebula->Name = L"crab_nebula";
			this->crab_nebula->Size = System::Drawing::Size(544, 412);
			this->crab_nebula->TabIndex = 16;
			this->crab_nebula->TabStop = false;
			this->crab_nebula->Visible = false;
			this->crab_nebula->Click += gcnew System::EventHandler(this, &MyForm::crab_nebula_Click);
			// 
			// vent
			// 
			this->vent->BackColor = System::Drawing::Color::Transparent;
			this->vent->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vent.BackgroundImage")));
			this->vent->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vent->Location = System::Drawing::Point(69, 222);
			this->vent->Name = L"vent";
			this->vent->Size = System::Drawing::Size(66, 103);
			this->vent->TabIndex = 17;
			this->vent->TabStop = false;
			this->vent->Visible = false;
			this->vent->Click += gcnew System::EventHandler(this, &MyForm::vent_Click);
			// 
			// screws
			// 
			this->screws->BackColor = System::Drawing::Color::Transparent;
			this->screws->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"screws.BackgroundImage")));
			this->screws->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->screws->Font = (gcnew System::Drawing::Font(L"SWLink", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->screws->Location = System::Drawing::Point(70, 336);
			this->screws->Name = L"screws";
			this->screws->Size = System::Drawing::Size(41, 22);
			this->screws->TabIndex = 18;
			this->screws->TabStop = false;
			this->screws->Visible = false;
			// 
			// vent_open_picture
			// 
			this->vent_open_picture->BackColor = System::Drawing::Color::Transparent;
			this->vent_open_picture->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vent_open_picture.BackgroundImage")));
			this->vent_open_picture->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vent_open_picture->Location = System::Drawing::Point(117, 349);
			this->vent_open_picture->Name = L"vent_open_picture";
			this->vent_open_picture->Size = System::Drawing::Size(96, 22);
			this->vent_open_picture->TabIndex = 19;
			this->vent_open_picture->TabStop = false;
			this->vent_open_picture->Visible = false;
			// 
			// brain
			// 
			this->brain->BackColor = System::Drawing::Color::Transparent;
			this->brain->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"brain.BackgroundImage")));
			this->brain->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->brain->Location = System::Drawing::Point(117, 294);
			this->brain->Name = L"brain";
			this->brain->Size = System::Drawing::Size(59, 42);
			this->brain->TabIndex = 20;
			this->brain->TabStop = false;
			this->brain->Visible = false;
			this->brain->Click += gcnew System::EventHandler(this, &MyForm::brain_Click);
			// 
			// vent_hole
			// 
			this->vent_hole->BackColor = System::Drawing::Color::Transparent;
			this->vent_hole->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vent_hole.BackgroundImage")));
			this->vent_hole->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vent_hole->Location = System::Drawing::Point(86, 233);
			this->vent_hole->Name = L"vent_hole";
			this->vent_hole->Size = System::Drawing::Size(25, 69);
			this->vent_hole->TabIndex = 21;
			this->vent_hole->TabStop = false;
			this->vent_hole->Visible = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Location = System::Drawing::Point(0, -1);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(692, 412);
			this->pictureBox4->TabIndex = 23;
			this->pictureBox4->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(693, 408);
			this->Controls->Add(this->telescope);
			this->Controls->Add(this->entanglePic);
			this->Controls->Add(this->brain);
			this->Controls->Add(this->vent_open_picture);
			this->Controls->Add(this->screws);
			this->Controls->Add(this->flying_papers);
			this->Controls->Add(this->brainPic);
			this->Controls->Add(this->supercondPic);
			this->Controls->Add(this->carbantPic);
			this->Controls->Add(this->pfhishPic);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->printerButton);
			this->Controls->Add(this->pfhishButton);
			this->Controls->Add(this->entangleButton);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->fredNote);
			this->Controls->Add(this->vent);
			this->Controls->Add(this->vent_hole);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->crab_nebula);
			this->Controls->Add(this->pictureBox4);
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pfhishPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->carbantPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->supercondPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->entanglePic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->brainPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->telescope))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flying_papers))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->crab_nebula))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vent))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->screws))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vent_open_picture))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->brain))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vent_hole))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	//Down button
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		switch (room)
		{
		case 1:
			this->BackgroundImage = Image::FromFile("room2.png");
			this->button1->Visible = false;
			this->button2->Visible = true;
			this->button3->Visible = false;
			this->button4->Visible = false;
			this->carbantPic->Visible = true;
			this->supercondPic->Visible = true;
			this->brainPic->Visible = false;
			room = 2;
			break;
		case 5:
			this->BackgroundImage = Image::FromFile("room4.png");
			this->button1->Visible = false;
			this->button2->Visible = true;
			this->button3->Visible = true;
			this->button4->Visible = true;
			this->button7->Visible = false;
			this->button8->Visible = false;
			this->button9->Visible = false;
			this->pictureBox1->Visible = false;
			room = 4;
			break;
		case 6:
			this->BackgroundImage = Image::FromFile("room4.png");
			this->button1->Visible = false;
			this->button2->Visible = true;
			this->button3->Visible = true;
			this->button4->Visible = true;
			room = 4;
			break;
		case 8:
			this->BackgroundImage = Image::FromFile("room7.png");
			this->button1->Visible = false;
			this->button2->Visible = true;
			this->button3->Visible = true;
			this->button4->Visible = true;
			room = 7;
			break;
		case 10:
			this->BackgroundImage = Image::FromFile("room9.png");
			this->button1->Visible = false;
			this->button2->Visible = true;
			this->button3->Visible = true;
			this->button4->Visible = true;
			room = 9;
			break;
		case 12:
			this->BackgroundImage = Image::FromFile("room11.png");
			this->button1->Visible = false;
			this->button2->Visible = false;
			this->button3->Visible = true;
			this->button4->Visible = true;
			room = 11;
			break;
		case 14:
			this->BackgroundImage = Image::FromFile("room13.png");
			this->button1->Visible = false;
			this->button2->Visible = true;
			this->button3->Visible = true;
			this->button4->Visible = true;
			this->printerButton->Visible = true;
			if (pressedPrinter)
			{
				if (quantum_entangler);
				else
					this->entangleButton->Visible = true;
			}
			room = 13;
			break;
		default:
			break;
		}
	}

	//Left button
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		switch (room)
		{
		case 2:
			this->BackgroundImage = Image::FromFile("room3.png");
			this->button1->Visible = false;
			this->button2->Visible = true;
			this->button3->Visible = true;
			this->button4->Visible = false;
			room = 3;
			break;
		case 3:
			this->BackgroundImage = Image::FromFile("room4.png");
			this->button1->Visible = false;
			this->button2->Visible = true;
			this->button3->Visible = true;
			this->button4->Visible = true;
			room = 4;
			break;
		case 4:
			this->BackgroundImage = Image::FromFile("room7.png");
			this->button1->Visible = false;
			this->button2->Visible = true;
			this->button3->Visible = true;
			this->button4->Visible = true;
			room = 7;
			break;
		case 7:
			this->BackgroundImage = Image::FromFile("room9.png");
			this->button1->Visible = false;
			this->button2->Visible = true;
			this->button3->Visible = true;
			this->button4->Visible = true;
			room = 9;
			break;
		case 8:
			this->BackgroundImage = Image::FromFile("room10.png");
			this->button1->Visible = true;
			this->button2->Visible = false;
			this->button3->Visible = true;
			this->button4->Visible = false;
			room = 10;
			break;
		case 9:
			this->BackgroundImage = Image::FromFile("room11.png");
			this->button1->Visible = false;
			this->button2->Visible = false;
			this->button3->Visible = true;
			this->button4->Visible = true;
			room = 11;
			break;
		case 13:
			this->BackgroundImage = Image::FromFile("room12.png");
			this->button1->Visible = true;
			this->button2->Visible = false;
			this->button3->Visible = true;
			this->button4->Visible = false;
			this->printerButton->Visible = false;
			this->entangleButton->Visible = false;
			room = 12;
			break;
		case 15:
			this->BackgroundImage = Image::FromFile("room13.png");
			this->button1->Visible = false;
			this->button2->Visible = true;
			this->button3->Visible = true;
			this->button4->Visible = true;
			this->printerButton->Visible = true;
			if (pressedPrinter)
			{
				if (quantum_entangler);
				else
					this->entangleButton->Visible = true;
			}
			//GREG ADDING CODE//////////////
			this->vent_open_picture->Visible = false;
			this->screws->Visible = false;
			this->vent->Visible = false;
			this->brain->Visible = false;
			this->vent_hole->Visible = false;
			//////////////////////////////
			room = 13;
			break;
		case 16:
			this->BackgroundImage = Image::FromFile("room15.png");
			this->button1->Visible = false;
			this->button2->Visible = true;
			this->button3->Visible = true;
			this->button4->Visible = false;
			// GREG ADDING CODE HERE///////////////
			this->telescope->Visible = false;
			this->flying_papers->Visible = false;
			this->vent->Visible = true;
			if (vent_open) {
				this->screws->Visible = true;
				this->vent_open_picture->Visible = true;
				this->vent_hole->Visible = true;
				if (!brain) {
					this->brain->Visible = true;
				}
				this->vent->Visible = false;
			}
			else {
				this->screws->Visible = false;
				this->vent_open_picture->Visible = false;
				this->brain->Visible = false;
				this->vent_hole->Visible = false;
			}
			////////////////////////////////////////
			room = 15;
			break;
		case 18:
			this->BackgroundImage = Image::FromFile("room17.png");
			this->button1->Visible = false;
			this->button2->Visible = false;
			this->button3->Visible = true;
			this->button4->Visible = false;
			room = 17;
			break;
		case 21:
			this->BackgroundImage = Image::FromFile("room6.png");
			this->button1->Visible = true;
			this->button2->Visible = false;
			this->button3->Visible = true;
			this->button4->Visible = false;
			this->pfhishButton->Visible = false;
			room = 6;
			break;
		default:
			break;
		}
	}

	//Right button
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		switch (room)
		{
		case 3:
			if ((pfhishzeract) && (arbulary_antenna) && (superconducting_antenna) && (human_brain) && (quantum_entangler))
			{
				this->BackgroundImage = Image::FromFile("room2.png");
				this->button1->Visible = false;
				this->button2->Visible = true;
				this->button3->Visible = false;
				this->button4->Visible = true;
				room = 2;
			}
			else
			{
				this->BackgroundImage = Image::FromFile("room2.png");
				this->button1->Visible = false;
				this->button2->Visible = true;
				this->button3->Visible = false;
				this->button4->Visible = false;
				room = 2;
			}
			break;
		case 4:
			this->BackgroundImage = Image::FromFile("room3.png");
			this->button1->Visible = false;
			this->button2->Visible = true;
			this->button3->Visible = true;
			this->button4->Visible = false;
			room = 3;
			break;
		case 6:
			this->BackgroundImage = Image::FromFile("room21.png");
			this->button1->Visible = false;
			this->button2->Visible = true;
			this->button3->Visible = false;
			this->button4->Visible = false;
			if (pfhishzeract)
				this->pfhishButton->Visible = false;
			else
				this->pfhishButton->Visible = true;
			room = 21;
			break;
		case 7:
			this->BackgroundImage = Image::FromFile("room4.png");
			this->button1->Visible = false;
			this->button2->Visible = true;
			this->button3->Visible = true;
			this->button4->Visible = true;
			room = 4;
			break;
		case 9:
			this->BackgroundImage = Image::FromFile("room7.png");
			this->button1->Visible = false;
			this->button2->Visible = true;
			this->button3->Visible = true;
			this->button4->Visible = true;
			room = 7;
			break;
		case 10:
			this->BackgroundImage = Image::FromFile("room8.png");
			this->button1->Visible = true;
			this->button2->Visible = true;
			this->button3->Visible = false;
			this->button4->Visible = false;
			room = 8;
			break;
		case 11:
			this->BackgroundImage = Image::FromFile("room9.png");
			this->button1->Visible = false;
			this->button2->Visible = true;
			this->button3->Visible = true;
			this->button4->Visible = true;
			room = 9;
			break;
		case 12:
			this->BackgroundImage = Image::FromFile("room13.png");
			this->button1->Visible = false;
			this->button2->Visible = true;
			this->button3->Visible = true;
			this->button4->Visible = true;
			this->printerButton->Visible = true;
			if (pressedPrinter)
			{
				if (quantum_entangler);
				else
					this->entangleButton->Visible = true;
			}
			room = 13;
			break;
		case 13:
			this->BackgroundImage = Image::FromFile("room15.png");
			this->button1->Visible = false;
			this->button2->Visible = true;
			this->button3->Visible = true;
			this->button4->Visible = false;
			this->printerButton->Visible = false;
			this->entangleButton->Visible = false;
			//GREG ADDING CODE///////////////////////////////////
			this->vent->Visible = true;
			if (vent_open) {
				this->screws->Visible = true;
				this->vent_open_picture->Visible = true;
				this->vent_hole->Visible = true;
				if (!brain) {
					this->brain->Visible = true;
				}

				this->vent->Visible = false;
			}
			else {
				this->screws->Visible = false;
				this->vent_open_picture->Visible = false;
				this->brain->Visible = false;
				this->vent_hole->Visible = false;
			}
			//////////////////////////////////////////////////////
			room = 15;
			break;
		case 15:
			this->BackgroundImage = Image::FromFile("room16.png");
			this->button1->Visible = false;
			this->button2->Visible = true;
			this->button3->Visible = false;
			this->button4->Visible = false;
			//GREG ADDING CODE////////////////////////////////////////
			this->telescope->Visible = true;
			this->flying_papers->Visible = true;
			this->vent_open_picture->Visible = false;
			this->screws->Visible = false;
			this->vent->Visible = false;
			this->brain->Visible = false;
			this->vent_hole->Visible = false;
			//////////////////////////////////////////////////////////
			room = 16;
			break;
		case 17:
			this->BackgroundImage = Image::FromFile("room18.png");
			this->button1->Visible = false;
			this->button2->Visible = true;
			this->button3->Visible = true;
			this->button4->Visible = false;
			room = 18;
			break;
		case 18:
			this->BackgroundImage = Image::FromFile("room19.png");
			this->button1->Visible = false;
			this->button2->Visible = false;
			this->button3->Visible = true;
			this->button4->Visible = false;
			room = 19;
			break;
		case 19:
			this->BackgroundImage = Image::FromFile("room20.png");
			this->button1->Visible = false;
			this->button2->Visible = false;
			this->button3->Visible = true;
			this->button4->Visible = false;
			this->fredNote->Visible = true;
			room = 20;
			break;
		case 20:
			this->BackgroundImage = Image::FromFile("room19.png");
			this->button1->Visible = false;
			this->button2->Visible = false;
			this->button3->Visible = true;
			this->button4->Visible = false;
			this->fredNote->Visible = false;
			room = 19;
			break;
		case 30:
			this->BackgroundImage = Image::FromFile("room20.png");
			this->button1->Visible = false;
			this->button2->Visible = false;
			this->button3->Visible = true;
			this->button4->Visible = false;
			this->fredNote->Visible = true;
			room = 19;
			break;
		default:
			break;
		}
	}

	//Up button
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		switch (room)
		{
		case 2:
			this->BackgroundImage = Image::FromFile("room17.png");
			this->button1->Visible = false;
			this->button2->Visible = false;
			this->button3->Visible = true;
			this->button4->Visible = false;
			room = 17;
			break;
		case 4:
			if (exploded_chem == 0)
			{
				this->BackgroundImage = Image::FromFile("room5.png");
				this->button1->Visible = true;
				this->button2->Visible = false;
				this->button3->Visible = false;
				this->button4->Visible = false;
				if (~(chem1))
					this->button7->Visible = true;
				if (~(chem2))
					this->button8->Visible = true;
				room = 5;
			}
			else
			{
				this->BackgroundImage = Image::FromFile("room6.png");
				this->button1->Visible = true;
				this->button2->Visible = false;
				this->button3->Visible = true;
				this->button4->Visible = false;
				this->button9->Visible = true;
				this->button7->Visible = false;
				this->button8->Visible = false;
				this->pictureBox1->Visible = false;
				chem1 = 0;
				chem2 = 0;
				room = 6;
			}
			break;
		case 7:
			this->BackgroundImage = Image::FromFile("room8.png");
			this->button1->Visible = true;
			this->button2->Visible = true;
			this->button3->Visible = false;
			this->button4->Visible = false;
			room = 8;
			break;
		case 9:
			this->BackgroundImage = Image::FromFile("room10.png");
			this->button1->Visible = true;
			this->button2->Visible = false;
			this->button3->Visible = true;
			this->button4->Visible = false;
			room = 10;
			break;
		case 11:
			this->BackgroundImage = Image::FromFile("room12.png");
			this->button1->Visible = true;
			this->button2->Visible = false;
			this->button3->Visible = true;
			this->button4->Visible = false;
			room = 12;
			break;
		case 13:
			this->BackgroundImage = Image::FromFile("room14.png");
			this->button1->Visible = true;
			this->button2->Visible = false;
			this->button3->Visible = false;
			this->button4->Visible = false;
			this->printerButton->Visible = false;
			this->entangleButton->Visible = false;
			room = 14;
			break;
		default:
			break;
		}
	}

	//Embark button
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		switch (room)
		{
		case 0:
			//this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"room1.png"));
			this->BackgroundImage = Image::FromFile("room1.png");
			this->button1->Visible = true;
			this->button2->Visible = false;
			this->button3->Visible = false;
			this->button4->Visible = false;
			room = 1;
			this->button5->Visible = false;
			this->button6->Visible = true;
			break;
		}
	}

	//Title button
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		this->BackgroundImage = Image::FromFile("The Fourth Floor.png");
		room = 0;
		exploded_chem = 0;
		pfhishzeract = 0;
		arbulary_antenna = 1;
		superconducting_antenna = 1;
		human_brain = 0;
		quantum_entangler = 0;
		this->button1->Visible = false;
		this->button2->Visible = false;
		this->button3->Visible = false;
		this->button4->Visible = false;
		this->button5->Visible = true;
		this->button6->Visible = false;
		this->button7->Visible = false;
		this->button8->Visible = false;
		this->button9->Visible = false;
		this->pfhishButton->Visible = false;
		this->printerButton->Visible = false;
		this->entangleButton->Visible = false;
		bool chem1 = 0;
		bool chem2 = 0;
		bool spill = 0;
		bool shower = 0;
		bool redLed1 = 0;
		bool greenLed1 = 0;
		bool redLed2 = 0;
		bool greenLed2 = 0;
		bool redLed3 = 0;
		bool greenLed3 = 0;
		bool pressedPrinter = 0;
		this->pfhishPic->Visible = false;
		this->carbantPic->Visible = false;
		this->supercondPic->Visible = false;
		this->brainPic->Visible = false;
		this->entanglePic->Visible = false;
		this->fredNote->Visible = false;
		//GREG ADDING CODE
		this->telescope->Visible = false;
		this->flying_papers->Visible = false;
		this->crab_nebula->Visible = false;
		this->screws->Visible = false;
		this->vent_open_picture->Visible = false;
		this->vent->Visible = false;
		this->vent_hole->Visible = false;
		this->brain->Visible = false;
	}
	
	//Chem1
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		chem1 = 1;
		this->button7->Visible = false;
		if (chem2) {
			this->pictureBox1->Visible = true;
			spill = 1;
			this->button9->Visible = true;
		}
	}

	//Chem2
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		chem2 = 1;
		this->button8->Visible = false;
		if (chem1) {
			this->pictureBox1->Visible = true;
			spill = 1;
			this->button9->Visible = true;
		}
	}

	//Shower
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		exploded_chem = 1;
		this->button9->Visible = false;
		this->button1->Visible = false;
		this->pictureBox1->Visible = false;
		boomTime->Enabled = true;
		this->pictureBox2->Visible = true;
	}

	//pfhishButton

	private: System::Void pfhishButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->pfhishButton->Visible = false;
		pfhishzeract = 1;
		this->pfhishPic->Visible = true;
	}


	//printerButton
	private: System::Void printerButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (pressedPrinter);
		else
		{
			pressedPrinter = 1;
			this->entangleButton->Visible = true;
		}
	}

	//Entangler Button
	private: System::Void entangleButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->entangleButton->Visible = false;
		quantum_entangler = 1;
		this->entanglePic->Visible = 1;
	}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	this->pictureBox2->Visible = false;
	this->BackgroundImage = Image::FromFile("room6.png");
	this->button1->Visible = true;
	this->button2->Visible = false;
	this->button3->Visible = false;
	this->button4->Visible = false;
	room = 6;
	this->button3->Visible = true;
	boomTime->Enabled = false;
}



private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e) {
}

//Fred Note Click
private: System::Void fredNote_Click(System::Object^  sender, System::EventArgs^  e) {
	this->BackgroundImage = Image::FromFile("room30.png");
	this->button1->Visible = false;
	this->button2->Visible = false;
	this->button3->Visible = true;
	this->button4->Visible = false;
	this->fredNote->Visible = false;
	room = 30;
}


//GREG ADDING CODE/////////////////////////////////////////////////////
private: System::Void telescope_Click(System::Object^  sender, System::EventArgs^  e) {
	this->crab_nebula->Visible = true;
	this->button1->Visible = false;
	this->button2->Visible = false;
	this->button3->Visible = false;
	this->button4->Visible = false;
	this->telescope->Visible = false;
	this->flying_papers->Visible = false;


	//GREG ADDING CODE///////////////////////////////
}
private: System::Void crab_nebula_Click(System::Object^  sender, System::EventArgs^  e) {
	this->crab_nebula->Visible = false;
	this->button1->Visible = false;
	this->button2->Visible = true;
	this->button3->Visible = false;
	this->button4->Visible = false;
	this->telescope->Visible = true;
	this->flying_papers->Visible = true;
}
private: System::Void vent_Click(System::Object^  sender, System::EventArgs^  e) {

	vent_count = vent_count + 1;
	if (vent_count == 6) {
		vent_open = 1;
		this->screws->Visible = true;
		this->vent_open_picture->Visible = true;
		this->vent->Visible = false;
		this->vent_hole->Visible = true;
		this->brain->Visible = true;
		vent_count = 0;

	}

}


private: System::Void brain_Click(System::Object^  sender, System::EventArgs^  e) {

	human_brain = 1;
	this->brain->Visible = false; //button
	this->brainPic->Visible = true;// menu item
}
		 ////////////////////////////////////////////////////////////////////////////////

};
}
