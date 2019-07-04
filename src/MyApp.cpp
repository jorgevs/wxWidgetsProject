#include "MyApp.h"
#include "MyFrame.h"

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif


bool MyApp::OnInit() {
    MyFrame *frame = new MyFrame();
    frame->Show(true);
    return true;
}
