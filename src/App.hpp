#include "wx/wx.h"

#include <wx/snglinst.h>

#ifndef APP_HPP_INCLUDED
#define APP_HPP_INCLUDED

class IpmsApp : public wxApp {
public:
    virtual bool OnInit();
    virtual int OnExit();
private:
    wxSingleInstanceChecker* m_checker;
};

wxIMPLEMENT_APP(IpmsApp);

#endif // APP_HPP_INCLUDED