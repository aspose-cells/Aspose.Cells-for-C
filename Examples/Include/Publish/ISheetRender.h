#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Double.h"
#include "System/Drawing/Size.h"
#include "System/Drawing/Graphics.h"
#include "System/Single.h"
#include "System/String.h"
#include "System/IO/Stream.h"
#include "System/Drawing/Bitmap.h"
#include "System/Drawing/Printing/PrintPageEventArgs.h"

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
	class ASPOSE_CELLS_API ISheetRender : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Indicate the total page count of current worksheet
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetPageCount()=0;
			/// <summary>
			/// Indicate the total page count of current worksheet
			/// </summary>
			 virtual void SetPageCount(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Gets calculated page scale of the sheet.
			/// </summary>
			/// <returns/>
			/// 
			 virtual Aspose::Cells::System::Double GetPageScale()=0;
			/// <summary>
			/// Get page size of output image. The size unit is in pixel.
			/// </summary>
			/// <param name="pageIndex" >The page index is based on zero.</param>
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::Drawing::Size> GetPageSize(Aspose::Cells::System::Int32 pageIndex)=0;
			/// <summary>
			/// Render certain page to a Graphics
			/// </summary>
			/// <param name="pageIndex" >indicate which page is to be converted</param>
			/// <param name="g" >The object where to render to.</param>
			/// <param name="x" >The X coordinate (in pixels) of the top left corner of the rendered page.</param>
			/// <param name="y" >The Y coordinate (in pixels) of the top left corner of the rendered page.</param>
			/// <param name="width" >The maximum width (in pixels) that can be occupied by the rendered page.</param>
			/// <param name="height" >The maximum height (in pixels) that can be occupied by the rendered page.</param>
			 virtual void ToImage(Aspose::Cells::System::Int32 pageIndex , intrusive_ptr<Aspose::Cells::System::Drawing::Graphics> g , Aspose::Cells::System::Single x , Aspose::Cells::System::Single y , Aspose::Cells::System::Single width , Aspose::Cells::System::Single height)=0;
			/// <summary>
			/// Render certain page to a Graphics
			/// </summary>
			/// <param name="pageIndex" >indicate which page is to be converted</param>
			/// <param name="g" >The object where to render to.</param>
			/// <param name="x" >The X coordinate (in pixels) of the top left corner of the rendered page.</param>
			/// <param name="y" >The Y coordinate (in pixels) of the top left corner of the rendered page.</param>
			 virtual void ToImage(Aspose::Cells::System::Int32 pageIndex , intrusive_ptr<Aspose::Cells::System::Drawing::Graphics> g , Aspose::Cells::System::Single x , Aspose::Cells::System::Single y)=0;
			/// <summary>
			/// Render certain page to a file.
			/// </summary>
			/// <param name="pageIndex" >indicate which page is to be converted</param>
			/// <param name="fileName" >filename of the output image</param>
			 virtual void ToImage(Aspose::Cells::System::Int32 pageIndex , intrusive_ptr<Aspose::Cells::System::String> fileName)=0;
			/// <summary>
			/// Render certain page to a stream.
			/// </summary>
			/// <param name="pageIndex" >indicate which page is to be converted</param>
			/// <param name="stream" >the stream of the output image</param>
			 virtual void ToImage(Aspose::Cells::System::Int32 pageIndex , intrusive_ptr<Aspose::Cells::System::IO::Stream> stream)=0;
			/// <summary>
			/// Render certain page to a Bitmap object.
			/// </summary>
			/// <param name="pageIndex" >indicate which page is to be converted</param>
			/// <returns>the bitmap object of the page</returns>
			 virtual intrusive_ptr<Aspose::Cells::System::Drawing::Bitmap> ToImage(Aspose::Cells::System::Int32 pageIndex)=0;
			/// <summary>
			/// Render whole worksheet as Tiff Image to stream.
			/// </summary>
			/// <param name="stream" >the stream of the output image</param>
			 virtual void ToTiff(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream)=0;
			/// <summary>
			/// Render whole worksheet as Tiff Image to a file.
			/// </summary>
			/// <param name="filename" >the filename of the output image</param>
			 virtual void ToTiff(intrusive_ptr<Aspose::Cells::System::String> filename)=0;
			/// <summary>
			/// Render worksheet to Printer
			/// </summary>
			/// <param name="PrinterName" >the name of the printer , for example: "Microsoft Office Document Image Writer"</param>
			 virtual void ToPrinter(intrusive_ptr<Aspose::Cells::System::String> PrinterName)=0;
			/// <summary>
			/// Render worksheet to Printer
			/// </summary>
			/// <param name="PrinterName" >the name of the printer , for example: "Microsoft Office Document Image Writer"</param>
			/// <param name="PrintPageIndex" >the 0-based index of the first page to print, it must be in Range [0, SheetRender.PageCount-1]</param>
			/// <param name="PrintPageCount" >the number of pages to print, it must be greater than zero</param>
			 virtual void ToPrinter(intrusive_ptr<Aspose::Cells::System::String> PrinterName , Aspose::Cells::System::Int32 PrintPageIndex , Aspose::Cells::System::Int32 PrintPageCount)=0;
			/// <summary>
			/// Render worksheet to Printer
			/// </summary>
			/// <param name="PrinterName" >the name of the printer , for example: "Microsoft Office Document Image Writer"</param>
			/// <param name="DocumentName" >set the print job name </param>
			 virtual void ToPrinter(intrusive_ptr<Aspose::Cells::System::String> PrinterName , intrusive_ptr<Aspose::Cells::System::String> DocumentName)=0;
			/// <summary>
			/// Client can control page setting of printer when print each page using this function.
			/// </summary>
			/// <param name="nextPageAfterPrint" >If true , printer will go to next page after print current page</param>
			/// <param name="printPageEventArgs" >System.Drawing.Printing.PrintPageEventArgs</param>
			/// <returns>Indirect next page index,  based on zero</returns>
			 virtual Aspose::Cells::System::Int32 CustomPrint(bool nextPageAfterPrint , intrusive_ptr<Aspose::Cells::System::Drawing::Printing::PrintPageEventArgs> printPageEventArgs)=0;

	};
}
}
}
