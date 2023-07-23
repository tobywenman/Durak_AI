#include "frame.hpp"
#include "background.hpp"
#include "imagepanel.hpp"

MyFrame::MyFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title)
{
    MyCanvas *background = new MyCanvas(this);

    wxButton *button = new wxButton(background, wxID_ANY, "button", wxPoint(150,50), wxSize(100,35));

    wxBoxSizer* sizer = new wxBoxSizer(wxHORIZONTAL);

    wxImagePanel *img = new wxImagePanel(background, wxString("img/cards/spades4.png"), wxBITMAP_TYPE_PNG);

    sizer->Add(img, 1, wxEXPAND);

    background->SetSizer(sizer);
    
}

