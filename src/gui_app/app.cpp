#include "app.hpp"

bool MyApp::OnInit()
{
    wxInitAllImageHandlers();
    MyFrame *frame = new MyFrame("Durak");
    frame->SetClientSize(800,600);
    frame->Center();
    frame->Show(true);
    return true;
}