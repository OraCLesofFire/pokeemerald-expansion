CedarForest_MapScripts::
	.byte 0

CedarForest_EventScript_TrailSign::
	msgbox CedarForest_Text_TrailSign, MSGBOX_SIGN
	end

CedarForest_EventScript_RiverSign::
	msgbox CedarForest_Text_RiverSign, MSGBOX_SIGN
	end

CedarForest_Text_RiverSign:
	.string "Cedar River\n"
	.string "“A river that brings new beginnings!”$"

CedarForest_Text_TrailSign:
	.string "Cedar Trail\p"
	.string "{UP_ARROW} Cedar Rapids \n"
	.string "{DOWN_ARROW} Unnamed town$"
