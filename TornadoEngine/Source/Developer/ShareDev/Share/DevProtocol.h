/*
Author: Gudakov Ramil Sergeevich a.k.a. Gauss 
Гудаков Рамиль Сергеевич 
Contacts: [ramil2085@mail.ru, ramil2085@gmail.com]
See for more information License.h.
*/

#ifndef DevProtocolH
#define DevProtocolH

#include "TypeDef.h"

namespace nsDevProtocol
{
  //-----------------------------------------------------------
  enum
  {
    Exit,
    CreateGroup,
    DisconnectUp_Client,
  };
  //-----------------------------------------------------------
  struct DllExport TBase
  {
    unsigned short type;
  };
  //-----------------------------------------------------------
  struct DllExport TExit : public TBase
  {
    TExit();
  };
  //-----------------------------------------------------------
  struct DllExport TCreateGroup : public TBase
  {
    TCreateGroup();
  };
  //-----------------------------------------------------------
  struct DllExport TDisconnectUp_Client : public TBase
  {
    TDisconnectUp_Client();
  };
  //-----------------------------------------------------------
}
#endif
