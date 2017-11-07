class Enh_DisableAI
{
	collapsed = 1;
	displayName = $STR_ENH_disableAI_headline;
	class Attributes
	{
		class Enh_Move
		{
			displayName = $STR_ENH_disableAI_move_displayName;
			tooltip = $STR_ENH_disableAI_move_tooltip;
			property = "Enh_disableAI_move";
			control = "Checkbox";
			expression = "_this disableAI 'MOVE'";
			defaultValue = "false";
			condition = "objectBrain";
		};
		class Enh_Target: Enh_Move
		{
			displayName = $STR_ENH_disableAI_target_displayName;
			tooltip = $STR_ENH_disableAI_target_tooltip;
			property = "Enh_disableAI_target";
			expression = "_this disableAI 'TARGET'";
		};
		class Enh_Cover: Enh_Move
		{
			displayName = $STR_ENH_disableAI_cover_displayName;
			tooltip = $STR_ENH_disableAI_cover_tooltip;
			property = "Enh_disableAI_cover";
			expression = "_this disableAI 'COVER'";
		};
		class Enh_Autotarget: Enh_Move
		{
			displayName = $STR_ENH_disableAI_autotarget_displayName;
			tooltip = $STR_ENH_disableAI_autotarget_tooltip;
			property = "Enh_disableAI_autotarget";
			expression = "_this disableAI 'AUTOTARGET'";
		};
		class Enh_Animation: Enh_Move
		{
			displayName = $STR_ENH_disableAI_anim_displayName;
			tooltip = $STR_ENH_disableAI_anim_tooltip;
			property = "Enh_disableAI_anim";
			expression = "_this disableAI 'ANIM'";
		};
		class Enh_FSM: Enh_Move
		{
			displayName = "FSM";
			tooltip = $STR_ENH_disableAI_FSM_tooltip;
			property = "Enh_disableAI_FSM";
			expression = "_this disableAI 'FSM'";
		};
		class Enh_AimingError: Enh_Move
		{
			displayName = $STR_ENH_disableAI_aimingError_displayName;
			tooltip =  $STR_ENH_disableAI_aimingError_tooltip;
			property = "Enh_disableAI_aimingError";
			expression = "_this disableAI 'AIMINGERROR'";
		};
		class Enh_TeamSwitch: Enh_Move
		{
			displayName = $STR_ENH_disableAI_teamSwitch_displayName;
			tooltip = $STR_ENH_disableAI_teamSwitch_tooltip;
			property = "Enh_disableAI_teamswitch";
			expression = "_this disableAI 'TEAMSWITCH'";
		};
		class Enh_Suppression: Enh_Move
		{
			displayName = $STR_ENH_disableAI_suppression_displayName;
			tooltip = $STR_ENH_disableAI_suppression_tooltip;
			property = "Enh_disableAI_suppression";
			expression = "_this disableAI 'SUPPRESSION'";
		};
		class Enh_CheckVisible: Enh_Move
		{
			displayName = $STR_ENH_disableAI_raycasts_displayName;
			tooltip = $STR_ENH_disableAI_raycasts_tooltip;
			property = "Enh_disableAI_checkVisible";
			expression = "_this disableAI 'CHECKVISIBLE'";
		};
		class Enh_Autocombat: Enh_Move
		{
			displayName = $STR_ENH_disableAI_autocombat_displayName;
			tooltip = $STR_ENH_disableAI_autocombat_tooltip;
			property = "Enh_disableAI_autocombat";
			expression = "_this disableAI 'AUTOCOMBAT'";
		};
		class Enh_Path: Enh_Move
		{
			displayName = $STR_ENH_disableAI_path_displayName;
			tooltip = $STR_ENH_disableAI_path_tooltip;
			property = "Enh_disableAI_path";
			expression = "_this disableAI 'PATH'";
		};
		class Enh_MineDetection: Enh_Move
		{
			displayName = $STR_ENH_disableAI_mineDetection_displayName;
			tooltip = "";
			property = "Enh_disableAI_mineDetection";
			expression = "_this disableAI 'MINEDETECTION'";
		};
		class Enh_WeaponAim: Enh_Move
		{
			displayName = $STR_ENH_disableAI_weaponAim_displayName;
			tooltip = "";
			property = "Enh_disableAI_weaponAim";
			expression = "_this disableAI 'WEAPONAIM'";
		};
	};
};