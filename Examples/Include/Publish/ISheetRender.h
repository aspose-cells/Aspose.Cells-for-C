#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Double.h"
#include "Aspose.Cells.Systems/Drawing/Size.h"
#include "Aspose.Cells.Systems/Drawing/Graphics.h"
#include "Aspose.Cells.Systems/Single.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/IO/Stream.h"
#include "Aspose.Cells.Systems/Drawing/Bitmap.h"
#include "Aspose.Cells.Systems/Drawing/Printing/PrintPageEventArgs.h"

namespace Aspose {
	namespace Cells {
		class IWorksheet;
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
namespace Rendering{
			/// <summary>
			/// Represents a worksheet render which can render worksheet to various images such as (BMP, PNG, JPEG, TIFF..)
			/// The constructor of this class , must be used after modification of pagesetup, cell style.    
			/// </summary>
	class ASPOSE_CELLS_API ISheetRender : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Indicate the total page count of current worksheet
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetPageCount()=0;
			/// <summary>
			/// Indicate the total page count of current worksheet
			/// </summary>
			 virtual void SetPageCount(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets calculated page scale of the sheet.
			/// </summary>
			/// <returns/>
			/// 
			 virtual Aspose::Cells::Systems::Double GetPageScale()=0;
			/// <summary>
			/// Get page size of output image. The size unit is in pixel.
			/// </summary>
			/// <param name="pageIndex" >The page index is based on zero.</param>
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Size> GetPageSize(Aspose::Cells::Systems::Int32 pageIndex)=0;
			/// <summary>
			/// Render certain page to a Graphics
			/// </summary>
			/// <param name="pageIndex" >indicate which page is to be converted</param>
			/// <param name="g" >The object where to render to.</param>
			/// <param name="x" >The X coordinate (in pixels) of the top left corner of the rendered page.</param>
			/// <param name="y" >The Y coordinate (in pixels) of the top left corner of the rendered page.</param>
			/// <param name="width" >The maximum width (in pixels) that can be occupied by the rendered page.</param>
			/// <param name="height" >The maximum height (in pixels) that can be occupied by the rendered page.</param>
			 virtual void ToImage(Aspose::Cells::Systems::Int32 pageIndex , intrusive_ptr<Aspose::Cells::Systems::Drawing::Graphics> g , Aspose::Cells::Systems::Single x , Aspose::Cells::Systems::Single y , Aspose::Cells::Systems::Single width , Aspose::Cells::Systems::Single height)=0;
			/// <summary>
			/// Render certain page to a Graphics
			/// </summary>
			/// <param name="pageIndex" >indicate which page is to be converted</param>
			/// <param name="g" >The object where to render to.</param>
			/// <param name="x" >The X coordinate (in pixels) of the top left corner of the rendered page.</param>
			/// <param name="y" >The Y coordinate (in pixels) of the top left corner of the rendered page.</param>
			 virtual void ToImage(Aspose::Cells::Systems::Int32 pageIndex , intrusive_ptr<Aspose::Cells::Systems::Drawing::Graphics> g , Aspose::Cells::Systems::Single x , Aspose::Cells::Systems::Single y)=0;
			/// <summary>
			/// Render certain page to a file.
			/// </summary>
			/// <param name="pageIndex" >indicate which page is to be converted</param>
			/// <param name="fileName" >filename of the output image</param>
			 virtual void ToImage(Aspose::Cells::Systems::Int32 pageIndex , intrusive_ptr<Aspose::Cells::Systems::String> fileName)=0;
			/// <summary>
			/// Render certain page to a stream.
			/// </summary>
			/// <param name="pageIndex" >indicate which page is to be converted</param>
			/// <param name="stream" >the stream of the output image</param>
			 virtual void ToImage(Aspose::Cells::Systems::Int32 pageIndex , intrusive_ptr<Aspose::Cells::Systems::IO::Stream> stream)=0;
			/// <summary>
			/// Render certain page to a Bitmap object.
			/// </summary>
			/// <param name="pageIndex" >indicate which page is to be converted</param>
			/// <returns>the bitmap object of the page</returns>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Bitmap> ToImage(Aspose::Cells::Systems::Int32 pageIndex)=0;
			/// <summary>
			/// Render whole worksheet as Tiff Image to stream.
			/// </summary>
			/// <param name="stream" >the stream of the output image</param>
			 virtual void ToTiff(intrusive_ptr<Aspose::Cells::Systems::IO::Stream> stream)=0;
			/// <summary>
			/// Render whole worksheet as Tiff Image to a file.
			/// </summary>
			/// <param name="filename" >the filename of the output image</param>
			 virtual void ToTiff(intrusive_ptr<Aspose::Cells::Systems::String> filename)=0;
			/// <summary>
			/// Render worksheet to Printer
			/// </summary>
			/// <param name="PrinterName" >the name of the printer , for example: "Microsoft Office Document Image Writer"</param>
			 virtual void ToPrinter(intrusive_ptr<Aspose::Cells::Systems::String> PrinterName)=0;
			/// <summary>
			/// Render worksheet to Printer
			/// </summary>
			/// <param name="PrinterName" >the name of the printer , for example: "Microsoft Office Document Image Writer"</param>
			/// <param name="PrintPageIndex" >the 0-based index of the first page to print, it must be in Range [0, SheetRender.PageCount-1]</param>
			/// <param name="PrintPageCount" >the number of pages to print, it must be greater than zero</param>
			 virtual void ToPrinter(intrusive_ptr<Aspose::Cells::Systems::String> PrinterName , Aspose::Cells::Systems::Int32 PrintPageIndex , Aspose::Cells::Systems::Int32 PrintPageCount)=0;
			/// <summary>
			/// Render worksheet to Printer
			/// </summary>
			/// <param name="PrinterName" >the name of the printer , for example: "Microsoft Office Document Image Writer"</param>
			/// <param name="DocumentName" >set the print job name </param>
			 virtual void ToPrinter(intrusive_ptr<Aspose::Cells::Systems::String> PrinterName , intrusive_ptr<Aspose::Cells::Systems::String> DocumentName)=0;
			/// <summary>
			/// Client can control page setting of printer when print each page using this function.
			/// </summary>
			/// <param name="nextPageAfterPrint" >If true , printer will go to next page after print current page</param>
			/// <param name="printPageEventArgs" >System.Drawing.Printing.PrintPageEventArgs</param>
			/// <returns>Indirect next page index,  based on zero</returns>
			 virtual Aspose::Cells::Systems::Int32 CustomPrint(bool nextPageAfterPrint , intrusive_ptr<Aspose::Cells::Systems::Drawing::Printing::PrintPageEventArgs> printPageEventArgs)=0;

	};
}
}
}
