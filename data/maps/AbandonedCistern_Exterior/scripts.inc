AbandonedCistern_Exterior_MapScripts::
	.byte 0


AbandonedCistern_Exterior_EventScript_KeepOutSign::
# 8 "data/maps/AbandonedCistern_Exterior/scripts.pory"
	msgbox AbandonedCistern_Exterior_EventScript_KeepOutSign_Text_0, MSGBOX_SIGN
	return


AbandonedCistern_Exterior_EventScript_GrassIsGreener::
# 16 "data/maps/AbandonedCistern_Exterior/scripts.pory"
	msgbox AbandonedCistern_Exterior_EventScript_GrassIsGreener_Text_0, MSGBOX_NPC
	return


AbandonedCistern_Exterior_EventScript_Bug_Catcher::
# 24 "data/maps/AbandonedCistern_Exterior/scripts.pory"
	trainerbattle_single TRAINER_CISTERN_EXTERIOR_BUG_CATCHER, AbandonedCistern_Exterior_EventScript_Bug_Catcher_Text_0, AbandonedCistern_Exterior_EventScript_Bug_Catcher_Text_1
# 27 "data/maps/AbandonedCistern_Exterior/scripts.pory"
	msgbox AbandonedCistern_Exterior_EventScript_Bug_Catcher_Text_2, MSGBOX_AUTOCLOSE
	return


AbandonedCistern_Exterior_EventScript_Ranger_1::
# 31 "data/maps/AbandonedCistern_Exterior/scripts.pory"
	trainerbattle_single TRAINER_CISTERN_EXTERIOR_RANGER_1, AbandonedCistern_Exterior_EventScript_Ranger_1_Text_0, AbandonedCistern_Exterior_EventScript_Ranger_1_Text_1
# 34 "data/maps/AbandonedCistern_Exterior/scripts.pory"
	msgbox AbandonedCistern_Exterior_EventScript_Ranger_1_Text_2, MSGBOX_AUTOCLOSE
	return


AbandonedCistern_Exterior_EventScript_Ranger_2::
# 38 "data/maps/AbandonedCistern_Exterior/scripts.pory"
	trainerbattle_single TRAINER_CISTERN_EXTERIOR_RANGER_2, AbandonedCistern_Exterior_EventScript_Ranger_2_Text_0, AbandonedCistern_Exterior_EventScript_Ranger_2_Text_1
# 41 "data/maps/AbandonedCistern_Exterior/scripts.pory"
	msgbox AbandonedCistern_Exterior_EventScript_Ranger_2_Text_2, MSGBOX_AUTOCLOSE
	return


AbandonedCistern_Exterior_EventScript_Hiker::
# 45 "data/maps/AbandonedCistern_Exterior/scripts.pory"
	trainerbattle_single TRAINER_CISTERN_EXTERIOR_HIKER, AbandonedCistern_Exterior_EventScript_Hiker_Text_0, AbandonedCistern_Exterior_EventScript_Hiker_Text_1
# 48 "data/maps/AbandonedCistern_Exterior/scripts.pory"
	msgbox AbandonedCistern_Exterior_EventScript_Hiker_Text_2, MSGBOX_AUTOCLOSE
	return


AbandonedCistern_Exterior_EventScript_Collector::
# 52 "data/maps/AbandonedCistern_Exterior/scripts.pory"
	trainerbattle_single TRAINER_CISTERN_EXTERIOR_COLLECTOR, AbandonedCistern_Exterior_EventScript_Collector_Text_0, AbandonedCistern_Exterior_EventScript_Collector_Text_1
# 55 "data/maps/AbandonedCistern_Exterior/scripts.pory"
	msgbox AbandonedCistern_Exterior_EventScript_Collector_Text_2, MSGBOX_AUTOCLOSE
	return


AbandonedCistern_Exterior_EventScript_KeepOutSign_Text_0:
# 8 "data/maps/AbandonedCistern_Exterior/scripts.pory"
	.string "KEEP OUT$"

AbandonedCistern_Exterior_EventScript_GrassIsGreener_Text_0:
# 16 "data/maps/AbandonedCistern_Exterior/scripts.pory"
	.string "The grass is so much greener on the\n"
	.string "other side. I bet there are rare\l"
	.string "pokémon on the other side.$"

AbandonedCistern_Exterior_EventScript_Bug_Catcher_Text_0:
# 25 "data/maps/AbandonedCistern_Exterior/scripts.pory"
	.string "If you go deeper into a forest, you're\n"
	.string "bound to find rare bug pokémon!$"

AbandonedCistern_Exterior_EventScript_Bug_Catcher_Text_1:
# 26 "data/maps/AbandonedCistern_Exterior/scripts.pory"
	.string "Having rare bug pokémon doesn't make\n"
	.string "you a good trainer.$"

AbandonedCistern_Exterior_EventScript_Bug_Catcher_Text_2:
# 27 "data/maps/AbandonedCistern_Exterior/scripts.pory"
	.string "I wonder if the bug pokemon on the\n"
	.string "inside are rarer?$"

AbandonedCistern_Exterior_EventScript_Ranger_1_Text_0:
# 32 "data/maps/AbandonedCistern_Exterior/scripts.pory"
	.string "The pokemon here are much stronger\n"
	.string "than near the path.$"

AbandonedCistern_Exterior_EventScript_Ranger_1_Text_1:
# 33 "data/maps/AbandonedCistern_Exterior/scripts.pory"
	.string "Of course, if you got this far you can\n"
	.string "handle yourself.$"

AbandonedCistern_Exterior_EventScript_Ranger_1_Text_2:
# 34 "data/maps/AbandonedCistern_Exterior/scripts.pory"
	.string "Always be careful when entering a new\n"
	.string "area. You never know what you'll find.$"

AbandonedCistern_Exterior_EventScript_Ranger_2_Text_0:
# 39 "data/maps/AbandonedCistern_Exterior/scripts.pory"
	.string "I found a way inside the cistern. It's\n"
	.string "super dangerous there.$"

AbandonedCistern_Exterior_EventScript_Ranger_2_Text_1:
# 40 "data/maps/AbandonedCistern_Exterior/scripts.pory"
	.string "I managed to get all that way, then lost\n"
	.string "on my way out.$"

AbandonedCistern_Exterior_EventScript_Ranger_2_Text_2:
# 41 "data/maps/AbandonedCistern_Exterior/scripts.pory"
	.string "There's two secrets to getting inside.\n"
	.string "The first one is Cut!$"

AbandonedCistern_Exterior_EventScript_Hiker_Text_0:
# 46 "data/maps/AbandonedCistern_Exterior/scripts.pory"
	.string "I heard there was a cave nearby, but I\n"
	.string "can't seem to find it.$"

AbandonedCistern_Exterior_EventScript_Hiker_Text_1:
# 47 "data/maps/AbandonedCistern_Exterior/scripts.pory"
	.string "Maybe I should do another lap around\n"
	.string "the cistern.$"

AbandonedCistern_Exterior_EventScript_Hiker_Text_2:
# 48 "data/maps/AbandonedCistern_Exterior/scripts.pory"
	.string "If you find the cave, don't tell me\n"
	.string "where it is, I love finding things on my\l"
	.string "own!$"

AbandonedCistern_Exterior_EventScript_Collector_Text_0:
# 53 "data/maps/AbandonedCistern_Exterior/scripts.pory"
	.string "My research indicates the presence of\n"
	.string "some super strong pokémon nearby!$"

AbandonedCistern_Exterior_EventScript_Collector_Text_1:
# 54 "data/maps/AbandonedCistern_Exterior/scripts.pory"
	.string "I just wanted to catch a glimpse of a\n"
	.string "super powerful pokémon.$"

AbandonedCistern_Exterior_EventScript_Collector_Text_2:
# 55 "data/maps/AbandonedCistern_Exterior/scripts.pory"
	.string "I wonder where the super powerful\n"
	.string "pokémon are? I hear they like moist\l"
	.string "grass.$"
