CedarCrossing_MapScripts::
	.byte 0


CedarCrossing_EventScript_TrailSign::
# 4 "data/maps/CedarCrossing/scripts.pory"
	msgbox CedarCrossing_EventScript_TrailSign_Text_0, MSGBOX_SIGN
	return


CedarCrossing_EventScript_MushroomHunter::
# 14 "data/maps/CedarCrossing/scripts.pory"
	msgbox CedarCrossing_EventScript_MushroomHunter_Text_0, MSGBOX_NPC
	return


CedarCrossing_EventScript_LedgeJumper::
# 18 "data/maps/CedarCrossing/scripts.pory"
	msgbox CedarCrossing_EventScript_LedgeJumper_Text_0, MSGBOX_NPC
	return


CedarCrossing_EventScript_BugCatcher::
# 22 "data/maps/CedarCrossing/scripts.pory"
	msgbox CedarCrossing_EventScript_BugCatcher_Text_0, MSGBOX_NPC
	return


CedarCrossing_EventScript_Youngster::
# 26 "data/maps/CedarCrossing/scripts.pory"
	msgbox CedarCrossing_EventScript_Youngster_Text_0, MSGBOX_NPC
	return


CedarCrossing_EventScript_TrailSign_Text_0:
# 4 "data/maps/CedarCrossing/scripts.pory"
	.string "Cedar Crossing\p\n"
	.string "{LEFT_ARROW} Town 1\l"
	.string "{RIGHT_ARROW} Town 2$"

CedarCrossing_EventScript_MushroomHunter_Text_0:
# 14 "data/maps/CedarCrossing/scripts.pory"
	.string "I'm looking for mushrooms. I heard that\n"
	.string "some of them are even hidden.$"

CedarCrossing_EventScript_LedgeJumper_Text_0:
# 18 "data/maps/CedarCrossing/scripts.pory"
	.string "Did you know you can jump ledges like\n"
	.string "this? Watch!$"

CedarCrossing_EventScript_BugCatcher_Text_0:
# 22 "data/maps/CedarCrossing/scripts.pory"
	.string "I heard that there's a bug pokémon on\n"
	.string "this route, but I can't find it.$"

CedarCrossing_EventScript_Youngster_Text_0:
# 26 "data/maps/CedarCrossing/scripts.pory"
	.string "If you keep going west, you'll end up in\n"
	.string "Town2 after crossing Cedar River.$"
