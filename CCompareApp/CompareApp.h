#include <afxwin.h>

//forward declaration
struct CCompareViewModel;

struct CCompareWinApp : public CWinApp
{

  CCompareWinApp(const CCompareViewModel & ViewModel);
 
  /*************************************************
  * @brief
  *  The function is called to initialise the instance
  *  of the application.
  **************************************************/
  virtual BOOL InitInstance();


};

