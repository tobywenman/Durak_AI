#include <wx/wx.h>

#include "frame.hpp"

class MyApp : public wxApp 
{
public:
    virtual bool OnInit(); 
}; 

wxIMPLEMENT_APP(MyApp);