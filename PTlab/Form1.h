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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label12;





	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGrid))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox2->SuspendLayout();
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
			this->label2->Location = System::Drawing::Point(237, 100);
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
			this->label4->Location = System::Drawing::Point(9, 95);
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
			this->DataGrid->Location = System::Drawing::Point(873, 22);
			this->DataGrid->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->DataGrid->Name = L"DataGrid";
			this->DataGrid->ReadOnly = true;
			this->DataGrid->RowHeadersVisible = false;
			this->DataGrid->Size = System::Drawing::Size(258, 513);
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
			this->button1->Location = System::Drawing::Point(21, 549);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(196, 49);
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
			this->label9->Location = System::Drawing::Point(11, 102);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 20);
			this->label9->TabIndex = 16;
			this->label9->Text = L"λ = ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(11, 134);
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
			this->groupBox1->Location = System::Drawing::Point(497, 22);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox1->Size = System::Drawing::Size(336, 261);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметры";
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
			this->pictureBox1->Location = System::Drawing::Point(18, 159);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(231, 193);
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
			this->groupBox2->Location = System::Drawing::Point(21, 363);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(301, 162);
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
			this->label7->Location = System::Drawing::Point(11, 51);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 20);
			this->label7->TabIndex = 19;
			this->label7->Text = L"F(x) =";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1144, 622);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		pictureBox1->Image = Image::FromFile("C:/Users/Yuki/source/repos/PTlab/pic.jpg");
		//pictureBox1->SizeMode()
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		RandValue r(Convert::ToDouble(textBoxM->Text), Convert::ToDouble(textBoxD->Text),
			Convert::ToInt32(textBoxN->Text), Convert::ToInt32(textBoxE->Text));
		label_l->Text = Convert::ToString(r.lambda);
		label_off->Text = Convert::ToString(r.offset);
		r.experiment();
		ShowOnClick(DataGrid, r.E, r.numExp);
	}
};
}
