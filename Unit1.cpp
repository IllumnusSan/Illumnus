//---------------------------------------------------------------------------

#include <vcl.h>
#include <math.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	 if(Edit1->Text.IsEmpty())
   {
   if(Edit1->Text.IsEmpty())
   {
	   if(Edit1->Text.IsEmpty())
   {   ShowMessage("Введите данные!");
		return;
   }
   }
   }

	else
	{
	Memo1 -> Clear();
	float fs, Vas, Qts, Qtc, fc, Vb;
	fs = StrToFloat(Edit1 -> Text);
	Vas = StrToFloat(Edit2 -> Text);
	Qts = StrToFloat(Edit3 -> Text);

		if (Qts <=0)
		{
			if (Vas <=0)
			{
				if (fs <=0)
				{
				ShowMessage("Некорректный ввод данных!");
				return;
				Close();
				}
			}
		}
	else
	{
	fc = fs*0.7/Qts;
	Vb = Vas/((fc/fs)*(fc/fs)-1);
	Memo1 -> Lines -> Add("Акустический	обьем = ");
	Memo1 -> Lines -> Add(Vb);
	}
	}
}
//---------------------------------------------------------------------------
