#pragma once

namespace FinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 的摘要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected: 
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		System::Drawing::Bitmap^ OpenImg;
		System::Drawing::Bitmap^ NowImg;
		System::Collections::Generic::Queue<int> que;
		bool stop;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
			 /// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器
		/// 修改這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(28, 140);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(500, 500);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Location = System::Drawing::Point(543, 140);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(500, 500);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(769, 18);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 40);
			this->button1->TabIndex = 2;
			this->button1->Text = L"OpenImg";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(769, 79);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 40);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Clear";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(902, 18);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 40);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Method1";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(902, 79);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 40);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Method2";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(28, 22);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(500, 22);
			this->textBox1->TabIndex = 6;
			this->textBox1->Text = L"The area ratio of Staphylococcus to the entire image is";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(543, 18);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(50, 26);
			this->textBox2->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(599, 22);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(28, 22);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"%";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(28, 62);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(500, 22);
			this->textBox4->TabIndex = 9;
			this->textBox4->Text = L"The number of Staphylococcus in the image is";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(543, 58);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(50, 26);
			this->textBox5->TabIndex = 10;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(28, 97);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(500, 22);
			this->textBox6->TabIndex = 11;
			this->textBox6->Text = L"The number of Escherichia in the image is";
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(543, 93);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(50, 26);
			this->textBox7->TabIndex = 12;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1074, 666);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 openFileDialog1->Filter = "All Files|*.*|Bitmap Files (*)|*.bmp;*.gif;*.jpg";	//選擇我們需要開檔的類型
				 if( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)   // 如果成功開檔
				 {
					 OpenImg = gcnew Bitmap(openFileDialog1->FileName);	//開啟原始影像
					 NowImg = gcnew Bitmap(OpenImg);					//複製原始影像
					 pictureBox1->Image = OpenImg;	//讀取的影像展示到pictureBox1
					 pictureBox2->Image = NowImg;	//讀取的影像展示到pictureBox2
					 stop = true;
					 textBox2->Text = String::Concat( "", 0 );
					 textBox5->Text = String::Concat( "", 0 );
					 textBox7->Text = String::Concat( "", 0 );
				 }
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

				 if( OpenImg != nullptr ){
					 NowImg = gcnew Bitmap(OpenImg);
					 pictureBox1->Image = OpenImg;
					 pictureBox2->Image = NowImg;
					 stop = true;
					 textBox2->Text = String::Concat( "", 0 );
					 textBox5->Text = String::Concat( "", 0 );
					 textBox7->Text = String::Concat( "", 0 );
				 }
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				 if( OpenImg != nullptr && stop ){

					 array<int>^ Gray = gcnew array<int>(NowImg->Width*NowImg->Height);
					 array<int>^ Count = gcnew array<int>(256);
					 for( int i=0; i<256; ++i )	Count[i] = 0;

					 for(int i = 0; i < NowImg->Height; i++)
					 for(int j = 0; j < NowImg->Width; j++){
						 Color RGB = NowImg->GetPixel(j,i);
						 int k = (int)(0.299*RGB.R + 0.587*RGB.G + 0.114*RGB.B);
						 Gray[i*NowImg->Width+j] = k;
					 }

					 array<int>^ Used = gcnew array<int>(NowImg->Width*NowImg->Height);
					 int now, nowx, nowy, tmp, tmpx, tmpy, total, backup, backnum=10000;
					 int dx[8] = {1,0,-1,0,1,1,-1,-1};
					 int dy[8] = {0,1,0,-1,1,-1,1,-1};

					 for( int k=251; k>=0; --k ){
						 if( k<=250 ){
							 if( backnum>total && backnum-total<=3 ){
								 backup = k;
								 break;
							 }
							 backnum = total;
						 }
						 for(int i = 0; i < NowImg->Height; i++)
						 for(int j = 0; j < NowImg->Width; j++)
							Used[i*NowImg->Width+j] = 0;
						 que.Clear();
						 total = 0;
						 for(int i = 0; i < NowImg->Height; i++)
						 for(int j = 0; j < NowImg->Width; j++){
							 now = i*NowImg->Width+j;
							 if( Gray[now]<=k && !Used[now] ){
								 ++total;
								 que.Enqueue(now);
								 Used[now] = total;
								 while( que.Count ){
									 now = que.Dequeue();
									 nowx = now / NowImg->Width;
									 nowy = now - nowx*NowImg->Width;

									 for( int a = 0; a < 8; ++a ){
										 tmpx = nowx + dx[a];
										 tmpy = nowy + dy[a];
										 tmp = tmpx*NowImg->Width + tmpy;
										 if( tmpx<NowImg->Height && tmpx>=0 && tmpy<NowImg->Width && tmpy>=0 && Gray[tmp]<=k && !Used[tmp] ){
											 Used[tmp] = total;
											 que.Enqueue(tmp);
										 }
									 }
								 }
							 }
						 }
					 }

					 backup -= 20;
					 array<int>^ Arr = gcnew array<int>(NowImg->Width*NowImg->Height);
					 for(int i = 0; i < NowImg->Height; i++)
					 for(int j = 0; j < NowImg->Width; j++){
						 int tmp = 8000000*Gray[i*NowImg->Width+j] + i*NowImg->Width + j;
						 Arr[i*NowImg->Width+j] = -tmp;
						 Used[i*NowImg->Width+j] = 0;
					 }
					 Array::Sort(Arr);

					 total = 0;
					 for(int i = 0; i < NowImg->Height; i++)
					 for(int j = 0; j < NowImg->Width; j++){
						 int ct = 0, cy = 0;
						 tmp = -Arr[i*NowImg->Width+j];
						 now = tmp/8000000;	//Gray
						 nowy = (tmp%8000000)/NowImg->Width;
						 nowx = (tmp%8000000)%NowImg->Width;
						 if( Gray[nowy*NowImg->Width+nowx]>=backup ){
							 --Used[nowy*NowImg->Width+nowx];
							 continue;
						 }
						 for( int k = 0; k < 8; ++k ){
							 tmpx = nowx + dx[k];
							 tmpy = nowy + dy[k];
							 if( tmpy<NowImg->Height && tmpy>=0 && tmpx<NowImg->Width && tmpx>=0 ){
								 ++ct;
								 if( Used[tmpy*NowImg->Width+tmpx] )	++cy;
							 }
						 }
						 if( ct==cy ){
							 if( now >= backup )	--Used[nowy*NowImg->Width+nowx];
							 else					Used[nowy*NowImg->Width+nowx] = ++total;
						 }
						 else	--Used[nowy*NowImg->Width+nowx];
					 }

					 for(int i = 0; i < NowImg->Height; i++)
					 for(int j = 0; j < NowImg->Width; j++)
					 if( Used[i*NowImg->Width+j]>0 ){
						 Used[i*NowImg->Width+j] = 0;
						 for( int k = 0; k < 8; ++k ){
							 tmpx = j + dx[k];
							 tmpy = i + dy[k];
							 if( tmpy<NowImg->Height && tmpy>=0 && tmpx<NowImg->Width && tmpx>=0 && Used[tmpy*NowImg->Width+tmpx]==-1 )
								 Used[tmpy*NowImg->Width+tmpx] = 0;
						 }
					 }

					 total = 0;
					 for(int i = 0; i < NowImg->Height; i++)
					 for(int j = 0; j < NowImg->Width; j++){
						 que.Clear();
						 now = i*NowImg->Width+j;
						 if( !Used[now] ){
							 ++total;
							 que.Enqueue(now);
							 Used[now] = total;
							 while( que.Count ){
								 now = que.Dequeue();
								 nowx = now / NowImg->Width;
								 nowy = now - nowx*NowImg->Width;

								 for( int k = 0; k < 4; ++k ){
									 tmpx = nowx + dx[k];
									 tmpy = nowy + dy[k];
									 tmp = tmpx*NowImg->Width + tmpy;
									 if( tmpx<NowImg->Height && tmpx>=0 && tmpy<NowImg->Width && tmpy>=0 && !Used[tmp] ){
										Used[tmp] = total;
										que.Enqueue(tmp);
									 }
								 }
							 }
						 }
					 }
					 
					 int maxnum = total+1;
					 array<int>^ Lx = gcnew array<int>(maxnum);
					 array<int>^ Rx = gcnew array<int>(maxnum);
					 array<int>^ Uy = gcnew array<int>(maxnum);
					 array<int>^ Dy = gcnew array<int>(maxnum);
					 for(int i = 0; i < maxnum; i++){
						 Lx[i] = -10000;
						 Rx[i] = -10000;
						 Uy[i] = -10000;
						 Dy[i] = -10000;
					 }
					 for(int i = 0; i < NowImg->Height; i++)
					 for(int j = 0; j < NowImg->Width; j++){
						 if( Used[i*NowImg->Width+j]>0 && Dy[Used[i*NowImg->Width+j]]==-10000 )
							 Dy[Used[i*NowImg->Width+j]] = i;
					 }
					 for(int i = NowImg->Height-1; i>=0; i--)
					 for(int j = 0; j < NowImg->Width; j++){
						 if( Used[i*NowImg->Width+j]>0 && Uy[Used[i*NowImg->Width+j]]==-10000 )
							 Uy[Used[i*NowImg->Width+j]] = i;
					 }
					 for(int i = 0; i < NowImg->Width; i++)
					 for(int j = 0; j < NowImg->Height; j++){
						 if( Used[j*NowImg->Width+i]>0 && Lx[Used[j*NowImg->Width+i]]==-10000 )
							 Lx[Used[j*NowImg->Width+i]] = i;
					 }
					 for(int i = NowImg->Width-1; i>=0; i--)
					 for(int j = 0; j < NowImg->Height; j++){
						 if( Used[j*NowImg->Width+i]>0 && Rx[Used[j*NowImg->Width+i]]==-10000 )
							 Rx[Used[j*NowImg->Width+i]] = i;
					 }

					 for( int i=1; i<maxnum; ++i ){
						 int x=(Lx[i]+Rx[i])/2, y=(Uy[i]+Dy[i])/2;
						 NowImg->SetPixel(x, y, Color::FromArgb(0, 255, 0));

						 tmpx = x+1; tmpy = y+1;
						 if( tmpx<NowImg->Width && tmpx>=0 && tmpy<NowImg->Height && tmpy>=0 )
						 NowImg->SetPixel(tmpx, tmpy, Color::FromArgb(0, 255, 0));
						 tmpx = x+1; tmpy = y;
						 if( tmpx<NowImg->Width && tmpx>=0 && tmpy<NowImg->Height && tmpy>=0 )
						 NowImg->SetPixel(tmpx, tmpy, Color::FromArgb(0, 255, 0));
						 tmpx = x; tmpy = y+1;
						 if( tmpx<NowImg->Width && tmpx>=0 && tmpy<NowImg->Height && tmpy>=0 )
						 NowImg->SetPixel(tmpx, tmpy, Color::FromArgb(0, 255, 0));

						 tmpx = x+1; tmpy = y-1;
						 if( tmpx<NowImg->Width && tmpx>=0 && tmpy<NowImg->Height && tmpy>=0 )
						 NowImg->SetPixel(tmpx, tmpy, Color::FromArgb(0, 255, 0));
						 tmpx = x; tmpy = y-1;
						 if( tmpx<NowImg->Width && tmpx>=0 && tmpy<NowImg->Height && tmpy>=0 )
						 NowImg->SetPixel(tmpx, tmpy, Color::FromArgb(0, 255, 0));
						 tmpx = x-1; tmpy = y+1;
						 if( tmpx<NowImg->Width && tmpx>=0 && tmpy<NowImg->Height && tmpy>=0 )
						 NowImg->SetPixel(tmpx, tmpy, Color::FromArgb(0, 255, 0));
						 tmpx = x-1; tmpy = y;
						 if( tmpx<NowImg->Width && tmpx>=0 && tmpy<NowImg->Height && tmpy>=0 )
						 NowImg->SetPixel(tmpx, tmpy, Color::FromArgb(0, 255, 0));
						 tmpx = x-1; tmpy = y-1;
						 if( tmpx<NowImg->Width && tmpx>=0 && tmpy<NowImg->Height && tmpy>=0 )
						 NowImg->SetPixel(tmpx, tmpy, Color::FromArgb(0, 255, 0));
					 }

					 now = 0;
					 for(int i = 0; i < NowImg->Height; i++)
					 for(int j = 0; j < NowImg->Width; j++)
					 if( Gray[i*NowImg->Width+j]>=backup ){
						 int tt = 0;
						 for( int k = 0; k < 8; ++k ){
							 if( (j+dx[k])<NowImg->Width && (j+dx[k])>=0 && (i+dy[k])<NowImg->Height && (i+dy[k])>=0 && Gray[(i+dy[k])*NowImg->Width+(j+dx[k])]<=backup )
								 ++tt;
						 }
						 if( tt )	NowImg->SetPixel(j, i, Color::FromArgb(255, 0, 0));
					 }
					 else	++now;

					 pictureBox2->Image = NowImg;
					 stop = false;
					 textBox2->Text = String::Concat( "", (int)(0.5+now*100/(NowImg->Height*NowImg->Width)) );
					 textBox5->Text = String::Concat( "", maxnum-1 );
				 }
			 }
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				 if( OpenImg != nullptr && stop ){

					 array<int>^ Gray = gcnew array<int>(NowImg->Width*NowImg->Height);
					 array<int>^ Count = gcnew array<int>(256);
					 for( int i=0; i<256; ++i )	Count[i] = 0;

					 for(int i = 0; i < NowImg->Height; i++)
					 for(int j = 0; j < NowImg->Width; j++){
						 Color RGB = NowImg->GetPixel(j,i);
						 int k = (int)(0.299*RGB.R + 0.587*RGB.G + 0.114*RGB.B);
						 Gray[i*NowImg->Width+j] = k;
					 }

					 array<int>^ Used = gcnew array<int>(NowImg->Width*NowImg->Height);
					 int now, nowx, nowy, tmp, tmpx, tmpy, total, backup, backnum=10000;
					 int dx[8] = {1,0,-1,0,1,1,-1,-1};
					 int dy[8] = {0,1,0,-1,1,-1,1,-1};

					 for( int k=251; k>=0; --k ){
						 if( k<=250 ){
							 if( backnum>total && backnum-total<=3 ){
								 backup = k;
								 break;
							 }
							 backnum = total;
						 }
						 for(int i = 0; i < NowImg->Height; i++)
						 for(int j = 0; j < NowImg->Width; j++)
							Used[i*NowImg->Width+j] = 0;
						 que.Clear();
						 total = 0;
						 for(int i = 0; i < NowImg->Height; i++)
						 for(int j = 0; j < NowImg->Width; j++){
							 now = i*NowImg->Width+j;
							 if( Gray[now]<=k && !Used[now] ){
								 ++total;
								 que.Enqueue(now);
								 Used[now] = total;
								 while( que.Count ){
									 now = que.Dequeue();
									 nowx = now / NowImg->Width;
									 nowy = now - nowx*NowImg->Width;

									 for( int a = 0; a < 8; ++a ){
										 tmpx = nowx + dx[a];
										 tmpy = nowy + dy[a];
										 tmp = tmpx*NowImg->Width + tmpy;
										 if( tmpx<NowImg->Height && tmpx>=0 && tmpy<NowImg->Width && tmpy>=0 && Gray[tmp]<=k && !Used[tmp] ){
											 Used[tmp] = total;
											 que.Enqueue(tmp);
										 }
									 }
								 }

							 }
						 }
					 }

					 backup -= 20;
					 array<int>^ Arr = gcnew array<int>(NowImg->Width*NowImg->Height);
					 for(int i = 0; i < NowImg->Height; i++)
					 for(int j = 0; j < NowImg->Width; j++){
						 int tmp = 8000000*Gray[i*NowImg->Width+j] + i*NowImg->Width + j;
						 Arr[i*NowImg->Width+j] = -tmp;
						 Used[i*NowImg->Width+j] = 0;
					 }
					 Array::Sort(Arr);

					 total = 0;
					 int prev = 255, cnt = 0, getgray = 0;
					 for(int i = 0; i < NowImg->Height; i++)
					 for(int j = 0; j < NowImg->Width; j++){
						 int ct = 0, cy = 0;
						 tmp = -Arr[i*NowImg->Width+j];
						 now = tmp/8000000;	//Gray
						 nowy = (tmp%8000000)/NowImg->Width;
						 nowx = (tmp%8000000)%NowImg->Width;
						 if( Gray[nowy*NowImg->Width+nowx]>=backup ){
							 --Used[nowy*NowImg->Width+nowx];
							 continue;
						 }
						 for( int k = 0; k < 8; ++k ){
							 tmpx = nowx + dx[k];
							 tmpy = nowy + dy[k];
							 if( tmpy<NowImg->Height && tmpy>=0 && tmpx<NowImg->Width && tmpx>=0 ){
								 ++ct;
								 if( Used[tmpy*NowImg->Width+tmpx] )	++cy;
							 }
						 }
						 if( ct==cy ){
							 if( now >= backup )	--Used[nowy*NowImg->Width+nowx];
							 else{
								 Used[nowy*NowImg->Width+nowx] = ++total;
								 if( !getgray && now > 100 ){
									if( now==prev )	++cnt;
									else{
										prev = now;
										cnt = 1;
									}
									if( cnt==5 )	getgray = prev;
								 }
							 }
						 }
						 else	--Used[nowy*NowImg->Width+nowx];
					 }

					 for(int i = 0; i < NowImg->Height; i++)
					 for(int j = 0; j < NowImg->Width; j++)
					 if( Used[i*NowImg->Width+j]>0 ){
						 Used[i*NowImg->Width+j] = 0;
						 if( getgray && Gray[i*NowImg->Width+j]>getgray )
							 Gray[i*NowImg->Width+j] *= (-1);
						 for( int k = 0; k < 8; ++k ){
							 tmpx = j + dx[k];
							 tmpy = i + dy[k];
							 if( tmpy<NowImg->Height && tmpy>=0 && tmpx<NowImg->Width && tmpx>=0 && Used[tmpy*NowImg->Width+tmpx]==-1 ){
								 Used[tmpy*NowImg->Width+tmpx] = 0;
								 if( Gray[i*NowImg->Width+j]<0 )	Gray[tmpy*NowImg->Width+tmpx] *= (-1); ///
							 }
						 }
					 }

					 total = 0;
					 for(int i = 0; i < NowImg->Height; i++)
					 for(int j = 0; j < NowImg->Width; j++){
						 que.Clear();
						 now = i*NowImg->Width+j;
						 if( !Used[now] ){
							 ++total;
							 que.Enqueue(now);
							 Used[now] = total;
							 while( que.Count ){
								 now = que.Dequeue();
								 nowx = now / NowImg->Width;
								 nowy = now - nowx*NowImg->Width;

								 for( int k = 0; k < 4; ++k ){
									 tmpx = nowx + dx[k];
									 tmpy = nowy + dy[k];
									 tmp = tmpx*NowImg->Width + tmpy;
									 if( tmpx<NowImg->Height && tmpx>=0 && tmpy<NowImg->Width && tmpy>=0 && !Used[tmp] && Gray[nowx*NowImg->Width+nowy]*Gray[tmp]>0 ){
										Used[tmp] = total;
										que.Enqueue(tmp);
									 }
								 }
							 }
						 }
					 }
					 
					 int maxnum = total+1;
					 array<int>^ Lx = gcnew array<int>(maxnum);
					 array<int>^ Rx = gcnew array<int>(maxnum);
					 array<int>^ Uy = gcnew array<int>(maxnum);
					 array<int>^ Dy = gcnew array<int>(maxnum);
					 for(int i = 0; i < maxnum; i++){
						 Lx[i] = -10000;
						 Rx[i] = -10000;
						 Uy[i] = -10000;
						 Dy[i] = -10000;
					 }
					 for(int i = 0; i < NowImg->Height; i++)
					 for(int j = 0; j < NowImg->Width; j++){
						 if( Used[i*NowImg->Width+j]>0 && Dy[Used[i*NowImg->Width+j]]==-10000 )
							 Dy[Used[i*NowImg->Width+j]] = (Gray[i*NowImg->Width+j]>0)?(i):(-i);
					 }
					 for(int i = NowImg->Height-1; i>=0; i--)
					 for(int j = 0; j < NowImg->Width; j++){
						 if( Used[i*NowImg->Width+j]>0 && Uy[Used[i*NowImg->Width+j]]==-10000 )
							 Uy[Used[i*NowImg->Width+j]] = (Gray[i*NowImg->Width+j]>0)?(i):(-i);
					 }
					 for(int i = 0; i < NowImg->Width; i++)
					 for(int j = 0; j < NowImg->Height; j++){
						 if( Used[j*NowImg->Width+i]>0 && Lx[Used[j*NowImg->Width+i]]==-10000 )
							 Lx[Used[j*NowImg->Width+i]] = (Gray[j*NowImg->Width+i]>0)?(i):(-i);
					 }
					 for(int i = NowImg->Width-1; i>=0; i--)
					 for(int j = 0; j < NowImg->Height; j++){
						 if( Used[j*NowImg->Width+i]>0 && Rx[Used[j*NowImg->Width+i]]==-10000 )
							 Rx[Used[j*NowImg->Width+i]] = (Gray[j*NowImg->Width+i]>0)?(i):(-i);
					 }

					 tmp = 0;
					 for( int i=1; i<maxnum; ++i ){
						 int x=(Lx[i]+Rx[i])/2, y=(Uy[i]+Dy[i])/2;
						 if( x>=0 && y>=0 ){
						 NowImg->SetPixel(x, y, Color::FromArgb(0, 255, 0));

						 tmpx = x+1; tmpy = y+1;
						 if( tmpx<NowImg->Width && tmpx>=0 && tmpy<NowImg->Height && tmpy>=0 )
						 NowImg->SetPixel(tmpx, tmpy, Color::FromArgb(0, 255, 0));
						 tmpx = x+1; tmpy = y;
						 if( tmpx<NowImg->Width && tmpx>=0 && tmpy<NowImg->Height && tmpy>=0 )
						 NowImg->SetPixel(tmpx, tmpy, Color::FromArgb(0, 255, 0));
						 tmpx = x; tmpy = y+1;
						 if( tmpx<NowImg->Width && tmpx>=0 && tmpy<NowImg->Height && tmpy>=0 )
						 NowImg->SetPixel(tmpx, tmpy, Color::FromArgb(0, 255, 0));

						 tmpx = x+1; tmpy = y-1;
						 if( tmpx<NowImg->Width && tmpx>=0 && tmpy<NowImg->Height && tmpy>=0 )
						 NowImg->SetPixel(tmpx, tmpy, Color::FromArgb(0, 255, 0));
						 tmpx = x; tmpy = y-1;
						 if( tmpx<NowImg->Width && tmpx>=0 && tmpy<NowImg->Height && tmpy>=0 )
						 NowImg->SetPixel(tmpx, tmpy, Color::FromArgb(0, 255, 0));
						 tmpx = x-1; tmpy = y+1;
						 if( tmpx<NowImg->Width && tmpx>=0 && tmpy<NowImg->Height && tmpy>=0 )
						 NowImg->SetPixel(tmpx, tmpy, Color::FromArgb(0, 255, 0));
						 tmpx = x-1; tmpy = y;
						 if( tmpx<NowImg->Width && tmpx>=0 && tmpy<NowImg->Height && tmpy>=0 )
						 NowImg->SetPixel(tmpx, tmpy, Color::FromArgb(0, 255, 0));
						 tmpx = x-1; tmpy = y-1;
						 if( tmpx<NowImg->Width && tmpx>=0 && tmpy<NowImg->Height && tmpy>=0 )
						 NowImg->SetPixel(tmpx, tmpy, Color::FromArgb(0, 255, 0));
						 }
						 else{
							 x *= (-1);	y *=(-1);
							 NowImg->SetPixel(x, y, Color::FromArgb(255, 255, 0));
							 ++tmp;

						 tmpx = x+1; tmpy = y+1;
						 if( tmpx<NowImg->Width && tmpx>=0 && tmpy<NowImg->Height && tmpy>=0 )
						 NowImg->SetPixel(tmpx, tmpy, Color::FromArgb(255, 255, 0));
						 tmpx = x+1; tmpy = y;
						 if( tmpx<NowImg->Width && tmpx>=0 && tmpy<NowImg->Height && tmpy>=0 )
						 NowImg->SetPixel(tmpx, tmpy, Color::FromArgb(255, 255, 0));
						 tmpx = x; tmpy = y+1;
						 if( tmpx<NowImg->Width && tmpx>=0 && tmpy<NowImg->Height && tmpy>=0 )
						 NowImg->SetPixel(tmpx, tmpy, Color::FromArgb(255, 255, 0));

						 tmpx = x+1; tmpy = y-1;
						 if( tmpx<NowImg->Width && tmpx>=0 && tmpy<NowImg->Height && tmpy>=0 )
						 NowImg->SetPixel(tmpx, tmpy, Color::FromArgb(255, 255, 0));
						 tmpx = x; tmpy = y-1;
						 if( tmpx<NowImg->Width && tmpx>=0 && tmpy<NowImg->Height && tmpy>=0 )
						 NowImg->SetPixel(tmpx, tmpy, Color::FromArgb(255, 255, 0));
						 tmpx = x-1; tmpy = y+1;
						 if( tmpx<NowImg->Width && tmpx>=0 && tmpy<NowImg->Height && tmpy>=0 )
						 NowImg->SetPixel(tmpx, tmpy, Color::FromArgb(255, 255, 0));
						 tmpx = x-1; tmpy = y;
						 if( tmpx<NowImg->Width && tmpx>=0 && tmpy<NowImg->Height && tmpy>=0 )
						 NowImg->SetPixel(tmpx, tmpy, Color::FromArgb(255, 255, 0));
						 tmpx = x-1; tmpy = y-1;
						 if( tmpx<NowImg->Width && tmpx>=0 && tmpy<NowImg->Height && tmpy>=0 )
						 NowImg->SetPixel(tmpx, tmpy, Color::FromArgb(255, 255, 0));
						 }

					 }

					 now = 0;
					 for(int i = 0; i < NowImg->Height; i++)
					 for(int j = 0; j < NowImg->Width; j++)
					 if( Gray[i*NowImg->Width+j]>=backup ){
						 int tt = 0;
						 for( int k = 0; k < 8; ++k ){
							 if( (j+dx[k])<NowImg->Width && (j+dx[k])>=0 && (i+dy[k])<NowImg->Height && (i+dy[k])>=0 && Gray[(i+dy[k])*NowImg->Width+(j+dx[k])]<=backup )
								 ++tt;
						 }
						 if( tt )	NowImg->SetPixel(j, i, Color::FromArgb(255, 0, 0));
					 }
					 else ++now;

					 pictureBox2->Image = NowImg;
					 stop = false;
					 textBox2->Text = String::Concat( "", (int)(0.5+now*100/(NowImg->Height*NowImg->Width)) );
					 textBox5->Text = String::Concat( "", maxnum-1-tmp );
					 textBox7->Text = String::Concat( "", tmp );
				 }
			 }
};
}

