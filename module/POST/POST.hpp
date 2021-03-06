/*
** EPITECH PROJECT, 2020
** CPP_zia_2019
** File description:
** POST
*/

#pragma once

#include <openZia/IModule.hpp>
#include <openZia/Pipeline.hpp>

namespace Zia {
	namespace Module {
		class POST : public oZ::IModule {
		public:
			POST() = default;
			virtual ~POST() = default;

		public:
			virtual const char *getName(void) const;
			virtual void onRegisterCallbacks(oZ::Pipeline &pipeline);

		private:
			bool onInterpret(oZ::Context &context);
		};
	};
};