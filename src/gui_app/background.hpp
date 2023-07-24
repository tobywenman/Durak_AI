#include <wx/wx.h>
#include <wx/custombgwin.h>

class MyCanvas : public wxCustomBackgroundWindow<wxScrolledWindow>
{
public:
    MyCanvas(wxWindow* parent)
    {
        wxBitmap bitmap;

        bitmap.LoadFile("img/table.jpg",wxBITMAP_TYPE_JPEG);

        Create(parent, wxID_ANY);
        SetBackgroundBitmap(bitmap);
    }
};