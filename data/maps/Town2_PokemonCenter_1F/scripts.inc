Town2_PokemonCenter_1F_MapScripts::
# 2 "data/maps/Town2_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Town2_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 5 "data/maps/Town2_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

Town2_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Town2_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_TOWN2
	return


Town2_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/Town2_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_TOWN2_NURSE
# 16 "data/maps/Town2_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/Town2_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/Town2_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/Town2_PokemonCenter_1F/scripts.pory"
	release
	return


Town2_PokemonCenter_1F_EventScript_AromaLady::
# 23 "data/maps/Town2_PokemonCenter_1F/scripts.pory"
	msgbox Town2_PokemonCenter_1F_EventScript_AromaLady_Text_0, MSGBOX_NPC
	return


Town2_PokemonCenter_1F_EventScript_Gentleman::
# 27 "data/maps/Town2_PokemonCenter_1F/scripts.pory"
	msgbox Town2_PokemonCenter_1F_EventScript_Gentleman_Text_0, MSGBOX_NPC
	return


Town2_PokemonCenter_1F_EventScript_Cooltrainer::
# 31 "data/maps/Town2_PokemonCenter_1F/scripts.pory"
	msgbox Town2_PokemonCenter_1F_EventScript_Cooltrainer_Text_0, MSGBOX_NPC
	return


Town2_PokemonCenter_1F_EventScript_AromaLady_Text_0:
# 23 "data/maps/Town2_PokemonCenter_1F/scripts.pory"
	.string "I just love our garden. It makes the\n"
	.string "town smell so nice in the spring!$"

Town2_PokemonCenter_1F_EventScript_Gentleman_Text_0:
# 27 "data/maps/Town2_PokemonCenter_1F/scripts.pory"
	.string "Make sure you heal your pokémon before\n"
	.string "heading to Cedar Rapids. Route 2 can be\l"
	.string "dangerous if you aren't prepared.$"

Town2_PokemonCenter_1F_EventScript_Cooltrainer_Text_0:
# 31 "data/maps/Town2_PokemonCenter_1F/scripts.pory"
	.string "I heard that somebody in this town\n"
	.string "gives great advice for beating the gym\l"
	.string "challenge.$"
