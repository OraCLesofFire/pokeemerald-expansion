Town2_Player_House_MapScripts::
	.byte 0


Town2_Player_House_EventScript_Mom::
# 4 "data/maps/Town2_Player_House/scripts.pory"
	goto_if_set FLAG_PLAYER_VISITED_MOM, Town2_Player_House_EventScript_Mom_1
# 9 "data/maps/Town2_Player_House/scripts.pory"
	msgbox Town2_Player_House_EventScript_Mom_Text_1, MSGBOX_NPC
# 10 "data/maps/Town2_Player_House/scripts.pory"
	setflag FLAG_PLAYER_VISITED_MOM
# 11 "data/maps/Town2_Player_House/scripts.pory"
	setvar VAR_TOWN2_STATE, 1
	return

Town2_Player_House_EventScript_Mom_1:
# 5 "data/maps/Town2_Player_House/scripts.pory"
	msgbox Town2_Player_House_EventScript_Mom_Text_0, MSGBOX_NPC
# 6 "data/maps/Town2_Player_House/scripts.pory"
	setrespawn HEAL_LOCATION_TOWN2_PLAYER_HOUSE_2F
	return


Town2_Player_House_EventScript_Mom_Text_0:
# 5 "data/maps/Town2_Player_House/scripts.pory"
	.string "Are you tired? How about a rest?\p"
	.string "Feel free to come back and visit\n"
	.string "anytime.$"

Town2_Player_House_EventScript_Mom_Text_1:
# 9 "data/maps/Town2_Player_House/scripts.pory"
	.string "Oh! {PLAYER}, you're home! How's school?\p"
	.string "The gym challenge?\n"
	.string "You know your grandfather was the old\l"
	.string "champion before he retired. I bet he\l"
	.string "would have some good advice./p You\l"
	.string "should go visit him, he lives right next\l"
	.string "to the gym too in Town 4 too!$"
