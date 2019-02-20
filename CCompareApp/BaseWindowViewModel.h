#ifndef BASE_WINDOW_VIEW_MODEL_H
#define BASE_WINDOW_VIEW_MODEL_H
#include "CViewModel.h"
struct CResource;
class  CBaseWindow;


/*******************************************************************************************
* @brief
*  The main viewmodel for the main BaseWindow of the application.
*  The function is use to expose property that need to be show by the view.
********************************************************************************************/
struct CBaseWindowViewModel : public CViewModel
{
  static  CBaseWindowViewModel * GetInstance();
  /****************************************************************************************
  * @brief
  *   The static function is use to create singleton instance of the current application
  *  @param {CBaseWindow& } Windo
  ******************************************************************************************/
  static   CBaseWindowViewModel * CreateInstance(CResource & Resource);
  virtual ~CBaseWindowViewModel();
protected:
  CBaseWindowViewModel();

private:
  //static members
  static CBaseWindowViewModel *_Instance;
};

#endif