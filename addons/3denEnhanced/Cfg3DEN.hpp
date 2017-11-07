class Cfg3DEN
{
	#include "notifications.hpp"

	class EventHandlers
	{
		class ENH
		{
			onTerrainNew = "['init'] call BIS_fnc_3DENStatusBar; 'ONLOAD' call Enh_fnc_3denRadio_toggleRadio; [] spawn Enh_fnc_sessionTimer; [false] call Enh_fnc_showFPS";
			onMissionPreviewEnd = "'ONLOAD' call Enh_fnc_3denRadio_toggleRadio; [] spawn Enh_fnc_sessionTimer; [false] call Enh_fnc_showFPS";
		};
	};
	class Attributes
	{
		// Base class templates
		class Default;
		class Title: Default
		{
			class Controls
			{
				class Title;
			};
		};
		//Combo
		#include "controls\speedMode.hpp"
		#include "controls\terrainGrid.hpp"
		#include "controls\featureType.hpp"
		//Slider
		#include "controls\timeMultiplier.hpp"
		//Misc
		#include "controls\ambientAnimation.hpp"
		#include "controls\introText.hpp"
		#include "controls\establishingShot.hpp"
	};
	class Mission
	{
		class Intel
		{
			class AttributeCategories
			{
				#include "missionAttributes\timeMultiplier.hpp"
				#include "missionAttributes\visualSettings.hpp"
			};
		};
		class Scenario
		{
			class AttributeCategories
			{
				#include "missionAttributes\volume.hpp"
				#include "missionAttributes\introText.hpp"
				#include "missionAttributes\ambientFlyby.hpp"
				#include "missionAttributes\establishingShot.hpp"
				class Misc
				{
					class Attributes
					{
						#include "missionAttributes\addObjectsToZeus.hpp"
					};
				};
				class States
				{
					class Attributes
					{
						#include "missionAttributes\disableTeamSwitch.hpp"
					};
				};
			};
		};
		class Multiplayer
		{
			class AttributeCategories
			{
				#include "missionAttributes\dynamicGroups.hpp"
				class Respawn
				{
					class Attributes
					{
						#include "missionAttributes\respawnTickets.hpp"
						#include "missionAttributes\saveLoadout.hpp"
					};
				};
			};
		};
	};
	class Group
	{
		class AttributeCategories
		{
			class State
			{
				class Attributes
				{
					#include "groupAttributes\taskPatrol.hpp"
				};
			};
		};
	};
	class Object
	{
		class AttributeCategories
		{
			#include "objectAttributes\advancedDamageUnit.hpp"
			#include "objectAttributes\advancedDamageVehicle.hpp"
			#include "objectAttributes\disableAI.hpp"
			#include "objectAttributes\advancedSkill.hpp"
			#include "objectAttributes\unitTraits.hpp"
			#include "objectAttributes\onEventCode.hpp"
			class StateSpecial
			{
				class Attributes
				{
					#include "objectAttributes\setCaptive.hpp"
					#include "objectAttributes\allowSprint.hpp"
					#include "objectAttributes\forceWalk.hpp"
					#include "objectAttributes\makeHostage.hpp"
					#include "objectAttributes\enableHeadlights.hpp"
					#include "objectAttributes\allowCrewInImmobile.hpp"
					#include "objectAttributes\engineOn.hpp"
					#include "objectAttributes\disableNVGE.hpp"
					#include "objectAttributes\disableTIE.hpp"
					#include "objectAttributes\limitSpeed.hpp"
					#include "objectAttributes\doStop.hpp"
				};
			};
			class Inventory
			{
				class Attributes
				{
					#include "objectAttributes\addGunLight.hpp"
					#include "objectAttributes\arsenal.hpp"
				};
			};
			class State
			{
				class Attributes
				{
					#include "objectAttributes\allowFleeing.hpp"
					#include "objectAttributes\setMass.hpp"
					#include "objectAttributes\weaponSway.hpp"
					#include "objectAttributes\weaponRecoil.hpp"
					#include "objectAttributes\featureType.hpp"
					#include "objectAttributes\forceFlag.hpp"
					#include "objectAttributes\ambientAnimationSP.hpp"
				};
			};
		};
	};
};
