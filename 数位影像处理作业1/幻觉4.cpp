//---------------------------------------------------------------------------

#include <vcl.h>
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
PaintBox1->Canvas->Pen->Color=0;

PaintBox1->Canvas->MoveTo(100,0);
PaintBox1->Canvas->LineTo(100,200);
PaintBox1->Canvas->MoveTo(75,175);
PaintBox1->Canvas->LineTo(100,200);
PaintBox1->Canvas->MoveTo(125,175);
PaintBox1->Canvas->LineTo(100,200);

PaintBox1->Canvas->MoveTo(200,0);
PaintBox1->Canvas->LineTo(200,200);
PaintBox1->Canvas->MoveTo(175,225);
PaintBox1->Canvas->LineTo(200,200);
PaintBox1->Canvas->MoveTo(225,225);
PaintBox1->Canvas->LineTo(200,200);
}
//---------------------------------------------------------------------------
 