#include <afxwin.h>
struct CBaseWindowModelView;

struct BaseWindow : public ::CFrameWnd
{
  explicit   BaseWindow(CBaseWindowModelView &ModelView);
  virtual   ~BaseWindow();


protected:
   //Support and inheritable functions
protected:
  DECLARE_MESSAGE_MAP()

private:
  //helper function
  CBaseWindowModelView  &ModelView;

};