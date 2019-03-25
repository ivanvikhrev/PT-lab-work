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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxE = (gcnew System::Windows::Forms::TextBox());
			this->label_l = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label_off = (gcnew System::Windows::Forms::Label());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Количество покупателей";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(153, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(15, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"m";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(153, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(15, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"N";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(3, 54);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(146, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Математическое ожидание";
			// 
			// textBoxN
			// 
			this->textBoxN->Location = System::Drawing::Point(174, 13);
			this->textBoxN->Name = L"textBoxN";
			this->textBoxN->Size = System::Drawing::Size(38, 20);
			this->textBoxN->TabIndex = 4;
			this->textBoxN->Text = L"10";
			// 
			// textBoxM
			// 
			this->textBoxM->Location = System::Drawing::Point(174, 51);
			this->textBoxM->Name = L"textBoxM";
			this->textBoxM->Size = System::Drawing::Size(38, 20);
			this->textBoxM->TabIndex = 5;
			this->textBoxM->Text = L"5";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(153, 85);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"d";
			// 
			// textBoxD
			// 
			this->textBoxD->Location = System::Drawing::Point(174, 82);
			this->textBoxD->Name = L"textBoxD";
			this->textBoxD->Size = System::Drawing::Size(38, 20);
			this->textBoxD->TabIndex = 7;
			this->textBoxD->Text = L"1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(3, 82);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Дисперсия";
			// 
			// DataGrid
			// 
			this->DataGrid->AllowUserToAddRows = false;
			this->DataGrid->AllowUserToDeleteRows = false;
			this->DataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->Column1, this->Column2 });
			this->DataGrid->Location = System::Drawing::Point(250, 13);
			this->DataGrid->Name = L"DataGrid";
			this->DataGrid->ReadOnly = true;
			this->DataGrid->RowHeadersVisible = false;
			this->DataGrid->Size = System::Drawing::Size(172, 275);
			this->DataGrid->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(4, 256);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 32);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Смоделировать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(1, 160);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(148, 13);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Количество экспериментов";
			// 
			// textBoxE
			// 
			this->textBoxE->Location = System::Drawing::Point(174, 153);
			this->textBoxE->Name = L"textBoxE";
			this->textBoxE->Size = System::Drawing::Size(38, 20);
			this->textBoxE->TabIndex = 14;
			this->textBoxE->Text = L"10";
			// 
			// label_l
			// 
			this->label_l->AutoSize = true;
			this->label_l->Location = System::Drawing::Point(81, 197);
			this->label_l->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_l->Name = L"label_l";
			this->label_l->Size = System::Drawing::Size(16, 13);
			this->label_l->TabIndex = 15;
			this->label_l->Text = L"...";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 197);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(41, 13);
			this->label9->TabIndex = 16;
			this->label9->Text = L"lambda";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 218);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(61, 13);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Смещение";
			// 
			// label_off
			// 
			this->label_off->AutoSize = true;
			this->label_off->Location = System::Drawing::Point(81, 218);
			this->label_off->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_off->Name = L"label_off";
			this->label_off->Size = System::Drawing::Size(16, 13);
			this->label_off->TabIndex = 18;
			this->label_off->Text = L"...";
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->Column1->HeaderText = L"№";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 43;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column2->HeaderText = L"G";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(434, 309);
			this->Controls->Add(this->label_off);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label_l);
			this->Controls->Add(this->textBoxE);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->DataGrid);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBoxD);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBoxM);
			this->Controls->Add(this->textBoxN);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
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
