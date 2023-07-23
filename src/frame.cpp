#include "frame.hpp"
#include "background.hpp"
#include "card.hpp"

MyFrame::MyFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title)
{
    MyCanvas *background = new MyCanvas(this);

    wxButton *button = new wxButton(background, wxID_ANY, "button", wxPoint(150,50), wxSize(100,35));

    wxBoxSizer* sizer = new wxBoxSizer(wxHORIZONTAL);

    card *img = new card(200, 200, background, wxString("img/cards/spades4.png"), wxBITMAP_TYPE_PNG);

    sizer->Add(img, 1, wxEXPAND);

    background->SetSizer(sizer);
    
}

