#ifndef BASE_WINDOW_VIEW_MODEL_H
#define BASE_WINDOW_VIEW_MODEL_H
#include <afx.h>
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
  //Get the  window model title
  CBaseWindowViewModel(CResource & Resouce);

  inline CString GetWindowTitle()const {
    return __Title;
  };

  /***********************************************
  * @brief
  * Set the Window property and update the UI
  * @param {CString const & } Title to update
  *************************************************/
  inline void SetTitle(CString const &  Title){
    if (this->__Title != Title){
      this->__Title = Title;
      this->RaisePropertyChanged("Title");
    }
  }

  virtual ~CBaseWindowViewModel();
public:
  //Static types
  static  CBaseWindowViewModel * GetInstance();
  /****************************************************************************************
  * @brief
  *   The static function is use to create singleton instance of the current application
  *  @param {CBaseWindow& } Windo
  ******************************************************************************************/
  static   CBaseWindowViewModel * CreateInstance(CResource & Resource);

protected:
  CBaseWindowViewModel();
private:
  //helper functions
  CString __Title;
private:
  //static members
  static CBaseWindowViewModel *_Instance;
};

#endif