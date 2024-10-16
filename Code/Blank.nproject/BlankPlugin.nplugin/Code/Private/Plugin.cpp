#include "Plugin.h"

namespace ngine::BlankPlugin
{
	void Plugin::OnLoaded(Application& application)
	{
		Engine& engine = static_cast<Engine&>(application);
		UNUSED(engine);
	}
}

#if PLUGINS_IN_EXECUTABLE
[[maybe_unused]] static bool entryPoint = ngine::Plugin::Register<ngine::BlankPlugin::Plugin>();
#else
extern "C" APPCORE_EXPORT_API ngine::Plugin* InitializePlugin(ngine::Application& application)
{
	return new ngine::BlankPlugin::Plugin(application);
}
#endif
