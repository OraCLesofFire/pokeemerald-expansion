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


CedarForest_EventScript_Youngster_1::
# 44 "data/maps/CedarForest/scripts.pory"
	trainerbattle_single TRAINER_CEDAR_YOUNGSTER_1, CedarForest_EventScript_Youngster_1_Text_0, CedarForest_EventScript_Youngster_1_Text_1
# 47 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Youngster_1_Text_2, MSGBOX_AUTOCLOSE
	return


CedarForest_EventScript_Youngster_2::
# 51 "data/maps/CedarForest/scripts.pory"
	trainerbattle_single TRAINER_CEDAR_YOUNGSTER_2, CedarForest_EventScript_Youngster_2_Text_0, CedarForest_EventScript_Youngster_2_Text_1
# 54 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Youngster_2_Text_2, MSGBOX_AUTOCLOSE
	return


CedarForest_EventScript_Bug_Catcher_1::
# 58 "data/maps/CedarForest/scripts.pory"
	trainerbattle_single TRAINER_CEDAR_BUG_CATCHER_1, CedarForest_EventScript_Bug_Catcher_1_Text_0, CedarForest_EventScript_Bug_Catcher_1_Text_1
# 61 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Bug_Catcher_1_Text_2, MSGBOX_AUTOCLOSE
	return


CedarForest_EventScript_Bug_Catcher_2::
# 65 "data/maps/CedarForest/scripts.pory"
	trainerbattle_single TRAINER_CEDAR_BUG_CATCHER_2, CedarForest_EventScript_Bug_Catcher_2_Text_0, CedarForest_EventScript_Bug_Catcher_2_Text_1
# 68 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Bug_Catcher_2_Text_2, MSGBOX_AUTOCLOSE
	return


CedarForest_EventScript_Twins_1::
# 72 "data/maps/CedarForest/scripts.pory"
	trainerbattle_double TRAINER_CEDAR_TWINS, CedarForest_EventScript_Twins_1_Text_0, CedarForest_EventScript_Twins_1_Text_1, CedarForest_EventScript_Twins_1_Text_2
# 76 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Twins_1_Text_3, MSGBOX_AUTOCLOSE
	return


CedarForest_EventScript_Twins_2::
# 80 "data/maps/CedarForest/scripts.pory"
	trainerbattle_double TRAINER_CEDAR_TWINS, CedarForest_EventScript_Twins_2_Text_0, CedarForest_EventScript_Twins_2_Text_1, CedarForest_EventScript_Twins_1_Text_2
# 84 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Twins_2_Text_2, MSGBOX_AUTOCLOSE
	return


CedarForest_EventScript_Lass::
# 88 "data/maps/CedarForest/scripts.pory"
	trainerbattle_single TRAINER_CEDAR_LASS, CedarForest_EventScript_Lass_Text_0, CedarForest_EventScript_Lass_Text_1
# 91 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Lass_Text_2, MSGBOX_AUTOCLOSE
	return


CedarForest_EventScript_Ranger_1::
# 95 "data/maps/CedarForest/scripts.pory"
	trainerbattle_single TRAINER_CEDAR_RANGER_1, CedarForest_EventScript_Ranger_1_Text_0, CedarForest_EventScript_Ranger_1_Text_1
# 98 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Ranger_1_Text_2, MSGBOX_AUTOCLOSE
	return


CedarForest_EventScript_Ranger_2::
# 102 "data/maps/CedarForest/scripts.pory"
	trainerbattle_single TRAINER_CEDAR_RANGER_2, CedarForest_EventScript_Ranger_2_Text_0, CedarForest_EventScript_Ranger_2_Text_1
# 105 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Ranger_2_Text_2, MSGBOX_AUTOCLOSE
	return


CedarForest_EventScript_Fisherman::
# 109 "data/maps/CedarForest/scripts.pory"
	trainerbattle_single TRAINER_CEDAR_FISHERMAN, CedarForest_EventScript_Fisherman_Text_0, CedarForest_EventScript_Fisherman_Text_1
# 112 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Fisherman_Text_2, MSGBOX_AUTOCLOSE
	return


CedarForest_Ace_CountDefeated::
# 116 "data/maps/CedarForest/scripts.pory"
	setvar VAR_TEMP_1, 9
# 117 "data/maps/CedarForest/scripts.pory"
	checktrainerflag TRAINER_CEDAR_BUG_YOUNGSTER_1
	goto_if 1, CedarForest_Ace_CountDefeated_2
CedarForest_Ace_CountDefeated_1:
# 118 "data/maps/CedarForest/scripts.pory"
	checktrainerflag TRAINER_CEDAR_BUG_YOUNGSTER_2
	goto_if 1, CedarForest_Ace_CountDefeated_5
CedarForest_Ace_CountDefeated_4:
# 119 "data/maps/CedarForest/scripts.pory"
	checktrainerflag TRAINER_CEDAR_BUG_CATCHER_1
	goto_if 1, CedarForest_Ace_CountDefeated_8
CedarForest_Ace_CountDefeated_7:
# 120 "data/maps/CedarForest/scripts.pory"
	checktrainerflag TRAINER_CEDAR_BUG_CATCHER_2
	goto_if 1, CedarForest_Ace_CountDefeated_11
CedarForest_Ace_CountDefeated_10:
# 121 "data/maps/CedarForest/scripts.pory"
	checktrainerflag TRAINER_CEDAR_LASS
	goto_if 1, CedarForest_Ace_CountDefeated_14
CedarForest_Ace_CountDefeated_13:
# 122 "data/maps/CedarForest/scripts.pory"
	checktrainerflag TRAINER_CEDAR_RANGER_1
	goto_if 1, CedarForest_Ace_CountDefeated_17
CedarForest_Ace_CountDefeated_16:
# 123 "data/maps/CedarForest/scripts.pory"
	checktrainerflag TRAINER_CEDAR_RANGER_2
	goto_if 1, CedarForest_Ace_CountDefeated_20
CedarForest_Ace_CountDefeated_19:
# 124 "data/maps/CedarForest/scripts.pory"
	checktrainerflag TRAINER_CEDAR_FISHERMAN
	goto_if 1, CedarForest_Ace_CountDefeated_23
CedarForest_Ace_CountDefeated_22:
# 125 "data/maps/CedarForest/scripts.pory"
	checktrainerflag TRAINER_CEDAR_TWINS
	goto_if 1, CedarForest_Ace_CountDefeated_25
	return

CedarForest_Ace_CountDefeated_2:
# 117 "data/maps/CedarForest/scripts.pory"
	subvar VAR_TEMP_1, 1
	goto CedarForest_Ace_CountDefeated_1

CedarForest_Ace_CountDefeated_5:
# 118 "data/maps/CedarForest/scripts.pory"
	subvar VAR_TEMP_1, 1
	goto CedarForest_Ace_CountDefeated_4

CedarForest_Ace_CountDefeated_8:
# 119 "data/maps/CedarForest/scripts.pory"
	subvar VAR_TEMP_1, 1
	goto CedarForest_Ace_CountDefeated_7

CedarForest_Ace_CountDefeated_11:
# 120 "data/maps/CedarForest/scripts.pory"
	subvar VAR_TEMP_1, 1
	goto CedarForest_Ace_CountDefeated_10

CedarForest_Ace_CountDefeated_14:
# 121 "data/maps/CedarForest/scripts.pory"
	subvar VAR_TEMP_1, 1
	goto CedarForest_Ace_CountDefeated_13

CedarForest_Ace_CountDefeated_17:
# 122 "data/maps/CedarForest/scripts.pory"
	subvar VAR_TEMP_1, 1
	goto CedarForest_Ace_CountDefeated_16

CedarForest_Ace_CountDefeated_20:
# 123 "data/maps/CedarForest/scripts.pory"
	subvar VAR_TEMP_1, 1
	goto CedarForest_Ace_CountDefeated_19

CedarForest_Ace_CountDefeated_23:
# 124 "data/maps/CedarForest/scripts.pory"
	subvar VAR_TEMP_1, 1
	goto CedarForest_Ace_CountDefeated_22

CedarForest_Ace_CountDefeated_25:
# 125 "data/maps/CedarForest/scripts.pory"
	subvar VAR_TEMP_1, 1
	return


CedarForest_EventScript_Ace::
# 129 "data/maps/CedarForest/scripts.pory"
	call CedarForest_Ace_CountDefeated
# 130 "data/maps/CedarForest/scripts.pory"
	checktrainerflag TRAINER_CEDAR_ACE
	goto_if 1, CedarForest_EventScript_Ace_1
# 134 "data/maps/CedarForest/scripts.pory"
	switch VAR_TEMP_1
# 135 "data/maps/CedarForest/scripts.pory"
	case 9, CedarForest_EventScript_Ace_5
# 137 "data/maps/CedarForest/scripts.pory"
	case 0, CedarForest_EventScript_Ace_6
# 143 "data/maps/CedarForest/scripts.pory"
	case 8, CedarForest_EventScript_Ace_7
# 145 "data/maps/CedarForest/scripts.pory"
	case 7, CedarForest_EventScript_Ace_8
# 147 "data/maps/CedarForest/scripts.pory"
	case 6, CedarForest_EventScript_Ace_9
# 149 "data/maps/CedarForest/scripts.pory"
	case 5, CedarForest_EventScript_Ace_10
# 151 "data/maps/CedarForest/scripts.pory"
	case 4, CedarForest_EventScript_Ace_11
# 153 "data/maps/CedarForest/scripts.pory"
	case 3, CedarForest_EventScript_Ace_12
# 155 "data/maps/CedarForest/scripts.pory"
	case 2, CedarForest_EventScript_Ace_13
# 157 "data/maps/CedarForest/scripts.pory"
	case 1, CedarForest_EventScript_Ace_14
	return

CedarForest_EventScript_Ace_1:
# 131 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Ace_Text_0, MSGBOX_NPC
	return

CedarForest_EventScript_Ace_5:
# 136 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Ace_Text_1, MSGBOX_NPC
	return

CedarForest_EventScript_Ace_6:
# 138 "data/maps/CedarForest/scripts.pory"
	trainerbattle_single TRAINER_CEDAR_ACE, CedarForest_EventScript_Ace_Text_2, CedarForest_EventScript_Ace_Text_3
# 141 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Ace_Text_4, MSGBOX_AUTOCLOSE
# 142 "data/maps/CedarForest/scripts.pory"
	giveitem ITEM_SILK_SCARF
	return

CedarForest_EventScript_Ace_7:
# 144 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Ace_Text_5, MSGBOX_NPC
	return

CedarForest_EventScript_Ace_8:
# 146 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Ace_Text_6, MSGBOX_NPC
	return

CedarForest_EventScript_Ace_9:
# 148 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Ace_Text_7, MSGBOX_NPC
	return

CedarForest_EventScript_Ace_10:
# 150 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Ace_Text_8, MSGBOX_NPC
	return

CedarForest_EventScript_Ace_11:
# 152 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Ace_Text_9, MSGBOX_NPC
	return

CedarForest_EventScript_Ace_12:
# 154 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Ace_Text_10, MSGBOX_NPC
	return

CedarForest_EventScript_Ace_13:
# 156 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Ace_Text_11, MSGBOX_NPC
	return

CedarForest_EventScript_Ace_14:
# 158 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_Ace_Text_12, MSGBOX_NPC
	return


CedarForest_EventScript_RivalTrigger_1::
# 168 "data/maps/CedarForest/scripts.pory"
	lockall
# 169 "data/maps/CedarForest/scripts.pory"
	playse SE_PIN
# 170 "data/maps/CedarForest/scripts.pory"
	applymovement LOCALID_CEDAR_RIVAL, Common_Movement_ExclamationMark
# 171 "data/maps/CedarForest/scripts.pory"
	waitmovement 0
# 172 "data/maps/CedarForest/scripts.pory"
	applymovement LOCALID_CEDAR_RIVAL, CedarForest_Movement_RivalApproach_1
# 173 "data/maps/CedarForest/scripts.pory"
	waitmovement 0
# 174 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_RivalTrigger_1_Text_0
# 175 "data/maps/CedarForest/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CEDAR_FOREST_CHIKORITA, CedarForest_Text_RivalDefeat
# 184 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_RivalTrigger_1_Text_1
# 185 "data/maps/CedarForest/scripts.pory"
	closemessage
# 186 "data/maps/CedarForest/scripts.pory"
	applymovement LOCALID_CEDAR_RIVAL, CedarForest_EventScript_RivalTrigger_1_Movement_0
# 187 "data/maps/CedarForest/scripts.pory"
	waitmovement 0
# 188 "data/maps/CedarForest/scripts.pory"
	removeobject LOCALID_CEDAR_RIVAL
# 189 "data/maps/CedarForest/scripts.pory"
	setflag FLAG_HIDE_CEDAR_FOREST_RIVAL
# 190 "data/maps/CedarForest/scripts.pory"
	setvar VAR_CEDAR_FOREST_STATE, 1
# 191 "data/maps/CedarForest/scripts.pory"
	releaseall
	return


CedarForest_EventScript_RivalTrigger_2::
# 195 "data/maps/CedarForest/scripts.pory"
	lockall
# 196 "data/maps/CedarForest/scripts.pory"
	playse SE_PIN
# 197 "data/maps/CedarForest/scripts.pory"
	applymovement LOCALID_CEDAR_RIVAL, Common_Movement_ExclamationMark
# 198 "data/maps/CedarForest/scripts.pory"
	waitmovement 0
# 199 "data/maps/CedarForest/scripts.pory"
	applymovement LOCALID_CEDAR_RIVAL, CedarForest_Movement_RivalApproach_2
# 200 "data/maps/CedarForest/scripts.pory"
	waitmovement 0
# 201 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_RivalTrigger_1_Text_0
# 202 "data/maps/CedarForest/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CEDAR_FOREST_CHIKORITA, CedarForest_Text_RivalDefeat
# 211 "data/maps/CedarForest/scripts.pory"
	msgbox CedarForest_EventScript_RivalTrigger_1_Text_1
# 212 "data/maps/CedarForest/scripts.pory"
	closemessage
# 213 "data/maps/CedarForest/scripts.pory"
	applymovement LOCALID_CEDAR_RIVAL, CedarForest_EventScript_RivalTrigger_1_Movement_0
# 214 "data/maps/CedarForest/scripts.pory"
	waitmovement 0
# 215 "data/maps/CedarForest/scripts.pory"
	removeobject LOCALID_CEDAR_RIVAL
# 216 "data/maps/CedarForest/scripts.pory"
	setflag FLAG_HIDE_CEDAR_FOREST_RIVAL
# 217 "data/maps/CedarForest/scripts.pory"
	setvar VAR_CEDAR_FOREST_STATE, 1
# 218 "data/maps/CedarForest/scripts.pory"
	releaseall
	return


# 225 "data/maps/CedarForest/scripts.pory"
CedarForest_Movement_RivalApproach_1:
# 226 "data/maps/CedarForest/scripts.pory"
	face_player
	step_end

# 229 "data/maps/CedarForest/scripts.pory"
CedarForest_Movement_RivalApproach_2:
# 230 "data/maps/CedarForest/scripts.pory"
	walk_right
# 231 "data/maps/CedarForest/scripts.pory"
	face_player
	step_end

# 186 "data/maps/CedarForest/scripts.pory"
CedarForest_EventScript_RivalTrigger_1_Movement_0:
# 186 "data/maps/CedarForest/scripts.pory"
	walk_fast_up
# 186 "data/maps/CedarForest/scripts.pory"
	walk_fast_up
# 186 "data/maps/CedarForest/scripts.pory"
	walk_fast_up
# 186 "data/maps/CedarForest/scripts.pory"
	walk_fast_up
# 186 "data/maps/CedarForest/scripts.pory"
	walk_fast_up
# 186 "data/maps/CedarForest/scripts.pory"
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

CedarForest_EventScript_Youngster_1_Text_0:
# 45 "data/maps/CedarForest/scripts.pory"
	.string "I just caught my pokemon today!$"

CedarForest_EventScript_Youngster_1_Text_1:
# 46 "data/maps/CedarForest/scripts.pory"
	.string "I actually caught one last night.$"

CedarForest_EventScript_Youngster_1_Text_2:
# 47 "data/maps/CedarForest/scripts.pory"
	.string "Did you know some pokemon only come\n"
	.string "out at night?$"

CedarForest_EventScript_Youngster_2_Text_0:
# 52 "data/maps/CedarForest/scripts.pory"
	.string "Beware of my bird pokemon!$"

CedarForest_EventScript_Youngster_2_Text_1:
# 53 "data/maps/CedarForest/scripts.pory"
	.string "Flying type moves are strong against\n"
	.string "grass pokemon.$"

CedarForest_EventScript_Youngster_2_Text_2:
# 54 "data/maps/CedarForest/scripts.pory"
	.string "Having only 1 type of pokemon sure\n"
	.string "makes battles more difficult.$"

CedarForest_EventScript_Bug_Catcher_1_Text_0:
# 59 "data/maps/CedarForest/scripts.pory"
	.string "Check out all the neat bug pokémon I've\n"
	.string "caught!$"

CedarForest_EventScript_Bug_Catcher_1_Text_1:
# 60 "data/maps/CedarForest/scripts.pory"
	.string "Aren't all my bug pokémon neat!$"

CedarForest_EventScript_Bug_Catcher_1_Text_2:
# 61 "data/maps/CedarForest/scripts.pory"
	.string "Did you know bug Pokémon evolve super\n"
	.string "fast?$"

CedarForest_EventScript_Bug_Catcher_2_Text_0:
# 66 "data/maps/CedarForest/scripts.pory"
	.string "Be Careful of my bugs poison!$"

CedarForest_EventScript_Bug_Catcher_2_Text_1:
# 67 "data/maps/CedarForest/scripts.pory"
	.string "Poison Pokémon are neat!$"

CedarForest_EventScript_Bug_Catcher_2_Text_2:
# 68 "data/maps/CedarForest/scripts.pory"
	.string "Maybe I should become a ninja, I hear\n"
	.string "they use poison type pokémon?$"

CedarForest_EventScript_Twins_1_Text_0:
# 73 "data/maps/CedarForest/scripts.pory"
	.string "I love the slide the best!$"

CedarForest_EventScript_Twins_1_Text_1:
# 74 "data/maps/CedarForest/scripts.pory"
	.string "It's my fault we lost.$"

CedarForest_EventScript_Twins_1_Text_2:
# 75 "data/maps/CedarForest/scripts.pory"
	.string "You need at least two Pokémon to\n"
	.string "battle us!$"

CedarForest_EventScript_Twins_1_Text_3:
# 76 "data/maps/CedarForest/scripts.pory"
	.string "I wish I didn't let my sis down.$"

CedarForest_EventScript_Twins_2_Text_0:
# 81 "data/maps/CedarForest/scripts.pory"
	.string "The sandbox is my favorite!$"

CedarForest_EventScript_Twins_2_Text_1:
# 82 "data/maps/CedarForest/scripts.pory"
	.string "We would have won if my sister was\n"
	.string "better.$"

CedarForest_EventScript_Twins_2_Text_2:
# 84 "data/maps/CedarForest/scripts.pory"
	.string "I still love my sis even if she isn't very\n"
	.string "good at battles.$"

CedarForest_EventScript_Lass_Text_0:
# 89 "data/maps/CedarForest/scripts.pory"
	.string "The river is so pretty here.$"

CedarForest_EventScript_Lass_Text_1:
# 90 "data/maps/CedarForest/scripts.pory"
	.string "I wish I could spend more time by the\n"
	.string "river.$"

CedarForest_EventScript_Lass_Text_2:
# 91 "data/maps/CedarForest/scripts.pory"
	.string "Don't you think this would be the\n"
	.string "perfect place for a picnick??$"

CedarForest_EventScript_Ranger_1_Text_0:
# 96 "data/maps/CedarForest/scripts.pory"
	.string "Don't you know it's dangerous to leave\n"
	.string "the path?$"

CedarForest_EventScript_Ranger_1_Text_1:
# 97 "data/maps/CedarForest/scripts.pory"
	.string "You are definitely strong enough to\n"
	.string "explore the rest of the forest.$"

CedarForest_EventScript_Ranger_1_Text_2:
# 98 "data/maps/CedarForest/scripts.pory"
	.string "Be careful. Sometimes strong pokemon\n"
	.string "appear off the path.$"

CedarForest_EventScript_Ranger_2_Text_0:
# 103 "data/maps/CedarForest/scripts.pory"
	.string "How did you find this place?$"

CedarForest_EventScript_Ranger_2_Text_1:
# 104 "data/maps/CedarForest/scripts.pory"
	.string "There's an abandoned cistern deeper in\n"
	.string "the forest.$"

CedarForest_EventScript_Ranger_2_Text_2:
# 105 "data/maps/CedarForest/scripts.pory"
	.string "The pokemon deeper in the forest are\n"
	.string "much stronger.$"

CedarForest_EventScript_Fisherman_Text_0:
# 110 "data/maps/CedarForest/scripts.pory"
	.string "There's nothing better than relaxing\n"
	.string "with a rod and the water.$"

CedarForest_EventScript_Fisherman_Text_1:
# 111 "data/maps/CedarForest/scripts.pory"
	.string "I don't mind losing, just means I can\n"
	.string "get back to fishing faster.$"

CedarForest_EventScript_Fisherman_Text_2:
# 112 "data/maps/CedarForest/scripts.pory"
	.string "I wonder what I'll fish up next?$"

CedarForest_EventScript_Ace_Text_0:
# 131 "data/maps/CedarForest/scripts.pory"
	.string "I adopted my pokemon from a lady in\n"
	.string "Cedar Rapids?$"

CedarForest_EventScript_Ace_Text_1:
# 136 "data/maps/CedarForest/scripts.pory"
	.string "You don't seem very strong. Come back\n"
	.string "when you've beat every trainer on this\l"
	.string "route.$"

CedarForest_EventScript_Ace_Text_2:
# 139 "data/maps/CedarForest/scripts.pory"
	.string "You've beat every other trainer on this\n"
	.string "route. Show me what you've got!$"

CedarForest_EventScript_Ace_Text_3:
# 140 "data/maps/CedarForest/scripts.pory"
	.string "Wow you are strong. I'll give you this\n"
	.string "silk scarf to help you on your way.$"

CedarForest_EventScript_Ace_Text_4:
# 141 "data/maps/CedarForest/scripts.pory"
	.string "I adopted my pokemon from a lady in\n"
	.string "Cedar Rapids.$"

CedarForest_EventScript_Ace_Text_5:
# 144 "data/maps/CedarForest/scripts.pory"
	.string "You still need to get stronger. There\n"
	.string "are still 8 more trainers on this route\l"
	.string "for you to beat.$"

CedarForest_EventScript_Ace_Text_6:
# 146 "data/maps/CedarForest/scripts.pory"
	.string "You still need to get stronger. There\n"
	.string "are still 7 more trainers on this route\l"
	.string "for you to beat.$"

CedarForest_EventScript_Ace_Text_7:
# 148 "data/maps/CedarForest/scripts.pory"
	.string "You still need to get stronger. There\n"
	.string "are still 6 more trainers on this route\l"
	.string "for you to beat.$"

CedarForest_EventScript_Ace_Text_8:
# 150 "data/maps/CedarForest/scripts.pory"
	.string "You still need to get stronger. There\n"
	.string "are still 5 more trainers on this route\l"
	.string "for you to beat.$"

CedarForest_EventScript_Ace_Text_9:
# 152 "data/maps/CedarForest/scripts.pory"
	.string "You still need to get stronger. There\n"
	.string "are still 4 more trainers on this route\l"
	.string "for you to beat.$"

CedarForest_EventScript_Ace_Text_10:
# 154 "data/maps/CedarForest/scripts.pory"
	.string "You still need to get stronger. There\n"
	.string "are still 3 more trainers on this route\l"
	.string "for you to beat.$"

CedarForest_EventScript_Ace_Text_11:
# 156 "data/maps/CedarForest/scripts.pory"
	.string "You still need to get stronger. There\n"
	.string "are still 2 more trainers on this route\l"
	.string "for you to beat.$"

CedarForest_EventScript_Ace_Text_12:
# 158 "data/maps/CedarForest/scripts.pory"
	.string "You still need to get stronger. There is\n"
	.string "still 1 more trainer on this route for\l"
	.string "you to beat.$"

CedarForest_EventScript_RivalTrigger_1_Text_0:
# 174 "data/maps/CedarForest/scripts.pory"
	.string "{PLAYER}! Took you long enough. Let's\n"
	.string "see whose partner is stronger!$"

CedarForest_EventScript_RivalTrigger_1_Text_1:
# 184 "data/maps/CedarForest/scripts.pory"
	.string "Fine, you win this time. See you in Cedar\n"
	.string "Rapids!$"

CedarForest_Text_RivalDefeat::
# 221 "data/maps/CedarForest/scripts.pory"
	.string "What?! I lost?$"
