#ifndef POWERDESIGNERPLUGIN_H
#define POWERDESIGNERPLUGIN_H

#include "PowerDesigner_global.h"
#include <extensionsystem/iplugin.h>
#include <QStringList>
namespace PowerDesigner{

namespace Internal {

class  PowerDesignerPlugin
    :public ExtensionSystem::IPlugin{
    Q_OBJECT

    public:
        PowerDesignerPlugin();
        ~PowerDesignerPlugin();

        void extensionsInitialized();
        bool initialize(const QStringList & arguments,QString* errorString);
        void shutdown();
    };
}
}
#endif // POWERDESIGNERPLUGIN_H
