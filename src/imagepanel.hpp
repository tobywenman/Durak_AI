#include <wx/wx.h>

class wxImagePanel : public wxPanel
{
protected:
    wxBitmap image;
    
public:
    wxImagePanel(wxWindow* parent, wxString file, wxBitmapType format);
    
    void paintEvent(wxPaintEvent & evt);
    void paintNow();
    
    virtual void render(wxDC& dc);

    
    DECLARE_EVENT_TABLE()
};

