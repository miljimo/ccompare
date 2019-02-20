#include <afx.h>
#include <vector>
struct CResourceItem : public CObject
{
  CResourceItem(const CString & Key);
};


struct CResource : public  CObject
{
  explicit CResource(const CString & Filename);
  template<class TObject>  TObject GetObject(const CString& Title);
  template<> CString               GetObject<CString>(const CString& Title);
  template<> double                GetObject<double>(const CString& Title);
  template<> int                   GetObject<int>(const CString& Title);
  template<> CBitmap*              GetObject<CBitmap*>(const CString& Title);
  template<> CStringArray*         GetObject<CStringArray*>(const CString& Title);

  virtual ~CResource();
private:
  CMap<CString, CString, CResourceItem, CResourceItem>  __resourceTables;
  CArray<CResource, CResource>                          __MergeResources;

};