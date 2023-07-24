#include "imagepanel.hpp"

#include <wx/wx.h>

class card : public wxImagePanel
{
    public:
        card(unsigned x, unsigned y, wxWindow* parent, wxString file, wxBitmapType format);
        void render(wxDC& dc) override;
    private:
        unsigned posX;
        unsigned posY;
};