#include <afx.h>
#include <afxwin.h>
#include <vector>

struct CResourceDirectionaryReader;
struct CResourceDirectionaryReader;

struct CResourceDictionary : public  CObject
{
  explicit CResourceDictionary(const CString & Filename);
  CResourceDictionary(const CResourceDictionary& Other);
  /***************************************************************************
  * @brief
  *  The function will be use to get any xml object loaded into memory.
  * 
  ***************************************************************************/
  virtual  CObject *       GetObject(const CString& Title);
  virtual  const CObject * GetObject(const CString& Title) const;
  virtual void MergeResource(const CResourceDictionary & Resource);
  virtual void RemoveResource(const CResourceDictionary & Resource);
  virtual void AddItem(const CString& Key, CObject & Object);
  virtual void RemoveItem(const CString& Key, CObject & Object);
  virtual void GetItemCount()const;
  virtual void GetMergeCount()const;
  virtual     ~CResourceDictionary();

protected:
  virtual bool const IsExist(const CString& Filename);
private:
  CMap<CString, CString, CObject, CObject>  _resourceMaps;
  CArray<CResourceDictionary, CResourceDictionary>              __mergeResources;
  CString __FileName;
  IXMLDOMDocument *XMLDoc_Ptr;

};