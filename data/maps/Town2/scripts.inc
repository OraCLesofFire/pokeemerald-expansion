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


Town2_EventScript_AromaLady::
# 30 "data/maps/Town2/scripts.pory"
	msgbox Town2_EventScript_AromaLady_Text_0, MSGBOX_NPC
	return


Town2_EventScript_Hiker::
# 34 "data/maps/Town2/scripts.pory"
	msgbox Town2_EventScript_Hiker_Text_0, MSGBOX_NPC
	return


Town2_EventScript_Boy::
# 38 "data/maps/Town2/scripts.pory"
	msgbox Town2_EventScript_Boy_Text_0, MSGBOX_NPC
	return


Town2_EventScript_FatMan::
# 42 "data/maps/Town2/scripts.pory"
	msgbox Town2_EventScript_FatMan_Text_0, MSGBOX_NPC
	return


Town2_EventScript_VisitMomTrigger_1::
# 46 "data/maps/Town2/scripts.pory"
	lockall
# 47 "data/maps/Town2/scripts.pory"
	applymovement LOCALID_PLAYER, Town2_VisitMom_Movement_Step_Back
# 48 "data/maps/Town2/scripts.pory"
	waitmovement 0
# 49 "data/maps/Town2/scripts.pory"
	applymovement LOCALID_TOWN2_RANGER, Town2_EventScript_VisitMomTrigger_1_Movement_0
# 52 "data/maps/Town2/scripts.pory"
	waitmovement 0
# 53 "data/maps/Town2/scripts.pory"
	call Town2_EventScript_Ranger_VisitMomTrigger
# 54 "data/maps/Town2/scripts.pory"
	applymovement LOCALID_TOWN2_RANGER, Town2_EventScript_VisitMomTrigger_1_Movement_1
# 58 "data/maps/Town2/scripts.pory"
	waitmovement 0
# 59 "data/maps/Town2/scripts.pory"
	releaseall
	return


Town2_EventScript_VisitMomTrigger_2::
# 63 "data/maps/Town2/scripts.pory"
	lockall
# 64 "data/maps/Town2/scripts.pory"
	applymovement LOCALID_TOWN2_RANGER, Town2_EventScript_VisitMomTrigger_2_Movement_0
# 65 "data/maps/Town2/scripts.pory"
	waitmovement 0
# 66 "data/maps/Town2/scripts.pory"
	applymovement LOCALID_PLAYER, Town2_VisitMom_Movement_Step_Back
# 67 "data/maps/Town2/scripts.pory"
	waitmovement 0
# 68 "data/maps/Town2/scripts.pory"
	applymovement LOCALID_TOWN2_RANGER, Town2_EventScript_VisitMomTrigger_1_Movement_0
# 71 "data/maps/Town2/scripts.pory"
	waitmovement 0
# 72 "data/maps/Town2/scripts.pory"
	call Town2_EventScript_Ranger_VisitMomTrigger
# 73 "data/maps/Town2/scripts.pory"
	applymovement LOCALID_TOWN2_RANGER, Town2_EventScript_VisitMomTrigger_2_Movement_1
# 77 "data/maps/Town2/scripts.pory"
	waitmovement 0
# 78 "data/maps/Town2/scripts.pory"
	releaseall
	return


# 81 "data/maps/Town2/scripts.pory"
Town2_VisitMom_Movement_Step_Back:
# 82 "data/maps/Town2/scripts.pory"
	walk_down
# 83 "data/maps/Town2/scripts.pory"
	face_up
	step_end

Town2_EventScript_Ranger_VisitMomTrigger::
# 87 "data/maps/Town2/scripts.pory"
	msgbox Town2_EventScript_Ranger_VisitMomTrigger_Text_0, MSGBOX_DEFAULT
	return


Town2_EventScript_Ranger::
# 91 "data/maps/Town2/scripts.pory"
	goto_if_set FLAG_PLAYER_VISITED_MOM, Town2_EventScript_Ranger_1
# 95 "data/maps/Town2/scripts.pory"
	msgbox Town2_EventScript_Ranger_VisitMomTrigger_Text_0, MSGBOX_NPC
	return

Town2_EventScript_Ranger_1:
# 92 "data/maps/Town2/scripts.pory"
	msgbox Town2_EventScript_Ranger_Text_0, MSGBOX_NPC
	return


# 49 "data/maps/Town2/scripts.pory"
Town2_EventScript_VisitMomTrigger_1_Movement_0:
# 50 "data/maps/Town2/scripts.pory"
	walk_right
# 51 "data/maps/Town2/scripts.pory"
	face_down
	step_end

# 54 "data/maps/Town2/scripts.pory"
Town2_EventScript_VisitMomTrigger_1_Movement_1:
# 55 "data/maps/Town2/scripts.pory"
	walk_left
# 56 "data/maps/Town2/scripts.pory"
	face_down
	step_end

# 64 "data/maps/Town2/scripts.pory"
Town2_EventScript_VisitMomTrigger_2_Movement_0:
# 64 "data/maps/Town2/scripts.pory"
	walk_right
	step_end

# 73 "data/maps/Town2/scripts.pory"
Town2_EventScript_VisitMomTrigger_2_Movement_1:
# 74 "data/maps/Town2/scripts.pory"
	walk_left
# 75 "data/maps/Town2/scripts.pory"
	walk_left
# 76 "data/maps/Town2/scripts.pory"
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
	.string "Please be careful with the flowers.\n"
	.string "They are for all to enjoy!$"

Town2_EventScript_AromaLady_Text_0:
# 30 "data/maps/Town2/scripts.pory"
	.string "Please be careful around the flowers$"

Town2_EventScript_Hiker_Text_0:
# 34 "data/maps/Town2/scripts.pory"
	.string "The whole river has to go past that\n"
	.string "rock over there. I bet some super rare\l"
	.string "item is stuck there!$"

Town2_EventScript_Boy_Text_0:
# 38 "data/maps/Town2/scripts.pory"
	.string "I love playing in the creek. I can find\n"
	.string "all kinds of different pokémon here!$"

Town2_EventScript_FatMan_Text_0:
# 42 "data/maps/Town2/scripts.pory"
	.string "There's nothing like taking a walk in\n"
	.string "the fresh air.$"

Town2_EventScript_Ranger_VisitMomTrigger_Text_0:
# 87 "data/maps/Town2/scripts.pory"
	.string "Aren't you {PLAYER}? You should visit\n"
	.string "your mom before heading out on a\l"
	.string "journey.$"

Town2_EventScript_Ranger_Text_0:
# 92 "data/maps/Town2/scripts.pory"
	.string "Make sure you stay on the path.$"
