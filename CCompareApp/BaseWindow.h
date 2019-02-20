#include <afxwin.h>
struct CBaseWindowViewModel;

struct BaseWindow : public CFrameWnd
{
  explicit   BaseWindow(CBaseWindowViewModel &ModelView);
  virtual   ~BaseWindow();


protected:

   //Support and inheritable functions
protected:
  DECLARE_MESSAGE_MAP()
  afx_msg void OnPaint();
private:
  //helper function
  CBaseWindowViewModel  &__ViewModel;
};