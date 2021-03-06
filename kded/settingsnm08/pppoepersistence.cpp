// This file is generated by kconfig_compiler from pppoe.kcfg.
// All changes you do to this file will be lost.

#include "pppoepersistence.h"

using namespace Knm;

PppoePersistence::PppoePersistence(PppoeSetting * setting, KSharedConfig::Ptr config, SettingPersistence::SecretStorageMode mode) : SettingPersistence(setting, config, mode)
{
}

PppoePersistence::~PppoePersistence()
{
}

void PppoePersistence::load()
{
  PppoeSetting * setting = static_cast<PppoeSetting *>(m_setting);
  setting->setService(m_config->readEntry("service", ""));
  setting->setUsername(m_config->readEntry("username", ""));
  // SECRET
  if (m_storageMode == SettingPersistence::PlainText) {
    setting->setPassword(m_config->readEntry("password", ""));
  }
  setting->setPasswordflags(Setting::AgentOwned);
}
