#include <afxwin.h>
#include "CBaseWindow.h"
#include "CBaseWindowViewModel.h"


struct CCompareApp : public CWinApp
{
  explicit CCompareApp();
  virtual BOOL InitInstance()override;

  virtual CBaseWindow*  GetWindow();

public:


protected:
  DECLARE_MESSAGE_MAP()
};