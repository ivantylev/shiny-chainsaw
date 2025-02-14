//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button1Click(TObject *Sender)
{
int i,f,k;
float s=0, x=StrToFloat(Edit1->Text);
for(i=1;i<=5;i++){
	for(k=1,f=1;k<=2*i-1;k++) f*=k;
	s+=pow(-1,i+1)*pow(x,i)/f;
}
Edit2->Text=FloatToStr(s);
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button2Click(TObject *Sender)
{
int i=1,f,k;
float s=0, x=StrToFloat(Edit1->Text);
while(i<=5){
	f=1;k=1;
	while (k<=2*i-1){f*=k;k++;}
	s+=pow(-1,i+1)*pow(x,i)/f;
	i++;
}
Edit3->Text=FloatToStr(s);
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button3Click(TObject *Sender)
{
int i=1,f,k;
float s=0, x=StrToFloat(Edit1->Text);
do{
	f=1;k=1;
	do { f*=k;k++;}
	while(k<=2*i-1);
	s+=pow(-1,i+1)*pow(x,i)/f;
	i++;
} while (i<=5);
Edit4->Text=FloatToStr(s);
}
//---------------------------------------------------------------------------
