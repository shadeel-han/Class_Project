#pragma once
#include <cstdio>
#include <cstdlib>
#include <cmath>

namespace DIPfinal {


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
			gradOK = false;
			drawOK = false;
			waterOK = false;
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
				for(int i=0; i<height; ++i){
					free(inr[i]);
					free(ing[i]);
					free(inb[i]);
				}
				free(inr);
				free(ing);
				free(inb);
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;

	private:
		/// <summary>
		Bitmap ^Input, ^Draw, ^Show;
		unsigned char **inr, **ing, **inb, **grad;
		int height, width, reg, mo, mb;
		int **rec;	//(height+4)*(width+4)
		bool gradOK, drawOK, waterOK;
		array<int> ^Mo, ^Mb;

	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
			 /// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器
		/// 修改這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(30, 627);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Open";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(30, 21);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(600, 600);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(675, 21);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(600, 600);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(30, 656);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Smooth";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(148, 627);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Gradient";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(148, 656);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Watershed";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(677, 627);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 6;
			this->button5->Text = L"LoadDraw 1";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(800, 627);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 7;
			this->button6->Text = L"MSRM-1";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(800, 656);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 8;
			this->button7->Text = L"MSRM-2";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(928, 627);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 9;
			this->button8->Text = L"GetTarget";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(677, 656);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 10;
			this->button9->Text = L"LoadDraw 2";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1306, 696);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				openFileDialog1->Filter = "All Files|*.*|Bitmap Files (*)|*.bmp;*.gif;*.jpg";
				if( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)   // 如果成功開檔
				{
					Input = gcnew Bitmap(openFileDialog1->FileName);//宣告存取影像的bitmap
					pictureBox1->Image = Input;//讀取的影像展示到pictureBox
					pictureBox2->Image = Input;
					height = Input->Height;
					width = Input->Width;

					inr = (unsigned char**)malloc(height*sizeof(unsigned char*));
					ing = (unsigned char**)malloc(height*sizeof(unsigned char*));
					inb = (unsigned char**)malloc(height*sizeof(unsigned char*));
					grad = (unsigned char**)malloc(height*sizeof(unsigned char*));
					for(int i=0; i<height; ++i){
						inr[i] = (unsigned char*)malloc(width*sizeof(unsigned char));
						ing[i] = (unsigned char*)malloc(width*sizeof(unsigned char));
						inb[i] = (unsigned char*)malloc(width*sizeof(unsigned char));
						grad[i] = (unsigned char*)malloc(width*sizeof(unsigned char));
					}
 
					Show = gcnew Bitmap(width,height); 
					for(int i=0; i<height; ++i)
					for(int j=0; j<width; ++j){
						Color RGB = Input->GetPixel(j,i);
						inr[i][j] = RGB.R;
						ing[i][j] = RGB.G;
						inb[i][j] = RGB.B;
						Show->SetPixel(j,i,Color::FromArgb( RGB.R, RGB.G, RGB.B));
					}
					gradOK = false;
					drawOK = false;
					waterOK = false;
				}
			}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				if( Input != nullptr ){
				int add = 2, t = height+(add<<1);
				unsigned char **temp;
				temp = (unsigned char**)malloc(t*sizeof(unsigned char*));
				for(int i=0; i<t; ++i)
					temp[i] = (unsigned char*)malloc((width+(add<<1))*sizeof(unsigned char));
				
				for(int k=0; k<3; ++k){

				for(int i=0; i<height; ++i)
				for(int j=0; j<width; ++j){
					if(k==0)		temp[i+add][j+add] = inr[i][j];
					else if(k==1)	temp[i+add][j+add] = ing[i][j];
					else			temp[i+add][j+add] = inb[i][j];
				}

				for(int i=add; i<height+add; ++i)
				for(int j=0; j<add; ++j){
					temp[i][j] = temp[i][add+j];
					temp[i][width+add+j] = temp[i][width+j];
				}
				for(int i=add; i<width+add; ++i)
				for(int j=0; j<add; ++j){
					temp[j][i] = temp[add+j][i];
					temp[height+add+j][i] = temp[height+j][i];
				}
				for(int i=0; i<add; ++i)
				for(int j=0; j<add; ++j){
					temp[i][j] = temp[add][add];
					temp[height+add+i][j] = temp[height+add-1][add];
					temp[i][width+add+j] = temp[add][width+add-1];
					temp[height+add+i][width+add+j] = temp[height+add-1][width+add-1];
				}
				/* perform low-pass filtering */
				int coor[5][5] = {{1,4,7,4,1},{4,16,26,16,4},{7,26,41,26,7},{4,16,26,16,4},{1,4,7,4,1}};
				for(int i=0; i<height; ++i)
				for(int j=0; j<width; ++j){
					int tol=0;
					for(int x=0; x<5; ++x)
					for(int y=0; y<5; ++y)
						tol += coor[x][y]*temp[i+x][j+y];
					tol /= 273;
					Color RGB = Show->GetPixel(j,i);
					if(k==0){
						Show->SetPixel(j,i,Color::FromArgb( tol, RGB.G, RGB.B));
						inr[i][j] = tol;
					}
					else if(k==1){
						Show->SetPixel(j,i,Color::FromArgb( RGB.R, tol, RGB.B));
						ing[i][j] = tol;
					}
					else{
						Show->SetPixel(j,i,Color::FromArgb( RGB.R, RGB.G, tol));
						inb[i][j] = tol;
					}
				}
				}
				pictureBox2->Image = Show;
				for(int i=0; i<t; ++i)	free(temp[i]);
				free(temp);
				}
			}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			if( Input != nullptr ){
			unsigned char **temp;
			temp = (unsigned char**)malloc((height+2)*sizeof(unsigned char*));
			for(int i=0; i<(height+2); ++i)
				temp[i] = (unsigned char*)malloc((width+2)*sizeof(unsigned char));

			/* extend the input image */
			for(int i=0; i<height; ++i)
			for(int j=0; j<width; ++j)
				temp[i+1][j+1] = (unsigned char)(0.299*inr[i][j] + 0.587*ing[i][j] + 0.114*inb[i][j]);
				// convert three color channels to one gray channel
			for(int i=1; i<=width; ++i){
				temp[0][i] = temp[1][i];
				temp[height+1][i] = temp[height][i];
			}
			for(int i=1; i<=height; ++i){
				temp[i][0] = temp[i][1];
				temp[i][width+1] = temp[i][width];
			}
			temp[0][0] = temp[1][1];
			temp[height+1][0] = temp[height][1];
			temp[0][width+1] = temp[1][width];
			temp[height+1][width+1] = temp[height][width];

			int dx[8]={0,0,0,1,1,2,2,2}, dy[8]={0,1,2,0,2,0,1,2};
			int gr[8]={-1,0,1,-2,2,-1,0,1}, gc[8]={1,2,1,0,0,-1,-2,-1};
			for(int i=0; i<height; ++i)
			for(int j=0; j<width; ++j){
				int Gr=0, Gc=0, G;
				for(int k=0; k<8; ++k){
					Gr += (gr[k]*temp[i+dx[k]][j+dy[k]]);
					Gc += (gc[k]*temp[i+dx[k]][j+dy[k]]);
				}
				Gr >>= 2;   Gc >>=2 ;
				G = (short int)sqrt((double)(Gr*Gr+Gc*Gc))+1; //eliminate gradient=0
				Show->SetPixel(j,i,Color::FromArgb( G-1, G-1, G-1));
				grad[i][j] = G;
			}
			pictureBox2->Image = Show;
			gradOK = true;

			for(int i=0; i<(height+2); ++i)	free(temp[i]);
			free(temp);
			}
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			if( gradOK ){
			int limit=1000000, cnt=0, stop=0;
			rec = (int**)malloc((height+4)*sizeof(int*));
			for(int i=0; i<(height+4); ++i)
				rec[i] = (int*)malloc((width+4)*sizeof(int));
			// find maximun value
			for(int i=0; i<height; ++i)
			for(int j=0; j<width; ++j)
			if(grad[i][j]>=stop)	stop=grad[i][j]+1;
			// initial record board
			for(int i=0; i<height+4; ++i)
			for(int j=0; j<width+4; ++j)
			if(i<2 || j<2 || i>height+1 || j>width+1)	rec[i][j] = limit;
			else										rec[i][j] = 0;

			// start Watershed
			int dx[8]={-1,-1,-1,0,0,1,1,1}, dy[8]={-1,0,1,-1,1,-1,0,1},index=0, end=0;
			array<int>^ pool = gcnew array<int>(width*height);	//memory pool
			array<int>^ start = gcnew array<int>(257);			//start index of every intensity
			for(int i=0; i<257; ++i) start[i] = -1;
			array<int>^ next = gcnew array<int>(width*height);  //next index of each pool
			array<int>^ now = gcnew array<int>(257);			//current position of the intensity
			
			for(int i=0; i<height; ++i)
			for(int j=0; j<width; ++j){
				if( start[grad[i][j]]==-1 )	start[grad[i][j]] = end;
				else						next[now[grad[i][j]]] = end;
				next[end] = -1;
				pool[end] = 10000*i+j;
				now[grad[i][j]] = end++;
			}
			for(int i=1; i<stop; ++i)
			for(int j=start[i]; j!=-1; j=next[j]){
				int x=pool[j]/10000+2, y=pool[j]-(x-2)*10000+2;
				if( rec[x][y]==limit )  // here is decided to be dam
					continue;
				if( !rec[x][y] )   // here is the local minimun
					rec[x][y] = ++cnt;
				for(int h=0; h<8; ++h){
					int a=x+dx[h], b=y+dy[h];
					if( !rec[a][b] )                rec[a][b] = rec[x][y];
					else if(rec[a][b]!=rec[x][y])   rec[a][b] = limit;
				}
			}
			reg = cnt;	//record the number of region
			for(int i=0; i<height; ++i)
			for(int j=0; j<width; ++j){
				if( rec[i+2][j+2]==limit )	Show->SetPixel(j,i,Color::FromArgb( 255, 255, 255));
				else						Show->SetPixel(j,i,Color::FromArgb( inr[i][j], ing[i][j], inb[i][j]));
			}
			pictureBox2->Image = Show;
			waterOK = true;
			}
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( waterOK ){
				openFileDialog1->Filter = "All Files|*.*|Bitmap Files (*)|*.bmp;*.gif;*.jpg";
				if( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)   // 如果成功開檔
				{
					Draw = gcnew Bitmap(openFileDialog1->FileName);//宣告存取影像的bitmap
					pictureBox1->Image = Draw;//讀取的影像展示到pictureBox
					if( height==Draw->Height && width==Draw->Width ){
						drawOK = true;
						int cnt=0;
						array<int>^ st = gcnew array<int>(height*width);
						for(int i=0; i<height; ++i)
						for(int j=0; j<width; ++j){
							Color a=Input->GetPixel(j,i), b=Draw->GetPixel(j,i);
							if( a!=b ){
								if( b.R==255 )	++mo;
								else			++mb;
								st[cnt++] = 10000*i+j;
								if( rec[i+2][j+2]==1000000 )	rec[i+2][j+2] = 1000001;
							}
						}
						Mo = gcnew array<int>(mo);	mo=0;
						Mb = gcnew array<int>(mb);	mb=0;
						for(int i=0; i<cnt; ++i){
							Color b=Draw->GetPixel(st[i]%10000,st[i]/10000);
							if( b.R==255 )	Mo[mo++] = st[i];
							else			Mb[mb++] = st[i];
						}
					}
				}
			 }
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			if( drawOK ){
				while(1){
				int limit=1000000, region = reg+1, h=height+2, w=width+2, cnt=0;
				// create the histogram
				array<array<int>^>^ his = gcnew array<array<int>^>(region);
				array<int>^ num = gcnew array<int>(region);
				array<int>^ merge = gcnew array<int>(region);
				for(int i=1; i<region; ++i){
					num[i] = 0;
					merge[i] = i;
					his[i] = gcnew array<int>(4096);
					for(int j=0; j<4096; ++j)	his[i][j] = 0;
				}
				// calculate the normalized quantized histogram, construct connectivity
				int dx[8]={-1,0,1,0,-1,-1,1,1}, dy[8]={0,1,0,-1,-1,1,1,-1};
				array<array<int>^>^ con = gcnew array<array<int>^>(region);
				array<int>^ connum = gcnew array<int>(region);
				for(int i=1; i<region; ++i){
					con[i] = gcnew array<int>(region);
					con[i][0] = 0;	// record whether this region is in Mb
					connum[i] = 0;
				}
				for(int i=2; i<h; ++i)for(int j=2; j<w; ++j)
				if( rec[i][j]<limit ){	// histogram
					++num[rec[i][j]];
					int a=i-2, b=j-2;
					++his[rec[i][j]][inr[a][b]/16*256+ing[a][b]/16*16+inb[a][b]/16];
				}
				else if( rec[i-1][j]+rec[i+1][j]<limit || rec[i][j-1]+rec[i][j+1]<limit ){	// connectivity
					int a, b, k;
					if( rec[i-1][j]+rec[i+1][j]<limit )	a=rec[i-1][j],b=rec[i+1][j];
					else								a=rec[i][j-1],b=rec[i][j+1];
					if( a!=b ){
					for( k=1; k<=connum[a]; ++k )	if(con[a][k]==b)	break;
					if( k > connum[a] ){	// not already be stored
						con[a][++connum[a]] = b;
						con[b][++connum[b]] = a;
					}}
				}
				// merge process
				for(int i=0,j=mb; i<j; ++i)if( rec[Mb[i]/10000+2][Mb[i]%10000+2]<limit && connum[rec[Mb[i]/10000+2][Mb[i]%10000+2]] )	con[rec[Mb[i]/10000+2][Mb[i]%10000+2]][0] = 1;
				for(int i=0,j=mo; i<j; ++i)if( rec[Mo[i]/10000+2][Mo[i]%10000+2]<limit && connum[rec[Mo[i]/10000+2][Mo[i]%10000+2]] )	con[rec[Mo[i]/10000+2][Mo[i]%10000+2]][0] = -1;
				for(int i=1; i<region; ++i)if( con[i][0]>0 ){	// if this region is in Mb
					for(int j=1; j<=connum[i]; ++j)if( !con[con[i][j]][0] ){	// if this region is not in Mb
						double maxhis = 0, here = 0;
						for(int a=0; a<4096; ++a)
							here += sqrt(((double)(his[i][a]*his[con[i][j]][a]))/(num[i]*num[con[i][j]]));
						for(int k=1; k<=connum[con[i][j]]; ++k){
							double tmp = 0, tol = num[con[i][j]]*num[con[con[i][j]][k]];
							for(int a=0; a<4096; ++a)
								tmp += sqrt(((double)(his[con[i][j]][a]*his[con[con[i][j]][k]][a]))/tol);
							if( tmp > maxhis )	maxhis = tmp;
						}
						if( fabs(maxhis-here)<1e-6 ){
							int a=con[i][j], b=i;
							while( merge[a]!=a )	a=merge[a];
							while( merge[b]!=b )	b=merge[b];
							if( a > b )	merge[a] = b;
							else		merge[b] = a;
						}
					}
				}
				// reset the merging data
				for(int i=1; i<region; ++i){
					int tmp = i;
					while( merge[tmp]!=tmp )	tmp = merge[tmp];
					merge[i] = tmp;
				}
				// first, eliminate the merging dam
				for(int i=2; i<h; ++i)for(int j=2; j<w; ++j)
				if( rec[i][j]>=limit && (rec[i-1][j]+rec[i+1][j]<limit || rec[i][j-1]+rec[i][j+1]<limit) ){
					int a, b;
					if( rec[i-1][j]+rec[i+1][j]<limit )	a=rec[i-1][j], b=rec[i+1][j];
					else								a=rec[i][j-1], b=rec[i][j+1];
					if( merge[a]==merge[b] )	rec[i][j] = merge[a];
				}
				
				for(int i=2; i<h; ++i)for(int j=2; j<w; ++j)if( rec[i][j]>=limit ){
					int k, record = 0;
					for(k=0; k<8; ++k){
						int tmp = rec[i+dx[k]][j+dy[k]];
						if( tmp>0 && tmp<limit ){
							if( !record )	record = tmp;
							else if( record!=tmp )	break;
						}
					}
					if( k==8 && record )	rec[i][j] = record;
				}
				for(int i=2; i<h; ++i)for(int j=2; j<w; ++j)
				if( rec[i][j]!=limit )	rec[i][j] = 0;
				// second, renumber the region
				for(int i=2; i<h; ++i)for(int j=2; j<w; ++j)if( !rec[i][j] ){
					System::Collections::Generic::Queue<int> que;	que.Clear();
					int now, nowx, nowy, tmpx, tmpy;
					rec[i][j] = ++cnt;	now = i*10000+j;	que.Enqueue(now);
					while( que.Count ){
						now = que.Dequeue();	nowx = now/10000;	nowy = now-nowx*10000;
						for(int k=0; k<8; ++k){
							tmpx = nowx + dx[k];	tmpy = nowy + dy[k];
							if( !rec[tmpx][tmpy] )	rec[tmpx][tmpy]=cnt, que.Enqueue(tmpx*10000+tmpy);
						}
					}
				}
				if( reg > cnt )	reg = cnt;
				else			break;
				}
				// reset the image
				for(int i=0,limit=1000000; i<height; ++i)for(int j=0; j<width; ++j){
					if( rec[i+2][j+2]==limit )	Show->SetPixel(j,i,Color::FromArgb( 255, 255, 255));
					else						Show->SetPixel(j,i,Color::FromArgb( inr[i][j], ing[i][j], inb[i][j]));
				}
				pictureBox2->Image = Show;
			}
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( drawOK ){
				while(1){
				int limit=1000000, region = reg+1, h=height+2, w=width+2, cnt=0;
				// create the histogram
				array<array<int>^>^ his = gcnew array<array<int>^>(region);
				array<int>^ num = gcnew array<int>(region);
				array<int>^ merge = gcnew array<int>(region);
				for(int i=1; i<region; ++i){
					num[i] = 0;
					merge[i] = i;
					his[i] = gcnew array<int>(4096);
					for(int j=0; j<4096; ++j)	his[i][j] = 0;
				}
				// calculate the normalized quantized histogram, construct connectivity
				int dx[8]={-1,0,1,0,-1,-1,1,1}, dy[8]={0,1,0,-1,-1,1,1,-1};
				array<array<int>^>^ con = gcnew array<array<int>^>(region);
				array<int>^ connum = gcnew array<int>(region);
				for(int i=1; i<region; ++i){
					con[i] = gcnew array<int>(region);
					con[i][0] = 1;	// record whether this region is in Mb
					connum[i] = 0;
				}
				for(int i=2; i<h; ++i)for(int j=2; j<w; ++j)
				if( rec[i][j]!=limit ){	// histogram
					++num[rec[i][j]];
					int a=i-2, b=j-2;
					++his[rec[i][j]][inr[a][b]/16*256+ing[a][b]/16*16+inb[a][b]/16];
				}
				else if( rec[i-1][j]+rec[i+1][j]<limit || rec[i][j-1]+rec[i][j+1]<limit ){	// connectivity
					int a, b, k;
					if( rec[i-1][j]+rec[i+1][j]<limit )	a=rec[i-1][j],b=rec[i+1][j];
					else								a=rec[i][j-1],b=rec[i][j+1];
					if( a!=b ){
					for( k=1; k<=connum[a]; ++k )	if(con[a][k]==b)	break;
					if( k > connum[a] ){	// not already be stored
						con[a][++connum[a]] = b;
						con[b][++connum[b]] = a;
					}}
				}
				// merge process
				for(int i=0,j=mb; i<j; ++i)if( rec[Mb[i]/10000+2][Mb[i]%10000+2]!=limit && connum[rec[Mb[i]/10000+2][Mb[i]%10000+2]] )	con[rec[Mb[i]/10000+2][Mb[i]%10000+2]][0] = 0;
				for(int i=0,j=mo; i<j; ++i)if( rec[Mo[i]/10000+2][Mo[i]%10000+2]!=limit && connum[rec[Mo[i]/10000+2][Mo[i]%10000+2]] )	con[rec[Mo[i]/10000+2][Mo[i]%10000+2]][0] = 0;
				for(int i=1; i<region; ++i)if( con[i][0] ){	// if this region is not in Mb
					for(int j=1; j<=connum[i]; ++j)if( con[con[i][j]][0] ){	// if this region is not in Mb
						double maxhis = 0, here = 0;
						for(int a=0; a<4096; ++a)
							here += sqrt(((double)(his[i][a]*his[con[i][j]][a]))/(num[i]*num[con[i][j]]));
						for(int k=1; k<=connum[con[i][j]]; ++k){
							double tmp = 0, tol = num[con[i][j]]*num[con[con[i][j]][k]];
							for(int a=0; a<4096; ++a)
								tmp += sqrt(((double)(his[con[i][j]][a]*his[con[con[i][j]][k]][a]))/tol);
							if( tmp > maxhis )	maxhis = tmp;
						}
						if( fabs(maxhis-here)<1e-6 ){
							int a=con[i][j], b=i;
							while( merge[a]!=a )	a=merge[a];
							while( merge[b]!=b )	b=merge[b];
							if( a > b )	merge[a] = b;
							else		merge[b] = a;
						}
					}
				}
				// reset the merging data
				for(int i=1; i<region; ++i){
					int tmp = i;
					while( merge[tmp]!=tmp )	tmp = merge[tmp];
					merge[i] = tmp;
				}
				// first, eliminate the merging dam
				for(int i=2; i<h; ++i)for(int j=2; j<w; ++j)
				if( rec[i][j]>=limit && (rec[i-1][j]+rec[i+1][j]<limit || rec[i][j-1]+rec[i][j+1]<limit) ){
					int a, b;
					if( rec[i-1][j]+rec[i+1][j]<limit )	a=rec[i-1][j], b=rec[i+1][j];
					else								a=rec[i][j-1], b=rec[i][j+1];
					if( merge[a]==merge[b] )	rec[i][j] = merge[a];
				}
				for(int i=2; i<h; ++i)for(int j=2; j<w; ++j)if( rec[i][j]==limit ){
					int k, record = 0;
					for(k=0; k<8; ++k){
						int tmp = rec[i+dx[k]][j+dy[k]];
						if( tmp>0 && tmp<limit ){
							if( !record )	record = tmp;
							else if( record!=tmp )	break;
						}
					}
					if( k==8 && record )	rec[i][j] = record;
				}
				for(int i=2; i<h; ++i)for(int j=2; j<w; ++j)
				if( rec[i][j]!=limit )	rec[i][j] = 0;
				// second, renumber the region
				for(int i=2; i<h; ++i)for(int j=2; j<w; ++j)if( !rec[i][j] ){
					System::Collections::Generic::Queue<int> que;	que.Clear();
					int now, nowx, nowy, tmpx, tmpy;
					rec[i][j] = ++cnt;	now = i*10000+j;	que.Enqueue(now);
					while( que.Count ){
						now = que.Dequeue();	nowx = now/10000;	nowy = now-nowx*10000;
						for(int k=0; k<8; ++k){
							tmpx = nowx + dx[k];	tmpy = nowy + dy[k];
							if( !rec[tmpx][tmpy] )	rec[tmpx][tmpy]=cnt, que.Enqueue(tmpx*10000+tmpy);
						}
					}
				}
				if( reg > cnt )	reg = cnt;
				else			break;
				}
				// reset the image
				for(int i=0,limit=1000000; i<height; ++i)for(int j=0; j<width; ++j){
					if( rec[i+2][j+2]==limit )	Show->SetPixel(j,i,Color::FromArgb( 255, 255, 255));
					else						Show->SetPixel(j,i,Color::FromArgb( inr[i][j], ing[i][j], inb[i][j]));
				}
				pictureBox2->Image = Show;
			}
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			if( drawOK ){
				int dx[8]={-1,0,1,0,-1,-1,1,1}, dy[8]={0,1,0,-1,-1,1,1,-1}, region=reg+1, limit=1000000;
				array<bool>^ obj = gcnew array<bool>(region);
				for(int i=1; i<region; ++i) obj[i] = false;
				for(int i=0; i<mb; ++i){
					int x=Mb[i]/10000+2, y=Mb[i]%10000+2;
					if( rec[x][y]<limit )
					obj[rec[x][y]] = true;
				}
				for(int i=2; i<height+2; ++i)
				for(int j=2; j<width+2; ++j)if(rec[i][j]==limit){
					int tnum=0, fnum=0, x, y;
					for(int k=0; k<8; ++k){
						x = i + dx[k];	y = j + dy[k];
						if( rec[x][y]!=limit ){
							if( obj[rec[x][y]] )	++tnum;
							else					++fnum;
						}
					}
					if( tnum && fnum )	Input->SetPixel(j-2,i-2,Color::FromArgb(0,255,255));
				}
				pictureBox1->Image = Input;
			 }
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( waterOK ){
				openFileDialog1->Filter = "All Files|*.*|Bitmap Files (*)|*.bmp;*.gif;*.jpg";
				if( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)   // 如果成功開檔
				{
					Draw = gcnew Bitmap(openFileDialog1->FileName);//宣告存取影像的bitmap
					pictureBox1->Image = Draw;//讀取的影像展示到pictureBox
					if( height==Draw->Height && width==Draw->Width ){
						drawOK = true;
						int cnt=0;
						array<int>^ st = gcnew array<int>(height*width);
						for(int i=0; i<height; ++i)
						for(int j=0; j<width; ++j){
							Color a=Input->GetPixel(j,i), b=Draw->GetPixel(j,i);
							if( a!=b ){
								if( b.R==255 )	++mo;
								else			++mb;
								st[cnt++] = 10000*i+j;
								//if( rec[i+2][j+2]==1000000 )	rec[i+2][j+2] = 1000001;
							}
						}
						Mo = gcnew array<int>(mo);	mo=0;
						Mb = gcnew array<int>(mb);	mb=0;
						for(int i=0; i<cnt; ++i){
							Color b=Draw->GetPixel(st[i]%10000,st[i]/10000);
							if( b.R==255 )	Mo[mo++] = st[i];
							else			Mb[mb++] = st[i];
						}
					}
				}
			 }
		 }
};
}

