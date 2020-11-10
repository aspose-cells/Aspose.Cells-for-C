#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Text/Encoding.h"
#include "ISaveOptions.h"

namespace Aspose {
	namespace Cells {
		enum SaveFormat;
		enum HtmlCrossType;
		enum HtmlHiddenColDisplayType;
		enum HtmlHiddenRowDisplayType;
		enum HtmlExportDataOptions;
		enum HtmlLinkTargetType;
	}
}
namespace Aspose {
	namespace Cells {
		namespace Rendering {
			class IImageOrPrintOptions;
		}
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents the options for saving html file.
			/// </summary>
	class ASPOSE_CELLS_API IHtmlSaveOptions : virtual public Aspose::Cells::ISaveOptions
	{
		public:
			/// <summary>
			/// The title of the html page.
			/// Only for saving to html stream.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetPageTitle()=0;
			/// <summary>
			/// The title of the html page.
			/// Only for saving to html stream.
			/// </summary>
			 virtual void SetPageTitle(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// The directory that the attached files will be saved to.
			/// Only for saving to html stream.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetAttachedFilesDirectory()=0;
			/// <summary>
			/// The directory that the attached files will be saved to.
			/// Only for saving to html stream.
			/// </summary>
			 virtual void SetAttachedFilesDirectory(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Specify the Url prefix of attached files such as image in the html file.
			/// Only for saving to html stream.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetAttachedFilesUrlPrefix()=0;
			/// <summary>
			/// Specify the Url prefix of attached files such as image in the html file.
			/// Only for saving to html stream.
			/// </summary>
			 virtual void SetAttachedFilesUrlPrefix(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Specify the default font name for exporting html, the default font will be used  when the font of style is not existing,
			/// If this property is null, Aspose.Cells will use universal font which have the same family with the original font,
			/// the default value is null.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetDefaultFontName()=0;
			/// <summary>
			/// Specify the default font name for exporting html, the default font will be used  when the font of style is not existing,
			/// If this property is null, Aspose.Cells will use universal font which have the same family with the original font,
			/// the default value is null.
			/// </summary>
			 virtual void SetDefaultFontName(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Indicates if export image files to temp directory.
			/// Only for saving to html stream.
			/// </summary>
			 virtual bool IsExpImageToTempDir()=0;
			/// <summary>
			/// Indicates if export image files to temp directory.
			/// Only for saving to html stream.
			/// </summary>
			 virtual void SetExpImageToTempDir(bool value)=0;
			/// <summary>
			/// Specifies whether images are saved in Base64 format to HTML, MHTML or EPUB.
			/// </summary>
			/// <remarks>
			/// When this property is set to true image data is exported directly on the
			///     img elements and separate files are not created.
			/// </remarks>
			 virtual bool GetExportImagesAsBase64()=0;
			/// <summary>
			/// Specifies whether images are saved in Base64 format to HTML, MHTML or EPUB.
			/// </summary>
			/// <remarks>
			/// When this property is set to true image data is exported directly on the
			///     img elements and separate files are not created.
			/// </remarks>
			 virtual void SetExportImagesAsBase64(bool value)=0;
			/// <summary>
			/// Indicates if exporting the whole workbook to html file.
			/// </summary>
			 virtual bool GetExportActiveWorksheetOnly()=0;
			/// <summary>
			/// Indicates if exporting the whole workbook to html file.
			/// </summary>
			 virtual void SetExportActiveWorksheetOnly(bool value)=0;
			/// <summary>
			/// Parse html tag in cell,like <div/>
			/// ,as cell value,or as html tag,default is true
			/// </summary>
			 virtual bool GetParseHtmlTagInCell()=0;
			/// <summary>
			/// Parse html tag in cell,like <div/>
			/// ,as cell value,or as html tag,default is true
			/// </summary>
			 virtual void SetParseHtmlTagInCell(bool value)=0;
			/// <summary>
			/// Indicates if a cross-cell string will be displayed in the same way as MS Excel when saving an Excel file in html format.
			/// By default the value is Default, so, for cross-cell strings, there is little difference between the html files created by Aspose.Cells and MS Excel.
			/// But the performance for creating large html files,setting the value to Cross would be several times faster than setting it to Default or Fit2Cell.
			/// </summary>
			 virtual Aspose::Cells::HtmlCrossType GetHtmlCrossStringType()=0;
			/// <summary>
			/// Indicates if a cross-cell string will be displayed in the same way as MS Excel when saving an Excel file in html format.
			/// By default the value is Default, so, for cross-cell strings, there is little difference between the html files created by Aspose.Cells and MS Excel.
			/// But the performance for creating large html files,setting the value to Cross would be several times faster than setting it to Default or Fit2Cell.
			/// </summary>
			 virtual void SetHtmlCrossStringType(Aspose::Cells::HtmlCrossType value)=0;
			/// <summary>
			/// Hidden column(the width of this column is 0) in excel,before save this into html format,
			/// if HtmlHiddenColDisplayType is "Remove",the hidden column would ont been output,
			/// if the value is "Hidden", the column would been output,but was hidden,the default value is "Hidden"
			/// </summary>
			 virtual Aspose::Cells::HtmlHiddenColDisplayType GetHiddenColDisplayType()=0;
			/// <summary>
			/// Hidden column(the width of this column is 0) in excel,before save this into html format,
			/// if HtmlHiddenColDisplayType is "Remove",the hidden column would ont been output,
			/// if the value is "Hidden", the column would been output,but was hidden,the default value is "Hidden"
			/// </summary>
			 virtual void SetHiddenColDisplayType(Aspose::Cells::HtmlHiddenColDisplayType value)=0;
			/// <summary>
			/// Hidden row(the height of this row is 0) in excel,before save this into html format,
			/// if HtmlHiddenRowDisplayType is "Remove",the hidden row would ont been output,
			/// if the value is "Hidden", the row would been output,but was hidden,the default value is "Hidden"
			/// </summary>
			 virtual Aspose::Cells::HtmlHiddenRowDisplayType GetHiddenRowDisplayType()=0;
			/// <summary>
			/// Hidden row(the height of this row is 0) in excel,before save this into html format,
			/// if HtmlHiddenRowDisplayType is "Remove",the hidden row would ont been output,
			/// if the value is "Hidden", the row would been output,but was hidden,the default value is "Hidden"
			/// </summary>
			 virtual void SetHiddenRowDisplayType(Aspose::Cells::HtmlHiddenRowDisplayType value)=0;
			/// <summary>
			/// If not set,use Encoding.UTF8 as default enconding type.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Text::Encoding> GetEncoding()=0;
			/// <summary>
			/// If not set,use Encoding.UTF8 as default enconding type.
			/// </summary>
			 virtual void SetEncoding(intrusive_ptr<Aspose::Cells::Systems::Text::Encoding> value)=0;
			/// <summary>
			/// Get the ImageOrPrintOptions object before exporting
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Rendering::IImageOrPrintOptions> 		GetIImageOptions()=0;
			/// <summary>
			/// Indicating if exporting the hidden worksheet content.The default value is true.
			/// </summary>
			 virtual bool GetExportHiddenWorksheet()=0;
			/// <summary>
			/// Indicating if exporting the hidden worksheet content.The default value is true.
			/// </summary>
			 virtual void SetExportHiddenWorksheet(bool value)=0;
			/// <summary>
			/// Indicating if html or mht file is presentation preference.The default value is false.if you want to get
			/// more beautiful presentation,please set the value to true.
			/// </summary>
			 virtual bool GetPresentationPreference()=0;
			/// <summary>
			/// Indicating if html or mht file is presentation preference.The default value is false.if you want to get
			/// more beautiful presentation,please set the value to true.
			/// </summary>
			 virtual void SetPresentationPreference(bool value)=0;
			/// <summary>
			/// Gets and sets the prefix of the css name,the default value is "".
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetCellCssPrefix()=0;
			/// <summary>
			/// Gets and sets the prefix of the css name,the default value is "".
			/// </summary>
			 virtual void SetCellCssPrefix(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Indicating whether using full path link in sheet00x.htm,filelist.xml and tabstrip.htm.
			/// The default value is false.
			/// </summary>
			 virtual bool IsFullPathLink()=0;
			/// <summary>
			/// Indicating whether using full path link in sheet00x.htm,filelist.xml and tabstrip.htm.
			/// The default value is false.
			/// </summary>
			 virtual void SetFullPathLink(bool value)=0;
			/// <summary>
			/// Indicating whether export the gridlines.The default value is false.
			/// </summary>
			 virtual bool GetExportGridLines()=0;
			/// <summary>
			/// Indicating whether export the gridlines.The default value is false.
			/// </summary>
			 virtual void SetExportGridLines(bool value)=0;
			/// <summary>
			/// Indicating whether exporting bogus bottom row data. The default value is true.If you want to import the html or mht file
			/// to excel, please keep the default value.
			/// </summary>
			 virtual bool GetExportBogusRowData()=0;
			/// <summary>
			/// Indicating whether exporting bogus bottom row data. The default value is true.If you want to import the html or mht file
			/// to excel, please keep the default value.
			/// </summary>
			 virtual void SetExportBogusRowData(bool value)=0;
			/// <summary>
			/// Indicating whether exporting frame scripts and document properties. The default value is true.If you want to import the html or mht file
			/// to excel, please keep the default value.
			/// </summary>
			 virtual bool GetExportFrameScriptsAndProperties()=0;
			/// <summary>
			/// Indicating whether exporting frame scripts and document properties. The default value is true.If you want to import the html or mht file
			/// to excel, please keep the default value.
			/// </summary>
			 virtual void SetExportFrameScriptsAndProperties(bool value)=0;
			/// <summary>
			/// Indicating the rule of exporting html file data.The default value is All.
			/// </summary>
			 virtual Aspose::Cells::HtmlExportDataOptions GetExportDataOptions()=0;
			/// <summary>
			/// Indicating the rule of exporting html file data.The default value is All.
			/// </summary>
			 virtual void SetExportDataOptions(Aspose::Cells::HtmlExportDataOptions value)=0;
			/// <summary>
			/// Indicating the type of  target attribute in a link,The default value is HtmlLinkTargetType.Parent.
			/// </summary>
			 virtual Aspose::Cells::HtmlLinkTargetType GetLinkTargetType()=0;
			/// <summary>
			/// Indicating the type of  target attribute in a link,The default value is HtmlLinkTargetType.Parent.
			/// </summary>
			 virtual void SetLinkTargetType(Aspose::Cells::HtmlLinkTargetType value)=0;

	};
}
}
