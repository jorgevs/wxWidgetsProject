#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

#ifndef WXWIDGETSPROJECT_MYFRAME_H
#define WXWIDGETSPROJECT_MYFRAME_H


enum {
    ID_Hello = 1
};

class MyFrame : public wxFrame {
public:
    MyFrame();

private:
    void OnExit(wxCommandEvent &event);

    void OnAbout(wxCommandEvent &event);

    void OnHello(wxCommandEvent &event);
};


#endif //WXWIDGETSPROJECT_MYFRAME_H
