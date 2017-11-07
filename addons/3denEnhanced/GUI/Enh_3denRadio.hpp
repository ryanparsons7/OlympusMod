class Enh_3denRadio
{
	idd = 60000;
	onLoad = "[] spawn Enh_fnc_3denRadio_onLoad";
	movingEnable = true;
	class ControlsBackground
	{
		class ButtonBackground: Enh_IGUIBack
		{
			x = 0.703437 * safezoneW + safezoneX;
			y = 0.71 * safezoneH + safezoneY;
			w = 0.164062 * safezoneW;
			h = 0.14 * safezoneH;
		};
		class SonglistBackground: Enh_IGUIBack
		{
			x = 0.1325 * safezoneW + safezoneX;
			y = 0.178 * safezoneH + safezoneY;
			w = 0.564375 * safezoneW;
			h = 0.644 * safezoneH;
		};
		class Title_Headline: Enh_RscButton
		{
			text = $STR_ENH_3denRadio_headline_title;
			x = 0.1325 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.328125 * safezoneW;
			h = 0.028 * safezoneH;
			action = "'NAME' call Enh_fnc_3denRadio_sortBy";
		};
		class Theme_Headline: Enh_RscButton
		{
			text = $STR_ENH_3denRadio_headline_theme;
			x = 0.539974 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.0981375 * safezoneW;
			h = 0.028 * safezoneH;
			action = "'THEME' call Enh_fnc_3denRadio_sortBy";
		};
		class Playlist_Headline: Enh_RscText
		{
			text = $STR_ENH_3denRadio_playlist_text;
			x = 0.703437 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.164062 * safezoneW;
			h = 0.028 * safezoneH;
   			colorBackground[] = COLOUR_USER_PRESET;
		};
		class Duration_Headline: Enh_RscButton
		{
			text = $STR_ENH_3denRadio_headline_duration;
			x = 0.460625 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.07975 * safezoneW;
			h = 0.028 * safezoneH;
			action = "'DURATION' call Enh_fnc_3denRadio_sortBy";
		};
		class Mod_Headline: Enh_RscText
		{
			text = $STR_ENH_3denRadio_headline_mod;
			x = 0.637812 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.0590625 * safezoneW;
			h = 0.028 * safezoneH;
   			colorBackground[] = COLOUR_USER_PRESET;
		};
		class SaveAndClose: Enh_RscButton
		{
			text = $STR_ENH_3denRadio_saveAndClose_text;
			x = 0.78875 * safezoneW + safezoneX;
			y = 0.724 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.028 * safezoneH;
			action = "call Enh_fnc_3denRadio_onClose";
		};
		class Export: Enh_RscButton
		{
			text = $STR_ENH_3denRadio_exportPlaylist_text;
			x = 0.71 * safezoneW + safezoneX;
			y = 0.766 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.028 * safezoneH;
			action = "'EXPORT'call Enh_fnc_3denRadio_exportPlaylist";
		};
		class Import: Enh_RscButton
		{
			text = $STR_ENH_3denRadio_importPlaylist_text;
			x = 0.78875 * safezoneW + safezoneX;
			y = 0.766 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.028 * safezoneH;
			action = "'IMPORT'call Enh_fnc_3denRadio_exportPlaylist";
		};
		class ClearPlaylist: Enh_RscButton
		{
			text = $STR_ENH_3denRadio_clearPlaylist_text;
			x = 0.71 * safezoneW + safezoneX;
			y = 0.808 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.028 * safezoneH;
			action = "lbClear ((findDisplay 60000) displayCtrl 2000); call Enh_fnc_3denRadio_updatePlaylist";
		};
		class ToggleHelp: Enh_RscButton
		{
			text = $STR_ENH_3denRadio_help_text;
			x = 0.78875 * safezoneW + safezoneX;
			y = 0.808 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.028 * safezoneH;
			action = "if (ctrlFade ((findDisplay 60000) displayCtrl 2400) < 1) then {((findDisplay 60000) displayCtrl 2400) ctrlSetFade 1; ((findDisplay 60000) displayCtrl 2400) ctrlCommit 0} else {((findDisplay 60000) displayCtrl 2400) ctrlSetFade 0; ((findDisplay 60000) displayCtrl 2400) ctrlCommit 0}";
		};
	};
	class Controls
	{
		class ToggleRadio: Enh_RscButton
		{
			idc = 2300;
			x = 0.71 * safezoneW + safezoneX;
			y = 0.724 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.028 * safezoneH;
			action = "'BUTTON' call Enh_fnc_3denRadio_toggleRadio";
		};
		class VolumeSlider: Enh_RscSlider
		{
			idc = 1900;
			x = 0.703437 * safezoneW + safezoneX;
			y = 0.668 * safezoneH + safezoneY;
			w = 0.164062 * safezoneW;
			h = 0.028 * safezoneH;
			onSliderPosChanged = "0 fadeMusic (sliderPosition (_this select 0))";
		};
		class HelpText: Enh_RscStructuredText
		{
			idc = 2400;
			text = "- Double left click on listbox entry: Play song immediately<br/>- Add a song to your playlist by pressing SPACE<br/>- Copy the class name of a song to your clipboard by pressing CTRL + C<br/>- Remove an entry from the Playlist by selecting it and pressing DELETE"; //--- ToDo: Localize;
			x = 0.1325 * safezoneW + safezoneX;
			y = 0.864 * safezoneH + safezoneY;
			w = 0.564375 * safezoneW;
			h = 0.098 * safezoneH;
			onLoad = "(_this select 0) ctrlSetFade 1;  (_this select 0) ctrlCommit 0;";
		};
		class CurrentSong: Enh_RscText
		{
			idc = 2200;
			x = 0.1325 * safezoneW + safezoneX;
			y = 0.822 * safezoneH + safezoneY;
			w = 0.564375 * safezoneW;
			h = 0.028 * safezoneH;
   			colorBackground[] = COLOUR_USER_PRESET;
		};
		class Songlist: Enh_RscListbox
		{
			idc = 1500;
			idcLeft = -1;
			idcRight = -1;
			x = 0.1325 * safezoneW + safezoneX;
			y = 0.178 * safezoneH + safezoneY;
			w = 0.564375 * safezoneW;
			h = 0.644 * safezoneH;
			type = CT_LISTNBOX;
			onLBDblClick  = "call Enh_fnc_3denRadio_playMusic";
			onKeyDown = "_this call Enh_fnc_3denRadio_addToPlaylist; _this call Enh_fnc_3denRadio_exportClassname";
		};
		class Playlist: Enh_RscListbox
		{
			idc = 2000;
			x = 0.703436 * safezoneW + safezoneX;
			y = 0.178 * safezoneH + safezoneY;
			w = 0.164062 * safezoneW;
			h = 0.476 * safezoneH;
			onLBDblClick  = "call Enh_fnc_3denRadio_playMusic";
			onKeyDown = "if ((_this select 1) == 211 ) then {(_this select 0) lbDelete (lbCurSel (_this select 0))}; call Enh_fnc_3denRadio_updatePlaylist";
		};
	};
};