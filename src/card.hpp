#include <wx/wx.h>


enum cardType
{
    spade_ace,
    spade_2,
    spade_3,
    spade_4,
    spade_5,
    spade_6,
    spade_7,
    spade_8,
    spade_9,
    spade_10,
    spade_jack,
    spade_queen,
    spade_king
};

class card : public wxPanel
{
    public:
        card(wxFrame *parent, cardType card);
        
    private:
        wxBitmap image;
        
};