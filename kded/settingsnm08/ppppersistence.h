// This file is generated by kconfig_compiler from ppp.kcfg.
// All changes you do to this file will be lost.
#ifndef KNM_PPPPERSISTENCE_H
#define KNM_PPPPERSISTENCE_H

#include <kdebug.h>
#include "settingpersistence.h"
#include "internals/settings/ppp.h"

namespace Knm {

class PppSetting;

class PppPersistence : public SettingPersistence
{
  public:
    PppPersistence( PppSetting * setting, KSharedConfig::Ptr config, SettingPersistence::SecretStorageMode mode = SettingPersistence::Secure);
    ~PppPersistence();
    void load();
};
}

#endif
