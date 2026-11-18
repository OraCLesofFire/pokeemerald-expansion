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
# 32 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Chaser_Text_0, MSGBOX_NPC
	return


CedarForest_EventScript_Chasee::
# 36 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Chasee_Text_0, MSGBOX_NPC
	return


CedarForest_EventScript_Bug_Catcher_1::
# 44 "data/maps/CedarForest/scripts.pory"
	trainerbattle_single TRAINER_CEDAR_BUG_CATCHER_1, CedarForest_EventScript_Bug_Catcher_1_Text_0, CedarForest_EventScript_Bug_Catcher_1_Text_1
# 47 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Bug_Catcher_1_Text_2, MSGBOX_AUTOCLOSE
	return


CedarForest_EventScript_Bug_Catcher_2::
# 51 "data/maps/CedarForest/scripts.pory"
	trainerbattle_single TRAINER_CEDAR_BUG_CATCHER_2, CedarForest_EventScript_Bug_Catcher_2_Text_0, CedarForest_EventScript_Bug_Catcher_2_Text_1
# 54 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Bug_Catcher_2_Text_2, MSGBOX_AUTOCLOSE
	return


CedarForest_EventScript_Picnicker::
# 58 "data/maps/CedarForest/scripts.pory"
	trainerbattle_single TRAINER_CEDAR_PICNICKER, CedarForest_EventScript_Picnicker_Text_0, CedarForest_EventScript_Picnicker_Text_1
# 61 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Picnicker_Text_2, MSGBOX_AUTOCLOSE
	return


CedarForest_EventScript_Twins_1::
# 65 "data/maps/CedarForest/scripts.pory"
	trainerbattle_double TRAINER_CEDAR_TWINS, CedarForest_EventScript_Twins_1_Text_0, CedarForest_EventScript_Twins_1_Text_1, CedarForest_EventScript_Twins_1_Text_2
# 69 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Twins_1_Text_3, MSGBOX_AUTOCLOSE
	return


CedarForest_EventScript_Twins_2::
# 73 "data/maps/CedarForest/scripts.pory"
	trainerbattle_double TRAINER_CEDAR_TWINS, CedarForest_EventScript_Twins_2_Text_0, CedarForest_EventScript_Twins_2_Text_1, CedarForest_EventScript_Twins_1_Text_2
# 77 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Twins_2_Text_2, MSGBOX_AUTOCLOSE
	return


CedarForest_EventScript_Ranger_1::
# 81 "data/maps/CedarForest/scripts.pory"
	trainerbattle_single TRAINER_CEDAR_RANGER_1, CedarForest_EventScript_Ranger_1_Text_0, CedarForest_EventScript_Ranger_1_Text_1
# 84 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Ranger_1_Text_2, MSGBOX_AUTOCLOSE
	return


CedarForest_EventScript_Ranger_2::
# 88 "data/maps/CedarForest/scripts.pory"
	trainerbattle_single TRAINER_CEDAR_RANGER_2, CedarForest_EventScript_Ranger_2_Text_0, CedarForest_EventScript_Ranger_2_Text_1
# 91 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Ranger_2_Text_2, MSGBOX_AUTOCLOSE
	return


CedarForest_EventScript_Lass::
# 95 "data/maps/CedarForest/scripts.pory"
	trainerbattle_single TRAINER_CEDAR_LASS, CedarForest_EventScript_Lass_Text_0, CedarForest_EventScript_Lass_Text_1
# 98 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Lass_Text_2, MSGBOX_AUTOCLOSE
	return


CedarForest_EventScript_Fisherman::
# 102 "data/maps/CedarForest/scripts.pory"
	trainerbattle_single TRAINER_CEDAR_FISHERMAN, CedarForest_EventScript_Fisherman_Text_0, CedarForest_EventScript_Fisherman_Text_1
# 105 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Fisherman_Text_2, MSGBOX_AUTOCLOSE
	return


CedarForest_EventScript_RivalTrigger_1::
# 113 "data/maps/CedarForest/scripts.pory"
	lockall
# 114 "data/maps/CedarForest/scripts.pory"
	playse SE_PIN
# 115 "data/maps/CedarForest/scripts.pory"
	applymovement LOCALID_CEDAR_RIVAL, Common_Movement_ExclamationMark
# 116 "data/maps/CedarForest/scripts.pory"
	waitmovement 0
# 117 "data/maps/CedarForest/scripts.pory"
	applymovement LOCALID_CEDAR_RIVAL, CedarForest_Movement_RivalApproach_1
# 118 "data/maps/CedarForest/scripts.pory"
	waitmovement 0
# 119 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_RivalTrigger_1_Text_0
# 120 "data/maps/CedarForest/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CEDAR_FOREST_CHIKORITA, CedarForest_Text_RivalDefeat
# 129 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_RivalTrigger_1_Text_1
# 130 "data/maps/CedarForest/scripts.pory"
	closemessage
# 131 "data/maps/CedarForest/scripts.pory"
	applymovement LOCALID_CEDAR_RIVAL, CedarForest_EventScript_RivalTrigger_1_Movement_0
# 132 "data/maps/CedarForest/scripts.pory"
	waitmovement 0
# 133 "data/maps/CedarForest/scripts.pory"
	removeobject LOCALID_CEDAR_RIVAL
# 134 "data/maps/CedarForest/scripts.pory"
	setflag FLAG_HIDE_CEDAR_FOREST_RIVAL
# 135 "data/maps/CedarForest/scripts.pory"
	setvar VAR_CEDAR_FOREST_STATE, 1
# 136 "data/maps/CedarForest/scripts.pory"
	releaseall
	return


CedarForest_EventScript_RivalTrigger_2::
# 140 "data/maps/CedarForest/scripts.pory"
	lockall
# 141 "data/maps/CedarForest/scripts.pory"
	playse SE_PIN
# 142 "data/maps/CedarForest/scripts.pory"
	applymovement LOCALID_CEDAR_RIVAL, Common_Movement_ExclamationMark
# 143 "data/maps/CedarForest/scripts.pory"
	waitmovement 0
# 144 "data/maps/CedarForest/scripts.pory"
	applymovement LOCALID_CEDAR_RIVAL, CedarForest_Movement_RivalApproach_2
# 145 "data/maps/CedarForest/scripts.pory"
	waitmovement 0
# 146 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_RivalTrigger_1_Text_0
# 147 "data/maps/CedarForest/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CEDAR_FOREST_CHIKORITA, CedarForest_Text_RivalDefeat
# 156 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_RivalTrigger_1_Text_1
# 157 "data/maps/CedarForest/scripts.pory"
	closemessage
# 158 "data/maps/CedarForest/scripts.pory"
	applymovement LOCALID_CEDAR_RIVAL, CedarForest_EventScript_RivalTrigger_1_Movement_0
# 159 "data/maps/CedarForest/scripts.pory"
	waitmovement 0
# 160 "data/maps/CedarForest/scripts.pory"
	removeobject LOCALID_CEDAR_RIVAL
# 161 "data/maps/CedarForest/scripts.pory"
	setflag FLAG_HIDE_CEDAR_FOREST_RIVAL
# 162 "data/maps/CedarForest/scripts.pory"
	setvar VAR_CEDAR_FOREST_STATE, 1
# 163 "data/maps/CedarForest/scripts.pory"
	releaseall
	return


# 170 "data/maps/CedarForest/scripts.pory"
CedarForest_Movement_RivalApproach_1:
# 171 "data/maps/CedarForest/scripts.pory"
	face_player
	step_end

# 174 "data/maps/CedarForest/scripts.pory"
CedarForest_Movement_RivalApproach_2:
# 175 "data/maps/CedarForest/scripts.pory"
	walk_right
# 176 "data/maps/CedarForest/scripts.pory"
	face_player
	step_end

# 131 "data/maps/CedarForest/scripts.pory"
CedarForest_EventScript_RivalTrigger_1_Movement_0:
# 131 "data/maps/CedarForest/scripts.pory"
	walk_fast_up
# 131 "data/maps/CedarForest/scripts.pory"
	walk_fast_up
# 131 "data/maps/CedarForest/scripts.pory"
	walk_fast_up
# 131 "data/maps/CedarForest/scripts.pory"
	walk_fast_up
# 131 "data/maps/CedarForest/scripts.pory"
	walk_fast_up
# 131 "data/maps/CedarForest/scripts.pory"
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
# 32 "data/maps/CedarForest/scripts.pory"
	.string "I'm gonna get you!$"

CedarForest_EventScript_Chasee_Text_0:
# 36 "data/maps/CedarForest/scripts.pory"
	.string "You'll never catch me!$"

CedarForest_EventScript_Bug_Catcher_1_Text_0:
# 45 "data/maps/CedarForest/scripts.pory"
	.string "Check out all the neat bug pokémon I've\n"
	.string "caught!$"

CedarForest_EventScript_Bug_Catcher_1_Text_1:
# 46 "data/maps/CedarForest/scripts.pory"
	.string "Aren't all my bug pokémon neat!$"

CedarForest_EventScript_Bug_Catcher_1_Text_2:
# 47 "data/maps/CedarForest/scripts.pory"
	.string "Did you know bug Pokémon evolve super\n"
	.string "fast?$"

CedarForest_EventScript_Bug_Catcher_2_Text_0:
# 52 "data/maps/CedarForest/scripts.pory"
	.string "Be Careful of my bugs poison!$"

CedarForest_EventScript_Bug_Catcher_2_Text_1:
# 53 "data/maps/CedarForest/scripts.pory"
	.string "Poison Pokémon are neat!$"

CedarForest_EventScript_Bug_Catcher_2_Text_2:
# 54 "data/maps/CedarForest/scripts.pory"
	.string "Maybe I should become a ninja, I hear\n"
	.string "they use poison type pokémon?$"

CedarForest_EventScript_Picnicker_Text_0:
# 59 "data/maps/CedarForest/scripts.pory"
	.string "The forest is so beautiful this time of\n"
	.string "year.$"

CedarForest_EventScript_Picnicker_Text_1:
# 60 "data/maps/CedarForest/scripts.pory"
	.string "This forest is a lot less beautiful\n"
	.string "without my pokémon.$"

CedarForest_EventScript_Picnicker_Text_2:
# 61 "data/maps/CedarForest/scripts.pory"
	.string "I just love the way the river winds\n"
	.string "through the forest!$"

CedarForest_EventScript_Twins_1_Text_0:
# 66 "data/maps/CedarForest/scripts.pory"
	.string "I love the slide the best!$"

CedarForest_EventScript_Twins_1_Text_1:
# 67 "data/maps/CedarForest/scripts.pory"
	.string "It's my fault we lost.$"

CedarForest_EventScript_Twins_1_Text_2:
# 68 "data/maps/CedarForest/scripts.pory"
	.string "You need at least two Pokémon to\n"
	.string "battle us!$"

CedarForest_EventScript_Twins_1_Text_3:
# 69 "data/maps/CedarForest/scripts.pory"
	.string "I wish I didn't let my sis down.$"

CedarForest_EventScript_Twins_2_Text_0:
# 74 "data/maps/CedarForest/scripts.pory"
	.string "The sandbox is my favorite!$"

CedarForest_EventScript_Twins_2_Text_1:
# 75 "data/maps/CedarForest/scripts.pory"
	.string "We would have won if my sister was\n"
	.string "better.$"

CedarForest_EventScript_Twins_2_Text_2:
# 77 "data/maps/CedarForest/scripts.pory"
	.string "I still love my sis even if she isn't very\n"
	.string "good at battles.$"

CedarForest_EventScript_Ranger_1_Text_0:
# 82 "data/maps/CedarForest/scripts.pory"
	.string "Don't you know it's dangerous to leave\n"
	.string "the path?$"

CedarForest_EventScript_Ranger_1_Text_1:
# 83 "data/maps/CedarForest/scripts.pory"
	.string "You are definitely strong enough to\n"
	.string "explore the rest of the forest.$"

CedarForest_EventScript_Ranger_1_Text_2:
# 84 "data/maps/CedarForest/scripts.pory"
	.string "Be careful. Sometimes strong pokemon\n"
	.string "appear off the path.$"

CedarForest_EventScript_Ranger_2_Text_0:
# 89 "data/maps/CedarForest/scripts.pory"
	.string "How did you find this place?$"

CedarForest_EventScript_Ranger_2_Text_1:
# 90 "data/maps/CedarForest/scripts.pory"
	.string "There's an abandoned cistern deeper in\n"
	.string "the forest.$"

CedarForest_EventScript_Ranger_2_Text_2:
# 91 "data/maps/CedarForest/scripts.pory"
	.string "The pokemon deeper in the forest are\n"
	.string "much stronger.$"

CedarForest_EventScript_Lass_Text_0:
# 96 "data/maps/CedarForest/scripts.pory"
	.string "I just love how beautiful the river\n"
	.string "looks here!$"

CedarForest_EventScript_Lass_Text_1:
# 97 "data/maps/CedarForest/scripts.pory"
	.string "Don't you think the way it winds is just\n"
	.string "entrancing?$"

CedarForest_EventScript_Lass_Text_2:
# 98 "data/maps/CedarForest/scripts.pory"
	.string "I wish I could stay here all day.$"

CedarForest_EventScript_Fisherman_Text_0:
# 103 "data/maps/CedarForest/scripts.pory"
	.string "There's nothing better than relaxing\n"
	.string "with a rod and the water.$"

CedarForest_EventScript_Fisherman_Text_1:
# 104 "data/maps/CedarForest/scripts.pory"
	.string "I don't mind losing, just means I can\n"
	.string "get back to fishing faster.$"

CedarForest_EventScript_Fisherman_Text_2:
# 105 "data/maps/CedarForest/scripts.pory"
	.string "I wonder what I'll fish up next?$"

CedarForest_EventScript_RivalTrigger_1_Text_0:
# 119 "data/maps/CedarForest/scripts.pory"
	.string "{PLAYER}! Took you long enough. Let's\n"
	.string "see whose partner is stronger!$"

CedarForest_EventScript_RivalTrigger_1_Text_1:
# 129 "data/maps/CedarForest/scripts.pory"
	.string "Fine, you win this time. See you in Cedar\n"
	.string "Rapids!$"

CedarForest_Text_RivalDefeat::
# 166 "data/maps/CedarForest/scripts.pory"
	.string "What?! I lost?$"
