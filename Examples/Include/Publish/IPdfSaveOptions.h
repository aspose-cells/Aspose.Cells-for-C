#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Drawing/Imaging/ImageFormat.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/DateTime.h"
#include "ISaveOptions.h"

namespace Aspose {
	namespace Cells {
		enum SaveFormat;
		enum PrintingPageType;
	}
}
namespace Aspose {
	namespace Cells {
		namespace Rendering {
			class IPdfBookmarkEntry;
			enum PdfCompliance;
			enum PdfCompressionCore;
			enum PdfOptimizationType;
			class IPageSavingCallback;
		}
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents the options for saving pdf file.
			/// </summary>
	class ASPOSE_CELLS_API IPdfSaveOptions : virtual public Aspose::Cells::ISaveOptions
	{
		public:
			/// <summary>
			/// Indicates which pages will not be printed.
			/// </summary>
			 virtual Aspose::Cells::PrintingPageType GetPrintingPageType()=0;
			/// <summary>
			/// Indicates which pages will not be printed.
			/// </summary>
			 virtual void SetPrintingPageType(Aspose::Cells::PrintingPageType value)=0;
			/// <summary>
			/// True to embed true type fonts. 
			/// Affects only ASCII characters 32-127.
			/// Fonts for character codes greater than 127 are always embedded.
			/// PDFA1B must embeded font.
			/// Default is true.
			/// </summary>
			 virtual bool GetEmbedStandardWindowsFonts()=0;
			/// <summary>
			/// True to embed true type fonts. 
			/// Affects only ASCII characters 32-127.
			/// Fonts for character codes greater than 127 are always embedded.
			/// PDFA1B must embeded font.
			/// Default is true.
			/// </summary>
			 virtual void SetEmbedStandardWindowsFonts(bool value)=0;
			/// <summary>
			/// Gets the <see cref="IPdfBookmarkEntry" >PdfBookmarkEntry</see>
			///  object.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Rendering::IPdfBookmarkEntry> 		GetIPdfBookmarkEntry()=0;
			/// <summary>
			/// Sets the <see cref="IPdfBookmarkEntry" >PdfBookmarkEntry</see>
			///  object.
			/// </summary>
			 virtual void 		SetIPdfBookmarkEntry(intrusive_ptr<Aspose::Cells::Rendering::IPdfBookmarkEntry> value)=0;
			/// <summary>
			/// Workbook converts to pdf will according to PdfCompliance in this property.
			/// </summary>
			 virtual Aspose::Cells::Rendering::PdfCompliance GetCompliance()=0;
			/// <summary>
			/// Workbook converts to pdf will according to PdfCompliance in this property.
			/// </summary>
			 virtual void SetCompliance(Aspose::Cells::Rendering::PdfCompliance value)=0;
			/// <summary>
			/// When characters in the Excel are unicode and not be set with correct font in cell style,
			/// They may appear as block in pdf,image.
			/// Set the DefaultFont such as MingLiu or MS Gothic to show these characters.
			/// If this property is not set, Aspose.Cells will use system default font to show these unicode characters.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetDefaultFont()=0;
			/// <summary>
			/// When characters in the Excel are unicode and not be set with correct font in cell style,
			/// They may appear as block in pdf,image.
			/// Set the DefaultFont such as MingLiu or MS Gothic to show these characters.
			/// If this property is not set, Aspose.Cells will use system default font to show these unicode characters.
			/// </summary>
			 virtual void SetDefaultFont(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// If OnePagePerSheet is true , all content of one sheet will output to only one page in result. 
			/// The paper size of pagesetup will be invalid, and the other settings of pagesetup 
			/// will still take effect.
			/// </summary>
			 virtual bool GetOnePagePerSheet()=0;
			/// <summary>
			/// If OnePagePerSheet is true , all content of one sheet will output to only one page in result. 
			/// The paper size of pagesetup will be invalid, and the other settings of pagesetup 
			/// will still take effect.
			/// </summary>
			 virtual void SetOnePagePerSheet(bool value)=0;
			/// <summary>
			/// If AllColumnsInOnePagePerSheet is true , all column content of one sheet will output to only one page in result. 
			/// The width of paper size of pagesetup will be ignored, and the other settings of pagesetup 
			/// will still take effect.
			/// </summary>
			 virtual bool GetAllColumnsInOnePagePerSheet()=0;
			/// <summary>
			/// If AllColumnsInOnePagePerSheet is true , all column content of one sheet will output to only one page in result. 
			/// The width of paper size of pagesetup will be ignored, and the other settings of pagesetup 
			/// will still take effect.
			/// </summary>
			 virtual void SetAllColumnsInOnePagePerSheet(bool value)=0;
			/// <summary>
			/// Represents the image type when converting the chart and shape .
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Imaging::ImageFormat> GetImageType()=0;
			/// <summary>
			/// Represents the image type when converting the chart and shape .
			/// </summary>
			 virtual void SetImageType(intrusive_ptr<Aspose::Cells::Systems::Drawing::Imaging::ImageFormat> value)=0;
			/// <summary>
			/// Indicates whether calculate formulas before saving pdf file.
			/// </summary>
			/// <remarks>
			/// The default value is false.
			/// </remarks>
			 virtual bool GetCalculateFormula()=0;
			/// <summary>
			/// Indicates whether calculate formulas before saving pdf file.
			/// </summary>
			/// <remarks>
			/// The default value is false.
			/// </remarks>
			 virtual void SetCalculateFormula(bool value)=0;
			/// <summary>
			/// Indcate the compression algorithm 
			/// </summary>
			 virtual Aspose::Cells::Rendering::PdfCompressionCore GetPdfCompression()=0;
			/// <summary>
			/// Indcate the compression algorithm 
			/// </summary>
			 virtual void SetPdfCompression(Aspose::Cells::Rendering::PdfCompressionCore value)=0;
			/// <summary>
			/// Indicates whether check font compatibility for every character in text.
			/// </summary>
			/// <remarks>
			/// The default value is true.
			/// Disable this property may give better performance.
			/// But when the default or specified font of text/character cannot be used to render it,
			/// unreadable characters(such as block) maybe occur in the generated pdf.
			/// For such situation user should keep this property as true so that
			/// alternative font can be searched and used to render the text instead;
			/// </remarks>
			 virtual bool GetCheckFontCompatibility()=0;
			/// <summary>
			/// Indicates whether check font compatibility for every character in text.
			/// </summary>
			/// <remarks>
			/// The default value is true.
			/// Disable this property may give better performance.
			/// But when the default or specified font of text/character cannot be used to render it,
			/// unreadable characters(such as block) maybe occur in the generated pdf.
			/// For such situation user should keep this property as true so that
			/// alternative font can be searched and used to render the text instead;
			/// </remarks>
			 virtual void SetCheckFontCompatibility(bool value)=0;
			/// <summary>
			/// Set desired PPI(pixels per inch) of resample images and jpeg quality  
			/// All images will be converted to JPEG with the specified quality setting, 
			/// and images that are greater than the specified PPI (pixels per inch) will be resampled.
			/// </summary>
			/// <param name="desiredPPI" >Desired pixels per inch. 220 high quality. 150 screen quality. 96 email quality.</param>
			/// <param name="jpegQuality" >0 - 100% JPEG quality.</param>
			 virtual void SetImageResample(Aspose::Cells::Systems::Int32 desiredPPI , Aspose::Cells::Systems::Int32 jpegQuality)=0;
			/// <summary>
			///  Gets the 0-based index of the first page to save.
			/// </summary>
			/// <remarks>
			/// Default is 0.
			/// </remarks>
			 virtual Aspose::Cells::Systems::Int32 GetPageIndex()=0;
			/// <summary>
			///  Sets the 0-based index of the first page to save.
			/// </summary>
			/// <remarks>
			/// Default is 0.
			/// </remarks>
			 virtual void SetPageIndex(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			///  Gets the number of pages to save.
			/// </summary>
			/// <remarks>
			///  Default is System.Int32.MaxValue which means all pages will be rendered..
			///  </remarks>
			 virtual Aspose::Cells::Systems::Int32 GetPageCount()=0;
			/// <summary>
			///  Sets the number of pages to save.
			/// </summary>
			/// <remarks>
			///  Default is System.Int32.MaxValue which means all pages will be rendered..
			///  </remarks>
			 virtual void SetPageCount(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			///  Gets the time of generating the pdf document.
			/// </summary>
			/// <remarks>
			///  if it is not be set, it will be the time of generating the pdf.
			///  </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::DateTime> GetCreatedTime()=0;
			/// <summary>
			///  Sets the time of generating the pdf document.
			/// </summary>
			/// <remarks>
			///  if it is not be set, it will be the time of generating the pdf.
			///  </remarks>
			 virtual void SetCreatedTime(intrusive_ptr<Aspose::Cells::Systems::DateTime> value)=0;
			/// <summary>
			/// Gets pdf optimization type.
			/// </summary>
			 virtual Aspose::Cells::Rendering::PdfOptimizationType GetOptimizationType()=0;
			/// <summary>
			/// Sets pdf optimization type.
			/// </summary>
			 virtual void SetOptimizationType(Aspose::Cells::Rendering::PdfOptimizationType value)=0;
			/// <summary>
			/// Indicates whether only substitute the font of character when the cell font is not compatibility for it.
			/// </summary>
			/// <remarks>
			/// Default is false. We will try default font of Workbook and PdfSaveOption/system for cell font first.
			/// </remarks>
			 virtual bool IsFontSubstitutionCharGranularity()=0;
			/// <summary>
			/// Indicates whether only substitute the font of character when the cell font is not compatibility for it.
			/// </summary>
			/// <remarks>
			/// Default is false. We will try default font of Workbook and PdfSaveOption/system for cell font first.
			/// </remarks>
			 virtual void SetFontSubstitutionCharGranularity(bool value)=0;
			/// <summary>
			/// Control/Indicate progress of page saving process.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Rendering::IPageSavingCallback> 		GetIPageSavingCallback()=0;
			/// <summary>
			/// Control/Indicate progress of page saving process.
			/// </summary>
			 virtual void SetIPageSavingCallback(intrusive_ptr<Aspose::Cells::Rendering::IPageSavingCallback> value)=0;

	};
}
}
