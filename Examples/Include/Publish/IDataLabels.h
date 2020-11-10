#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "IChartTextFrame.h"

namespace Aspose {
	namespace Cells {
		namespace Charts {
			enum BackgroundMode;
			enum DataLablesSeparatorType;
			enum LabelPositionType;
		}
	}
}
namespace Aspose {
	namespace Cells {
		class IFont;
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			///  Encapsulates a collection of all the DataLabel objects for the specified Series.
			///  </summary>
	class ASPOSE_CELLS_API IDataLabels : virtual public Aspose::Cells::Charts::IChartTextFrame
	{
		public:
			/// <summary>
			/// Indicates the text is auto generated.
			/// </summary>
			  virtual bool IsAutoText()=0;
			/// <summary>
			/// Indicates the text is auto generated.
			/// </summary>
			  virtual void SetAutoText(bool value)=0;
			/// <summary>
			/// Gets or sets the text of a frame's title.
			/// </summary>
			  virtual intrusive_ptr<Aspose::Cells::Systems::String> GetText()=0;
			/// <summary>
			/// Gets or sets the text of a frame's title.
			/// </summary>
			  virtual void SetText(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets or sets a value indicating whether the text is wrapped.
			/// </summary>
			  virtual bool IsTextWrapped()=0;
			/// <summary>
			/// Gets or sets a value indicating whether the text is wrapped.
			/// </summary>
			  virtual void SetTextWrapped(bool value)=0;
			/// <summary>
			/// Gets and sets the display mode of the background
			/// </summary>
			 virtual Aspose::Cells::Charts::BackgroundMode GetBackgroundMode()=0;
			/// <summary>
			/// Gets and sets the display mode of the background
			/// </summary>
			 virtual void SetBackgroundMode(Aspose::Cells::Charts::BackgroundMode value)=0;
			/// <summary>
			/// Represents a specified chart's data label values display behavior. True displays the values. False to hide. 
			/// </summary>
			 virtual bool IsValueShown()=0;
			/// <summary>
			/// Represents a specified chart's data label values display behavior. True displays the values. False to hide. 
			/// </summary>
			 virtual void SetValueShown(bool value)=0;
			/// <summary>
			/// Represents a specified chart's data label values display behavior. True displays the values. False to hide. 
			/// </summary>
			 virtual bool GetShowValue()=0;
			/// <summary>
			/// Represents a specified chart's data label values display behavior. True displays the values. False to hide. 
			/// </summary>
			 virtual void SetShowValue(bool value)=0;
			/// <summary>
			/// Indicates whether showing cell range as the data labels. 
			/// </summary>
			 virtual bool GetShowCellRange()=0;
			/// <summary>
			/// Indicates whether showing cell range as the data labels. 
			/// </summary>
			 virtual void SetShowCellRange(bool value)=0;
			/// <summary>
			/// Represents a specified chart's data label percentage value display behavior. 
			/// True displays the percentage value. False to hide. 
			/// </summary>
			 virtual bool IsPercentageShown()=0;
			/// <summary>
			/// Represents a specified chart's data label percentage value display behavior. 
			/// True displays the percentage value. False to hide. 
			/// </summary>
			 virtual void SetPercentageShown(bool value)=0;
			/// <summary>
			/// Represents a specified chart's data label percentage value display behavior. True displays the percentage value. False to hide. 
			/// </summary>
			 virtual bool GetShowPercentage()=0;
			/// <summary>
			/// Represents a specified chart's data label percentage value display behavior. True displays the percentage value. False to hide. 
			/// </summary>
			 virtual void SetShowPercentage(bool value)=0;
			/// <summary>
			/// Represents a specified chart's data label percentage value display behavior. True displays the percentage value. False to hide. 
			/// </summary>
			 virtual bool IsBubbleSizeShown()=0;
			/// <summary>
			/// Represents a specified chart's data label percentage value display behavior. True displays the percentage value. False to hide. 
			/// </summary>
			 virtual void SetBubbleSizeShown(bool value)=0;
			/// <summary>
			/// Represents a specified chart's data label percentage value display behavior. True displays the percentage value. False to hide. 
			/// </summary>
			 virtual bool GetShowBubbleSize()=0;
			/// <summary>
			/// Represents a specified chart's data label percentage value display behavior. True displays the percentage value. False to hide. 
			/// </summary>
			 virtual void SetShowBubbleSize(bool value)=0;
			/// <summary>
			/// Represents a specified chart's data label category name display behavior.True to display the category name for the data labels on a chart. False to hide.
			/// </summary>
			 virtual bool GetShowCategoryName()=0;
			/// <summary>
			/// Represents a specified chart's data label category name display behavior.True to display the category name for the data labels on a chart. False to hide.
			/// </summary>
			 virtual void SetShowCategoryName(bool value)=0;
			/// <summary>
			/// Represents a specified chart's data label category name display behavior.True to display the category name for the data labels on a chart. False to hide.
			/// </summary>
			 virtual bool IsCategoryNameShown()=0;
			/// <summary>
			/// Represents a specified chart's data label category name display behavior.True to display the category name for the data labels on a chart. False to hide.
			/// </summary>
			 virtual void SetCategoryNameShown(bool value)=0;
			/// <summary>
			/// Returns or sets a Boolean to indicate the series name display behavior for the data labels on a chart.
			/// True to show the series name. False to hide.
			/// </summary>
			 virtual bool IsSeriesNameShown()=0;
			/// <summary>
			/// Returns or sets a Boolean to indicate the series name display behavior for the data labels on a chart.
			/// True to show the series name. False to hide.
			/// </summary>
			 virtual void SetSeriesNameShown(bool value)=0;
			/// <summary>
			/// Returns or sets a Boolean to indicate the series name display behavior for the data labels on a chart.
			/// True to show the series name. False to hide.
			/// </summary>
			 virtual bool GetShowSeriesName()=0;
			/// <summary>
			/// Returns or sets a Boolean to indicate the series name display behavior for the data labels on a chart.
			/// True to show the series name. False to hide.
			/// </summary>
			 virtual void SetShowSeriesName(bool value)=0;
			/// <summary>
			/// Represents a specified chart's data label legend key display behavior.True if the data label legend key is visible.
			/// </summary>
			 virtual bool IsLegendKeyShown()=0;
			/// <summary>
			/// Represents a specified chart's data label legend key display behavior.True if the data label legend key is visible.
			/// </summary>
			 virtual void SetLegendKeyShown(bool value)=0;
			/// <summary>
			/// Represents a specified chart's data label legend key display behavior.
			/// True if the data label legend key is visible.
			/// </summary>
			 virtual bool GetShowLegendKey()=0;
			/// <summary>
			/// Represents a specified chart's data label legend key display behavior.
			/// True if the data label legend key is visible.
			/// </summary>
			 virtual void SetShowLegendKey(bool value)=0;
			/// <summary>
			/// Represents the format string for the DataLabels object. 
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> Get_NumberFormat()=0;
			/// <summary>
			/// Represents the format string for the DataLabels object. 
			/// </summary>
			 virtual void SetNumberFormat(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets ans sets the built-in number format.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetNumber()=0;
			/// <summary>
			/// Gets ans sets the built-in number format.
			/// </summary>
			 virtual void SetNumber(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// True if the number format is linked to the cells 
			/// (so that the number format changes in the labels when it changes in the cells). 
			/// </summary>
			 virtual bool GetNumberFormatLinked()=0;
			/// <summary>
			/// True if the number format is linked to the cells 
			/// (so that the number format changes in the labels when it changes in the cells). 
			/// </summary>
			 virtual void SetNumberFormatLinked(bool value)=0;
			/// <summary>
			/// Gets the font of the DataLabels;
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IFont> 		GetIFont()=0;
			/// <summary>
			/// Sets or returns the separator type used for the data labels on a chart.
			/// </summary>
			/// <remarks>
			/// Sets separator type will specify standard separator for datalabels.
			/// Space is " "
			/// Comma is ", "
			/// Semicolon is "; "
			/// Period is ". "
			/// NewLine is "\n"
			/// If want set standard separator, may sets separator tyep to InnerCustom and set SepartorValue at the same time.
			/// </remarks>
			 virtual Aspose::Cells::Charts::DataLablesSeparatorType GetSeparator()=0;
			/// <summary>
			/// Sets or returns the separator type used for the data labels on a chart.
			/// </summary>
			/// <remarks>
			/// Sets separator type will specify standard separator for datalabels.
			/// Space is " "
			/// Comma is ", "
			/// Semicolon is "; "
			/// Period is ". "
			/// NewLine is "\n"
			/// If want set standard separator, may sets separator tyep to InnerCustom and set SepartorValue at the same time.
			/// </remarks>
			 virtual void SetSeparator(Aspose::Cells::Charts::DataLablesSeparatorType value)=0;
			/// <summary>
			/// Sets or returns the separator value used for the data labels on a chart.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetSeparatorValue()=0;
			/// <summary>
			/// Sets or returns the separator value used for the data labels on a chart.
			/// </summary>
			 virtual void SetSeparatorValue(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Represents the position of the data lable.
			/// </summary>
			 virtual Aspose::Cells::Charts::LabelPositionType GetPosition()=0;
			/// <summary>
			/// Represents the position of the data lable.
			/// </summary>
			 virtual void SetPosition(Aspose::Cells::Charts::LabelPositionType value)=0;

	};
}
}
}
