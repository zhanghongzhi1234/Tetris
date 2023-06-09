// tetris.h : main header file for the TETRIS application
//

#if !defined(AFX_TETRIS_H__477B0C55_6FB8_11D3_9803_0088CC094230__INCLUDED_)
#define AFX_TETRIS_H__477B0C55_6FB8_11D3_9803_0088CC094230__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CTetrisApp:
// See tetris.cpp for the implementation of this class
//

class CTetrisApp : public CWinApp
{
public:
    CTetrisApp();

    // Overrides
        // ClassWizard generated virtual function overrides
        //{{AFX_VIRTUAL(CTetrisApp)
public:
    virtual BOOL InitInstance();
    //}}AFX_VIRTUAL

// Implementation
    //{{AFX_MSG(CTetrisApp)
    afx_msg void OnAppAbout();
    // NOTE - the ClassWizard will add and remove member functions here.
    //    DO NOT EDIT what you see in these blocks of generated code !
//}}AFX_MSG
    DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TETRIS_H__477B0C55_6FB8_11D3_9803_0088CC094230__INCLUDED_)
