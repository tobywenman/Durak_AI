#include "card.hpp"

card::card(unsigned x, unsigned y, wxWindow* parent, wxString file, wxBitmapType format) : wxImagePanel(parent, file, format)
{
    posX = x;
    posY = y;
}

void card::render(wxDC& dc)
{
    dc.DrawBitmap( image, posX, posY, false );
}