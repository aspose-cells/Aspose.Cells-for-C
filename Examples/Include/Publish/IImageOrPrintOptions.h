#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Drawing/Printing/PrintPageEventHandler.h"
#include "Aspose.Cells.Systems/Drawing/Printing/QueryPageSettingsEventHandler.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Drawing/Imaging/ImageFormat.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Drawing/Text/TextRenderingHint.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/SmoothingMode.h"
#include "Aspose.Cells.Systems/Drawing/Imaging/PixelFormat.h"

namespace Aspose {
	namespace Cells {
		enum SaveFormat;
		enum PrintingPageType;
	}
}
namespace Aspose {
	namespace Cells {
		namespace Rendering {
			enum TiffCompression;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Rendering{
			/// <summary>
			/// Allows to specify options when rendering worksheet to images, printing worksheet or rendering chart to image.
			/// </summary>
	class ASPOSE_CELLS_API IImageOrPrintOptions : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets the output file format type
			/// Support Tiff/XPS
			/// </summary>
			 virtual Aspose::Cells::SaveFormat GetSaveFormat()=0;
			/// <summary>
			/// Sets the output file format type
			/// Support Tiff/XPS
			/// </summary>
			 virtual void SetSaveFormat(Aspose::Cells::SaveFormat value)=0;
			/// <summary>
			/// Client can special output to printer when print each page using this EventHandler
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Printing::PrintPageEventHandler> GetCustomPrintPageEventHandler()=0;
			/// <summary>
			/// Client can special output to printer when print each page using this EventHandler
			/// </summary>
			 virtual void SetCustomPrintPageEventHandler(intrusive_ptr<Aspose::Cells::Systems::Drawing::Printing::PrintPageEventHandler> value)=0;
			/// <summary>
			/// Client can control page setting of printer when print each page using this EventHandler
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Printing::QueryPageSettingsEventHandler> GetCustomQueryPageSettingsEventHandler()=0;
			/// <summary>
			/// Client can control page setting of printer when print each page using this EventHandler
			/// </summary>
			 virtual void SetCustomQueryPageSettingsEventHandler(intrusive_ptr<Aspose::Cells::Systems::Drawing::Printing::QueryPageSettingsEventHandler> value)=0;
			/// <summary>
			/// If PrintWithStatusDialog = true , there will be a dialog that shows current print status.
			/// else no such dialog will show.
			/// </summary>
			 virtual bool GetPrintWithStatusDialog()=0;
			/// <summary>
			/// If PrintWithStatusDialog = true , there will be a dialog that shows current print status.
			/// else no such dialog will show.
			/// </summary>
			 virtual void SetPrintWithStatusDialog(bool value)=0;
			/// <summary>
			/// Gets the horizontal resolution for generated images, in dots per inch.
			/// Applies generating image method except Emf format images.
			/// </summary>
			/// <remarks>
			/// The default value is 96.
			/// </remarks>
			 virtual Aspose::Cells::Systems::Int32 GetHorizontalResolution()=0;
			/// <summary>
			/// Sets the horizontal resolution for generated images, in dots per inch.
			/// Applies generating image method except Emf format images.
			/// </summary>
			/// <remarks>
			/// The default value is 96.
			/// </remarks>
			 virtual void SetHorizontalResolution(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets the vertical  resolution for generated images, in dots per inch.
			/// Applies generating image method except Emf format image.
			/// </summary>
			/// <remarks>
			/// The default value is 96.
			/// </remarks>
			 virtual Aspose::Cells::Systems::Int32 GetVerticalResolution()=0;
			/// <summary>
			/// Sets the vertical  resolution for generated images, in dots per inch.
			/// Applies generating image method except Emf format image.
			/// </summary>
			/// <remarks>
			/// The default value is 96.
			/// </remarks>
			 virtual void SetVerticalResolution(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets the type of compression to apply only when saving pages to the <c>Tiff</c>
			///  format. 
			/// </summary>
			/// <remarks>
			/// Has effect only when saving to TIFF.
			/// The default value is Lzw.
			/// </remarks>
			 virtual Aspose::Cells::Rendering::TiffCompression GetTiffCompression()=0;
			/// <summary>
			/// Sets the type of compression to apply only when saving pages to the <c>Tiff</c>
			///  format. 
			/// </summary>
			/// <remarks>
			/// Has effect only when saving to TIFF.
			/// The default value is Lzw.
			/// </remarks>
			 virtual void SetTiffCompression(Aspose::Cells::Rendering::TiffCompression value)=0;
			/// <summary>
			/// Indicates which pages will not be printed.
			/// </summary>
			 virtual Aspose::Cells::PrintingPageType GetPrintingPage()=0;
			/// <summary>
			/// Indicates which pages will not be printed.
			/// </summary>
			 virtual void SetPrintingPage(Aspose::Cells::PrintingPageType value)=0;
			/// <summary>
			/// Gets a value determining the quality of the generated  images
			/// to apply only when saving pages to the <c>Jpeg</c>
			///  format. The default value is 100
			/// </summary>
			/// <remarks>
			/// Has effect only when saving to JPEG.
			/// The value must be between 0 and 100.
			/// The default value is 100.
			/// </remarks>
			 virtual Aspose::Cells::Systems::Int32 GetQuality()=0;
			/// <summary>
			/// Sets a value determining the quality of the generated  images
			/// to apply only when saving pages to the <c>Jpeg</c>
			///  format. The default value is 100
			/// </summary>
			/// <remarks>
			/// Has effect only when saving to JPEG.
			/// The value must be between 0 and 100.
			/// The default value is 100.
			/// </remarks>
			 virtual void SetQuality(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets the format of the generated images.
			/// Don't apply the method that returns a <c>Bitmap</c>
			///  object.
			/// </summary>
			/// <remarks>
			/// The default value is ImageFormat.Bmp.
			/// Don't apply the method that returns a <c>Bitmap</c>
			///  object.
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Imaging::ImageFormat> GetImageFormat()=0;
			/// <summary>
			/// Sets the format of the generated images.
			/// Don't apply the method that returns a <c>Bitmap</c>
			///  object.
			/// </summary>
			/// <remarks>
			/// The default value is ImageFormat.Bmp.
			/// Don't apply the method that returns a <c>Bitmap</c>
			///  object.
			/// </remarks>
			 virtual void SetImageFormat(intrusive_ptr<Aspose::Cells::Systems::Drawing::Imaging::ImageFormat> value)=0;
			/// <summary>
			/// Indicates whether the width and height of the cells is automatically fitted by cell value. 
			/// The default value is false.
			/// </summary>
			 virtual bool IsCellAutoFit()=0;
			/// <summary>
			/// Indicates whether the width and height of the cells is automatically fitted by cell value. 
			/// The default value is false.
			/// </summary>
			 virtual void SetCellAutoFit(bool value)=0;
			/// <summary>
			/// When set the value to true, the page only include the cells that have data.
			/// The default value is false.
			/// </summary>
			 virtual bool IsImageFitToPage()=0;
			/// <summary>
			/// When set the value to true, the page only include the cells that have data.
			/// The default value is false.
			/// </summary>
			 virtual void SetImageFitToPage(bool value)=0;
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
			/// The width of paper size of pagesetup will be invalid, and the other settings of pagesetup 
			/// will still take effect.
			/// </summary>
			 virtual bool GetAllColumnsInOnePagePerSheet()=0;
			/// <summary>
			/// If AllColumnsInOnePagePerSheet is true , all column content of one sheet will output to only one page in result. 
			/// The width of paper size of pagesetup will be invalid, and the other settings of pagesetup 
			/// will still take effect.
			/// </summary>
			 virtual void SetAllColumnsInOnePagePerSheet(bool value)=0;
			/// <summary>
			/// Indicate the chart imagetype when converting.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Imaging::ImageFormat> GetChartImageType()=0;
			/// <summary>
			/// Indicate the chart imagetype when converting.
			/// </summary>
			 virtual void SetChartImageType(intrusive_ptr<Aspose::Cells::Systems::Drawing::Imaging::ImageFormat> value)=0;
			/// <summary>
			/// Indicate the filename of embeded image in svg. 
			/// This should be full path with directory like "c:\\xpsEmbeded"
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetEmbededImageNameInSvg()=0;
			/// <summary>
			/// Indicate the filename of embeded image in svg. 
			/// This should be full path with directory like "c:\\xpsEmbeded"
			/// </summary>
			 virtual void SetEmbededImageNameInSvg(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// if this property is true, the generated svg will fit to view port.
			/// </summary>
			 virtual bool GetSVGFitToViewPort()=0;
			/// <summary>
			/// if this property is true, the generated svg will fit to view port.
			/// </summary>
			 virtual void SetSVGFitToViewPort(bool value)=0;
			/// <summary>
			/// If this property is true , onle Area will be output, and no scale will take effect.
			/// </summary>
			 virtual bool GetOnlyArea()=0;
			/// <summary>
			/// If this property is true , onle Area will be output, and no scale will take effect.
			/// </summary>
			 virtual void SetOnlyArea(bool value)=0;
			/// <summary>
			/// Specifies the quality of text rendering.
			/// The defaul value is TextRenderingHint.SystemDefault
			/// </summary>
			 virtual Aspose::Cells::Systems::Drawing::Text::TextRenderingHint GetTextRenderingHint()=0;
			/// <summary>
			/// Specifies the quality of text rendering.
			/// The defaul value is TextRenderingHint.SystemDefault
			/// </summary>
			 virtual void SetTextRenderingHint(Aspose::Cells::Systems::Drawing::Text::TextRenderingHint value)=0;
			/// <summary>
			/// Specifies whether smoothing (antialiasing) is applied to lines and curves and the edges of filled areas.
			/// The defaul value is SmoothingMode.None
			/// </summary>
			 virtual Aspose::Cells::Systems::Drawing::Drawing2D::SmoothingMode GetSmoothingMode()=0;
			/// <summary>
			/// Specifies whether smoothing (antialiasing) is applied to lines and curves and the edges of filled areas.
			/// The defaul value is SmoothingMode.None
			/// </summary>
			 virtual void SetSmoothingMode(Aspose::Cells::Systems::Drawing::Drawing2D::SmoothingMode value)=0;
			/// <summary>
			/// Indicates if the background of generated image should be transparent.
			/// </summary>
			/// <remarks>
			/// The default value is false. That means the background of the generated images is white.
			/// </remarks>
			 virtual bool GetTransparent()=0;
			/// <summary>
			/// Indicates if the background of generated image should be transparent.
			/// </summary>
			/// <remarks>
			/// The default value is false. That means the background of the generated images is white.
			/// </remarks>
			 virtual void SetTransparent(bool value)=0;
			/// <summary>
			/// Gets the pixel format for the generated images.
			/// </summary>
			/// <remarks>
			/// The default value is PixelFormat.Format32bppArgb.
			/// </remarks>
			 virtual Aspose::Cells::Systems::Drawing::Imaging::PixelFormat GetPixelFormat()=0;
			/// <summary>
			/// Sets the pixel format for the generated images.
			/// </summary>
			/// <remarks>
			/// The default value is PixelFormat.Format32bppArgb.
			/// </remarks>
			 virtual void SetPixelFormat(Aspose::Cells::Systems::Drawing::Imaging::PixelFormat value)=0;
			/// <summary>
			/// Sets desired width and height of image.
			/// </summary>
			/// <param name="desiredWidth" >desired width in pixels</param>
			/// <param name="desiredHeight" >desired height in pixels</param>
			 virtual void SetDesiredSize(Aspose::Cells::Systems::Int32 desiredWidth , Aspose::Cells::Systems::Int32 desiredHeight)=0;
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

	};
}
}
}
