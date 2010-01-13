#include "powerdesignerplugin.h"
#include <QtPlugin>

using namespace PowerDesigner::Internal;

PowerDesignerPlugin::PowerDesignerPlugin()
{
}
PowerDesignerPlugin::~PowerDesignerPlugin()
{

}
bool PowerDesignerPlugin::initialize(const QStringList& args,QString *errorString)
{
    Q_UNUSED(args);
    Q_UNUSED(errorString);

    return true ;
}
void PowerDesignerPlugin::extensionsInitialized()
{
}

void PowerDesignerPlugin::shutdown()
{

}
Q_EXPORT_PLUGIN(PowerDesignerPlugin)
