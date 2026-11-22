Town2_PokemonCenter_2F_MapScripts::
	.byte 0


Town2_PokemonCenter_2F_EventScript_Worker::
# 4 "data/maps/Town2_PokemonCenter_2F/scripts.pory"
	msgbox Town2_PokemonCenter_2F_EventScript_Worker_Text_0, MSGBOX_NPC
	return


Town2_PokemonCenter_2F_EventScript_Vigoroth_1::
# 8 "data/maps/Town2_PokemonCenter_2F/scripts.pory"
	lock
# 9 "data/maps/Town2_PokemonCenter_2F/scripts.pory"
	faceplayer
# 10 "data/maps/Town2_PokemonCenter_2F/scripts.pory"
	waitse
# 11 "data/maps/Town2_PokemonCenter_2F/scripts.pory"
	playmoncry SPECIES_VIGOROTH, CRY_MODE_NORMAL
# 12 "data/maps/Town2_PokemonCenter_2F/scripts.pory"
	msgbox Town2_PokemonCenter_2F_EventScript_Vigoroth_1_Text_0, MSGBOX_DEFAULT
# 13 "data/maps/Town2_PokemonCenter_2F/scripts.pory"
	waitmoncry
# 14 "data/maps/Town2_PokemonCenter_2F/scripts.pory"
	release
	end


Town2_PokemonCenter_2F_EventScript_Vigoroth_2::
# 19 "data/maps/Town2_PokemonCenter_2F/scripts.pory"
	lock
# 20 "data/maps/Town2_PokemonCenter_2F/scripts.pory"
	faceplayer
# 21 "data/maps/Town2_PokemonCenter_2F/scripts.pory"
	waitse
# 22 "data/maps/Town2_PokemonCenter_2F/scripts.pory"
	playmoncry SPECIES_VIGOROTH, CRY_MODE_NORMAL
# 23 "data/maps/Town2_PokemonCenter_2F/scripts.pory"
	msgbox Town2_PokemonCenter_2F_EventScript_Vigoroth_2_Text_0, MSGBOX_DEFAULT
# 24 "data/maps/Town2_PokemonCenter_2F/scripts.pory"
	waitmoncry
# 25 "data/maps/Town2_PokemonCenter_2F/scripts.pory"
	release
	end


Town2_PokemonCenter_2F_EventScript_Vigoroth_3::
# 29 "data/maps/Town2_PokemonCenter_2F/scripts.pory"
	lock
# 30 "data/maps/Town2_PokemonCenter_2F/scripts.pory"
	faceplayer
# 31 "data/maps/Town2_PokemonCenter_2F/scripts.pory"
	waitse
# 32 "data/maps/Town2_PokemonCenter_2F/scripts.pory"
	playmoncry SPECIES_VIGOROTH, CRY_MODE_NORMAL
# 33 "data/maps/Town2_PokemonCenter_2F/scripts.pory"
	msgbox Town2_PokemonCenter_2F_EventScript_Vigoroth_3_Text_0, MSGBOX_DEFAULT
# 34 "data/maps/Town2_PokemonCenter_2F/scripts.pory"
	waitmoncry
# 35 "data/maps/Town2_PokemonCenter_2F/scripts.pory"
	release
	end


Town2_PokemonCenter_2F_EventScript_Worker_Text_0:
# 4 "data/maps/Town2_PokemonCenter_2F/scripts.pory"
	.string "We're still not quite sure what to do\n"
	.string "with this place.$"

Town2_PokemonCenter_2F_EventScript_Vigoroth_1_Text_0:
# 12 "data/maps/Town2_PokemonCenter_2F/scripts.pory"
	.string "Fugiiiiih!$"

Town2_PokemonCenter_2F_EventScript_Vigoroth_2_Text_0:
# 23 "data/maps/Town2_PokemonCenter_2F/scripts.pory"
	.string "Huggoh, uggo uggo…$"

Town2_PokemonCenter_2F_EventScript_Vigoroth_3_Text_0:
# 33 "data/maps/Town2_PokemonCenter_2F/scripts.pory"
	.string "Groh, Ogghi, Guhh?$"
