#pragma once
#include "stdafx.h"
namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	RandValue r;
	public ref class Form1 : public System::Windows::Forms::Form
	{

	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}
	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBoxN;
	private: System::Windows::Forms::TextBox^  textBoxM;


	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBoxD;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::DataGridView^  DataGrid;



	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Label^  label8;

	private: System::Windows::Forms::TextBox^  textBoxE;



	private: System::Windows::Forms::Label^  label_l;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label_off;


	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::Label^  label13;
	private: ZedGraph::ZedGraphControl^  Graph;

	private: System::Windows::Forms::DataGridView^  DataGrid2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column10;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  textBoxZ;
	private: System::Windows::Forms::DataGridView^  DataGrid4;


	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::CheckBox^  checkBox;
	private: System::Windows::Forms::DataGridView^  DataGrid3;
	private: ZedGraph::ZedGraphControl^  Graph2;
	private: System::Windows::Forms::Button^  button2;




























	private: System::ComponentModel::IContainer^  components;











	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxN = (gcnew System::Windows::Forms::TextBox());
			this->textBoxM = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxD = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->DataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxE = (gcnew System::Windows::Forms::TextBox());
			this->label_l = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label_off = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Graph = (gcnew ZedGraph::ZedGraphControl());
			this->DataGrid2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBoxZ = (gcnew System::Windows::Forms::TextBox());
			this->DataGrid4 = (gcnew System::Windows::Forms::DataGridView());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->DataGrid3 = (gcnew System::Windows::Forms::DataGridView());
			this->Graph2 = (gcnew ZedGraph::ZedGraphControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGrid))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGrid2))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGrid4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGrid3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 192);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(201, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Количество покупателей";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(237, 89);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(22, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"m";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(237, 192);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"N";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 89);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(219, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Математическое ожидание";
			// 
			// textBoxN
			// 
			this->textBoxN->Location = System::Drawing::Point(268, 188);
			this->textBoxN->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBoxN->Name = L"textBoxN";
			this->textBoxN->Size = System::Drawing::Size(55, 26);
			this->textBoxN->TabIndex = 4;
			this->textBoxN->Text = L"10";
			// 
			// textBoxM
			// 
			this->textBoxM->Location = System::Drawing::Point(268, 85);
			this->textBoxM->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBoxM->Name = L"textBoxM";
			this->textBoxM->Size = System::Drawing::Size(55, 26);
			this->textBoxM->TabIndex = 5;
			this->textBoxM->Text = L"5";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(240, 142);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(18, 20);
			this->label5->TabIndex = 6;
			this->label5->Text = L"d";
			// 
			// textBoxD
			// 
			this->textBoxD->Location = System::Drawing::Point(268, 137);
			this->textBoxD->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBoxD->Name = L"textBoxD";
			this->textBoxD->Size = System::Drawing::Size(55, 26);
			this->textBoxD->TabIndex = 7;
			this->textBoxD->Text = L"1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 142);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(91, 20);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Дисперсия";
			// 
			// DataGrid
			// 
			this->DataGrid->AllowUserToAddRows = false;
			this->DataGrid->AllowUserToDeleteRows = false;
			this->DataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->Column1, this->Column2 });
			this->DataGrid->Location = System::Drawing::Point(474, 18);
			this->DataGrid->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->DataGrid->Name = L"DataGrid";
			this->DataGrid->ReadOnly = true;
			this->DataGrid->RowHeadersVisible = false;
			this->DataGrid->Size = System::Drawing::Size(258, 487);
			this->DataGrid->TabIndex = 9;
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->Column1->HeaderText = L"№";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 60;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column2->HeaderText = L"G";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(18, 849);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(323, 68);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Смоделировать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(9, 48);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(187, 20);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Числов экспериментов";
			// 
			// textBoxE
			// 
			this->textBoxE->Location = System::Drawing::Point(268, 37);
			this->textBoxE->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBoxE->Name = L"textBoxE";
			this->textBoxE->Size = System::Drawing::Size(55, 26);
			this->textBoxE->TabIndex = 14;
			this->textBoxE->Text = L"10";
			// 
			// label_l
			// 
			this->label_l->AutoSize = true;
			this->label_l->Location = System::Drawing::Point(52, 102);
			this->label_l->Name = L"label_l";
			this->label_l->Size = System::Drawing::Size(21, 20);
			this->label_l->TabIndex = 15;
			this->label_l->Text = L"...";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(10, 102);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 20);
			this->label9->TabIndex = 16;
			this->label9->Text = L"λ = ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(10, 134);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(35, 20);
			this->label10->TabIndex = 17;
			this->label10->Text = L"θ = ";
			// 
			// label_off
			// 
			this->label_off->AutoSize = true;
			this->label_off->Location = System::Drawing::Point(52, 134);
			this->label_off->Name = L"label_off";
			this->label_off->Size = System::Drawing::Size(21, 20);
			this->label_off->TabIndex = 18;
			this->label_off->Text = L"...";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->textBoxE);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBoxM);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBoxD);
			this->groupBox1->Controls->Add(this->textBoxN);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(21, 566);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox1->Size = System::Drawing::Size(336, 262);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметры";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(237, 42);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(18, 20);
			this->label13->TabIndex = 15;
			this->label13->Text = L"n";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(18, 18);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(445, 124);
			this->textBox1->TabIndex = 20;
			this->textBox1->Text = L"В очереди к кассе стоят N >>1 человек. Сумма, которую нужно заплатить отдельному "
				L"лицу, есть случайная величина со средним m и\r\nдисперсией d. Вид распределения по"
				L"казан на рисунке:\r\n\r\n\r\n";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(16, 152);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(231, 192);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label_l);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label_off);
			this->groupBox2->Location = System::Drawing::Point(21, 372);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(336, 162);
			this->groupBox2->TabIndex = 22;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Функция распределения ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(66, 55);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(207, 20);
			this->label12->TabIndex = 21;
			this->label12->Text = L"1 - exp(-λ*(x-θ)), если x >= θ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(66, 35);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(99, 20);
			this->label11->TabIndex = 20;
			this->label11->Text = L"0, если x < θ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(10, 51);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 20);
			this->label7->TabIndex = 19;
			this->label7->Text = L"F(x) =";
			// 
			// Graph
			// 
			this->Graph->Location = System::Drawing::Point(773, 17);
			this->Graph->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->Graph->Name = L"Graph";
			this->Graph->ScrollGrace = 0;
			this->Graph->ScrollMaxX = 0;
			this->Graph->ScrollMaxY = 0;
			this->Graph->ScrollMaxY2 = 0;
			this->Graph->ScrollMinX = 0;
			this->Graph->ScrollMinY = 0;
			this->Graph->ScrollMinY2 = 0;
			this->Graph->Size = System::Drawing::Size(1090, 409);
			this->Graph->TabIndex = 23;
			// 
			// DataGrid2
			// 
			this->DataGrid2->AllowUserToAddRows = false;
			this->DataGrid2->AllowUserToDeleteRows = false;
			this->DataGrid2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGrid2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column4, this->Column5,
					this->Column6, this->Column7, this->Column8, this->Column9, this->Column11, this->Column10
			});
			this->DataGrid2->Location = System::Drawing::Point(773, 439);
			this->DataGrid2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->DataGrid2->Name = L"DataGrid2";
			this->DataGrid2->ReadOnly = true;
			this->DataGrid2->RowHeadersVisible = false;
			this->DataGrid2->Size = System::Drawing::Size(1092, 66);
			this->DataGrid2->TabIndex = 24;
			// 
			// Column4
			// 
			this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->Column4->HeaderText = L"Eη";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 65;
			// 
			// Column5
			// 
			this->Column5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->Column5->HeaderText = L"x";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 52;
			// 
			// Column6
			// 
			this->Column6->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->Column6->HeaderText = L"|Eη − x|";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 99;
			// 
			// Column7
			// 
			this->Column7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->Column7->HeaderText = L"Dη";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Width = 66;
			// 
			// Column8
			// 
			this->Column8->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->Column8->HeaderText = L"S^2";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Width = 72;
			// 
			// Column9
			// 
			this->Column9->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->Column9->HeaderText = L"|Dη-S^2|";
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			this->Column9->Width = 108;
			// 
			// Column11
			// 
			this->Column11->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->Column11->HeaderText = L"R";
			this->Column11->Name = L"Column11";
			this->Column11->ReadOnly = true;
			this->Column11->Width = 57;
			// 
			// Column10
			// 
			this->Column10->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->Column10->HeaderText = L"Me (выб.)";
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			this->Column10->Width = 114;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(375, 524);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1498, 484);
			this->tabControl1->TabIndex = 25;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->textBoxZ);
			this->tabPage1->Controls->Add(this->DataGrid4);
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Controls->Add(this->checkBox);
			this->tabPage1->Controls->Add(this->DataGrid3);
			this->tabPage1->Controls->Add(this->Graph2);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1490, 451);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Гистограмма";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(12, 21);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(141, 20);
			this->label15->TabIndex = 13;
			this->label15->Text = L"Число разбиений";
			// 
			// textBoxZ
			// 
			this->textBoxZ->Location = System::Drawing::Point(171, 18);
			this->textBoxZ->Name = L"textBoxZ";
			this->textBoxZ->Size = System::Drawing::Size(60, 26);
			this->textBoxZ->TabIndex = 12;
			this->textBoxZ->Text = L"10";
			this->textBoxZ->TextChanged += gcnew System::EventHandler(this, &Form1::textBoxZ_TextChanged);
			// 
			// DataGrid4
			// 
			this->DataGrid4->AllowUserToAddRows = false;
			this->DataGrid4->AllowUserToDeleteRows = false;
			this->DataGrid4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGrid4->Location = System::Drawing::Point(12, 193);
			this->DataGrid4->Name = L"DataGrid4";
			this->DataGrid4->ReadOnly = true;
			this->DataGrid4->RowTemplate->Height = 28;
			this->DataGrid4->Size = System::Drawing::Size(688, 241);
			this->DataGrid4->TabIndex = 11;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(8, 53);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(78, 20);
			this->label14->TabIndex = 10;
			this->label14->Text = L"Границы:";
			// 
			// checkBox
			// 
			this->checkBox->AutoSize = true;
			this->checkBox->Checked = true;
			this->checkBox->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox->Location = System::Drawing::Point(295, 17);
			this->checkBox->Name = L"checkBox";
			this->checkBox->Size = System::Drawing::Size(221, 24);
			this->checkBox->TabIndex = 9;
			this->checkBox->Text = L"Равномерное разбиение";
			this->checkBox->UseVisualStyleBackColor = true;
			// 
			// DataGrid3
			// 
			this->DataGrid3->AllowUserToAddRows = false;
			this->DataGrid3->AllowUserToDeleteRows = false;
			this->DataGrid3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGrid3->Location = System::Drawing::Point(12, 78);
			this->DataGrid3->Name = L"DataGrid3";
			this->DataGrid3->RowHeadersVisible = false;
			this->DataGrid3->RowTemplate->Height = 28;
			this->DataGrid3->Size = System::Drawing::Size(688, 109);
			this->DataGrid3->TabIndex = 8;
			// 
			// Graph2
			// 
			this->Graph2->Location = System::Drawing::Point(725, 3);
			this->Graph2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Graph2->Name = L"Graph2";
			this->Graph2->ScrollGrace = 0;
			this->Graph2->ScrollMaxX = 0;
			this->Graph2->ScrollMaxY = 0;
			this->Graph2->ScrollMaxY2 = 0;
			this->Graph2->ScrollMinX = 0;
			this->Graph2->ScrollMinY = 0;
			this->Graph2->ScrollMinY2 = 0;
			this->Graph2->Size = System::Drawing::Size(758, 390);
			this->Graph2->TabIndex = 7;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1490, 415);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Проверка гипотезы о виде распределения\r";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(21, 925);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(320, 62);
			this->button2->TabIndex = 26;
			this->button2->Text = L"Построить гистрограмму";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1878, 1020);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->DataGrid2);
			this->Controls->Add(this->Graph);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->DataGrid);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Form1";
			this->Text = L"PTlab";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGrid))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGrid2))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGrid4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGrid3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		pictureBox1->Image = Image::FromFile("C:/Users/Yuki/source/repos/PTlab/pic.jpg");
		//firtst graph
		Graph->GraphPane->XAxis->Title->Text = "x";
		Graph->GraphPane->YAxis->Title->Text = "y";
		Graph->GraphPane->Title->Text = "F";
		Graph->IsShowVScrollBar = true;
		Graph->IsAutoScrollRange = true;
		Graph->PanButtons = System::Windows::Forms::MouseButtons::Left;
		Graph->PanModifierKeys = Keys::None;
		Graph->GraphPane->XAxis->MajorGrid->IsVisible = true;
		Graph->GraphPane->YAxis->MajorGrid->DashOff = true;
		Graph->GraphPane->YAxis->MajorGrid->IsVisible = true;
		Graph->GraphPane->XAxis->MajorGrid->DashOff = true;
		//Graph2
		Graph2->GraphPane->XAxis->Title->Text = "x";
		Graph2->GraphPane->YAxis->Title->Text = "y";
		Graph2->GraphPane->Title->Text = "f";
		Graph2->IsShowVScrollBar = true;
		Graph2->IsAutoScrollRange = true;
		Graph2->PanButtons = System::Windows::Forms::MouseButtons::Left;
		Graph2->PanModifierKeys = Keys::None;
		Graph2->GraphPane->XAxis->MajorGrid->IsVisible = true;
		Graph2->GraphPane->YAxis->MajorGrid->DashOff = true;
		Graph2->GraphPane->YAxis->MajorGrid->IsVisible = true;
		Graph2->GraphPane->XAxis->MajorGrid->DashOff = true;
	    //Hist Data
		for (int i = 0; i < Convert::ToInt32(textBoxZ->Text) +1; i++) {
			DataGrid3->Columns->Add("Column_" + System::Convert::ToString(i), System::Convert::ToString(i));
		}
		DataGrid3->Rows->Add();
		DataGrid3->AutoResizeColumns();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//
		r.~RandValue();
		new(&r) RandValue(Convert::ToDouble(textBoxM->Text), Convert::ToDouble(textBoxD->Text),
			Convert::ToInt32(textBoxN->Text), Convert::ToInt32(textBoxE->Text), 
			Convert::ToInt32(textBoxZ->Text));
		//
		label_l->Text = Convert::ToString(r.lambda);
		label_off->Text = Convert::ToString(r.offset);
		r.experiment();
		showData1(DataGrid, DataGrid2, r);
		drawgraph(Graph, r, "");
	}
private: System::Void textBoxZ_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	DataGrid3->Rows->Clear();
	DataGrid3->Columns->Clear();

	for (int i = 0; i < Convert::ToInt32(textBoxZ->Text)+1  ; i++) {
		DataGrid3->Columns->Add("Column_" + System::Convert::ToString(i),
			                    System::Convert::ToString(i));
	}
	DataGrid3->Rows->Add();

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	showData2(DataGrid3, DataGrid4, r, Convert::ToInt32(textBoxZ->Text) + 1, true);
	drawf(Graph2, r, "");
	drawHist(Graph2, r, "");
}
};
}
