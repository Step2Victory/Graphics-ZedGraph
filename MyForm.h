#pragma once
#include <math.h>
#include "model.h"


namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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
	private: ZedGraph::ZedGraphControl^ zedGraphControl1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ X;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ V;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ V2i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ViV2i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ le;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ h;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ C1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ C2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ u;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ uv;
	private: System::Windows::Forms::Button^ button3;



	protected:
	private: System::ComponentModel::IContainer^ components;

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
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->X = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->V = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->V2i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ViV2i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->le = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->h = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->C1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->C2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->u = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->uv = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(38, 30);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(501, 327);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(633, 386);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 29);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Draw_TestTask";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->X, this->V,
					this->V2i, this->ViV2i, this->le, this->h, this->C1, this->C2, this->u, this->uv
			});
			this->dataGridView1->Location = System::Drawing::Point(572, 30);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(274, 327);
			this->dataGridView1->TabIndex = 2;
			// 
			// X
			// 
			this->X->HeaderText = L"X";
			this->X->Name = L"X";
			this->X->ReadOnly = true;
			this->X->Width = 50;
			// 
			// V
			// 
			this->V->HeaderText = L"V";
			this->V->Name = L"V";
			this->V->ReadOnly = true;
			this->V->Width = 50;
			// 
			// V2i
			// 
			this->V2i->HeaderText = L"V2i";
			this->V2i->Name = L"V2i";
			this->V2i->ReadOnly = true;
			this->V2i->Width = 50;
			// 
			// ViV2i
			// 
			this->ViV2i->HeaderText = L"Vi -V2i";
			this->ViV2i->Name = L"ViV2i";
			this->ViV2i->ReadOnly = true;
			this->ViV2i->Width = 50;
			// 
			// le
			// 
			this->le->HeaderText = L"ОЛП";
			this->le->Name = L"le";
			this->le->ReadOnly = true;
			this->le->Width = 100;
			// 
			// h
			// 
			this->h->HeaderText = L"h";
			this->h->Name = L"h";
			this->h->ReadOnly = true;
			this->h->Width = 50;
			// 
			// C1
			// 
			this->C1->HeaderText = L"C1";
			this->C1->Name = L"C1";
			this->C1->ReadOnly = true;
			this->C1->Width = 50;
			// 
			// C2
			// 
			this->C2->HeaderText = L"C2";
			this->C2->Name = L"C2";
			this->C2->ReadOnly = true;
			this->C2->Width = 50;
			// 
			// u
			// 
			this->u->HeaderText = L"U";
			this->u->Name = L"u";
			this->u->ReadOnly = true;
			this->u->Width = 50;
			// 
			// uv
			// 
			this->uv->HeaderText = L"|U - V|";
			this->uv->Name = L"uv";
			this->uv->ReadOnly = true;
			this->uv->Width = 50;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(59, 394);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"a";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(78, 394);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(48, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(171, 396);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"b";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(190, 393);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(49, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(287, 398);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"h";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(306, 394);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(61, 20);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0,1";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(480, 441);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 29);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Zoom";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(190, 437);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(49, 20);
			this->textBox4->TabIndex = 13;
			this->textBox4->Text = L"1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(171, 440);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"b";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(78, 436);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(48, 20);
			this->textBox5->TabIndex = 11;
			this->textBox5->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(59, 438);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"a";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(306, 437);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(61, 20);
			this->textBox6->TabIndex = 15;
			this->textBox6->Text = L"2";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(287, 441);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(19, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"v0";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(407, 394);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(61, 20);
			this->textBox7->TabIndex = 17;
			this->textBox7->Text = L"1000000";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(373, 397);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(34, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Nmax";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(387, 435);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(46, 17);
			this->checkBox1->TabIndex = 18;
			this->checkBox1->Text = L"Reg";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(507, 392);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(61, 20);
			this->textBox8->TabIndex = 20;
			this->textBox8->Text = L"0,00001";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(477, 395);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(24, 13);
			this->label8->TabIndex = 19;
			this->label8->Text = L"eps";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(633, 441);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(142, 29);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Draw_FirstTask";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(858, 497);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->zedGraphControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		double f1(double x) {
			return sin(x);
		}

		double f2(double x) {
			return sin(2 * x);
		}

		double u_test(double x, double v0)
		{
			return v0 * exp(x);
		}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();

		// Интервал, где есть данные
		double xmin = Convert::ToDouble(textBox1->Text);
		double xmax = Convert::ToDouble(textBox2->Text);

		double h0 = Convert::ToDouble(textBox3->Text);
		double v0 = Convert::ToDouble(textBox6->Text);
		int Nmax = Convert::ToInt32(textBox7->Text);
		bool reg = this->checkBox1->Checked;

		double eps = Convert::ToDouble(textBox8->Text);

		double xmin_limit = xmin - 0.1;
		double xmax_limit = xmax + 0.1;
		/*
				double ymin_limit = -1.0;
				double ymax_limit = 100.0;
		*/
		// Список точек
		//int i = 0;

		dataGridView1->Rows->Clear();
		Model model(xmin, xmax, v0, h0, Nmax, reg, f_test, eps);
		model.solve();
		vector<vector<double>> ans = model.get_ans();
		vector<double> x = ans[0];
		vector<double> v = ans[1];
		vector<double> v2 = ans[2];
		vector<double> le = ans[3];
		vector<double> h = ans[4];
		vector<double> c1 = ans[5];
		vector<double> c2 = ans[6];

		for (int i = 0; i < model.n; ++i)
		{
			f1_list->Add(x[i], v[i]);
			f2_list->Add(x[i], u_test(x[i], v0));
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = x[i];
			dataGridView1->Rows[i]->Cells[1]->Value = floor(v[i] * 1000) / 1000;
			dataGridView1->Rows[i]->Cells[2]->Value = floor(v2[i] * 1000) / 1000;
			dataGridView1->Rows[i]->Cells[3]->Value = floor((v[i] - v2[i]) * 1000) / 1000;
			dataGridView1->Rows[i]->Cells[4]->Value = floor(le[i] * 1000) / 1000;
			dataGridView1->Rows[i]->Cells[5]->Value = floor(h[i] * 1000) / 1000;
			dataGridView1->Rows[i]->Cells[6]->Value = floor(c1[i] * 1000) / 1000;
			dataGridView1->Rows[i]->Cells[7]->Value = floor(c2[i] * 1000) / 1000;
			dataGridView1->Rows[i]->Cells[8]->Value = floor(u_test(x[i], v0) * 1000) / 1000;
			dataGridView1->Rows[i]->Cells[9]->Value = floor(abs(u_test(x[i], v0) - v[i]) * 1000) / 1000;

		}
		LineItem Curve1 = panel->AddCurve("V_test(Xn)", f1_list, Color::Red, SymbolType::Plus);
		LineItem Curve2 = panel->AddCurve("U_test(X)", f2_list, Color::Blue, SymbolType::None);
		/*
		for (double x = xmin; x <= xmax; x += h)
		{
			//Добавление на график
			f1_list->Add(x, f1(x));
			f2_list->Add(x, f2(x));

			//Печать в таблицу

			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = x;
			dataGridView1->Rows[i]->Cells[1]->Value = floor(f1(x) * 1000) / 1000;
			dataGridView1->Rows[i]->Cells[2]->Value = floor(f2(x) * 1000) / 1000;
			i++;
		}
		LineItem Curve1 = panel->AddCurve("F1(x)", f1_list, Color::Red,SymbolType::Plus);
		LineItem Curve2 = panel->AddCurve("F2(x)", f2_list, Color::Blue, SymbolType::None);
		*/
		// Устанавливаем интересующий нас интервал по оси X
		panel->XAxis->Scale->Min = xmin_limit;
		panel->XAxis->Scale->Max = xmax_limit;
		/*
				// Устанавливаем интересующий нас интервал по оси Y
				panel->YAxis->Scale->Min = ymin_limit;
				panel->YAxis->Scale->Max = ymax_limit;
		*/
		// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		// В противном случае на рисунке будет показана только часть графика, 
		// которая умещается в интервалы по осям, установленные по умолчанию
		zedGraphControl1->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();

	}
	private: System::Void zedGraphControl1_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		GraphPane^ panel = zedGraphControl1->GraphPane;
		double xmin = Convert::ToDouble(textBox5->Text);
		double xmax = Convert::ToDouble(textBox4->Text);
		// Устанавливаем интересующий нас интервал по оси X
		panel->XAxis->Scale->Min = xmin;
		panel->XAxis->Scale->Max = xmax;

		// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		// В противном случае на рисунке будет показана только часть графика, 
		// которая умещается в интервалы по осям, установленные по умолчанию
		zedGraphControl1->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		   GraphPane^ panel = zedGraphControl1->GraphPane;
		   panel->CurveList->Clear();
		   PointPairList^ f1_list = gcnew ZedGraph::PointPairList();

		   // Интервал, где есть данные
		   double xmin = Convert::ToDouble(textBox1->Text);
		   double xmax = Convert::ToDouble(textBox2->Text);

		   double h0 = Convert::ToDouble(textBox3->Text);
		   double v0 = Convert::ToDouble(textBox6->Text);
		   int Nmax = Convert::ToInt32(textBox7->Text);
		   bool reg = this->checkBox1->Checked;

		   double eps = Convert::ToDouble(textBox8->Text);

		   double xmin_limit = xmin - 0.1;
		   double xmax_limit = xmax + 0.1;
		   /*
				   double ymin_limit = -1.0;
				   double ymax_limit = 100.0;
		   */
		   // Список точек
		   //int i = 0;

		   dataGridView1->Rows->Clear();
		   Model model(xmin, xmax, v0, h0, Nmax, reg, f, eps);
		   model.solve();
		   vector<vector<double>> ans = model.get_ans();
		   vector<double> x = ans[0];
		   vector<double> v = ans[1];
		   vector<double> v2 = ans[2];
		   vector<double> le = ans[3];
		   vector<double> h = ans[4];
		   vector<double> c1 = ans[5];
		   vector<double> c2 = ans[6];

		   for (int i = 0; i < model.n; ++i)
		   {
			   f1_list->Add(x[i], v[i]);
			   dataGridView1->Rows->Add();
			   dataGridView1->Rows[i]->Cells[0]->Value = x[i];
			   dataGridView1->Rows[i]->Cells[1]->Value = floor(v[i] * 1000) / 1000;
			   dataGridView1->Rows[i]->Cells[2]->Value = floor(v2[i] * 1000) / 1000;
			   dataGridView1->Rows[i]->Cells[3]->Value = floor((v[i] - v2[i]) * 1000) / 1000;
			   dataGridView1->Rows[i]->Cells[4]->Value = floor(le[i] * 100000) / 100000;
			   dataGridView1->Rows[i]->Cells[5]->Value = floor(h[i] * 1000) / 1000;
			   dataGridView1->Rows[i]->Cells[6]->Value = floor(c1[i] * 1000) / 1000;
			   dataGridView1->Rows[i]->Cells[7]->Value = floor(c2[i] * 1000) / 1000;


		   }
		   LineItem Curve1 = panel->AddCurve("V(Xn)", f1_list, Color::Red, SymbolType::Plus);
		   /*
		   for (double x = xmin; x <= xmax; x += h)
		   {
			   //Добавление на график
			   f1_list->Add(x, f1(x));
			   f2_list->Add(x, f2(x));

			   //Печать в таблицу

			   dataGridView1->Rows->Add();
			   dataGridView1->Rows[i]->Cells[0]->Value = x;
			   dataGridView1->Rows[i]->Cells[1]->Value = floor(f1(x) * 1000) / 1000;
			   dataGridView1->Rows[i]->Cells[2]->Value = floor(f2(x) * 1000) / 1000;
			   i++;
		   }
		   LineItem Curve1 = panel->AddCurve("F1(x)", f1_list, Color::Red,SymbolType::Plus);
		   LineItem Curve2 = panel->AddCurve("F2(x)", f2_list, Color::Blue, SymbolType::None);
		   */
		   // Устанавливаем интересующий нас интервал по оси X
		   panel->XAxis->Scale->Min = xmin_limit;
		   panel->XAxis->Scale->Max = xmax_limit;
		   /*
				   // Устанавливаем интересующий нас интервал по оси Y
				   panel->YAxis->Scale->Min = ymin_limit;
				   panel->YAxis->Scale->Max = ymax_limit;
		   */
		   // Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		   // В противном случае на рисунке будет показана только часть графика, 
		   // которая умещается в интервалы по осям, установленные по умолчанию
		   zedGraphControl1->AxisChange();
		   // Обновляем график
		   zedGraphControl1->Invalidate();

	}
};
}
