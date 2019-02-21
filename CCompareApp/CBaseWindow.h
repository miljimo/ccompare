#include <afxwin.h>
struct CBaseWindowViewModel;

struct CBaseWindow : public CFrameWnd
{
  CBaseWindow(CBaseWindowViewModel &ModelView);
  virtual   ~CBaseWindow();


protected:
  DECLARE_MESSAGE_MAP()
  //MFC Event functions
  afx_msg void OnPaint();
private:
  //helper function
  CBaseWindowViewModel  &__ViewModel;
};