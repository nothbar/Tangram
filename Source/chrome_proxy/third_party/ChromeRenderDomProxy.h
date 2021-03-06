#pragma once

#include <string>

namespace TangramCommon {

	class CChromeWebFrameClient {
	public:
		CChromeWebFrameClient() {}

		virtual ~CChromeWebFrameClient() {}

		virtual void SendTangramMessage(std::wstring strChannel,
			std::wstring strArg1,
			std::wstring strArg2) {}

		virtual void OnTangramMessage(std::wstring strChannel,
			std::wstring strArg1,
			std::wstring strArg2) {}
	};

}  // namespace TangramCommon
