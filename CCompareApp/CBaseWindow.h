#include <afxwin.h>
struct CBaseWindowViewModel;

struct CBaseWindow : public CFrameWnd
{
  CBaseWindow(CBaseWindowViewModel &ModelView);
  virtual   ~CBaseWindow();


protected:
  virtual BOOL OnCmdMsg(UINT nID, int nCode, void* pExtra,
    AFX_CMDHANDLERINFO* pHandlerInfo)override;

  DECLARE_MESSAGE_MAP()
  //MFC Event functions
  afx_msg void OnPaint();
private:
  //helper function
  CBaseWindowViewModel  &__ViewModel;
};