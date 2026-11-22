Town2_MapScripts::
	.byte 0


Town2_EventScript_TrailSign::
# 8 "data/maps/Town2/scripts.pory"
	msgbox Town2_EventScript_TrailSign_Text_0, MSGBOX_SIGN
	return


Town2_EventScript_TownSign::
# 14 "data/maps/Town2/scripts.pory"
	msgbox Town2_EventScript_TownSign_Text_0, MSGBOX_SIGN
	return


Town2_EventScript_PlayersHouseSign::
# 18 "data/maps/Town2/scripts.pory"
	msgbox Town2_EventScript_PlayersHouseSign_Text_0, MSGBOX_SIGN
	return


Town2_EventScript_GardenSign::
# 22 "data/maps/Town2/scripts.pory"
	msgbox Town2_EventScript_GardenSign_Text_0, MSGBOX_SIGN
	return


Town2_EventScript_AromaLady_Trigger::
# 30 "data/maps/Town2/scripts.pory"
	lockall
# 31 "data/maps/Town2/scripts.pory"
	playse SE_PIN
# 32 "data/maps/Town2/scripts.pory"
	applymovement LOCALID_TOWN2_AROMALADY, Common_Movement_ExclamationMark
# 33 "data/maps/Town2/scripts.pory"
	waitmovement 0
# 34 "data/maps/Town2/scripts.pory"
	applymovement LOCALID_TOWN2_AROMALADY, Town2_EventScript_AromaLady_Trigger_Movement_0
# 35 "data/maps/Town2/scripts.pory"
	waitmovement 0
# 36 "data/maps/Town2/scripts.pory"
	msgbox Town2_EventScript_AromaLady_Trigger_Text_0, MSGBOX_DEFAULT
# 37 "data/maps/Town2/scripts.pory"
	setvar VAR_TEMP_1, 1
# 38 "data/maps/Town2/scripts.pory"
	releaseall
	return


Town2_EventScript_AromaLady::
# 42 "data/maps/Town2/scripts.pory"
	msgbox Town2_EventScript_AromaLady_Text_0, MSGBOX_NPC
	return


Town2_EventScript_Hiker::
# 46 "data/maps/Town2/scripts.pory"
	msgbox Town2_EventScript_Hiker_Text_0, MSGBOX_NPC
	return


Town2_EventScript_Boy::
# 50 "data/maps/Town2/scripts.pory"
	msgbox Town2_EventScript_Boy_Text_0, MSGBOX_NPC
	return


Town2_EventScript_FatMan::
# 54 "data/maps/Town2/scripts.pory"
	msgbox Town2_EventScript_FatMan_Text_0, MSGBOX_NPC
	return


Town2_EventScript_VisitMomTrigger_1::
# 58 "data/maps/Town2/scripts.pory"
	lockall
# 59 "data/maps/Town2/scripts.pory"
	applymovement LOCALID_PLAYER, Town2_VisitMom_Movement_Step_Back
# 60 "data/maps/Town2/scripts.pory"
	waitmovement 0
# 61 "data/maps/Town2/scripts.pory"
	applymovement LOCALID_TOWN2_RANGER, Town2_EventScript_VisitMomTrigger_1_Movement_0
# 64 "data/maps/Town2/scripts.pory"
	waitmovement 0
# 65 "data/maps/Town2/scripts.pory"
	call Town2_EventScript_Ranger_VisitMomTrigger
# 66 "data/maps/Town2/scripts.pory"
	applymovement LOCALID_TOWN2_RANGER, Town2_EventScript_VisitMomTrigger_1_Movement_1
# 70 "data/maps/Town2/scripts.pory"
	waitmovement 0
# 71 "data/maps/Town2/scripts.pory"
	releaseall
	return


Town2_EventScript_VisitMomTrigger_2::
# 75 "data/maps/Town2/scripts.pory"
	lockall
# 76 "data/maps/Town2/scripts.pory"
	applymovement LOCALID_TOWN2_RANGER, Town2_EventScript_VisitMomTrigger_2_Movement_0
# 77 "data/maps/Town2/scripts.pory"
	waitmovement 0
# 78 "data/maps/Town2/scripts.pory"
	applymovement LOCALID_PLAYER, Town2_VisitMom_Movement_Step_Back
# 79 "data/maps/Town2/scripts.pory"
	waitmovement 0
# 80 "data/maps/Town2/scripts.pory"
	applymovement LOCALID_TOWN2_RANGER, Town2_EventScript_VisitMomTrigger_1_Movement_0
# 83 "data/maps/Town2/scripts.pory"
	waitmovement 0
# 84 "data/maps/Town2/scripts.pory"
	call Town2_EventScript_Ranger_VisitMomTrigger
# 85 "data/maps/Town2/scripts.pory"
	applymovement LOCALID_TOWN2_RANGER, Town2_EventScript_VisitMomTrigger_2_Movement_1
# 89 "data/maps/Town2/scripts.pory"
	waitmovement 0
# 90 "data/maps/Town2/scripts.pory"
	releaseall
	return


# 93 "data/maps/Town2/scripts.pory"
Town2_VisitMom_Movement_Step_Back:
# 94 "data/maps/Town2/scripts.pory"
	walk_down
# 95 "data/maps/Town2/scripts.pory"
	face_up
	step_end

Town2_EventScript_Ranger_VisitMomTrigger::
# 99 "data/maps/Town2/scripts.pory"
	msgbox Town2_EventScript_Ranger_VisitMomTrigger_Text_0, MSGBOX_DEFAULT
	return


Town2_EventScript_Ranger::
# 103 "data/maps/Town2/scripts.pory"
	goto_if_set FLAG_PLAYER_VISITED_MOM, Town2_EventScript_Ranger_1
# 107 "data/maps/Town2/scripts.pory"
	msgbox Town2_EventScript_Ranger_VisitMomTrigger_Text_0, MSGBOX_NPC
	return

Town2_EventScript_Ranger_1:
# 104 "data/maps/Town2/scripts.pory"
	msgbox Town2_EventScript_Ranger_Text_0, MSGBOX_NPC
	return


# 34 "data/maps/Town2/scripts.pory"
Town2_EventScript_AromaLady_Trigger_Movement_0:
# 34 "data/maps/Town2/scripts.pory"
	face_player
	step_end

# 61 "data/maps/Town2/scripts.pory"
Town2_EventScript_VisitMomTrigger_1_Movement_0:
# 62 "data/maps/Town2/scripts.pory"
	walk_right
# 63 "data/maps/Town2/scripts.pory"
	face_down
	step_end

# 66 "data/maps/Town2/scripts.pory"
Town2_EventScript_VisitMomTrigger_1_Movement_1:
# 67 "data/maps/Town2/scripts.pory"
	walk_left
# 68 "data/maps/Town2/scripts.pory"
	face_down
	step_end

# 76 "data/maps/Town2/scripts.pory"
Town2_EventScript_VisitMomTrigger_2_Movement_0:
# 76 "data/maps/Town2/scripts.pory"
	walk_right
	step_end

# 85 "data/maps/Town2/scripts.pory"
Town2_EventScript_VisitMomTrigger_2_Movement_1:
# 86 "data/maps/Town2/scripts.pory"
	walk_left
# 87 "data/maps/Town2/scripts.pory"
	walk_left
# 88 "data/maps/Town2/scripts.pory"
	face_down
	step_end

Town2_EventScript_TrailSign_Text_0:
# 8 "data/maps/Town2/scripts.pory"
	.string "Town 2\p\n"
	.string "{UP_ARROW} Cedar Forest\l"
	.string "{DOWN_ARROW} Cedar Crossing$"

Town2_EventScript_TownSign_Text_0:
# 14 "data/maps/Town2/scripts.pory"
	.string "Town 2: Where journeys begin!$"

Town2_EventScript_PlayersHouseSign_Text_0:
# 18 "data/maps/Town2/scripts.pory"
	.string "{PLAYER}'s house.$"

Town2_EventScript_GardenSign_Text_0:
# 22 "data/maps/Town2/scripts.pory"
	.string "The flowers are here for everyone to\n"
	.string "enjoy!$"

Town2_EventScript_AromaLady_Trigger_Text_0:
# 36 "data/maps/Town2/scripts.pory"
	.string "Please don't step on the flowers.$"

Town2_EventScript_AromaLady_Text_0:
# 42 "data/maps/Town2/scripts.pory"
	.string "Please be careful around the flowers$"

Town2_EventScript_Hiker_Text_0:
# 46 "data/maps/Town2/scripts.pory"
	.string "The whole river has to go past that\n"
	.string "rock over there. I bet some super rare\l"
	.string "item is stuck there!$"

Town2_EventScript_Boy_Text_0:
# 50 "data/maps/Town2/scripts.pory"
	.string "I love playing in the creek. I can find\n"
	.string "all kinds of different pokémon here!$"

Town2_EventScript_FatMan_Text_0:
# 54 "data/maps/Town2/scripts.pory"
	.string "There's nothing like taking a walk in\n"
	.string "the fresh air.$"

Town2_EventScript_Ranger_VisitMomTrigger_Text_0:
# 99 "data/maps/Town2/scripts.pory"
	.string "Aren't you {PLAYER}? You should visit\n"
	.string "your mom before heading out on a\l"
	.string "journey.$"

Town2_EventScript_Ranger_Text_0:
# 104 "data/maps/Town2/scripts.pory"
	.string "Make sure you stay on the path.$"
