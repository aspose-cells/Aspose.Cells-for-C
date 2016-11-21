#pragma once
#include "System/Object.h"
#include "System/String.h"
#include "System/Double.h"
#include "System/Int32.h"

namespace Aspose {
	namespace Cells {
		enum PrintOrderType;
		enum PaperSizeType;
		enum PageOrientationType;
		enum PrintCommentsType;
		enum PrintErrorsType;
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
	class ASPOSE_CELLS_API IPageSetup : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Represents the range to be printed.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetPrintArea()=0;
			/// <summary>
			/// Represents the range to be printed.
			/// </summary>
			/// 
			/// 
			 virtual void SetPrintArea(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Represents the columns that contain the cells to be repeated on the left side of each page.
			/// </summary>
			/// 
			/// <example>
			/// <code>
			/// [C++]
			/// intrusive_ptr<Aspose::Cells::System::String> sColumns = sheet->GetIPageSetup()->GetPrintTitleColumns();
			/// 
			/// </code>
			/// 
			/// </example>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetPrintTitleColumns()=0;
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
			 virtual void SetPrintTitleColumns(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Represents the rows that contain the cells to be repeated at the top of each page.
			/// </summary>
			/// 
			/// <example>
			/// <code>
			/// [C++]
			/// 
			/// intrusive_ptr<Aspose::Cells::System::String> sRows = sheet->GetIPageSetup()->GetPrintTitleRows();
			/// 
			/// </code>
			/// 
			/// </example>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetPrintTitleRows()=0;
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
			 virtual void SetPrintTitleRows(intrusive_ptr<Aspose::Cells::System::String> value)=0;
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
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetPrintDraft() method.</remarks>
			/// 
			/// 
			 virtual bool GetDraft()=0;
			/// <summary>
			/// Represents if the sheet will be printed without graphics.
			/// </summary>
			/// 
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use SetPrintDraft() method.</remarks>
			/// 
			/// 
			 virtual void SetDraft(bool value)=0;
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
			 virtual Aspose::Cells::System::Double GetFooterMargin()=0;
			/// <summary>
			/// Represents the distance from the bottom of the page to the footer, in unit of centimeters.
			/// </summary>
			/// 
			/// 
			 virtual void SetFooterMargin(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Represents the distance from the bottom of the page to the footer, in unit of inches.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Double GetFooterMarginInch()=0;
			/// <summary>
			/// Represents the distance from the bottom of the page to the footer, in unit of inches.
			/// </summary>
			/// 
			/// 
			 virtual void SetFooterMarginInch(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Represents the distance from the top of the page to the header, in unit of centimeters.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Double GetHeaderMargin()=0;
			/// <summary>
			/// Represents the distance from the top of the page to the header, in unit of centimeters.
			/// </summary>
			/// 
			/// 
			 virtual void SetHeaderMargin(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Represents the distance from the top of the page to the header, in unit of inches.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Double GetHeaderMarginInch()=0;
			/// <summary>
			/// Represents the distance from the top of the page to the header, in unit of inches.
			/// </summary>
			/// 
			/// 
			 virtual void SetHeaderMarginInch(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Represents the size of the left margin, in unit of centimeters.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Double GetLeftMargin()=0;
			/// <summary>
			/// Represents the size of the left margin, in unit of centimeters.
			/// </summary>
			/// 
			/// 
			 virtual void SetLeftMargin(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Represents the size of the left margin, in unit of inches.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Double GetLeftMarginInch()=0;
			/// <summary>
			/// Represents the size of the left margin, in unit of inches.
			/// </summary>
			/// 
			/// 
			 virtual void SetLeftMarginInch(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Represents the size of the right margin, in unit of centimeters.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Double GetRightMargin()=0;
			/// <summary>
			/// Represents the size of the right margin, in unit of centimeters.
			/// </summary>
			/// 
			/// 
			 virtual void SetRightMargin(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Represents the size of the right margin, in unit of inches.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Double GetRightMarginInch()=0;
			/// <summary>
			/// Represents the size of the right margin, in unit of inches.
			/// </summary>
			/// 
			/// 
			 virtual void SetRightMarginInch(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Represents the size of the top margin, in unit of centimeters.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Double GetTopMargin()=0;
			/// <summary>
			/// Represents the size of the top margin, in unit of centimeters.
			/// </summary>
			/// 
			/// 
			 virtual void SetTopMargin(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Represents the size of the top margin, in unit of inches.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Double GetTopMarginInch()=0;
			/// <summary>
			/// Represents the size of the top margin, in unit of inches.
			/// </summary>
			/// 
			/// 
			 virtual void SetTopMarginInch(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Represents the size of the bottom margin, in unit of centimeters.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Double GetBottomMargin()=0;
			/// <summary>
			/// Represents the size of the bottom margin, in unit of centimeters.
			/// </summary>
			/// 
			/// 
			 virtual void SetBottomMargin(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Represents the size of the bottom margin, in unit of inches.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Double GetBottomMarginInch()=0;
			/// <summary>
			/// Represents the size of the bottom margin, in unit of inches.
			/// </summary>
			/// 
			/// 
			 virtual void SetBottomMarginInch(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Represents the first page number that will be used when this sheet is printed.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 GetFirstPageNumber()=0;
			/// <summary>
			/// Represents the first page number that will be used when this sheet is printed.
			/// </summary>
			/// 
			/// 
			 virtual void SetFirstPageNumber(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Represents  the number of pages tall the worksheet will be scaled to when it's printed.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 GetFitToPagesTall()=0;
			/// <summary>
			/// Represents  the number of pages tall the worksheet will be scaled to when it's printed.
			/// </summary>
			/// 
			/// 
			 virtual void SetFitToPagesTall(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Represents the number of pages wide the worksheet will be scaled to when it's printed.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 GetFitToPagesWide()=0;
			/// <summary>
			/// Represents the number of pages wide the worksheet will be scaled to when it's printed.
			/// </summary>
			/// 
			/// 
			 virtual void SetFitToPagesWide(Aspose::Cells::System::Int32 value)=0;
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
			 virtual void SetIsPercentScale(bool value)=0;
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
			 virtual Aspose::Cells::System::Int32 GetZoom()=0;
			/// <summary>
			/// Represents the scaling factor in percent. It should be between 10 and 400.
			/// </summary>
			/// 
			/// 
			 virtual void SetZoom(Aspose::Cells::System::Int32 value)=0;
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
			 virtual void SetIsAutoFirstPageNumber(bool value)=0;
			/// <summary>
			/// Represents the print quality.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 GetPrintQuality()=0;
			/// <summary>
			/// Represents the print quality.
			/// </summary>
			/// 
			/// 
			 virtual void SetPrintQuality(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Get number of copies to print.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 GetPrintCopies()=0;
			/// <summary>
			/// Sets number of copies to print.
			/// </summary>
			/// 
			/// 
			 virtual void SetPrintCopies(Aspose::Cells::System::Int32 value)=0;
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
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetHeader(Aspose::Cells::System::Int32 section)=0;
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
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetFooter(Aspose::Cells::System::Int32 section)=0;
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
			 virtual void SetHeader(Aspose::Cells::System::Int32 section , intrusive_ptr<Aspose::Cells::System::String> headerScript)=0;
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
			 virtual void SetFooter(Aspose::Cells::System::Int32 section , intrusive_ptr<Aspose::Cells::System::String> footerScript)=0;
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
			 virtual void SetEvenHeader(Aspose::Cells::System::Int32 section , intrusive_ptr<Aspose::Cells::System::String> headerScript)=0;
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
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetEvenHeader(Aspose::Cells::System::Int32 section)=0;
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
			 virtual void SetEvenFooter(Aspose::Cells::System::Int32 section , intrusive_ptr<Aspose::Cells::System::String> footerScript)=0;
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
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetEvenFooter(Aspose::Cells::System::Int32 section)=0;
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
			 virtual void SetFirstPageHeader(Aspose::Cells::System::Int32 section , intrusive_ptr<Aspose::Cells::System::String> headerScript)=0;
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
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetFirstPageHeader(Aspose::Cells::System::Int32 section)=0;
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
			 virtual void SetFirstPageFooter(Aspose::Cells::System::Int32 section , intrusive_ptr<Aspose::Cells::System::String> footerScript)=0;
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
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetFirstPageFooter(Aspose::Cells::System::Int32 section)=0;
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
			 virtual void SetIsHFDiffOddEven(bool value)=0;
			/// <summary>
			/// True means that the header/footer of the first page is different with other pages.
			/// </summary>
			/// 
			/// 
			 virtual bool IsHFDiffFirst()=0;
			/// <summary>
			/// True means that the header/footer of the first page is different with other pages.
			/// </summary>
			/// 
			/// 
			 virtual void SetIsHFDiffFirst(bool value)=0;
			/// <summary>
			/// Indicates whether header and footer are scaled with document scaling.
			/// Only applies for Excel 2007.
			/// </summary>
			/// 
			/// 
			 virtual bool IsHFScaleWithDoc()=0;
			/// <summary>
			/// Indicates whether header and footer are scaled with document scaling.
			/// Only applies for Excel 2007.
			/// </summary>
			/// 
			/// 
			 virtual void SetIsHFScaleWithDoc(bool value)=0;
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
			/// 
			/// 
			 virtual void SetIsHFAlignMargins(bool value)=0;

	};
}
}
