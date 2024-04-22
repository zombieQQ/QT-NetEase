#pragma once
#include <QtCore/qglobal.h>

#ifdef FOLLOWWITH_LIB
# define FOLLOWWITH_EXPORT Q_DECL_EXPORT
#else
# define FOLLOWWITH_EXPORT Q_DECL_IMPORT
#endif

#include <QObject>
#include <iostream>
#include <memory>

#include "public/IModuleLinker.h"

#define AbstractInterface_lid "com.Plugin.AbstractPlugin"

class AbstractPlugin
{
public:
	virtual ~AbstractPlugin() = default;

	// ע�����
	virtual void InitPlugin(ModuleLinkerSPtr _context_ptr) = 0;

	// ��ȡ����
	virtual void StartPlugin() = 0;
};

Q_DECLARE_INTERFACE(AbstractPlugin, AbstractInterface_lid);

extern	ModuleLinkerSPtr				global_module_linker_;