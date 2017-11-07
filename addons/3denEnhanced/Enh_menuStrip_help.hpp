class Help
{
	items[] +=
	{
		"Enh_Help_Folder_Community",
		"Enh_Help_Folder_Wiki",
		"Enh_Help_Folder_Youtube",
		"Enh_Help_Changelog"
	};
};
class Enh_Help_Folder_Community
{
	text = $STR_ENH_HelpFolder_Community;
	picture = "\3denEnhanced\data\Enh_icon_Help.paa";
	items[] +=
	{
		"Enh_Help_3denEnhanced",
		"Enh_Help_KillZoneKid",
		"Enh_Help_Kylania",
		"Enh_Help_ScriptingBeginners",
		"Enh_Help_MissionCampaignGuide",
		"Enh_Help_FockersScriptingTutorial",
		"Enh_Help_FoxhoundInternational",
		"Enh_Help_AICompilationList"
	};
};
class Enh_Help_Folder_Wiki
{
	text = $STR_ENH_HelpFolder_Wiki;
	picture = "\3denEnhanced\data\Enh_icon_Help.paa";
	items[] +=
	{
		"Enh_Help_FunctionsList",
		"Enh_Help_Assets",
		"Enh_Help_MissionPresentation"
	};
};
class Enh_Help_Folder_Youtube
{
	text = $STR_ENH_HelpFolder_Youtube;
	picture = "\3denEnhanced\data\Enh_icon_Help.paa";
	items[] +=
	{
		"Enh_Help_Jester814",
		"Enh_Help_Armaidiot",
		"Enh_Help_Feuerex"
	};
};
//Community
class Enh_Help_3denEnhanced
{
	text = $STR_ENH_Help3denEnhanced;
	picture = "\a3\3DEN\Data\Controls\ctrlMenu\link_ca.paa";
	weblink = "https://forums.bistudio.com/topic/188312-3den-enhanced/";
};
class Enh_Help_Changelog
{
	text = $STR_ENH_changelog_header;
	action = "(findDisplay 313) createDisplay 'Enh_Changelog'";
};
class Enh_Help_KillZoneKid: Enh_Help_3denEnhanced
{
	text = $STR_ENH_HelpKKBlog;
	weblink = "http://killzonekid.com/";
};
class Enh_Help_Kylania: Enh_Help_3denEnhanced
{
	text = $STR_ENH_HelpKylania;
	weblink = "http://www.kylania.com/ex/";
};
class Enh_Help_ScriptingBeginners: Enh_Help_3denEnhanced
{
	text = $STR_ENH_HelpScriptingBeginners;
	weblink = "https://forums.bistudio.com/topic/183993-scripting-introduction-for-new-scripters/";
};
class Enh_Help_MissionCampaignGuide: Enh_Help_3denEnhanced
{
	text = $STR_ENH_HelpMissionCampaignGuide;
	weblink = "https://forums.bistudio.com/topic/190820-thegens-guide-to-mission-campaign-making/";
};
class Enh_Help_FockersScriptingTutorial: Enh_Help_3denEnhanced
{
	text = $STR_ENH_HelpFockersScriptingTutorial;
	weblink = "http://www.armaholic.com/page.php?id=20465";
};
class Enh_Help_AICompilationList: Enh_Help_3denEnhanced
{
	text = $STR_ENH_HelpAICompilation;
	weblink = "https://forums.bistudio.com/topic/165560-ai-compilation-list-of-addonsmodsscripts-misc/";
};
class Enh_Help_FoxhoundInternational: Enh_Help_3denEnhanced
{
	text = $STR_ENH_HelpScriptingFoxhoundInternational;
	weblink = "http://foxhound.international/development.html";
};
//Wiki
class Enh_Help_FunctionsList: Enh_Help_3denEnhanced
{
	text = $STR_ENH_HelpFunctionsOverview;
	weblink = "https://community.bistudio.com/wiki/Category:Arma_3:_Functions";
};
class Enh_Help_Assets: Enh_Help_3denEnhanced
{
	text = $STR_ENH_HelpAssets;
	weblink = "https://community.bistudio.com/wiki/Arma_3_Assets";
};
class Enh_Help_MissionPresentation: Enh_Help_3denEnhanced
{
	text = $STR_ENH_HelpMissionPresentation;
	weblink = "https://community.bistudio.com/wiki/Mission_Presentation";
};
//Youtube
class Enh_Help_Jester814: Enh_Help_3denEnhanced
{
	text = $STR_ENH_HelpJester814;
	weblink = "https://www.youtube.com/user/Jester814";
};
class Enh_Help_Armaidiot: Enh_Help_3denEnhanced
{
	text = $STR_ENH_HelpArmaidiot;
	weblink = "https://www.youtube.com/user/Armaidiot";
};
class Enh_Help_Feuerex: Enh_Help_3denEnhanced
{
	text = $STR_ENH_HelpFeuerex;
	weblink = "https://www.youtube.com/user/Feuerex";
};


