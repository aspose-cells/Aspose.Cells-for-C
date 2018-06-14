#pragma once
namespace Aspose {
namespace Cells {
namespace Drawing {
			/// <summary>
			/// Represents office drawing objects type.
			/// </summary>
	enum MsoDrawingType 

	{

			/// <summary>
			/// Group
			/// </summary>
			MsoDrawingType_Group = 0 ,
			/// <summary>
			/// Line
			/// </summary>
			MsoDrawingType_Line = 1 ,
			/// <summary>
			/// Rectangle
			/// </summary>
			MsoDrawingType_Rectangle = 2 ,
			/// <summary>
			/// Oval
			/// </summary>
			MsoDrawingType_Oval = 3 ,
			/// <summary>
			/// Arc
			/// </summary>
			MsoDrawingType_Arc = 4 ,
			/// <summary>
			/// Chart
			/// </summary>
			MsoDrawingType_Chart = 0x05 ,
			/// <summary>
			/// TextBox
			/// </summary>
			MsoDrawingType_TextBox = 0x06 ,
			/// <summary>
			/// Button
			/// </summary>
			MsoDrawingType_Button = 0x07 ,
			/// <summary>
			/// Picture
			/// </summary>
			MsoDrawingType_Picture = 0x08 ,
			/// <summary>
			/// Polygon
			/// </summary>
			MsoDrawingType_Polygon = 0x09 ,
			/// <summary>
			/// CheckBox
			/// </summary>
			MsoDrawingType_CheckBox = 0x0B ,
			/// <summary>
			/// RadioButton
			/// </summary>
			MsoDrawingType_RadioButton = 0x0C ,
			/// <summary>
			/// Label
			/// </summary>
			MsoDrawingType_Label = 0x0E ,
			/// <summary>
			/// DialogBox
			/// </summary>
			MsoDrawingType_DialogBox = 0x0F ,
			/// <summary>
			/// Spinner
			/// </summary>
			MsoDrawingType_Spinner = 0x10 ,
			/// <summary>
			/// ScrollBar
			/// </summary>
			MsoDrawingType_ScrollBar = 0x11 ,
			/// <summary>
			/// ListBox
			/// </summary>
			MsoDrawingType_ListBox = 0x12 ,
			/// <summary>
			/// GroupBox
			/// </summary>
			MsoDrawingType_GroupBox = 0x13 ,
			/// <summary>
			/// ComboBox
			/// </summary>
			MsoDrawingType_ComboBox = 0x14 ,
			/// <summary>
			/// Comment
			/// </summary>
			MsoDrawingType_Comment = 0x19 ,
			/// <summary>
			/// OleObject
			/// </summary>
			MsoDrawingType_OleObject = 0x18 ,
			/// <summary>
			/// Only for preserving the drawing object in the template file.
			/// </summary>
			MsoDrawingType_CellsDrawing = 0x1E ,
			/// <summary>
			/// Only for preserving the drawing object in the xlsx file.
			/// </summary>
			MsoDrawingType_Unknown = 0x1D ,
			/// <summary>
			/// Slicer
			/// </summary>
			MsoDrawingType_Slicer = 0x1F ,
	};


}

}

}
