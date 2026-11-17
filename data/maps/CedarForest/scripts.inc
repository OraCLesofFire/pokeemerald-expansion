CedarForest_MapScripts::
	.byte 0


CedarForest_EventScript_TrailSign::
# 8 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_TrailSign_Text_0, MSGBOX_SIGN
	return


CedarForest_EventScript_RiverSign::
# 14 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_RiverSign_Text_0, MSGBOX_SIGN
	return


CedarForest_EventScript_ParkSign::
# 20 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_ParkSign_Text_0, MSGBOX_SIGN
	return


CedarForest_EventScript_TallGrassRanger::
# 28 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_TallGrassRanger_Text_0, MSGBOX_NPC
	return


CedarForest_EventScript_Chaser::
# 31 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Chaser_Text_0, MSGBOX_NPC
	return


CedarForest_EventScript_Chasee::
# 35 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Chasee_Text_0, MSGBOX_NPC
	return


CedarForest_EventScript_BugCatcher::
# 43 "data/maps/CedarForest/scripts.pory"
	trainerbattle_single TRAINER_CEDAR_BUGCATCHER, CedarForest_EventScript_BugCatcher_Text_0, CedarForest_EventScript_BugCatcher_Text_1
# 46 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_BugCatcher_Text_2, MSGBOX_AUTOCLOSE
	return


CedarForest_EventScript_Picnicker::
# 50 "data/maps/CedarForest/scripts.pory"
	trainerbattle_single TRAINER_CEDAR_PICNICKER, CedarForest_EventScript_Picnicker_Text_0, CedarForest_EventScript_Picnicker_Text_1
# 53 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Picnicker_Text_2, MSGBOX_AUTOCLOSE
	return


CedarForest_EventScript_Twins_1::
# 57 "data/maps/CedarForest/scripts.pory"
	trainerbattle_double TRAINER_CEDAR_TWINS, CedarForest_EventScript_Twins_1_Text_0, CedarForest_EventScript_Twins_1_Text_1, CedarForest_EventScript_Twins_1_Text_2
# 61 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Twins_1_Text_3, MSGBOX_AUTOCLOSE
	return


CedarForest_EventScript_Twins_2::
# 65 "data/maps/CedarForest/scripts.pory"
	trainerbattle_double TRAINER_CEDAR_TWINS, CedarForest_EventScript_Twins_2_Text_0, CedarForest_EventScript_Twins_2_Text_1, CedarForest_EventScript_Twins_1_Text_2
# 69 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Twins_2_Text_2, MSGBOX_AUTOCLOSE
	return


CedarForest_EventScript_Ranger::
# 73 "data/maps/CedarForest/scripts.pory"
	trainerbattle_single TRAINER_CEDAR_RANGER, CedarForest_EventScript_Ranger_Text_0, CedarForest_EventScript_Ranger_Text_1
# 76 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Ranger_Text_2, MSGBOX_AUTOCLOSE
	return


CedarForest_EventScript_RivalTrigger_1::
# 84 "data/maps/CedarForest/scripts.pory"
	lockall
# 85 "data/maps/CedarForest/scripts.pory"
	playse SE_PIN
# 86 "data/maps/CedarForest/scripts.pory"
	applymovement LOCALID_CEDAR_RIVAL, Common_Movement_ExclamationMark
# 87 "data/maps/CedarForest/scripts.pory"
	waitmovement 0
# 88 "data/maps/CedarForest/scripts.pory"
	applymovement LOCALID_CEDAR_RIVAL, CedarForest_Movement_RivalApproach_1
# 89 "data/maps/CedarForest/scripts.pory"
	waitmovement 0
# 90 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_RivalTrigger_1_Text_0
# 91 "data/maps/CedarForest/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CEDAR_FOREST_CHIKORITA, CedarForest_Text_RivalDefeat
# 100 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_RivalTrigger_1_Text_1
# 101 "data/maps/CedarForest/scripts.pory"
	closemessage
# 102 "data/maps/CedarForest/scripts.pory"
	applymovement LOCALID_CEDAR_RIVAL, CedarForest_EventScript_RivalTrigger_1_Movement_0
# 103 "data/maps/CedarForest/scripts.pory"
	waitmovement 0
# 104 "data/maps/CedarForest/scripts.pory"
	removeobject LOCALID_CEDAR_RIVAL
# 105 "data/maps/CedarForest/scripts.pory"
	setflag FLAG_HIDE_CEDAR_FOREST_RIVAL
# 106 "data/maps/CedarForest/scripts.pory"
	setvar VAR_CEDAR_FOREST_STATE, 1
# 107 "data/maps/CedarForest/scripts.pory"
	releaseall
	return


CedarForest_EventScript_RivalTrigger_2::
# 111 "data/maps/CedarForest/scripts.pory"
	lockall
# 112 "data/maps/CedarForest/scripts.pory"
	playse SE_PIN
# 113 "data/maps/CedarForest/scripts.pory"
	applymovement LOCALID_CEDAR_RIVAL, Common_Movement_ExclamationMark
# 114 "data/maps/CedarForest/scripts.pory"
	waitmovement 0
# 115 "data/maps/CedarForest/scripts.pory"
	applymovement LOCALID_CEDAR_RIVAL, CedarForest_Movement_RivalApproach_2
# 116 "data/maps/CedarForest/scripts.pory"
	waitmovement 0
# 117 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_RivalTrigger_1_Text_0
# 118 "data/maps/CedarForest/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CEDAR_FOREST_CHIKORITA, CedarForest_Text_RivalDefeat
# 127 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_RivalTrigger_1_Text_1
# 128 "data/maps/CedarForest/scripts.pory"
	closemessage
# 129 "data/maps/CedarForest/scripts.pory"
	applymovement LOCALID_CEDAR_RIVAL, CedarForest_EventScript_RivalTrigger_1_Movement_0
# 130 "data/maps/CedarForest/scripts.pory"
	waitmovement 0
# 131 "data/maps/CedarForest/scripts.pory"
	removeobject LOCALID_CEDAR_RIVAL
# 132 "data/maps/CedarForest/scripts.pory"
	setflag FLAG_HIDE_CEDAR_FOREST_RIVAL
# 133 "data/maps/CedarForest/scripts.pory"
	setvar VAR_CEDAR_FOREST_STATE, 1
# 134 "data/maps/CedarForest/scripts.pory"
	releaseall
	return


# 141 "data/maps/CedarForest/scripts.pory"
CedarForest_Movement_RivalApproach_1:
# 142 "data/maps/CedarForest/scripts.pory"
	face_player
	step_end

# 145 "data/maps/CedarForest/scripts.pory"
CedarForest_Movement_RivalApproach_2:
# 146 "data/maps/CedarForest/scripts.pory"
	walk_right
# 147 "data/maps/CedarForest/scripts.pory"
	face_player
	step_end

# 102 "data/maps/CedarForest/scripts.pory"
CedarForest_EventScript_RivalTrigger_1_Movement_0:
# 102 "data/maps/CedarForest/scripts.pory"
	walk_fast_up
# 102 "data/maps/CedarForest/scripts.pory"
	walk_fast_up
# 102 "data/maps/CedarForest/scripts.pory"
	walk_fast_up
# 102 "data/maps/CedarForest/scripts.pory"
	walk_fast_up
# 102 "data/maps/CedarForest/scripts.pory"
	walk_fast_up
# 102 "data/maps/CedarForest/scripts.pory"
	walk_fast_up
	step_end

CedarForest_EventScript_TrailSign_Text_0:
# 8 "data/maps/CedarForest/scripts.pory"
	.string "Cedar Trail\p\n"
	.string "{UP_ARROW} Cedar Rapids\l"
	.string "{DOWN_ARROW} Unnamed town$"

CedarForest_EventScript_RiverSign_Text_0:
# 14 "data/maps/CedarForest/scripts.pory"
	.string "Cedar River\n"
	.string "“Bringing life to the fields and forests!”$"

CedarForest_EventScript_ParkSign_Text_0:
# 20 "data/maps/CedarForest/scripts.pory"
	.string "Cedar Park$"

CedarForest_EventScript_TallGrassRanger_Text_0:
# 28 "data/maps/CedarForest/scripts.pory"
	.string "Be careful in the tall grass.\p"
	.string "In the tall grass multiple pokémon can\n"
	.string "attack at the same time!$"

CedarForest_EventScript_Chaser_Text_0:
# 31 "data/maps/CedarForest/scripts.pory"
	.string "I'm gonna get you!$"

CedarForest_EventScript_Chasee_Text_0:
# 35 "data/maps/CedarForest/scripts.pory"
	.string "You'll never catch me!$"

CedarForest_EventScript_BugCatcher_Text_0:
# 44 "data/maps/CedarForest/scripts.pory"
	.string "Check out all the neat bug pokémon I've\n"
	.string "caught!$"

CedarForest_EventScript_BugCatcher_Text_1:
# 45 "data/maps/CedarForest/scripts.pory"
	.string "Aren't all my bug pokémon neat!$"

CedarForest_EventScript_BugCatcher_Text_2:
# 46 "data/maps/CedarForest/scripts.pory"
	.string "Did you know bug Pokémon evolve super\n"
	.string "fast?$"

CedarForest_EventScript_Picnicker_Text_0:
# 51 "data/maps/CedarForest/scripts.pory"
	.string "The forest is so beautiful this time of\n"
	.string "year.$"

CedarForest_EventScript_Picnicker_Text_1:
# 52 "data/maps/CedarForest/scripts.pory"
	.string "This forest is a lot less beautiful\n"
	.string "without my pokémon.$"

CedarForest_EventScript_Picnicker_Text_2:
# 53 "data/maps/CedarForest/scripts.pory"
	.string "I just love the way the river winds\n"
	.string "through the forest!$"

CedarForest_EventScript_Twins_1_Text_0:
# 58 "data/maps/CedarForest/scripts.pory"
	.string "I love the slide the best!$"

CedarForest_EventScript_Twins_1_Text_1:
# 59 "data/maps/CedarForest/scripts.pory"
	.string "It's my fault we lost.$"

CedarForest_EventScript_Twins_1_Text_2:
# 60 "data/maps/CedarForest/scripts.pory"
	.string "You need at least two Pokémon to\n"
	.string "battle us!$"

CedarForest_EventScript_Twins_1_Text_3:
# 61 "data/maps/CedarForest/scripts.pory"
	.string "I wish I didn't let my sis down.$"

CedarForest_EventScript_Twins_2_Text_0:
# 66 "data/maps/CedarForest/scripts.pory"
	.string "The sandbox is my favorite!$"

CedarForest_EventScript_Twins_2_Text_1:
# 67 "data/maps/CedarForest/scripts.pory"
	.string "We would have won if my sister was\n"
	.string "better.$"

CedarForest_EventScript_Twins_2_Text_2:
# 69 "data/maps/CedarForest/scripts.pory"
	.string "I still love my sis even if she isn't very\n"
	.string "good at battles.$"

CedarForest_EventScript_Ranger_Text_0:
# 74 "data/maps/CedarForest/scripts.pory"
	.string "Don't you know it's dangerous to leave\n"
	.string "the path?$"

CedarForest_EventScript_Ranger_Text_1:
# 75 "data/maps/CedarForest/scripts.pory"
	.string "You are definitely strong enough to\n"
	.string "explore the rest of the forest.$"

CedarForest_EventScript_Ranger_Text_2:
# 76 "data/maps/CedarForest/scripts.pory"
	.string "There's an old cistern with rare\n"
	.string "pokémon hidden somewhere in the\l"
	.string "forest!$"

CedarForest_EventScript_RivalTrigger_1_Text_0:
# 90 "data/maps/CedarForest/scripts.pory"
	.string "{PLAYER}! Took you long enough. Let's\n"
	.string "see whose partner is stronger!$"

CedarForest_EventScript_RivalTrigger_1_Text_1:
# 100 "data/maps/CedarForest/scripts.pory"
	.string "Fine, you win this time. See you in Cedar\n"
	.string "Rapids!$"

CedarForest_Text_RivalDefeat::
# 137 "data/maps/CedarForest/scripts.pory"
	.string "What?! I lost?$"
