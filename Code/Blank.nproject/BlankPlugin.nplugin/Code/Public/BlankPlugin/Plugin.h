#pragma once

#include <Common/Plugin/Plugin.h>
#include <Common/Guid.h>

namespace ngine::BlankPlugin
{
	struct Plugin final : public ngine::Plugin
	{
		inline static constexpr Guid Guid = "607962e6-7515-4bfb-86d7-07c470eaea4b"_guid;

		Plugin(Application&)
		{
		}
		virtual ~Plugin() = default;

		// IPlugin
		virtual void OnLoaded(Application& application) override;
		// ~IPlugin
	};
}
