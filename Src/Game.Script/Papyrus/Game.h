#pragma once

#include <Wrapper/Skyrim/References.h>

namespace Skyrim
{
	namespace Script
	{
		namespace Papyrus
		{
			public ref class Game
			{
			public:

				static Script::Actor^ GetPlayer();
				static Script::TESForm^ GetFormById(System::UInt32 aiFormID);
				static void EnablePlayerControls(bool abMovement, bool abFighting, bool abCamSwitch, bool abLooking, bool abSneaking, bool abMenu, bool abActivate, bool abJournalTabs, System::UInt32 aiDisablePOVType);
				static void SetInChargen(bool abDisableSaving, bool abDisableWaiting, bool abShowControlsDisabledMessage);
				static void DisablePlayerControls(bool abMovement, bool abFighting, bool abCamSwitch, bool abLooking, bool abSneaking, bool abMenu, bool abActivate, bool abJournalTabs, System::UInt32 aiDisablePOVType);
			};
		}
	}
}