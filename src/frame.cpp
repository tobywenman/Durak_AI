#include "frame.hpp"
#include "background.hpp"


MyFrame::MyFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title)
{
    MyCanvas *background = new MyCanvas(this);
}