Town2_Mart_MapScripts::
	.byte 0


Town2_Mart_EventScript_Lass::
# 8 "data/maps/Town2_Mart/scripts.pory"
	msgbox Town2_Mart_EventScript_Lass_Text_0, MSGBOX_NPC
	return


Town2_Mart_EventScript_Ranger::
# 12 "data/maps/Town2_Mart/scripts.pory"
	msgbox Town2_Mart_EventScript_Ranger_Text_0, MSGBOX_NPC
	return


Town2_Mart_EventScript_Mart::
# 20 "data/maps/Town2_Mart/scripts.pory"
	lock
# 21 "data/maps/Town2_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 22 "data/maps/Town2_Mart/scripts.pory"
	waitmessage
# 23 "data/maps/Town2_Mart/scripts.pory"
	pokemart MyMartItems
# 24 "data/maps/Town2_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 25 "data/maps/Town2_Mart/scripts.pory"
	release
	return


	.align 2
# 28 "data/maps/Town2_Mart/scripts.pory"
MyMartItems:
# 29 "data/maps/Town2_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 30 "data/maps/Town2_Mart/scripts.pory"
	.2byte ITEM_POTION
# 31 "data/maps/Town2_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 32 "data/maps/Town2_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

Town2_Mart_EventScript_Lass_Text_0:
# 8 "data/maps/Town2_Mart/scripts.pory"
	.string "Hmm. I'm not sure which I should get\n"
	.string "more of, Pokeballs or Potions?$"

Town2_Mart_EventScript_Ranger_Text_0:
# 12 "data/maps/Town2_Mart/scripts.pory"
	.string "Make sure you pick up some potions and\n"
	.string "antidotes. The route ahead is quite\l"
	.string "long.$"
