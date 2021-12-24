#pragma once
#include "TQueueList.h"

namespace CPUTaskQueue {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public struct Task
	{
		int number;		// Номер задачи
		int stepCount;	// Счетчик оставшихся тактов
		int needProc;	// Нужно процессоров для выполнения
		int red, green, blue;	// Цвет задачи
	};



	
	TQueueList<Task> taskQueue;	// Очередь задач
	int quantityProc, procToTask_From, procToTask_To, stepsToTask_From, stepsToTask_To;	// Хранение параметров
	int taskNumber = 1;		// Номер следующей задачи
	float probabilityTask;	// Вероятность поступления задачи
	int stepCompleted = 0;	// Тактов времени пройдено

	/// <summary>
	/// Сводка для Processors
	/// </summary>
	public ref class Processors : public System::Windows::Forms::Form
	{
		List<int> taskInProcess_number;		// Список с номерами задач в процессе
		List<int> taskInProcess_stepLeft;	// Список с оставшимся количеством шагов для задач в процессе
		List<Button^> buttonList;			// Список кнопок (процессоров)

	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button3;
		   //List<int> processors;
		Random^ rand;

	public:
		Processors(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Processors()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ quantProc;

	private: System::Windows::Forms::TextBox^ probTask;


	protected:

	protected:




	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ timeStep;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridView^ dataGridView1;





	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;



	private: System::Windows::Forms::DataGridView^ dataGridView4;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

















	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle13 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->quantProc = (gcnew System::Windows::Forms::TextBox());
			this->probTask = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->timeStep = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calisto MT", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(43, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(208, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Настройки:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calisto MT", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(56, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(273, 28);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Количество процессоров:";
			// 
			// quantProc
			// 
			this->quantProc->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->quantProc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->quantProc->Location = System::Drawing::Point(373, 74);
			this->quantProc->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->quantProc->MaxLength = 3;
			this->quantProc->Name = L"quantProc";
			this->quantProc->Size = System::Drawing::Size(131, 23);
			this->quantProc->TabIndex = 2;
			this->quantProc->Text = L"9";
			this->quantProc->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->quantProc->TextChanged += gcnew System::EventHandler(this, &Processors::quantProc_TextChanged);
			// 
			// probTask
			// 
			this->probTask->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->probTask->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->probTask->Location = System::Drawing::Point(373, 110);
			this->probTask->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->probTask->MaxLength = 10;
			this->probTask->Name = L"probTask";
			this->probTask->Size = System::Drawing::Size(131, 23);
			this->probTask->TabIndex = 4;
			this->probTask->Text = L"0,5";
			this->probTask->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->probTask->TextChanged += gcnew System::EventHandler(this, &Processors::probTask_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calisto MT", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(45, 108);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(276, 28);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Шанс поступления задачи:";
			// 
			// timeStep
			// 
			this->timeStep->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->timeStep->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->timeStep->Location = System::Drawing::Point(373, 146);
			this->timeStep->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->timeStep->MaxLength = 6;
			this->timeStep->Name = L"timeStep";
			this->timeStep->Size = System::Drawing::Size(131, 23);
			this->timeStep->TabIndex = 6;
			this->timeStep->Text = L"250";
			this->timeStep->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->timeStep->TextChanged += gcnew System::EventHandler(this, &Processors::timeStep_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calisto MT", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(3, 143);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(314, 28);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Время выполнения такта (мс):";
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(337, 185);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->MaxLength = 3;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(69, 23);
			this->textBox1->TabIndex = 8;
			this->textBox1->Text = L"1";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Processors::textBox1_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calisto MT", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(4, 185);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(254, 28);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Процессоров на задачу:";
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(337, 223);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->MaxLength = 5;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(69, 23);
			this->textBox2->TabIndex = 10;
			this->textBox2->Text = L"3";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Processors::textBox2_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calisto MT", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(71, 220);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(191, 28);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Тактов на задачу:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::MediumTurquoise;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column2 });
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->Location = System::Drawing::Point(1491, 0);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleRight;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::ControlLight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->RowTemplate->ReadOnly = true;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView1->ShowCellErrors = false;
			this->dataGridView1->ShowCellToolTips = false;
			this->dataGridView1->ShowEditingIcon = false;
			this->dataGridView1->ShowRowErrors = false;
			this->dataGridView1->Size = System::Drawing::Size(197, 956);
			this->dataGridView1->TabIndex = 11;
			this->dataGridView1->SelectionChanged += gcnew System::EventHandler(this, &Processors::dataGridView1_SelectionChanged);
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Column2->DefaultCellStyle = dataGridViewCellStyle2;
			this->Column2->HeaderText = L"Очередь:";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column2->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// dataGridView4
			// 
			this->dataGridView4->AllowUserToAddRows = false;
			this->dataGridView4->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::Maroon;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::Info;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView4->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn2 });
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::GrayText;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView4->DefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridView4->EnableHeadersVisualStyles = false;
			this->dataGridView4->Location = System::Drawing::Point(560, 729);
			this->dataGridView4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView4->Name = L"dataGridView4";
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView4->RowHeadersDefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView4->RowHeadersVisible = false;
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dataGridView4->RowTemplate->Height = 25;
			this->dataGridView4->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView4->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView4->Size = System::Drawing::Size(709, 228);
			this->dataGridView4->TabIndex = 15;
			this->dataGridView4->SelectionChanged += gcnew System::EventHandler(this, &Processors::dataGridView4_SelectionChanged);
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"События:";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::GreenYellow;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(76, 274);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(213, 57);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Старт";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Processors::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gold;
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(303, 274);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(201, 57);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Пауза";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Processors::button2_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calisto MT", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(55, 597);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(213, 38);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Статистика:";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::GrayText;
			this->textBox3->Enabled = false;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox3->Location = System::Drawing::Point(373, 657);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->MaxLength = 3;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(125, 30);
			this->textBox3->TabIndex = 20;
			this->textBox3->Text = L"0";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Calisto MT", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Location = System::Drawing::Point(40, 658);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(275, 28);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Времени прошло (тактов):";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::GrayText;
			this->textBox4->Enabled = false;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox4->Location = System::Drawing::Point(373, 879);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->MaxLength = 3;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(125, 30);
			this->textBox4->TabIndex = 22;
			this->textBox4->Text = L"0/0";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Calisto MT", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->Location = System::Drawing::Point(131, 880);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(198, 28);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Средняя нагрузка:";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::GrayText;
			this->textBox5->Enabled = false;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox5->Location = System::Drawing::Point(373, 842);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->MaxLength = 3;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(125, 30);
			this->textBox5->TabIndex = 24;
			this->textBox5->Text = L"0";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Calisto MT", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label11->Location = System::Drawing::Point(136, 843);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(193, 28);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Тактов ожидания:";
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::GrayText;
			this->textBox6->Enabled = false;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox6->Location = System::Drawing::Point(356, 492);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->MaxLength = 3;
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(125, 30);
			this->textBox6->TabIndex = 26;
			this->textBox6->Text = L"0";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Calisto MT", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label12->Location = System::Drawing::Point(89, 492);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(213, 28);
			this->label12->TabIndex = 25;
			this->label12->Text = L"Выполняется задач:";
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::GrayText;
			this->textBox7->Enabled = false;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox7->Location = System::Drawing::Point(356, 528);
			this->textBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox7->MaxLength = 3;
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(125, 30);
			this->textBox7->TabIndex = 28;
			this->textBox7->Text = L"0";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Calisto MT", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label13->Location = System::Drawing::Point(123, 528);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(188, 28);
			this->label13->TabIndex = 27;
			this->label13->Text = L"Задач в очереди:";
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::GrayText;
			this->textBox8->Enabled = false;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox8->Location = System::Drawing::Point(373, 731);
			this->textBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox8->MaxLength = 3;
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(125, 30);
			this->textBox8->TabIndex = 30;
			this->textBox8->Text = L"0";
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Calisto MT", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label14->Location = System::Drawing::Point(132, 732);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(193, 28);
			this->label14->TabIndex = 29;
			this->label14->Text = L"Выполнено задач:";
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::GrayText;
			this->textBox9->Enabled = false;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox9->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox9->Location = System::Drawing::Point(373, 768);
			this->textBox9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox9->MaxLength = 3;
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(125, 30);
			this->textBox9->TabIndex = 32;
			this->textBox9->Text = L"0";
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Calisto MT", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label15->Location = System::Drawing::Point(133, 769);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(193, 28);
			this->label15->TabIndex = 31;
			this->label15->Text = L"Пропущено задач:";
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::SystemColors::GrayText;
			this->textBox10->Enabled = false;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox10->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox10->Location = System::Drawing::Point(373, 694);
			this->textBox10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox10->MaxLength = 3;
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(125, 30);
			this->textBox10->TabIndex = 34;
			this->textBox10->Text = L"0";
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Calisto MT", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label16->Location = System::Drawing::Point(69, 695);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(250, 28);
			this->label16->TabIndex = 33;
			this->label16->Text = L"Всего поступило задач:";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Location = System::Drawing::Point(569, 62);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(700, 650);
			this->panel1->TabIndex = 35;
			// 
			// textBox11
			// 
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox11->Location = System::Drawing::Point(465, 183);
			this->textBox11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox11->MaxLength = 3;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(69, 23);
			this->textBox11->TabIndex = 36;
			this->textBox11->Text = L"5";
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &Processors::textBox11_TextChanged);
			// 
			// textBox12
			// 
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox12->Location = System::Drawing::Point(465, 223);
			this->textBox12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox12->MaxLength = 5;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(69, 23);
			this->textBox12->TabIndex = 37;
			this->textBox12->Text = L"7";
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &Processors::textBox12_TextChanged);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label17->Location = System::Drawing::Point(297, 185);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(44, 25);
			this->label17->TabIndex = 38;
			this->label17->Text = L"от:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label18->Location = System::Drawing::Point(417, 182);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(44, 25);
			this->label18->TabIndex = 39;
			this->label18->Text = L"до:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label19->Location = System::Drawing::Point(297, 222);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(44, 25);
			this->label19->TabIndex = 40;
			this->label19->Text = L"от:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label20->Location = System::Drawing::Point(417, 222);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(44, 25);
			this->label20->TabIndex = 41;
			this->label20->Text = L"до:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Calisto MT", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label21->Location = System::Drawing::Point(43, 398);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(344, 38);
			this->label21->TabIndex = 42;
			this->label21->Text = L"Текущее состояние:";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Processors::timer1_Tick);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView2->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->dataGridView2->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle9->BackColor = System::Drawing::Color::Lime;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn1 });
			dataGridViewCellStyle11->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle11->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle11->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle11->SelectionBackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle11->SelectionForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle11->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle11;
			this->dataGridView2->EnableHeadersVisualStyles = false;
			this->dataGridView2->Location = System::Drawing::Point(1288, 0);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView2->MultiSelect = false;
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			dataGridViewCellStyle12->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleRight;
			dataGridViewCellStyle12->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle12->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle12->SelectionBackColor = System::Drawing::SystemColors::ControlLight;
			dataGridViewCellStyle12->SelectionForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle12->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->RowHeadersDefaultCellStyle = dataGridViewCellStyle12;
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 51;
			dataGridViewCellStyle13->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dataGridView2->RowsDefaultCellStyle = dataGridViewCellStyle13;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->RowTemplate->ReadOnly = true;
			this->dataGridView2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView2->ShowCellErrors = false;
			this->dataGridView2->ShowCellToolTips = false;
			this->dataGridView2->ShowEditingIcon = false;
			this->dataGridView2->ShowRowErrors = false;
			this->dataGridView2->Size = System::Drawing::Size(197, 956);
			this->dataGridView2->TabIndex = 43;
			this->dataGridView2->SelectionChanged += gcnew System::EventHandler(this, &Processors::dataGridView2_SelectionChanged);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle10->BackColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dataGridViewTextBoxColumn1->DefaultCellStyle = dataGridViewCellStyle10;
			this->dataGridViewTextBoxColumn1->HeaderText = L"В процессе:";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewTextBoxColumn1->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::SystemColors::GrayText;
			this->textBox13->Enabled = false;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox13->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox13->Location = System::Drawing::Point(356, 457);
			this->textBox13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox13->MaxLength = 3;
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(125, 30);
			this->textBox13->TabIndex = 45;
			this->textBox13->Text = L"0/0";
			this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Calisto MT", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label22->Location = System::Drawing::Point(113, 457);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(194, 28);
			this->label22->TabIndex = 44;
			this->label22->Text = L"Текущая нагрузка:";
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::SystemColors::GrayText;
			this->textBox14->Enabled = false;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox14->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox14->Location = System::Drawing::Point(373, 805);
			this->textBox14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox14->MaxLength = 3;
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(125, 30);
			this->textBox14->TabIndex = 47;
			this->textBox14->Text = L"0";
			this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Calisto MT", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label23->Location = System::Drawing::Point(112, 806);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(215, 28);
			this->label23->TabIndex = 46;
			this->label23->Text = L"Тактов выполнения:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calisto MT", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(708, 20);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(434, 39);
			this->label7->TabIndex = 48;
			this->label7->Text = L"Состояние процессоров:";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Tomato;
			this->button3->Enabled = false;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(165, 338);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(261, 57);
			this->button3->TabIndex = 49;
			this->button3->Text = L"Сброс";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Processors::button3_Click);
			// 
			// Processors
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1688, 966);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->timeStep);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->probTask);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->quantProc);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Processors";
			this->Text = L"Процессоры";
			this->Load += gcnew System::EventHandler(this, &Processors::Processors_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		

		// Отрисовка кнопки в указаной позиции и нужного размера
		void DrawButton(float posX, float posY, float width, float high)
		{
			Button^ button = (gcnew System::Windows::Forms::Button());
			button->Location = System::Drawing::Point(posX, posY);
			button->Size = System::Drawing::Size(width, high);
			button->UseVisualStyleBackColor = true;
			button->Enabled = false;
			button->BackColor = SystemColors::Control;
			button->ForeColor = SystemColors::WindowText;
			Drawing::Font^ font = gcnew Drawing::Font(DefaultFont->Name, width / 4);
			button->Font = font;
			button->Text = (0).ToString();
			this->panel1->Controls->Add(button);
			buttonList.Add(button);
		}

		// Заполнение панели указанным количеством процессоров
		void FillCPUPanel(int quant, int interval)
		{
			for each (auto button in buttonList)
			{
				this->panel1->Controls->Remove(button);
			}
			buttonList.Clear();

			int countInString = 1;
			while (quant > countInString* countInString) countInString++;
			float sizeButton = GetSizeButton(interval, countInString);
			int currentCount = 0;
			for (int i = 0; i < countInString; i++)
			{
				if (currentCount >= quant) return;
				for (int j = 0; j < countInString; j++)
				{
					if (currentCount >= quant) return;
					DrawButton(interval + j * (interval+sizeButton), interval + i * (interval + sizeButton), sizeButton, sizeButton);
					currentCount++;
				}
			}

		}

		// Вычислить размер квадратной кнопки
		int GetSizeButton(float interval, int countInString)
		{
			int sizePanel = panel1->Width;
			sizePanel -= interval * countInString + interval;
			return sizePanel / countInString;
		}

		// Попытаться отправить задачу на процессоры
		void TrySendTask(Task task)
		{
			dataGridView1->Rows->RemoveAt(0);
			// Не хватает процессоров - отправляем задачу в конец очереди
			if (task.needProc > buttonList.Count - GetBusyProcCount())
			{
				String^ str = task.number.ToString() + ": " + task.needProc.ToString() + "p, " + task.stepCount.ToString() + "s";
				dataGridView1->Rows->Add(str);
				dataGridView1->Rows[dataGridView1->Rows->Count - 1]->DefaultCellStyle->BackColor =
					Color::FromArgb(task.red, task.green, task.blue);
				taskQueue.Push(task);
				dataGridView4->Rows->Add("Задача №" + task.number.ToString() + " отложена. Недостаточно свободных процессоров.");
				dataGridView4->Rows[dataGridView4->Rows->Count - 1]->DefaultCellStyle->ForeColor = Color::OrangeRed;	
				int countTextBox9 = Convert::ToInt32(textBox9->Text) + 1;
				textBox9->Text = countTextBox9.ToString();
			}
			// Процессоров хватило - отправляет ее на процессоры
			else
			{
				String^ str = task.number.ToString() + ": " + task.needProc.ToString() + "p, " + task.stepCount.ToString() + "s";
				dataGridView2->Rows->Add(str);
				dataGridView2->Rows[dataGridView2->Rows->Count - 1]->DefaultCellStyle->BackColor =
					Color::FromArgb(task.red, task.green, task.blue);
				taskInProcess_number.Add(task.number);
				taskInProcess_stepLeft.Add(task.stepCount);
				int countProc = task.needProc;
				for (int i = 0; i < buttonList.Count && countProc != 0; i++)
				{
					if (buttonList[i]->Text == (0).ToString())
					{
						buttonList[i]->BackColor = Color::FromArgb(task.red, task.green, task.blue);
						buttonList[i]->Text = task.stepCount.ToString();
						countProc--;
					}
				}
				dataGridView4->Rows->Add("Задача №" + task.number.ToString() + " отправлена на выполнение.");
				dataGridView4->Rows[dataGridView4->Rows->Count - 1]->DefaultCellStyle->ForeColor = Color::Cyan;
			}

		}

		// Узнать количество занятых процессоров
		int GetBusyProcCount()
		{
			int busyCount = 0;
			for each (Button^ item in buttonList)
				if (Convert::ToInt32(item->Text) > 0) busyCount++;
			return busyCount;
		}

		// Добавление новой задачи в очередь
		void AddTask()
		{
			Task newTask;
			newTask.needProc = rand->Next(procToTask_From, procToTask_To + 1);
			newTask.stepCount = rand->Next(stepsToTask_From, stepsToTask_To + 1);
			newTask.number = taskNumber++;
			newTask.red = rand->Next(50, 255);
			newTask.green = rand->Next(50, 255);
			newTask.blue = rand->Next(50, 255);

			String^ str = newTask.number.ToString() + ": " + newTask.needProc.ToString() + "p, " + newTask.stepCount.ToString() + "s";
			dataGridView1->Rows->Add(str);
			dataGridView1->Rows[dataGridView1->Rows->Count - 1]->DefaultCellStyle->BackColor =
				Color::FromArgb(newTask.red, newTask.green, newTask.blue);
			dataGridView1->ClearSelection();
			taskQueue.Push(newTask);
		}

		// Убрать задачу из раздела "В процессе"
		void RemoveTaskInProcess(int number)
		{
			String^ str = number.ToString();
			for (int i = 0; i < dataGridView2->RowCount; i++)
			{
				bool needRemove = true;
				for (int j = 0; j < str->Length; j++)
				{
					String^ value = dataGridView2[0,i]->Value->ToString();
					if (str[j] != value[j])
						needRemove = false;
				}
				if (needRemove)
				{
					dataGridView4->Rows->Add("Задача №" + number.ToString() + " выполнена.");
					dataGridView4->Rows[dataGridView4->Rows->Count - 1]->DefaultCellStyle->ForeColor = Color::LawnGreen;
					dataGridView2->Rows->RemoveAt(i);
					int countTextBox8 = Convert::ToInt32(textBox8->Text) + 1;
					textBox8->Text = countTextBox8.ToString();

					return;
				}
			}

		}



		// Нажатие на кнопку "Старт/Обновить"
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			quantityProc = Convert::ToInt32(quantProc->Text);
			if (quantityProc < 0) throw;
			probabilityTask = Convert::ToDouble(probTask->Text);
			if (probabilityTask > 1 || probabilityTask < 0) throw;
			timer1->Interval = Convert::ToInt32(timeStep->Text);
			procToTask_From = Convert::ToInt32(textBox1->Text);
			if (procToTask_From < 0) throw;
			procToTask_To = Convert::ToInt32(textBox11->Text);
			if (procToTask_To < 0) throw;
			if (procToTask_From > procToTask_To) throw;
			stepsToTask_From = Convert::ToInt32(textBox2->Text);
			if (stepsToTask_From < 0) throw;
			stepsToTask_To = Convert::ToInt32(textBox12->Text);
			if (stepsToTask_To < 0) throw;
			if (stepsToTask_From > stepsToTask_To) throw;
		}
		catch (...)
		{
			return;
		}
		quantProc->Enabled = false;
		if (button1->Text == "Старт")
			timer1->Enabled = true;
		button1->Text = "Обновить";
		button2->Enabled = true;
		button3->Enabled = true;
		button1->Enabled = false;
	}


	   // Перерисовка процессоров при изменении числа в текстовом поле
private: System::Void quantProc_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	try { FillCPUPanel(Convert::ToInt32(quantProc->Text), -1); }
	catch (...) { return; }
	
}

	   // Работа одного такта
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

	// Обновление статистики:
	int countTextBox5 = Convert::ToInt32(textBox5->Text);
	textBox5->Text = (countTextBox5 + buttonList.Count - GetBusyProcCount()).ToString();
	int countTextBox14 = Convert::ToInt32(textBox14->Text) + GetBusyProcCount();
	textBox14->Text = countTextBox14.ToString();
	//=======================================

	// Уменьшение на единицу чисел на активных процессорах
	for each (Button^ proc in buttonList)
	{
		int stepLeft = Convert::ToInt32(proc->Text);
		if (stepLeft != 0)
		{
			stepLeft--;
			
			proc->Text = stepLeft.ToString();
			if (stepLeft == 0)
			{
				proc->BackColor = SystemColors::Control;

			}
		}
	}

	// Удаление из раздела "В процессе" завершенных задач
	List<int> numberTaskForDelete;
	for (int i = 0; i < taskInProcess_number.Count; i++)
	{
		taskInProcess_stepLeft[i]--;
		if (taskInProcess_stepLeft[i] == 0)
		{
			numberTaskForDelete.Add(taskInProcess_number[i]);
		}
	}
	for each (int num in numberTaskForDelete)
	{
		RemoveTaskInProcess(num);
		taskInProcess_number.Remove(num);
		taskInProcess_stepLeft.Remove(0);
	}

	// Попытка отправить задачу на выполнение
	if (!taskQueue.IsEmpty()) TrySendTask(taskQueue.Pop());

	// Добавление новой задачи в очередь с некоторой вероятностью
	if (probabilityTask > rand->NextDouble())
	{
		AddTask();
		int countTextBox10 = Convert::ToInt32(textBox10->Text) + 1;
		textBox10->Text = countTextBox10.ToString();
	}
		


	// Обновление статистики
	textBox13->Text = GetBusyProcCount().ToString() + "/" + buttonList.Count.ToString();
	textBox6->Text = dataGridView2->Rows->Count.ToString();
	textBox7->Text = dataGridView1->Rows->Count.ToString();
	int countTextBox3 = Convert::ToInt32(textBox3->Text)+1;
	textBox3->Text = countTextBox3.ToString();
	int countTextBox4 = Convert::ToInt32(textBox3->Text) + 1;
	stepCompleted += GetBusyProcCount();
	textBox4->Text = ((int)((float)stepCompleted / countTextBox3)).ToString() + "/" + buttonList.Count.ToString();
	
	// Авто-прокручивание таблицы с событиями к последним действиям
	if (dataGridView4->Rows->Count != 0)
		dataGridView4->FirstDisplayedScrollingRowIndex = dataGridView4->Rows->Count - 1;

}

	   // Заполнение процессорами при загрузке формы
private: System::Void Processors_Load(System::Object^ sender, System::EventArgs^ e) {
	rand = gcnew Random();
	FillCPUPanel(Convert::ToInt32(quantProc->Text), -1);
}

private: System::Void dataGridView1_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->ClearSelection();
}
private: System::Void dataGridView2_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
	dataGridView2->ClearSelection();
}
	   // Нажатие на кнопку "Пауза/Продолжить"
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button2->Text == "Пауза")
	{
		button2->Text = "Продолжить";
		timer1->Enabled = false;
	}
	else
	{
		button2->Text = "Пауза";
		timer1->Enabled = true;
	}
}

	   // Нажатие на кнопку "Сброс"
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearAllProcess();
	button3->Enabled = false;
	button2->Enabled = false;
	button1->Enabled = true;
	button2->Text = "Пауза";
	button1->Text = "Старт";
	quantProc->Enabled = true;
}

	   // Очистить все процессы и начать заново
	   void ClearAllProcess()
	   {
		   FillCPUPanel(Convert::ToInt32(quantProc->Text), -1);
		   timer1->Enabled = false;
		   taskInProcess_number.Clear();
		   taskInProcess_stepLeft.Clear();
		   dataGridView1->Rows->Clear();
		   dataGridView2->Rows->Clear();
		   dataGridView4->Rows->Clear();
		   textBox13->Text = "0/0";
		   textBox6->Text = "0";
		   textBox7->Text = "0";
		   textBox3->Text = "0";
		   textBox10->Text = "0";
		   textBox8->Text = "0";
		   textBox9->Text = "0";
		   textBox14->Text = "0";
		   textBox5->Text = "0";
		   textBox4->Text = "0/0";
		   taskQueue.Clear();
		   stepCompleted = 0;
		   taskNumber = 1;

	   }





	   // Кнопка "Обновить" становится доступной при изменении параметров

private: System::Void dataGridView4_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
	dataGridView4->ClearSelection();
}
private: System::Void probTask_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	button1->Enabled = true;
}
private: System::Void timeStep_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	button1->Enabled = true;
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	button1->Enabled = true;
}
private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	button1->Enabled = true;
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	button1->Enabled = true;
}
private: System::Void textBox12_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	button1->Enabled = true;
}
};







}
