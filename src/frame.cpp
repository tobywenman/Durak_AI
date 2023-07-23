#include "frame.hpp"
#include "background.hpp"

MyFrame::MyFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title)
{
    MyCanvas *background = new MyCanvas(this);

    wxButton *button = new wxButton(background, wxID_ANY, "button", wxPoint(150,50), wxSize(100,35));

    background->Bind(wxEVT_PAINT, &MyFrame::OnPaint, this);
    
}

void MyFrame::OnPaint(wxPaintEvent&)
{
    wxClientDC dc(this);
    wxBitmap bitmap;
    bitmap.LoadFile("img/cards/spades4.png",wxBITMAP_TYPE_PNG);
    dc.DrawBitmap(bitmap, 5, 5, true);
}