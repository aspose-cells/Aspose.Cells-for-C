#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Double.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Byte.h"

namespace Aspose {
	namespace Cells {
		enum PrintOrderType;
		enum PaperSizeType;
		enum PageOrientationType;
		enum PrintCommentsType;
		enum PrintErrorsType;
		class IHeaderFooterCommand;
	}
}
namespace Aspose {
	namespace Cells {
		namespace Drawing {
			class IPicture;
		}
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Encapsulates the object that represents the page setup description. 
			/// The IPageSetup object contains all page setup options.
			/// </summary>
			/// 
			/// <example>
			/// <code>
			/// [C++]
			/// intrusive_ptr<Aspose::Cells::IWorkbook> workbook = Factory::CreateIWorkbook();
			/// intrusive_ptr<Aspose::Cells::IWorksheet> sheet = workbook->GetIWorksheets()->GetObjectByIndex(0);
			/// sheet->GetIPageSetup()->SetPrintArea(new String("D1:K13"));
			/// sheet->GetIPageSetup()->SetPrintTitleRows(new String("$5:$7"));
			/// sheet->GetIPageSetup()->SetPrintTitleColumns(new String("$A:$B"));
			/// </code>
			/// 
			/// </example>
			/// 
			/// 
	class ASPOSE_CELLS_API IPageSetup : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Represents the range to be printed.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetPrintArea()=0;
			/// <summary>
			/// Represents the range to be printed.
			/// </summary>
			/// 
			/// 
			 virtual void SetPrintArea(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Represents the columns that contain the cells to be repeated on the left side of each page.
			/// </summary>
			/// 
			/// <example>
			/// <code>
			/// [C++]
			/// intrusive_ptr<Aspose::Cells::Systems::String> sColumns = sheet->GetIPageSetup()->GetPrintTitleColumns();
			/// 
			/// </code>
			/// 
			/// </example>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetPrintTitleColumns()=0;
			/// <summary>
			/// Represents the columns that contain the cells to be repeated on the left side of each page.
			/// </summary>
			/// 
			/// <example>
			/// <code>
			/// [C++]
			/// 
			/// sheet->GetIPageSetup()->SetPrintTitleColumns(new String("$A:$A"));
			/// 
			/// </code>
			/// 
			/// </example>
			/// 
			/// 
			 virtual void SetPrintTitleColumns(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Represents the rows that contain the cells to be repeated at the top of each page.
			/// </summary>
			/// 
			/// <example>
			/// <code>
			/// [C++]
			/// 
			/// intrusive_ptr<Aspose::Cells::Systems::String> sRows = sheet->GetIPageSetup()->GetPrintTitleRows();
			/// 
			/// </code>
			/// 
			/// </example>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetPrintTitleRows()=0;
			/// <summary>
			/// Represents the rows that contain the cells to be repeated at the top of each page.
			/// </summary>
			/// 
			/// <example>
			/// <code>
			/// [C++]
			/// 
			/// sheet->GetIPageSetup()->SetPrintTitleRows(new String("$1:$1"));
			/// 
			/// </code>
			/// 
			/// </example>
			/// 
			/// 
			 virtual void SetPrintTitleRows(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Represents if elements of the document will be printed in black and white.
			/// </summary>
			/// 
			/// 
			 virtual bool GetBlackAndWhite()=0;
			/// <summary>
			/// Represents if elements of the document will be printed in black and white.
			/// </summary>
			/// 
			/// 
			 virtual void SetBlackAndWhite(bool value)=0;
			/// <summary>
			/// Represent if the sheet is printed centered horizontally.
			/// </summary>
			/// 
			/// 
			 virtual bool GetCenterHorizontally()=0;
			/// <summary>
			/// Represent if the sheet is printed centered horizontally.
			/// </summary>
			/// 
			/// 
			 virtual void SetCenterHorizontally(bool value)=0;
			/// <summary>
			/// Represent if the sheet is printed centered vertically.
			/// </summary>
			/// 
			/// 
			 virtual bool GetCenterVertically()=0;
			/// <summary>
			/// Represent if the sheet is printed centered vertically.
			/// </summary>
			/// 
			/// 
			 virtual void SetCenterVertically(bool value)=0;
			/// <summary>
			/// Represents if the sheet will be printed without graphics.
			/// </summary>
			/// 
			/// 
			 virtual bool GetPrintDraft()=0;
			/// <summary>
			/// Represents if the sheet will be printed without graphics.
			/// </summary>
			/// 
			/// 
			 virtual void SetPrintDraft(bool value)=0;
			/// <summary>
			/// Represents the distance from the bottom of the page to the footer, in unit of centimeters.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Double GetFooterMargin()=0;
			/// <summary>
			/// Represents the distance from the bottom of the page to the footer, in unit of centimeters.
			/// </summary>
			/// 
			/// 
			 virtual void SetFooterMargin(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Represents the distance from the bottom of the page to the footer, in unit of inches.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Double GetFooterMarginInch()=0;
			/// <summary>
			/// Represents the distance from the bottom of the page to the footer, in unit of inches.
			/// </summary>
			/// 
			/// 
			 virtual void SetFooterMarginInch(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Represents the distance from the top of the page to the header, in unit of centimeters.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Double GetHeaderMargin()=0;
			/// <summary>
			/// Represents the distance from the top of the page to the header, in unit of centimeters.
			/// </summary>
			/// 
			/// 
			 virtual void SetHeaderMargin(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Represents the distance from the top of the page to the header, in unit of inches.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Double GetHeaderMarginInch()=0;
			/// <summary>
			/// Represents the distance from the top of the page to the header, in unit of inches.
			/// </summary>
			/// 
			/// 
			 virtual void SetHeaderMarginInch(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Represents the size of the left margin, in unit of centimeters.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Double GetLeftMargin()=0;
			/// <summary>
			/// Represents the size of the left margin, in unit of centimeters.
			/// </summary>
			/// 
			/// 
			 virtual void SetLeftMargin(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Represents the size of the left margin, in unit of inches.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Double GetLeftMarginInch()=0;
			/// <summary>
			/// Represents the size of the left margin, in unit of inches.
			/// </summary>
			/// 
			/// 
			 virtual void SetLeftMarginInch(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Represents the size of the right margin, in unit of centimeters.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Double GetRightMargin()=0;
			/// <summary>
			/// Represents the size of the right margin, in unit of centimeters.
			/// </summary>
			/// 
			/// 
			 virtual void SetRightMargin(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Represents the size of the right margin, in unit of inches.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Double GetRightMarginInch()=0;
			/// <summary>
			/// Represents the size of the right margin, in unit of inches.
			/// </summary>
			/// 
			/// 
			 virtual void SetRightMarginInch(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Represents the size of the top margin, in unit of centimeters.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Double GetTopMargin()=0;
			/// <summary>
			/// Represents the size of the top margin, in unit of centimeters.
			/// </summary>
			/// 
			/// 
			 virtual void SetTopMargin(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Represents the size of the top margin, in unit of inches.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Double GetTopMarginInch()=0;
			/// <summary>
			/// Represents the size of the top margin, in unit of inches.
			/// </summary>
			/// 
			/// 
			 virtual void SetTopMarginInch(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Represents the size of the bottom margin, in unit of centimeters.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Double GetBottomMargin()=0;
			/// <summary>
			/// Represents the size of the bottom margin, in unit of centimeters.
			/// </summary>
			/// 
			/// 
			 virtual void SetBottomMargin(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Represents the size of the bottom margin, in unit of inches.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Double GetBottomMarginInch()=0;
			/// <summary>
			/// Represents the size of the bottom margin, in unit of inches.
			/// </summary>
			/// 
			/// 
			 virtual void SetBottomMarginInch(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Represents the first page number that will be used when this sheet is printed.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Int32 GetFirstPageNumber()=0;
			/// <summary>
			/// Represents the first page number that will be used when this sheet is printed.
			/// </summary>
			/// 
			/// 
			 virtual void SetFirstPageNumber(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Represents  the number of pages tall the worksheet will be scaled to when it's printed.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Int32 GetFitToPagesTall()=0;
			/// <summary>
			/// Represents  the number of pages tall the worksheet will be scaled to when it's printed.
			/// </summary>
			/// 
			/// 
			 virtual void SetFitToPagesTall(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Represents the number of pages wide the worksheet will be scaled to when it's printed.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Int32 GetFitToPagesWide()=0;
			/// <summary>
			/// Represents the number of pages wide the worksheet will be scaled to when it's printed.
			/// </summary>
			/// 
			/// 
			 virtual void SetFitToPagesWide(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// If this property is False, the GetFitToPagesWide() and GetFitToPagesTall() methods control how the worksheet is scaled.
			/// </summary>
			/// 
			/// 
			 virtual bool IsPercentScale()=0;
			/// <summary>
			/// If this property is False, the GetFitToPagesWide() and GetFitToPagesTall() methods control how the worksheet is scaled.
			/// </summary>
			/// 
			/// 
			  virtual void SetPercentScale(bool value) = 0;
			/// <summary>
			/// Represents the order that Microsoft Excel uses to number pages when printing a large worksheet.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::PrintOrderType GetOrder()=0;
			/// <summary>
			/// Represents the order that Microsoft Excel uses to number pages when printing a large worksheet.
			/// </summary>
			/// 
			/// 
			 virtual void SetOrder(Aspose::Cells::PrintOrderType value)=0;
			/// <summary>
			/// Represents the size of the paper.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::PaperSizeType GetPaperSize()=0;
			/// <summary>
			/// Represents the size of the paper.
			/// </summary>
			/// 
			/// 
			 virtual void SetPaperSize(Aspose::Cells::PaperSizeType value)=0;
			/// <summary>
			/// Represents the width in inches of the paper, considered page orientation.
			/// </summary>
			  virtual Aspose::Cells::Systems::Double GetPaperWidth() = 0;
			/// <summary>
			/// Represents the height in inches of the paper, considered page orientation.
			/// </summary>
			  virtual Aspose::Cells::Systems::Double GetPaperHeight() = 0;
			/// <summary>
			/// Represents page print orientation.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::PageOrientationType GetOrientation()=0;
			/// <summary>
			/// Represents page print orientation.
			/// </summary>
			/// 
			/// 
			 virtual void SetOrientation(Aspose::Cells::PageOrientationType value)=0;
			/// <summary>
			/// Represents the way comments are printed with the sheet.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::PrintCommentsType GetPrintComments()=0;
			/// <summary>
			/// Represents the way comments are printed with the sheet.
			/// </summary>
			/// 
			/// 
			 virtual void SetPrintComments(Aspose::Cells::PrintCommentsType value)=0;
			/// <summary>
			/// Specifies the type of print error displayed.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::PrintErrorsType GetPrintErrors()=0;
			/// <summary>
			/// Specifies the type of print error displayed.
			/// </summary>
			/// 
			/// 
			 virtual void SetPrintErrors(Aspose::Cells::PrintErrorsType value)=0;
			/// <summary>
			/// Represents if row and column headings are printed with this page.
			/// </summary>
			/// 
			/// 
			 virtual bool GetPrintHeadings()=0;
			/// <summary>
			/// Represents if row and column headings are printed with this page.
			/// </summary>
			/// 
			/// 
			 virtual void SetPrintHeadings(bool value)=0;
			/// <summary>
			/// Represents if cell gridlines are printed on the page.
			/// </summary>
			/// 
			/// 
			 virtual bool GetPrintGridlines()=0;
			/// <summary>
			/// Represents if cell gridlines are printed on the page.
			/// </summary>
			/// 
			/// 
			 virtual void SetPrintGridlines(bool value)=0;
			/// <summary>
			/// Represents the scaling factor in percent. It should be between 10 and 400.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Int32 GetZoom()=0;
			/// <summary>
			/// Represents the scaling factor in percent. It should be between 10 and 400.
			/// </summary>
			/// 
			/// 
			 virtual void SetZoom(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Indicates whether the first the page number is automatically assigned.
			/// </summary>
			/// 
			/// 
			 virtual bool IsAutoFirstPageNumber()=0;
			/// <summary>
			/// Indicates whether the first the page number is automatically assigned.
			/// </summary>
			/// 
			/// 
			  virtual void SetAutoFirstPageNumber(bool value) = 0;
			/// <summary>
			/// Represents the print quality.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Int32 GetPrintQuality()=0;
			/// <summary>
			/// Represents the print quality.
			/// </summary>
			/// 
			/// 
			 virtual void SetPrintQuality(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Get number of copies to print.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Int32 GetPrintCopies()=0;
			/// <summary>
			/// Sets number of copies to print.
			/// </summary>
			/// 
			/// 
			 virtual void SetPrintCopies(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Clears header and footer setting.
			/// </summary>
			/// 
			/// 
			 virtual void ClearHeaderFooter()=0;
			/// <summary>
			///  Gets a script formatting the header of an Excel file.
			/// </summary>
			/// 
			/// <param name="section" ><p>0:Left Section.</p>
			/// 
			/// <p>1:Center Section</p>
			/// 
			/// <p>2:Right Section</p>
			/// </param>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetHeader(Aspose::Cells::Systems::Int32 section)=0;
			/// <summary>
			/// Gets all commands of header or footer.
			/// </summary>
			/// <param name="headerFooterScript" >The header/footer script</param>
			/// <returns>Returns all commands of header or footer.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::IHeaderFooterCommand*>> 		GetIHeaderFooterCommand(intrusive_ptr<Aspose::Cells::Systems::String> headerFooterScript)=0;
			/// <summary>
			///  Gets a script formatting the footer of an Excel file.
			/// </summary>
			/// 
			/// <param name="section" ><p>0:Left Section.</p>
			/// 
			/// <p>1:Center Section</p>
			/// 
			/// <p>2:Right Section</p>
			/// </param>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetFooter(Aspose::Cells::Systems::Int32 section)=0;
			/// <summary>
			///  Sets a script formatting the header of an Excel file.
			///  </summary>
			/// 
			/// <param name="section" ><p>0:Left Section.</p>
			/// 
			///  <p>1:Center Section</p>
			/// 
			///  <p>2:Right Section</p>
			/// </param>
			/// 
			/// <param name="headerScript" >Header format script.</param>
			/// 
			/// <remarks><p>Script commands:</p>
			/// 
			/// <table class="dtTABLE"  cellspacing="0" >
			///  <tr>
			///     <td width="25%" ><font color="gray" ><b>Command</b>
			/// </font>
			/// </td>
			/// 
			///     <td width="75%" ><font color="gray" ><b>Description</b>
			/// </font>
			/// </td>
			/// 
			///  </tr>
			///  
			///  <tr>
			///  <td width="25%" >P</td>
			/// 
			///     <td width="75%" >Current page number</td>
			/// 
			///  </tr>
			///    
			///  <tr>
			///  <td width="25%" >N</td>
			/// 
			///     <td width="75%" >Page count</td>
			/// 
			///  </tr>
			///    
			///  <tr>
			///  <td width="25%" >D</td>
			/// 
			///     <td width="75%" >Current date</td>
			/// 
			///  </tr>
			///    
			///  <tr>
			///  <td width="25%" >T</td>
			/// 
			///     <td width="75%" >Current time</td>
			/// 
			///  </tr>
			/// 
			///  <tr>
			///  <td width="25%" >A</td>
			/// 
			///     <td width="75%" >Sheet name</td>
			/// 
			///  </tr>
			/// 
			///  <tr>
			///  <td width="25%" >F</td>
			/// 
			///     <td width="75%" >File name without path</td>
			/// 
			///  </tr>
			/// 
			///  <tr>
			///  <td width="25%" >"FontName"</td>
			/// 
			///     <td width="75%" >Font name, for example: "Arial"</td>
			/// 
			///  </tr>
			/// 
			///  <tr>
			///  <td width="25%" >"FontName, FontStyle"</td>
			/// 
			///     <td width="75%" >Font name and font style, for example: "Arial,Bold"</td>
			/// 
			///  </tr>
			/// 
			///  <tr>
			///  <td width="25%" >FontSize</td>
			/// 
			///     <td width="75%" >Font size. If this command is followed by a plain number to be printed in the header, it will be separated from the font height with a space character.</td>
			/// 
			///  </tr>
			/// 
			///  <tr>
			///  <td width="25%" >"K"</td>
			/// 
			///     <td width="75%" >Font color, for example (RED): FF0000</td>
			/// 
			///  </tr>
			/// 
			///  <tr>
			///  <td width="25%" >G</td>
			/// 
			///     <td width="75%" >Image script</td>
			/// 
			///  </tr>
			/// 
			/// </table>
			/// 
			/// For example: "Arial,Bold8Header Note"
			///  </remarks>
			/// 
			/// 
			 virtual void SetHeader(Aspose::Cells::Systems::Int32 section , intrusive_ptr<Aspose::Cells::Systems::String> headerScript)=0;
			/// <summary>
			///  Sets a script formatting the footer of an Excel file.
			///  </summary>
			/// 
			/// <param name="section" ><p>0:Left Section.</p>
			/// 
			///  <p>1:Center Section</p>
			/// 
			///  <p>2:Right Section</p>
			/// </param>
			/// 
			/// <param name="footerScript" >Footer format script.</param>
			/// 
			/// <remarks><p>Script commands:</p>
			/// 
			/// <table class="dtTABLE"  cellspacing="0" >
			///  <tr>
			///     <td width="25%" ><font color="gray" ><b>Command</b>
			/// </font>
			/// </td>
			/// 
			///     <td width="75%" ><font color="gray" ><b>Description</b>
			/// </font>
			/// </td>
			/// 
			///  </tr>
			///  
			///  <tr>
			///  <td width="25%" >P</td>
			/// 
			///     <td width="75%" >Current page number</td>
			/// 
			///  </tr>
			///    
			///  <tr>
			///  <td width="25%" >N</td>
			/// 
			///     <td width="75%" >Page count</td>
			/// 
			///  </tr>
			///    
			///  <tr>
			///  <td width="25%" >D</td>
			/// 
			///     <td width="75%" >Current date</td>
			/// 
			///  </tr>
			///    
			///  <tr>
			///  <td width="25%" >T</td>
			/// 
			///     <td width="75%" >Current time</td>
			/// 
			///  </tr>
			/// 
			///  <tr>
			///  <td width="25%" >A</td>
			/// 
			///     <td width="75%" >Sheet name</td>
			/// 
			///  </tr>
			/// 
			///  <tr>
			///  <td width="25%" >F</td>
			/// 
			///     <td width="75%" >File name without path</td>
			/// 
			///  </tr>
			/// 
			///  <tr>
			///  <td width="25%" >"FontName"</td>
			/// 
			///     <td width="75%" >Font name, for example: "Arial"</td>
			/// 
			///  </tr>
			/// 
			///  <tr>
			///  <td width="25%" >"FontName, FontStyle"</td>
			/// 
			///     <td width="75%" >Font name and font style, for example: "Arial,Bold"</td>
			/// 
			///  </tr>
			/// 
			///  <tr>
			///  <td width="25%" >FontSize</td>
			/// 
			///     <td width="75%" >Font size. If this command is followed by a plain number to be printed in the header, it will be separated from the font height with a space character.</td>
			/// 
			///  </tr>
			/// 
			///  <tr>
			///  <td width="25%" >G</td>
			/// 
			///     <td width="75%" >Image script</td>
			/// 
			///  </tr>
			/// 
			/// </table>
			/// 
			/// For example: "Arial,Bold8Footer Note"
			///  </remarks>
			/// 
			/// 
			 virtual void SetFooter(Aspose::Cells::Systems::Int32 section , intrusive_ptr<Aspose::Cells::Systems::String> footerScript)=0;
			/// <summary>
			///  Sets a script formatting the even page header of an Excel file.
			/// Only effect in Excel 2007 when IsHFDiffOddEven() is true.
			/// </summary>
			/// 
			/// <param name="section" ><p>0:Left Section.</p>
			/// 
			/// <p>1:Center Section</p>
			/// 
			/// <p>2:Right Section</p>
			/// </param>
			/// 
			/// <param name="headerScript" >Header format script.</param>
			/// 
			/// 
			 virtual void SetEvenHeader(Aspose::Cells::Systems::Int32 section , intrusive_ptr<Aspose::Cells::Systems::String> headerScript)=0;
			/// <summary>
			///  Gets a script formatting the even header of an Excel file.
			/// </summary>
			/// 
			/// <param name="section" ><p>0:Left Section.</p>
			/// 
			/// <p>1:Center Section</p>
			/// 
			/// <p>2:Right Section</p>
			/// </param>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetEvenHeader(Aspose::Cells::Systems::Int32 section)=0;
			/// <summary>
			///  Sets a script formatting the even page footer of an Excel file.
			/// Only effect in Excel 2007 when IsHFDiffOddEven() is true.
			/// </summary>
			/// 
			/// <param name="section" ><p>0:Left Section.</p>
			/// 
			/// <p>1:Center Section</p>
			/// 
			/// <p>2:Right Section</p>
			/// </param>
			/// 
			/// <param name="footerScript" >Footer format script.</param>
			/// 
			/// 
			 virtual void SetEvenFooter(Aspose::Cells::Systems::Int32 section , intrusive_ptr<Aspose::Cells::Systems::String> footerScript)=0;
			/// <summary>
			///  Gets a script formatting the even footer of an Excel file.
			/// </summary>
			/// 
			/// <param name="section" ><p>0:Left Section.</p>
			/// 
			/// <p>1:Center Section</p>
			/// 
			/// <p>2:Right Section</p>
			/// </param>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetEvenFooter(Aspose::Cells::Systems::Int32 section)=0;
			/// <summary>
			///  Sets a script formatting the first page header of an Excel file.
			/// Only effect in Excel 2007 when IsHFDiffFirst is true.
			/// </summary>
			/// 
			/// <param name="section" ><p>0:Left Section.</p>
			/// 
			/// <p>1:Center Section</p>
			/// 
			/// <p>2:Right Section</p>
			/// </param>
			/// 
			/// <param name="headerScript" >Header format script.</param>
			/// 
			/// 
			 virtual void SetFirstPageHeader(Aspose::Cells::Systems::Int32 section , intrusive_ptr<Aspose::Cells::Systems::String> headerScript)=0;
			/// <summary>
			///  Gets a script formatting the first page header of an Excel file.
			/// </summary>
			/// 
			/// <param name="section" ><p>0:Left Section.</p>
			/// 
			/// <p>1:Center Section</p>
			/// 
			/// <p>2:Right Section</p>
			/// </param>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetFirstPageHeader(Aspose::Cells::Systems::Int32 section)=0;
			/// <summary>
			///  Sets a script formatting the first page footer of an Excel file.
			/// </summary>
			/// 
			/// <param name="section" ><p>0:Left Section.</p>
			/// 
			/// <p>1:Center Section</p>
			/// 
			/// <p>2:Right Section</p>
			/// </param>
			/// 
			/// <param name="footerScript" >Footer format script.</param>
			/// 
			/// 
			 virtual void SetFirstPageFooter(Aspose::Cells::Systems::Int32 section , intrusive_ptr<Aspose::Cells::Systems::String> footerScript)=0;
			/// <summary>
			///  Gets a script formatting the first page footer of an Excel file.
			/// </summary>
			/// 
			/// <param name="section" ><p>0:Left Section.</p>
			/// 
			/// <p>1:Center Section</p>
			/// 
			/// <p>2:Right Section</p>
			/// </param>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetFirstPageFooter(Aspose::Cells::Systems::Int32 section)=0;
			/// <summary>
			/// True means that the header/footer of the odd pages is different with odd pages.
			/// </summary>
			/// 
			/// 
			 virtual bool IsHFDiffOddEven()=0;
			/// <summary>
			/// True means that the header/footer of the odd pages is different with odd pages.
			/// </summary>
			/// 
			/// 
			  virtual void SetHFDiffOddEven(bool value) = 0;
			/// <summary>
			/// True means that the header/footer of the first page is different with other pages.
			/// </summary>
			/// 
			/// 
			  virtual bool IsHFDiffFirst() = 0;
			/// <summary>
			/// True means that the header/footer of the first page is different with other pages.
			/// </summary>
			/// 
			/// 
			  virtual void SetHFDiffFirst(bool value) = 0;
			/// <summary>
			/// Indicates whether header and footer are scaled with document scaling.
			/// Only applies for Excel 2007.
			/// </summary>
			/// 
			/// 
			  virtual bool IsHFScaleWithDoc() = 0;
			/// <summary>
			/// Indicates whether header and footer are scaled with document scaling.
			/// Only applies for Excel 2007.
			/// </summary>
			/// 
			/// 
			  virtual void SetHFScaleWithDoc(bool value) = 0;
			/// <summary>
			/// Indicates whether header and footer margins are aligned with the page margins.
			/// Only applies for Excel 2007.
			/// </summary>
			/// 
			/// 
			 virtual bool IsHFAlignMargins()=0;
			/// <summary>
			/// Indicates whether header and footer margins are aligned with the page margins.
			/// Only applies for Excel 2007.
			/// </summary>
			  virtual void SetHFAlignMargins(bool value) = 0;
			/// <summary>
			/// Sets an image in the header of a worksheet.
			/// </summary>
			/// <param name="section" ><p>0:Left Section.</p>
			/// <p>1:Center Section</p>
			/// <p>2:Right Section</p>
			/// </param>
			/// <param name="headerPicture" >Image data.</param>
			/// <returns>Returns <see cref="IPicture" />
			///  object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IPicture> 		SetHeaderIPicture(Aspose::Cells::Systems::Int32 section , intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> headerPicture)=0;
			/// <summary>
			/// Sets an image in the footer of a worksheet.
			/// </summary>
			/// <param name="section" ><p>0:Left Section.</p>
			/// <p>1:Center Section</p>
			/// <p>2:Right Section</p>
			/// </param>
			/// <param name="footerPicture" >Image data.</param>
			/// <returns>Returns <see cref="IPicture" />
			///  object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IPicture> 		SetFooterIPicture(Aspose::Cells::Systems::Int32 section , intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> footerPicture)=0;
			/// <summary>
			/// Sets an image in the header/footer of a worksheet.
			/// </summary>
			/// <param name="isFirst" >Indicateds whether setting the picture of first page header/footer. </param>
			/// <param name="isEven" >Indicateds whether setting the picture of even page header/footer.</param>
			/// <param name="isHeader" >Indicateds whether setting the picture of header/footer.</param>
			/// <param name="section" ><p>0:Left Section.</p>
			/// <p>1:Center Section</p>
			/// <p>2:Right Section</p>
			/// </param>
			/// <param name="imageData" >Image data.</param>
			/// <returns>Returns <see cref="IPicture" />
			///  object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IPicture> 		SetIPicture(bool isFirst , bool isEven , bool isHeader , Aspose::Cells::Systems::Int32 section , intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> imageData)=0;
			/// <summary>
			/// Gets the <see cref="IPicture" />
			///  object of the header / footer.
			/// </summary>
			/// <param name="isHeader" >Indicates whether it is in the header or footer.</param>
			/// <param name="section" ><p>0:Left Section.</p>
			/// <p>1:Center Section</p>
			/// <p>2:Right Section</p>
			/// </param>
			/// <returns>Returns <see cref="IPicture" />
			///  object.
			/// Returns null if there is no picture.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IPicture> 		GetIPicture(bool isHeader , Aspose::Cells::Systems::Int32 section)=0;
			/// <summary>
			///  Gets the <see cref="IPicture" />
			///  object of the header / footer.
			/// </summary>
			/// <param name="isFirst" >Indicateds whether getting the picture of first page header/footer. </param>
			/// <param name="isEven" >Indicateds whether getting the picture of even page header/footer.</param>
			/// <param name="isHeader" >Indicateds whether getting the picture of header/footer.</param>
			/// <param name="section" ><p>0:Left Section.</p>
			/// <p>1:Center Section</p>
			/// <p>2:Right Section</p>
			/// </param>
			/// <returns>Returns <see cref="IPicture" />
			///  object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IPicture> 		GetIPicture(bool isFirst , bool isEven , bool isHeader , Aspose::Cells::Systems::Int32 section)=0;

	};
}
}
