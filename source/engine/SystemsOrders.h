#pragma once

#include "EngineSystemsOrders.h"
#include "user_logic/UserSystemsOrders.h"

namespace Common
{
	struct SystemsOrders
	{
		using Init = decltype(Utils::combineTypesPack<Utils::TypesPack>(EngineLogic::SystemsOrders::Init::types{}, UserLogic::SystemsOrders::Init::types{}));
		using Update = decltype(Utils::combineTypesPack<Utils::TypesPack>(EngineLogic::SystemsOrders::Update::types{}, UserLogic::SystemsOrders::Update::types{}));
		using PostUpdate = decltype(Utils::combineTypesPack<Utils::TypesPack>(UserLogic::SystemsOrders::PostUpdate::types{}, EngineLogic::SystemsOrders::PostUpdate::types{}));
		using Destroy = decltype(Utils::combineTypesPack<Utils::TypesPack>(UserLogic::SystemsOrders::Destroy::types{}, EngineLogic::SystemsOrders::Destroy::types{}));
	};
}