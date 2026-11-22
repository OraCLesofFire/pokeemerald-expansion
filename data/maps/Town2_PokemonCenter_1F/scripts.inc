Town2_PokemonCenter_1F_MapScripts::
	.byte 0


Town2_PokemonCenter_1F_EventScript_Nurse::
# 8 "data/maps/Town2_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_TOWN2_NURSE
# 9 "data/maps/Town2_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 10 "data/maps/Town2_PokemonCenter_1F/scripts.pory"
	waitmessage
# 11 "data/maps/Town2_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 12 "data/maps/Town2_PokemonCenter_1F/scripts.pory"
	release
	return


Town2_PokemonCenter_1F_EventScript_AromaLady::
# 16 "data/maps/Town2_PokemonCenter_1F/scripts.pory"
	msgbox Town2_PokemonCenter_1F_EventScript_AromaLady_Text_0, MSGBOX_NPC
	return


Town2_PokemonCenter_1F_EventScript_Gentleman::
# 20 "data/maps/Town2_PokemonCenter_1F/scripts.pory"
	msgbox Town2_PokemonCenter_1F_EventScript_Gentleman_Text_0, MSGBOX_NPC
	return


Town2_PokemonCenter_1F_EventScript_Cooltrainer::
# 24 "data/maps/Town2_PokemonCenter_1F/scripts.pory"
	msgbox Town2_PokemonCenter_1F_EventScript_Cooltrainer_Text_0, MSGBOX_NPC
	return


Town2_PokemonCenter_1F_EventScript_AromaLady_Text_0:
# 16 "data/maps/Town2_PokemonCenter_1F/scripts.pory"
	.string "I just love our garden. It makes the\n"
	.string "town smell so nice in the spring!$"

Town2_PokemonCenter_1F_EventScript_Gentleman_Text_0:
# 20 "data/maps/Town2_PokemonCenter_1F/scripts.pory"
	.string "Make sure you heal your pokémon before\n"
	.string "heading to Cedar Rapids. Route 2 can be\l"
	.string "dangerous if you aren't prepared.$"

Town2_PokemonCenter_1F_EventScript_Cooltrainer_Text_0:
# 24 "data/maps/Town2_PokemonCenter_1F/scripts.pory"
	.string "I heard that somebody in this town\n"
	.string "gives great advice for beating the gym\l"
	.string "challenge.$"
