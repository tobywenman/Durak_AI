#include "app.hpp"

bool MyApp::OnInit()
{
    MyFrame *frame = new MyFrame("Durak");
    frame->SetClientSize(800,600);
    frame->Center();
    frame->Show(true);
    return true;
}