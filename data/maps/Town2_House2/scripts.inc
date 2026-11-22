Town2_House2_MapScripts::
	.byte 0


Town2_PokemonCenter_1F_EventScript_Gym_Guy::
# 4 "data/maps/Town2_House2/scripts.pory"
	goto_if_set FLAG_GYM_GUIDE_GIFT_GIVEN, Town2_PokemonCenter_1F_EventScript_Gym_Guy_1
# 7 "data/maps/Town2_House2/scripts.pory"
	goto_if_unset FLAG_DEFEATED_GYM1, Town2_PokemonCenter_1F_EventScript_Gym_Guy_2
	return

Town2_PokemonCenter_1F_EventScript_Gym_Guy_1:
# 5 "data/maps/Town2_House2/scripts.pory"
	msgbox Town2_PokemonCenter_1F_EventScript_Gym_Guy_Text_0, MSGBOX_NPC
	return

Town2_PokemonCenter_1F_EventScript_Gym_Guy_2:
# 8 "data/maps/Town2_House2/scripts.pory"
	msgbox Town2_PokemonCenter_1F_EventScript_Gym_Guy_Text_1, MSGBOX_NPC
# 9 "data/maps/Town2_House2/scripts.pory"
	giveitem ITEM_TM_RETURN
# 10 "data/maps/Town2_House2/scripts.pory"
	setflag FLAG_GYM_GUIDE_GIFT_GIVEN
# 11 "data/maps/Town2_House2/scripts.pory"
	goto_if_set FLAG_DEFEATED_GYM1, Town2_PokemonCenter_1F_EventScript_Gym_Guy_5
	return

Town2_PokemonCenter_1F_EventScript_Gym_Guy_5:
# 12 "data/maps/Town2_House2/scripts.pory"
	setvar VAR_TOWN2_STATE, 1
# 13 "data/maps/Town2_House2/scripts.pory"
	clearflag FLAG_GYM_GUIDE_GIFT_GIVEN
	return


Town2_PokemonCenter_1F_EventScript_Gym_Guy_Text_0:
# 5 "data/maps/Town2_House2/scripts.pory"
	.string "Go Get 'em Tiger!$"

Town2_PokemonCenter_1F_EventScript_Gym_Guy_Text_1:
# 8 "data/maps/Town2_House2/scripts.pory"
	.string "What's up champ in the makin'?\p"
	.string "Who am I? I'm the gym guide!\n"
	.string "If you ever need help just ask.\p"
	.string "How about a gift to give you a head\n"
	.string "start?$"
