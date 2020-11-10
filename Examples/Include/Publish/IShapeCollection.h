#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Byte.h"
#include "Aspose.Cells.Systems/IO/Stream.h"
#include "Aspose.Cells.Systems/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			class IShape;
			class ICheckBox;
			class ITextBox;
			class ISpinner;
			class IScrollBar;
			class IRadioButton;
			class IListBox;
			class IComboBox;
			class IGroupBox;
			class IButton;
			class ILabel;
			enum MsoPresetTextEffect;
			enum PresetWordArtStyle;
			class IRectangleShape;
			class IOval;
			class ILineShape;
			enum MsoDrawingType;
			enum PlacementType;
			class IArcShape;
			enum AutoShapeType;
			class IPicture;
			class IOleObject;
			class IShapeCollection;
			class IGroupShape;
		}
	}
}
namespace Aspose {
	namespace Cells {
		namespace Drawing {
			namespace ActiveXControls {
				enum ControlType;
			}
		}
	}
}
namespace Aspose {
	namespace Cells {
		class ICellArea;
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Represents all the shape in a worksheet/chart.
			/// </summary>
	class ASPOSE_CELLS_API IShapeCollection : public Aspose::Cells::Systems::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Gets the shape object at the specific index.
			/// </summary>
			/// <param name="index" />
			/// 
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IShape> 		GetObjectByIndex(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Gets the shape object by the shape image
			/// </summary>
			/// <param name="name" />
			/// 
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IShape> 		GetObjectByIndex(intrusive_ptr<Aspose::Cells::Systems::String> name)=0;
			/// <summary>
			/// Adds and copy a shape to the worksheet..
			/// </summary>
			/// <param name="sourceShape" > Source shape.</param>
			/// <param name="upperLeftRow" >Upper left row index.</param>
			/// <param name="top" >Represents the vertical  offset of checkbox from its left row, in unit of pixel. </param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="left" >Represents the horizontal offset of textbox from its left column, in unit of pixel. </param>
			/// <returns>The new shape object index.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IShape> 		AddCopyIShape(intrusive_ptr<Aspose::Cells::Drawing::IShape> sourceShape , Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 top , Aspose::Cells::Systems::Int32 upperLeftColumn , Aspose::Cells::Systems::Int32 left)=0;
			/// <summary>
			/// Adds a checkbox to the worksheet.
			/// </summary>
			/// <param name="upperLeftRow" >Upper left row index.</param>
			/// <param name="top" >Represents the vertical  offset of checkbox from its left row, in unit of pixel. </param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="left" >Represents the horizontal offset of textbox from its left column, in unit of pixel. </param>
			/// <param name="height" >Height of textbox, in unit of pixel.</param>
			/// <param name="width" >Width of textbox, in unit of pixel.</param>
			/// <returns>The new CheckBox object index.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ICheckBox> 		AddICheckBox(Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 top , Aspose::Cells::Systems::Int32 upperLeftColumn , Aspose::Cells::Systems::Int32 left , Aspose::Cells::Systems::Int32 height , Aspose::Cells::Systems::Int32 width)=0;
			/// <summary>
			/// Adds a text box to the worksheet.
			/// </summary>
			/// <param name="upperLeftRow" > Upper left row index.</param>
			/// <param name="top" >Represents the vertical  offset of textbox from its left row, in unit of pixel. </param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="left" >Represents the horizontal offset of textbox from its left column, in unit of pixel. </param>
			/// <param name="height" >Represents the height of textbox, in unit of pixel. </param>
			/// <param name="width" >Represents the width of textbox, in unit of pixel. </param>
			/// <returns>A <see cref="ITextBox" />
			///  object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ITextBox> 		AddITextBox(Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 top , Aspose::Cells::Systems::Int32 upperLeftColumn , Aspose::Cells::Systems::Int32 left , Aspose::Cells::Systems::Int32 height , Aspose::Cells::Systems::Int32 width)=0;
			/// <summary>
			/// Adds a Spinner to the worksheet.
			/// </summary>
			/// <param name="upperLeftRow" > Upper left row index.</param>
			/// <param name="top" >Represents the vertical  offset of Spinner from its left row, in unit of pixel. </param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="left" >Represents the horizontal offset of Spinner from its left column, in unit of pixel. </param>
			/// <param name="height" >Represents the height of Spinner, in unit of pixel. </param>
			/// <param name="width" >Represents the width of Spinner, in unit of pixel. </param>
			/// <returns>A Spinner object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ISpinner> 		AddISpinner(Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 top , Aspose::Cells::Systems::Int32 upperLeftColumn , Aspose::Cells::Systems::Int32 left , Aspose::Cells::Systems::Int32 height , Aspose::Cells::Systems::Int32 width)=0;
			/// <summary>
			/// Adds a ScrollBar to the worksheet.
			/// </summary>
			/// <param name="upperLeftRow" > Upper left row index.</param>
			/// <param name="top" >Represents the vertical  offset of ScrollBar from its left row, in unit of pixel. </param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="left" >Represents the horizontal offset of ScrollBar from its left column, in unit of pixel. </param>
			/// <param name="height" >Represents the height of ScrollBar, in unit of pixel. </param>
			/// <param name="width" >Represents the width of ScrollBar, in unit of pixel. </param>
			/// <returns>A ScrollBar object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IScrollBar> 		AddIScrollBar(Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 top , Aspose::Cells::Systems::Int32 upperLeftColumn , Aspose::Cells::Systems::Int32 left , Aspose::Cells::Systems::Int32 height , Aspose::Cells::Systems::Int32 width)=0;
			/// <summary>
			/// Adds a RadioButton to the worksheet.
			/// </summary>
			/// <param name="upperLeftRow" > Upper left row index.</param>
			/// <param name="top" >Represents the vertical  offset of RadioButton from its left row, in unit of pixel. </param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="left" >Represents the horizontal offset of RadioButton from its left column, in unit of pixel. </param>
			/// <param name="height" >Represents the height of RadioButton, in unit of pixel. </param>
			/// <param name="width" >Represents the width of RadioButton, in unit of pixel. </param>
			/// <returns>A RadioButton object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IRadioButton> 		AddIRadioButton(Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 top , Aspose::Cells::Systems::Int32 upperLeftColumn , Aspose::Cells::Systems::Int32 left , Aspose::Cells::Systems::Int32 height , Aspose::Cells::Systems::Int32 width)=0;
			/// <summary>
			/// Adds a ListBox to the worksheet.
			/// </summary>
			/// <param name="upperLeftRow" > Upper left row index.</param>
			/// <param name="top" >Represents the vertical  offset of ListBox from its left row, in unit of pixel. </param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="left" >Represents the horizontal offset of ListBox from its left column, in unit of pixel. </param>
			/// <param name="height" >Represents the height of ListBox, in unit of pixel. </param>
			/// <param name="width" >Represents the width of ListBox, in unit of pixel. </param>
			/// <returns>A ListBox object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IListBox> 		AddIListBox(Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 top , Aspose::Cells::Systems::Int32 upperLeftColumn , Aspose::Cells::Systems::Int32 left , Aspose::Cells::Systems::Int32 height , Aspose::Cells::Systems::Int32 width)=0;
			/// <summary>
			/// Adds a ComboBox to the worksheet.
			/// </summary>
			/// <param name="upperLeftRow" > Upper left row index.</param>
			/// <param name="top" >Represents the vertical  offset of ComboBox from its left row, in unit of pixel. </param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="left" >Represents the horizontal offset of ComboBox from its left column, in unit of pixel. </param>
			/// <param name="height" >Represents the height of ComboBox, in unit of pixel. </param>
			/// <param name="width" >Represents the width of ComboBox, in unit of pixel. </param>
			/// <returns>A ComboBox object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IComboBox> 		AddIComboBox(Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 top , Aspose::Cells::Systems::Int32 upperLeftColumn , Aspose::Cells::Systems::Int32 left , Aspose::Cells::Systems::Int32 height , Aspose::Cells::Systems::Int32 width)=0;
			/// <summary>
			/// Adds a GroupBox to the worksheet.
			/// </summary>
			/// <param name="upperLeftRow" > Upper left row index.</param>
			/// <param name="top" >Represents the vertical  offset of GroupBox from its left row, in unit of pixel. </param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="left" >Represents the horizontal offset of GroupBox from its left column, in unit of pixel. </param>
			/// <param name="height" >Represents the height of GroupBox, in unit of pixel. </param>
			/// <param name="width" >Represents the width of GroupBox, in unit of pixel. </param>
			/// <returns>A GroupBox object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IGroupBox> 		AddIGroupBox(Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 top , Aspose::Cells::Systems::Int32 upperLeftColumn , Aspose::Cells::Systems::Int32 left , Aspose::Cells::Systems::Int32 height , Aspose::Cells::Systems::Int32 width)=0;
			/// <summary>
			/// Adds a Button to the worksheet.
			/// </summary>
			/// <param name="upperLeftRow" > Upper left row index.</param>
			/// <param name="top" >Represents the vertical  offset of Button from its left row, in unit of pixel. </param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="left" >Represents the horizontal offset of Button from its left column, in unit of pixel. </param>
			/// <param name="height" >Represents the height of Button, in unit of pixel. </param>
			/// <param name="width" >Represents the width of Button, in unit of pixel. </param>
			/// <returns>A Button object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IButton> 		AddIButton(Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 top , Aspose::Cells::Systems::Int32 upperLeftColumn , Aspose::Cells::Systems::Int32 left , Aspose::Cells::Systems::Int32 height , Aspose::Cells::Systems::Int32 width)=0;
			/// <summary>
			/// Adds a Label to the worksheet.
			/// </summary>
			/// <param name="upperLeftRow" > Upper left row index.</param>
			/// <param name="top" >Represents the vertical  offset of Label from its left row, in unit of pixel. </param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="left" >Represents the horizontal offset of Label from its left column, in unit of pixel. </param>
			/// <param name="height" >Represents the height of Label, in unit of pixel. </param>
			/// <param name="width" >Represents the width of Label, in unit of pixel. </param>
			/// <returns>A Label object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ILabel> 		AddILabel(Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 top , Aspose::Cells::Systems::Int32 upperLeftColumn , Aspose::Cells::Systems::Int32 left , Aspose::Cells::Systems::Int32 height , Aspose::Cells::Systems::Int32 width)=0;
			/// <summary>
			/// Adds a label to the chart.
			/// </summary>
			/// <param name="top" >Represents the vertical offset of label from the upper left corner in units of 1/4000 of the chart area. </param>
			/// <param name="left" >Represents the vertical offset of label from the upper left corner in units of 1/4000 of the chart area.</param>
			/// <param name="height" >Represents the height of label, in units of 1/4000 of the chart area.</param>
			/// <param name="width" >Represents the width of label, in units of 1/4000 of the chart area.</param>
			/// <returns>A new Label object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ILabel> 		AddILabelInChart(Aspose::Cells::Systems::Int32 top , Aspose::Cells::Systems::Int32 left , Aspose::Cells::Systems::Int32 height , Aspose::Cells::Systems::Int32 width)=0;
			/// <summary>
			/// Adds a textbox to the chart.
			/// </summary>
			/// <param name="top" >Represents the vertical offset of textbox from the upper left corner in units of 1/4000 of the chart area. </param>
			/// <param name="left" >Represents the vertical offset of textbox from the upper left corner in units of 1/4000 of the chart area.</param>
			/// <param name="height" >Represents the height of textbox, in units of 1/4000 of the chart area.</param>
			/// <param name="width" >Represents the width of textbox, in units of 1/4000 of the chart area.</param>
			/// <returns>A TextBox object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ITextBox> 		AddITextBoxInChart(Aspose::Cells::Systems::Int32 top , Aspose::Cells::Systems::Int32 left , Aspose::Cells::Systems::Int32 height , Aspose::Cells::Systems::Int32 width)=0;
			/// <summary>
			/// Inserts a WordArt object to the chart
			/// </summary>
			/// <param name="effect" >The mso preset text effect type.</param>
			/// <param name="text" >The WordArt text.</param>
			/// <param name="fontName" >The font name.</param>
			/// <param name="size" >The font size</param>
			/// <param name="fontBold" >Indicates whether font is bold.</param>
			/// <param name="fontItalic" >Indicates whether font is italic.</param>
			/// <param name="top" >Represents the vertical offset of shape from the upper left corner in units of 1/4000 of the chart area. </param>
			/// <param name="left" >Represents the vertical offset of shape from the upper left corner in units of 1/4000 of the chart area.</param>
			/// <param name="height" >Represents the height of shape, in units of 1/4000 of the chart area.</param>
			/// <param name="width" >Represents the width of shape, in units of 1/4000 of the chart area.</param>
			/// <returns>Returns a Shape object that represents the new WordArt object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IShape> 		AddITextEffectInChart(Aspose::Cells::Drawing::MsoPresetTextEffect effect , intrusive_ptr<Aspose::Cells::Systems::String> text , intrusive_ptr<Aspose::Cells::Systems::String> fontName , Aspose::Cells::Systems::Int32 size , bool fontBold , bool fontItalic , Aspose::Cells::Systems::Int32 top , Aspose::Cells::Systems::Int32 left , Aspose::Cells::Systems::Int32 height , Aspose::Cells::Systems::Int32 width)=0;
			/// <summary>
			/// Inserts a WordArt object.
			/// </summary>
			/// <param name="effect" >The mso preset text effect type.</param>
			/// <param name="text" >The WordArt text.</param>
			/// <param name="fontName" >The font name.</param>
			/// <param name="size" >The font size</param>
			/// <param name="fontBold" >Indicates whether font is bold.</param>
			/// <param name="fontItalic" >Indicates whether font is italic.</param>
			/// <param name="upperLeftRow" > Upper left row index.</param>
			/// <param name="top" >Represents the vertical  offset of shape from its left row, in unit of pixel. </param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="left" >Represents the horizontal offset of shape from its left column, in unit of pixel. </param>
			/// <param name="height" >Represents the height of shape, in unit of pixel. </param>
			/// <param name="width" >Represents the width of shape, in unit of pixel. </param>
			/// <returns>Returns a Shape object that represents the new WordArt object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IShape> 		AddITextEffect(Aspose::Cells::Drawing::MsoPresetTextEffect effect , intrusive_ptr<Aspose::Cells::Systems::String> text , intrusive_ptr<Aspose::Cells::Systems::String> fontName , Aspose::Cells::Systems::Int32 size , bool fontBold , bool fontItalic , Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 top , Aspose::Cells::Systems::Int32 upperLeftColumn , Aspose::Cells::Systems::Int32 left , Aspose::Cells::Systems::Int32 height , Aspose::Cells::Systems::Int32 width)=0;
			/// <summary>
			/// Adds preset WordArt since Excel 2007.s
			/// </summary>
			/// <param name="style" >The preset WordArt Style.</param>
			/// <param name="text" >The text.</param>
			/// <param name="upperLeftRow" > Upper left row index.</param>
			/// <param name="top" >Represents the vertical  offset of shape from its left row, in unit of pixel. </param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="left" >Represents the horizontal offset of shape from its left column, in unit of pixel. </param>
			/// <param name="height" >Represents the height of shape, in unit of pixel. </param>
			/// <param name="width" >Represents the width of shape, in unit of pixel. </param>
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IShape> 		AddIWordArt(Aspose::Cells::Drawing::PresetWordArtStyle style , intrusive_ptr<Aspose::Cells::Systems::String> text , Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 top , Aspose::Cells::Systems::Int32 upperLeftColumn , Aspose::Cells::Systems::Int32 left , Aspose::Cells::Systems::Int32 height , Aspose::Cells::Systems::Int32 width)=0;
			/// <summary>
			/// Adds a RectangleShape to the worksheet.
			/// </summary>
			/// <param name="upperLeftRow" > Upper left row index.</param>
			/// <param name="top" >Represents the vertical  offset of RectangleShape from its left row, in unit of pixel. </param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="left" >Represents the horizontal offset of RectangleShape from its left column, in unit of pixel. </param>
			/// <param name="height" >Represents the height of RectangleShape, in unit of pixel. </param>
			/// <param name="width" >Represents the width of RectangleShape, in unit of pixel. </param>
			/// <returns>A RectangleShape object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IRectangleShape> 		AddIRectangle(Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 top , Aspose::Cells::Systems::Int32 upperLeftColumn , Aspose::Cells::Systems::Int32 left , Aspose::Cells::Systems::Int32 height , Aspose::Cells::Systems::Int32 width)=0;
			/// <summary>
			/// Adds a Oval to the worksheet.
			/// </summary>
			/// <param name="upperLeftRow" > Upper left row index.</param>
			/// <param name="top" >Represents the vertical  offset of Oval from its left row, in unit of pixel. </param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="left" >Represents the horizontal offset of Oval from its left column, in unit of pixel. </param>
			/// <param name="height" >Represents the height of Oval, in unit of pixel. </param>
			/// <param name="width" >Represents the width of Oval, in unit of pixel. </param>
			/// <returns>A Oval object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IOval> 		AddIOval(Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 top , Aspose::Cells::Systems::Int32 upperLeftColumn , Aspose::Cells::Systems::Int32 left , Aspose::Cells::Systems::Int32 height , Aspose::Cells::Systems::Int32 width)=0;
			/// <summary>
			/// Adds a LineShape to the worksheet.
			/// </summary>
			/// <param name="upperLeftRow" > Upper left row index.</param>
			/// <param name="top" >Represents the vertical  offset of LineShape from its left row, in unit of pixel. </param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="left" >Represents the horizontal offset of LineShape from its left column, in unit of pixel. </param>
			/// <param name="height" >Represents the height of LineShape, in unit of pixel. </param>
			/// <param name="width" >Represents the width of LineShape, in unit of pixel. </param>
			/// <returns>A LineShape object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ILineShape> 		AddILine(Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 top , Aspose::Cells::Systems::Int32 upperLeftColumn , Aspose::Cells::Systems::Int32 left , Aspose::Cells::Systems::Int32 height , Aspose::Cells::Systems::Int32 width)=0;
			/// <summary>
			/// Adds a free floating shape to the worksheet.Only applies for line/image shape.
			/// </summary>
			/// <param name="type" >The shape type.</param>
			/// <param name="top" >Represents the vertical  offset of shape from the worksheet's top row, in unit of pixel.</param>
			/// <param name="left" >Represents the horizontal offset of shape from the worksheet's left column, in unit of pixel.</param>
			/// <param name="height" >Represents the height of LineShape, in unit of pixel. </param>
			/// <param name="width" >Represents the width of LineShape, in unit of pixel. </param>
			/// <param name="imageData" >The image data,only applies for the picture.</param>
			/// <param name="isOriginalSize" >Whether the shape use original size if the shape is image.</param>
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IShape> 		AddFreeFloatingIShape(Aspose::Cells::Drawing::MsoDrawingType type , Aspose::Cells::Systems::Int32 top , Aspose::Cells::Systems::Int32 left , Aspose::Cells::Systems::Int32 height , Aspose::Cells::Systems::Int32 width , intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> imageData , bool isOriginalSize)=0;
			/// <summary>
			/// Add a shape to chart .All unit is 1/4000 of chart area.
			/// </summary>
			/// <param name="type" >The drawing type.</param>
			/// <param name="placement" >the placement type.</param>
			/// <param name="left" >In unit of 1/4000 chart area width.</param>
			/// <param name="top" >In unit of 1/4000 chart area height.</param>
			/// <param name="right" >In unit of 1/4000 chart area width.</param>
			/// <param name="bottom" >In unit of 1/4000 chart area height.</param>
			/// <param name="imageData" >If the shape is not a picture or ole object,imageData should be null.</param>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IShape> 		AddIShapeInChart(Aspose::Cells::Drawing::MsoDrawingType type , Aspose::Cells::Drawing::PlacementType placement , Aspose::Cells::Systems::Int32 left , Aspose::Cells::Systems::Int32 top , Aspose::Cells::Systems::Int32 right , Aspose::Cells::Systems::Int32 bottom , intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> imageData)=0;
			/// <summary>
			/// Add a shape to chart .All unit is 1/4000 of chart area.
			/// </summary>
			/// <param name="type" >The drawing type.</param>
			/// <param name="placement" >the placement type.</param>
			/// <param name="left" >In unit of 1/4000 chart area width.</param>
			/// <param name="top" >In unit of 1/4000 chart area height.</param>
			/// <param name="right" >In unit of 1/4000 chart area width.</param>
			/// <param name="bottom" >In unit of 1/4000 chart area height.</param>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IShape> 		AddIShapeInChart(Aspose::Cells::Drawing::MsoDrawingType type , Aspose::Cells::Drawing::PlacementType placement , Aspose::Cells::Systems::Int32 left , Aspose::Cells::Systems::Int32 top , Aspose::Cells::Systems::Int32 right , Aspose::Cells::Systems::Int32 bottom)=0;
			/// <summary>
			/// Adds a ArcShape to the worksheet.
			/// </summary>
			/// <param name="upperLeftRow" > Upper left row index.</param>
			/// <param name="top" >Represents the vertical  offset of ArcShape from its left row, in unit of pixel. </param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="left" >Represents the horizontal offset of ArcShape from its left column, in unit of pixel. </param>
			/// <param name="height" >Represents the height of ArcShape, in unit of pixel. </param>
			/// <param name="width" >Represents the width of ArcShape, in unit of pixel. </param>
			/// <returns>A ArcShape object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IArcShape> 		AddIArc(Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 top , Aspose::Cells::Systems::Int32 upperLeftColumn , Aspose::Cells::Systems::Int32 left , Aspose::Cells::Systems::Int32 height , Aspose::Cells::Systems::Int32 width)=0;
			/// <summary>
			/// Adds a Shape to the worksheet.
			/// </summary>
			/// <param name="type" >Mso drawing type.</param>
			/// <param name="upperLeftRow" > Upper left row index.</param>
			/// <param name="top" >Represents the vertical  offset of Shape from its left row, in unit of pixel. </param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="left" >Represents the horizontal offset of Shape from its left column, in unit of pixel. </param>
			/// <param name="height" >Represents the height of Shape, in unit of pixel. </param>
			/// <param name="width" >Represents the width of Shape, in unit of pixel. </param>
			/// <returns>A Shape object.</returns>
			/// <remarks>The type could not be Chart/Comment/Picuter/OleObject/Polygon/DialogBox</remarks>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IShape> 		AddIShape(Aspose::Cells::Drawing::MsoDrawingType type , Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 top , Aspose::Cells::Systems::Int32 upperLeftColumn , Aspose::Cells::Systems::Int32 left , Aspose::Cells::Systems::Int32 height , Aspose::Cells::Systems::Int32 width)=0;
			/// <summary>
			/// Adds a AutoShape to the worksheet.
			/// </summary>
			/// <param name="type" >Auto shape type.</param>
			/// <param name="upperLeftRow" > Upper left row index.</param>
			/// <param name="top" >Represents the vertical  offset of Shape from its left row, in unit of pixel. </param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="left" >Represents the horizontal offset of Shape from its left column, in unit of pixel. </param>
			/// <param name="height" >Represents the height of Shape, in unit of pixel. </param>
			/// <param name="width" >Represents the width of Shape, in unit of pixel. </param>
			/// <returns>A Shape object.</returns>
			/// <remarks>The type could not be Chart/Comment/Picuter/OleObject/Polygon/DialogBox</remarks>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IShape> 		AddAutoIShape(Aspose::Cells::Drawing::AutoShapeType type , Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 top , Aspose::Cells::Systems::Int32 upperLeftColumn , Aspose::Cells::Systems::Int32 left , Aspose::Cells::Systems::Int32 height , Aspose::Cells::Systems::Int32 width)=0;
			/// <summary>
			/// Adds a AutoShape to the chart.
			/// </summary>
			/// <param name="type" >Auto shape type.</param>
			/// <param name="top" >Represents the vertical offset of textbox from the upper left corner in units of 1/4000 of the chart area. </param>
			/// <param name="left" >Represents the vertical offset of textbox from the upper left corner in units of 1/4000 of the chart area.</param>
			/// <param name="height" >Represents the height of textbox, in units of 1/4000 of the chart area.</param>
			/// <param name="width" >Represents the width of textbox, in units of 1/4000 of the chart area.</param>
			/// <returns>Returns a shape objct.</returns>
			/// <remarks>The type could not be Chart/Comment/Picuter/OleObject/Polygon/DialogBox</remarks>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IShape> 		AddAutoIShapeInChart(Aspose::Cells::Drawing::AutoShapeType type , Aspose::Cells::Systems::Int32 top , Aspose::Cells::Systems::Int32 left , Aspose::Cells::Systems::Int32 height , Aspose::Cells::Systems::Int32 width)=0;
			/// <summary>
			/// Creates an Activex Control.
			/// </summary>
			/// <param name="type" >The type of the control.</param>
			/// <param name="topRow" > Upper left row index.</param>
			/// <param name="top" >Represents the vertical  offset of Shape from its left row, in unit of pixel. </param>
			/// <param name="leftColumn" >Upper left column index.</param>
			/// <param name="left" >Represents the horizontal offset of Shape from its left column, in unit of pixel. </param>
			/// <param name="height" >Represents the height of Shape, in unit of pixel. </param>
			/// <param name="width" >Represents the width of Shape, in unit of pixel. </param>
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IShape> 		AddIActiveXControl(Aspose::Cells::Drawing::ActiveXControls::ControlType type , Aspose::Cells::Systems::Int32 topRow , Aspose::Cells::Systems::Int32 top , Aspose::Cells::Systems::Int32 leftColumn , Aspose::Cells::Systems::Int32 left , Aspose::Cells::Systems::Int32 width , Aspose::Cells::Systems::Int32 height)=0;
			/// <summary>
			/// Adds a picture to the collection.
			/// </summary>
			/// <param name="upperLeftRow" >Upper left row index.</param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="lowerRightRow" >Lower right row index</param>
			/// <param name="lowerRightColumn" >Lower right column index</param>
			/// <param name="stream" >Stream object which contains the image data.</param>
			/// <returns><see cref="Picture" />
			///  Picture object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IPicture> 		AddIPicture(Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 upperLeftColumn , Aspose::Cells::Systems::Int32 lowerRightRow , Aspose::Cells::Systems::Int32 lowerRightColumn , intrusive_ptr<Aspose::Cells::Systems::IO::Stream> stream)=0;
			/// <summary>
			/// Adds a picture to the collection.
			/// </summary>
			/// <param name="upperLeftRow" >Upper left row index.</param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="stream" >Stream object which contains the image data.</param>
			/// <param name="widthScale" >Scale of image width, a percentage.</param>
			/// <param name="heightScale" >Scale of image width, a percentage.</param>
			/// <returns><see cref="IPicture" />
			///  Picture object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IPicture> 		AddIPicture(Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 upperLeftColumn , intrusive_ptr<Aspose::Cells::Systems::IO::Stream> stream , Aspose::Cells::Systems::Int32 widthScale , Aspose::Cells::Systems::Int32 heightScale)=0;
			/// <summary>
			/// Add a linked picture.
			/// </summary>
			/// <param name="upperLeftRow" >Upper left row index.</param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="height" >The height of the shape. In unit of pixels</param>
			/// <param name="width" >The width of the shape. In unit of pixels</param>
			/// <param name="sourceFullName" >
			/// The path and name of the source file for the linked image</param>
			/// <returns><see cref="IPicture" />
			///  Picture object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IPicture> 		AddLinkedIPicture(Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 upperLeftColumn , Aspose::Cells::Systems::Int32 height , Aspose::Cells::Systems::Int32 width , intrusive_ptr<Aspose::Cells::Systems::String> sourceFullName)=0;
			/// <summary>
			/// Add a linked picture.
			/// </summary>
			/// <param name="upperLeftRow" >Upper left row index.</param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="height" >The height of the shape. In unit of pixels</param>
			/// <param name="width" >The width of the shape. In unit of pixels</param>
			/// <param name="sourceFullName" >
			/// The path and name of the source file for the linked image</param>
			/// <returns><see cref="IPicture" />
			///  Picture object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IOleObject> 		AddIOleObjectWithLinkedImage(Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 upperLeftColumn , Aspose::Cells::Systems::Int32 height , Aspose::Cells::Systems::Int32 width , intrusive_ptr<Aspose::Cells::Systems::String> sourceFullName)=0;
			/// <summary>
			/// Adds a picture to the chart.
			/// </summary>
			/// <param name="top" >Represents the vertical offset of shape from the upper left corner in units of 1/4000 of the chart area. </param>
			/// <param name="left" >Represents the vertical offset of shape from the upper left corner in units of 1/4000 of the chart area.</param>
			/// <param name="stream" >Stream object which contains the image data.</param>
			/// <param name="widthScale" >Scale of image width, a percentage.</param>
			/// <param name="heightScale" >Scale of image width, a percentage.</param>
			/// <returns>Returns a Picture objct.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IPicture> 		AddIPictureInChart(Aspose::Cells::Systems::Int32 top , Aspose::Cells::Systems::Int32 left , intrusive_ptr<Aspose::Cells::Systems::IO::Stream> stream , Aspose::Cells::Systems::Int32 widthScale , Aspose::Cells::Systems::Int32 heightScale)=0;
			/// <summary>
			/// 
			/// </summary>
			/// <param name="upperLeftRow" />
			/// 
			/// <param name="top" />
			/// 
			/// <param name="upperLeftColumn" />
			/// 
			/// <param name="left" />
			/// 
			/// <param name="height" />
			/// 
			/// <param name="width" />
			/// 
			/// <param name="imageData" />
			/// 
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IOleObject> 		AddIOleObject(Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 top , Aspose::Cells::Systems::Int32 upperLeftColumn , Aspose::Cells::Systems::Int32 left , Aspose::Cells::Systems::Int32 height , Aspose::Cells::Systems::Int32 width , intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> imageData)=0;
			/// <summary>
			/// Copy all comments in the range.
			/// </summary>
			/// <param name="shapes" >The source shapes.</param>
			/// <param name="ca" >The source range.</param>
			/// <param name="destRow" >The dest range start row.</param>
			/// <param name="destColumn" >The dest range start column.</param>
			 virtual void 		CopyICommentsInRange(intrusive_ptr<Aspose::Cells::Drawing::IShapeCollection> shapes , intrusive_ptr<Aspose::Cells::ICellArea> ca , Aspose::Cells::Systems::Int32 destRow , Aspose::Cells::Systems::Int32 destColumn)=0;
			/// <summary>
			/// Copy shapes in the range to destination range.
			/// </summary>
			/// <param name="sourceShapes" >Source shapes.</param>
			/// <param name="ca" >The source range.</param>
			/// <param name="destRow" >The dest row index of the dest range.</param>
			/// <param name="destColumn" >The dest column of the dest range.</param>
			/// <param name="isContained" >Whether only copy the shapes which are contained in the range.
			/// If true,only copies the shapes in the range. 
			/// Otherwise,it works as MS Office.</param>
			 virtual void 		CopyIShapesInRange(intrusive_ptr<Aspose::Cells::Drawing::IShapeCollection> sourceShapes , intrusive_ptr<Aspose::Cells::ICellArea> ca , Aspose::Cells::Systems::Int32 destRow , Aspose::Cells::Systems::Int32 destColumn , bool isContained)=0;
			/// <summary>
			/// Delete shapes in the range.Comment shapes will not be deleted.
			/// </summary>
			/// <param name="ca" >The range.If the shapes are contained in the range, they will be removed.</param>
			 virtual void 		DeleteIShapesInRange(intrusive_ptr<Aspose::Cells::ICellArea> ca)=0;
			/// <summary>
			/// Delete a shape. If the shape is in the group or is a comment shape, it will not be deleted.
			/// </summary>
			/// <param name="shape" />
			/// 
			 virtual void 		DeleteIShape(intrusive_ptr<Aspose::Cells::Drawing::IShape> shape)=0;
			/// <summary>
			/// Group the shapes.
			/// </summary>
			/// <param name="groupItems" >the group items.</param>
			/// <returns>Return the group shape.</returns>
			/// <remarks>
			/// 
			/// The shape in the groupItems should not be grouped.
			/// The shape must be in this Shapes collection.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IGroupShape> 		GroupIShapes(intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Drawing::IShape*>> groupItems)=0;
			/// <summary>
			/// Ungroups the shape items.
			/// </summary>
			/// <param name="group" >The group shape.</param>
			/// <remarks>If the group shape is grouped by another group shape,nothing will be done.</remarks>
			 virtual void 		UngroupIShapes(intrusive_ptr<Aspose::Cells::Drawing::IGroupShape> group)=0;
			/// <summary>
			/// Remove the shape.
			/// </summary>
			/// <param name="index" >The index of the shape.</param>
			 virtual void RemoveAt(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Remove the shape.
			/// </summary>
			/// <param name="shape" />
			/// 
			 virtual void 		RemoveIShape(intrusive_ptr<Aspose::Cells::Drawing::IShape> shape)=0;
			/// <summary>
			/// Clear all shapes.
			/// </summary>
			 virtual void Clear()=0;
			/// <summary>
			/// Update the selected value by the value of the linked cell of the shapes.
			/// </summary>
			 virtual void UpdateSelectedValue()=0;

	};
}
}
}
