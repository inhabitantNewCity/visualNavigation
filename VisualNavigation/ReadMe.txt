Application is providing solution for indoor navigation suported by Visual Recognation

Deep level of architecture is described in diogram of classes
//todo: describe high level of architecture
databaseAccess:		package for reading Stiker Object from database (it will be inited during starting of application)
defineLocation:		package for getting information about location according to exist Sticker objects in current building plan
imageProcessing:	


Data Base structure: 
Application use Stiker Objects for recognation

Stiker Objects:
	Binded Point:				point where located current Stiker Object
	Orientation Point:			point for define ratation of current object
	Reference to Inv-File:		file describe metrix for current object
	Weight						weight of the current template (should be defined in algorithm or set manualy)

Inv-File:
	File is provide information about invariants for current templates.
	All files should be preconfigurated. Current system doesn't provide posibility to create such templates.
Format:
	{
		"name":		"name_of_template"
		"weight":	"value"
		"contours":
		[
			{
				"name" :	"name_of_contur"
				"weight":	"value"
				"inv_1":	"value_inv_1"
				"inv_2":	"value_inv_2"
				"inv_3":	"value_inv_3"
			}
		]
	}
