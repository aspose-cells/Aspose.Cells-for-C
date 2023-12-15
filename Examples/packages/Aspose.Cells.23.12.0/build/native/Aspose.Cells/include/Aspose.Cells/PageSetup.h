// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PAGESETUP_H
#define ASPOSE_CELLS_PAGESETUP_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/PageOrientationType.h"
#include "Aspose.Cells/PaperSizeType.h"
#include "Aspose.Cells/PrintCommentsType.h"
#include "Aspose.Cells/PrintErrorsType.h"
#include "Aspose.Cells/PrintOrderType.h"

namespace Aspose { namespace Cells { namespace Ods {
    class OdsPageBackground;
} } }

namespace Aspose { namespace Cells {
    class CopyOptions;
    class HeaderFooterCommand;
} }

namespace Aspose { namespace Cells { namespace Drawing {
    class Picture;
} } }

namespace Aspose { namespace Cells {

using namespace Aspose::Cells::Drawing;
using namespace Aspose::Cells::Ods;

class PageSetup_Impl;

/// <summary>
/// Encapsulates the object that represents the page setup description.
/// The PageSetup object contains all page setup options.
/// </summary>
class PageSetup {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PageSetup_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PageSetup(PageSetup_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PageSetup(const PageSetup& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PageSetup();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PageSetup& operator=(const PageSetup& src);
    /// <summary>
    /// operator bool()
    /// </summary>
    /// <returns>Returns true if the implementation object is not nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API explicit operator bool() const { return _impl != nullptr; }
    /// <summary>
    /// Checks whether the implementation object is nullptr.
    /// </summary>
    /// <returns>Returns true if the implementation object is nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API bool IsNull() const { return _impl == nullptr; }
    
public:
    /// <summary>
    /// Gets the background of ODS.
    /// </summary>
    ASPOSE_CELLS_API OdsPageBackground GetODSPageBackground();
    /// <summary>
    /// Copies the setting of the page setup.
    /// </summary>
    /// <param name="source">The source.</param>
    /// <param name="copyOptions">The copy options.</param>
    ASPOSE_CELLS_API void Copy(const PageSetup& source, const CopyOptions& copyOptions);
    /// <summary>
    /// Represents the range to be printed.
    /// </summary>
    ASPOSE_CELLS_API U16String GetPrintArea();
    /// <summary>
    /// Represents the range to be printed.
    /// </summary>
    ASPOSE_CELLS_API void SetPrintArea(const U16String& value);
    /// <summary>
    /// Represents the range to be printed.
    /// </summary>
    ASPOSE_CELLS_API void SetPrintArea(const char16_t* value);
    /// <summary>
    /// Represents the columns that contain the cells to be repeated on the left side of each page.
    /// </summary>
    ASPOSE_CELLS_API U16String GetPrintTitleColumns();
    /// <summary>
    /// Represents the columns that contain the cells to be repeated on the left side of each page.
    /// </summary>
    ASPOSE_CELLS_API void SetPrintTitleColumns(const U16String& value);
    /// <summary>
    /// Represents the columns that contain the cells to be repeated on the left side of each page.
    /// </summary>
    ASPOSE_CELLS_API void SetPrintTitleColumns(const char16_t* value);
    /// <summary>
    /// Represents the rows that contain the cells to be repeated at the top of each page.
    /// </summary>
    ASPOSE_CELLS_API U16String GetPrintTitleRows();
    /// <summary>
    /// Represents the rows that contain the cells to be repeated at the top of each page.
    /// </summary>
    ASPOSE_CELLS_API void SetPrintTitleRows(const U16String& value);
    /// <summary>
    /// Represents the rows that contain the cells to be repeated at the top of each page.
    /// </summary>
    ASPOSE_CELLS_API void SetPrintTitleRows(const char16_t* value);
    /// <summary>
    /// Represents if elements of the document will be printed in black and white.
    /// </summary>
    ASPOSE_CELLS_API bool GetBlackAndWhite();
    /// <summary>
    /// Represents if elements of the document will be printed in black and white.
    /// </summary>
    ASPOSE_CELLS_API void SetBlackAndWhite(bool value);
    /// <summary>
    /// Represent if the sheet is printed centered horizontally.
    /// </summary>
    ASPOSE_CELLS_API bool GetCenterHorizontally();
    /// <summary>
    /// Represent if the sheet is printed centered horizontally.
    /// </summary>
    ASPOSE_CELLS_API void SetCenterHorizontally(bool value);
    /// <summary>
    /// Represent if the sheet is printed centered vertically.
    /// </summary>
    ASPOSE_CELLS_API bool GetCenterVertically();
    /// <summary>
    /// Represent if the sheet is printed centered vertically.
    /// </summary>
    ASPOSE_CELLS_API void SetCenterVertically(bool value);
    /// <summary>
    /// Represents if the sheet will be printed without graphics.
    /// </summary>
    ASPOSE_CELLS_API bool GetPrintDraft();
    /// <summary>
    /// Represents if the sheet will be printed without graphics.
    /// </summary>
    ASPOSE_CELLS_API void SetPrintDraft(bool value);
    /// <summary>
    /// Represents the distance from the bottom of the page to the footer, in unit of centimeters.
    /// </summary>
    ASPOSE_CELLS_API double GetFooterMargin();
    /// <summary>
    /// Represents the distance from the bottom of the page to the footer, in unit of centimeters.
    /// </summary>
    ASPOSE_CELLS_API void SetFooterMargin(double value);
    /// <summary>
    /// Represents the distance from the bottom of the page to the footer, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API double GetFooterMarginInch();
    /// <summary>
    /// Represents the distance from the bottom of the page to the footer, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API void SetFooterMarginInch(double value);
    /// <summary>
    /// Represents the distance from the top of the page to the header, in unit of centimeters.
    /// </summary>
    ASPOSE_CELLS_API double GetHeaderMargin();
    /// <summary>
    /// Represents the distance from the top of the page to the header, in unit of centimeters.
    /// </summary>
    ASPOSE_CELLS_API void SetHeaderMargin(double value);
    /// <summary>
    /// Represents the distance from the top of the page to the header, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API double GetHeaderMarginInch();
    /// <summary>
    /// Represents the distance from the top of the page to the header, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API void SetHeaderMarginInch(double value);
    /// <summary>
    /// Gets and sets the settings of the default printer.
    /// </summary>
    ASPOSE_CELLS_API Vector<uint8_t> GetPrinterSettings();
    /// <summary>
    /// Gets and sets the settings of the default printer.
    /// </summary>
    ASPOSE_CELLS_API void SetPrinterSettings(const Vector<uint8_t>& value);
    /// <summary>
    /// Represents the size of the left margin, in unit of centimeters.
    /// </summary>
    ASPOSE_CELLS_API double GetLeftMargin();
    /// <summary>
    /// Represents the size of the left margin, in unit of centimeters.
    /// </summary>
    ASPOSE_CELLS_API void SetLeftMargin(double value);
    /// <summary>
    /// Represents the size of the left margin, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API double GetLeftMarginInch();
    /// <summary>
    /// Represents the size of the left margin, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API void SetLeftMarginInch(double value);
    /// <summary>
    /// Represents the size of the right margin, in unit of centimeters.
    /// </summary>
    ASPOSE_CELLS_API double GetRightMargin();
    /// <summary>
    /// Represents the size of the right margin, in unit of centimeters.
    /// </summary>
    ASPOSE_CELLS_API void SetRightMargin(double value);
    /// <summary>
    /// Represents the size of the right margin, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API double GetRightMarginInch();
    /// <summary>
    /// Represents the size of the right margin, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API void SetRightMarginInch(double value);
    /// <summary>
    /// Represents the size of the top margin, in unit of centimeters.
    /// </summary>
    ASPOSE_CELLS_API double GetTopMargin();
    /// <summary>
    /// Represents the size of the top margin, in unit of centimeters.
    /// </summary>
    ASPOSE_CELLS_API void SetTopMargin(double value);
    /// <summary>
    /// Represents the size of the top margin, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API double GetTopMarginInch();
    /// <summary>
    /// Represents the size of the top margin, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API void SetTopMarginInch(double value);
    /// <summary>
    /// Represents the size of the bottom margin, in unit of centimeters.
    /// </summary>
    ASPOSE_CELLS_API double GetBottomMargin();
    /// <summary>
    /// Represents the size of the bottom margin, in unit of centimeters.
    /// </summary>
    ASPOSE_CELLS_API void SetBottomMargin(double value);
    /// <summary>
    /// Represents the size of the bottom margin, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API double GetBottomMarginInch();
    /// <summary>
    /// Represents the size of the bottom margin, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API void SetBottomMarginInch(double value);
    /// <summary>
    /// Represents the first page number that will be used when this sheet is printed.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetFirstPageNumber();
    /// <summary>
    /// Represents the first page number that will be used when this sheet is printed.
    /// </summary>
    ASPOSE_CELLS_API void SetFirstPageNumber(int32_t value);
    /// <summary>
    /// Sets the number of pages the worksheet will be scaled to when it's printed.
    /// </summary>
    /// <param name="wide">Pages wide.</param>
    /// <param name="tall">Pages tall.</param>
    ASPOSE_CELLS_API void SetFitToPages(int32_t wide, int32_t tall);
    /// <summary>
    /// Represents  the number of pages tall the worksheet will be scaled to when it's printed.
    /// The default value is 1.
    /// </summary>
    /// <remarks>
    /// You have to set FitToPagesWide as zero if you want to fit all rows on one page.
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetFitToPagesTall();
    /// <summary>
    /// Represents  the number of pages tall the worksheet will be scaled to when it's printed.
    /// The default value is 1.
    /// </summary>
    /// <remarks>
    /// You have to set FitToPagesWide as zero if you want to fit all rows on one page.
    /// </remarks>
    ASPOSE_CELLS_API void SetFitToPagesTall(int32_t value);
    /// <summary>
    /// Represents the number of pages wide the worksheet will be scaled to when it's printed.
    /// The default value is 1.
    /// </summary>
    /// <remarks>
    /// You have to set FitToPagesTall as zero if you want to fit all columns on one page.
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetFitToPagesWide();
    /// <summary>
    /// Represents the number of pages wide the worksheet will be scaled to when it's printed.
    /// The default value is 1.
    /// </summary>
    /// <remarks>
    /// You have to set FitToPagesTall as zero if you want to fit all columns on one page.
    /// </remarks>
    ASPOSE_CELLS_API void SetFitToPagesWide(int32_t value);
    /// <summary>
    /// If this property is False, the FitToPagesWide and FitToPagesTall properties control how the worksheet is scaled.
    /// </summary>
    ASPOSE_CELLS_API bool IsPercentScale();
    /// <summary>
    /// If this property is False, the FitToPagesWide and FitToPagesTall properties control how the worksheet is scaled.
    /// </summary>
    ASPOSE_CELLS_API void SetIsPercentScale(bool value);
    /// <summary>
    /// Represents the order that Microsoft Excel uses to number pages when printing a large worksheet.
    /// </summary>
    ASPOSE_CELLS_API PrintOrderType GetOrder();
    /// <summary>
    /// Represents the order that Microsoft Excel uses to number pages when printing a large worksheet.
    /// </summary>
    ASPOSE_CELLS_API void SetOrder(PrintOrderType value);
    /// <summary>
    /// Indicates whether the paper size is automatic.
    /// </summary>
    ASPOSE_CELLS_API bool IsAutomaticPaperSize();
    /// <summary>
    /// Represents the size of the paper.
    /// </summary>
    ASPOSE_CELLS_API PaperSizeType GetPaperSize();
    /// <summary>
    /// Represents the size of the paper.
    /// </summary>
    ASPOSE_CELLS_API void SetPaperSize(PaperSizeType value);
    /// <summary>
    /// Gets the width of the paper in unit of inches, considered page orientation.
    /// </summary>
    ASPOSE_CELLS_API double GetPaperWidth();
    /// <summary>
    /// Gets the height of the paper in unit of inches , considered page orientation.
    /// </summary>
    ASPOSE_CELLS_API double GetPaperHeight();
    /// <summary>
    /// Sets the custom paper size, in unit of inches.
    /// </summary>
    /// <param name="width">The width of the paper. </param>
    /// <param name="height">The height of the paper.</param>
    ASPOSE_CELLS_API void CustomPaperSize(double width, double height);
    /// <summary>
    /// Represents page print orientation.
    /// </summary>
    ASPOSE_CELLS_API PageOrientationType GetOrientation();
    /// <summary>
    /// Represents page print orientation.
    /// </summary>
    ASPOSE_CELLS_API void SetOrientation(PageOrientationType value);
    /// <summary>
    /// Represents the way comments are printed with the sheet.
    /// </summary>
    ASPOSE_CELLS_API PrintCommentsType GetPrintComments();
    /// <summary>
    /// Represents the way comments are printed with the sheet.
    /// </summary>
    ASPOSE_CELLS_API void SetPrintComments(PrintCommentsType value);
    /// <summary>
    /// Specifies the type of print error displayed.
    /// </summary>
    ASPOSE_CELLS_API PrintErrorsType GetPrintErrors();
    /// <summary>
    /// Specifies the type of print error displayed.
    /// </summary>
    ASPOSE_CELLS_API void SetPrintErrors(PrintErrorsType value);
    /// <summary>
    /// Represents if row and column headings are printed with this page.
    /// </summary>
    ASPOSE_CELLS_API bool GetPrintHeadings();
    /// <summary>
    /// Represents if row and column headings are printed with this page.
    /// </summary>
    ASPOSE_CELLS_API void SetPrintHeadings(bool value);
    /// <summary>
    /// Represents if cell gridlines are printed on the page.
    /// </summary>
    ASPOSE_CELLS_API bool GetPrintGridlines();
    /// <summary>
    /// Represents if cell gridlines are printed on the page.
    /// </summary>
    ASPOSE_CELLS_API void SetPrintGridlines(bool value);
    /// <summary>
    /// Represents the scaling factor in percent. It should be between 10 and 400.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetZoom();
    /// <summary>
    /// Represents the scaling factor in percent. It should be between 10 and 400.
    /// </summary>
    ASPOSE_CELLS_API void SetZoom(int32_t value);
    /// <summary>
    /// Indicates whether the first the page number is automatically assigned.
    /// </summary>
    ASPOSE_CELLS_API bool IsAutoFirstPageNumber();
    /// <summary>
    /// Indicates whether the first the page number is automatically assigned.
    /// </summary>
    ASPOSE_CELLS_API void SetIsAutoFirstPageNumber(bool value);
    /// <summary>
    /// Represents the print quality.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetPrintQuality();
    /// <summary>
    /// Represents the print quality.
    /// </summary>
    ASPOSE_CELLS_API void SetPrintQuality(int32_t value);
    /// <summary>
    /// Get and sets number of copies to print.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetPrintCopies();
    /// <summary>
    /// Get and sets number of copies to print.
    /// </summary>
    ASPOSE_CELLS_API void SetPrintCopies(int32_t value);
    /// <summary>
    /// Clears header and footer setting.
    /// </summary>
    ASPOSE_CELLS_API void ClearHeaderFooter();
    /// <summary>
    /// Gets a script formatting the header of an Excel file.
    /// </summary>
    /// <param name="section">0: Left Section, 1: Center Section, 2: Right Section.</param>
    ASPOSE_CELLS_API U16String GetHeader(int32_t section);
    /// <summary>
    /// Gets all commands of header or footer.
    /// </summary>
    /// <param name="headerFooterScript">The header/footer script</param>
    /// <returns>Returns all commands of header or footer.</returns>
    ASPOSE_CELLS_API Vector<HeaderFooterCommand> GetCommands(const U16String& headerFooterScript);
    /// <summary>
    /// Gets all commands of header or footer.
    /// </summary>
    /// <param name="headerFooterScript">The header/footer script</param>
    /// <returns>Returns all commands of header or footer.</returns>
    ASPOSE_CELLS_API Vector<HeaderFooterCommand> GetCommands(const char16_t* headerFooterScript);
    /// <summary>
    /// Gets a script formatting the footer of an Excel file.
    /// </summary>
    /// <param name="section">0: Left Section, 1: Center Section, 2: Right Section.</param>
    ASPOSE_CELLS_API U16String GetFooter(int32_t section);
    /// <summary>
    /// Sets a script formatting the header of an Excel file.
    /// </summary>
    /// <param name="section">0: Left Section, 1: Center Section, 2: Right Section.</param>
    /// <param name="headerScript">Header format script.</param>
    /// <remarks>
    /// <p>Script commands:</p>
    /// <list type="table">
    /// <listheader>
    /// <description>Command</description>
    /// <description>Description</description>
    /// </listheader>
    /// <item>
    /// <description>&amp;P</description>
    /// <description>Current page number　</description>
    /// </item>
    /// <item>
    /// <description>&amp;N</description>
    /// <description>Page count　</description>
    /// </item>
    /// <item>
    /// <description>&amp;D</description>
    /// <description>Current date　</description>
    /// </item>
    /// <item>
    /// <description>&amp;T</description>
    /// <description>Current time</description>
    /// </item>
    /// <item>
    /// <description>&amp;A</description>
    /// <description>Sheet name</description>
    /// </item>
    /// <item>
    /// <description>&amp;F</description>
    /// <description>File name without path</description>
    /// </item>
    /// <item>
    /// <description>&amp;"&lt;FontName&gt;"</description>
    /// <description>Font name, for example: &amp;"Arial"</description>
    /// </item>
    /// <item>
    /// <description>&amp;"&lt;FontName&gt;, &lt;FontStyle&gt;"</description>
    /// <description>Font name and font style, for example: &amp;"Arial,Bold"</description>
    /// </item>
    /// <item>
    /// <description>&amp;&lt;FontSize&gt;</description>
    /// <description>Font size. If this command is followed by a plain number to be printed in the header, it will be separated from the font height with a space character.</description>
    /// </item>
    /// <item>
    /// <description>&amp;K&lt;RRGGBB&gt;</description>
    /// <description>Font color, for example(RED): &amp;KFF0000</description>
    /// </item>
    /// <item>
    /// <description>&amp;G</description>
    /// <description>Image script</description>
    /// </item>
    /// </list>
    /// For example: "&amp;Arial,Bold&amp;8Header Note"
    /// </remarks>
    ASPOSE_CELLS_API void SetHeader(int32_t section, const U16String& headerScript);
    /// <summary>
    /// Sets a script formatting the header of an Excel file.
    /// </summary>
    /// <param name="section">0: Left Section, 1: Center Section, 2: Right Section.</param>
    /// <param name="headerScript">Header format script.</param>
    /// <remarks>
    /// <p>Script commands:</p>
    /// <list type="table">
    /// <listheader>
    /// <description>Command</description>
    /// <description>Description</description>
    /// </listheader>
    /// <item>
    /// <description>&amp;P</description>
    /// <description>Current page number　</description>
    /// </item>
    /// <item>
    /// <description>&amp;N</description>
    /// <description>Page count　</description>
    /// </item>
    /// <item>
    /// <description>&amp;D</description>
    /// <description>Current date　</description>
    /// </item>
    /// <item>
    /// <description>&amp;T</description>
    /// <description>Current time</description>
    /// </item>
    /// <item>
    /// <description>&amp;A</description>
    /// <description>Sheet name</description>
    /// </item>
    /// <item>
    /// <description>&amp;F</description>
    /// <description>File name without path</description>
    /// </item>
    /// <item>
    /// <description>&amp;"&lt;FontName&gt;"</description>
    /// <description>Font name, for example: &amp;"Arial"</description>
    /// </item>
    /// <item>
    /// <description>&amp;"&lt;FontName&gt;, &lt;FontStyle&gt;"</description>
    /// <description>Font name and font style, for example: &amp;"Arial,Bold"</description>
    /// </item>
    /// <item>
    /// <description>&amp;&lt;FontSize&gt;</description>
    /// <description>Font size. If this command is followed by a plain number to be printed in the header, it will be separated from the font height with a space character.</description>
    /// </item>
    /// <item>
    /// <description>&amp;K&lt;RRGGBB&gt;</description>
    /// <description>Font color, for example(RED): &amp;KFF0000</description>
    /// </item>
    /// <item>
    /// <description>&amp;G</description>
    /// <description>Image script</description>
    /// </item>
    /// </list>
    /// For example: "&amp;Arial,Bold&amp;8Header Note"
    /// </remarks>
    ASPOSE_CELLS_API void SetHeader(int32_t section, const char16_t* headerScript);
    /// <summary>
    /// Sets a script formatting the footer of an Excel file.
    /// </summary>
    /// <param name="section">0: Left Section, 1: Center Section, 2: Right Section.</param>
    /// <param name="footerScript">Footer format script.</param>
    /// <remarks>
    /// <p>Script commands:</p>
    /// <list type="table">
    /// <listheader>
    /// <description>Command</description>
    /// <description>Description</description>
    /// </listheader>
    /// <item>
    /// <description>&amp;P</description>
    /// <description>Current page number　</description>
    /// </item>
    /// <item>
    /// <description>&amp;N</description>
    /// <description>Page count　</description>
    /// </item>
    /// <item>
    /// <description>&amp;D</description>
    /// <description>Current date　</description>
    /// </item>
    /// <item>
    /// <description>&amp;T</description>
    /// <description>Current time</description>
    /// </item>
    /// <item>
    /// <description>&amp;A</description>
    /// <description>Sheet name</description>
    /// </item>
    /// <item>
    /// <description>&amp;F</description>
    /// <description>File name without path</description>
    /// </item>
    /// <item>
    /// <description>&amp;"&lt;FontName&gt;"</description>
    /// <description>Font name, for example: &amp;"Arial"</description>
    /// </item>
    /// <item>
    /// <description>&amp;"&lt;FontName&gt;, &lt;FontStyle&gt;"</description>
    /// <description>Font name and font style, for example: &amp;"Arial,Bold"</description>
    /// </item>
    /// <item>
    /// <description>&amp;&lt;FontSize&gt;</description>
    /// <description>Font size. If this command is followed by a plain number to be printed in the header, it will be separated from the font height with a space character.</description>
    /// </item>
    /// <item>
    /// <description>&amp;K&lt;RRGGBB&gt;</description>
    /// <description>Font color, for example(RED): &amp;KFF0000</description>
    /// </item>
    /// <item>
    /// <description>&amp;G</description>
    /// <description>Image script</description>
    /// </item>
    /// </list>
    /// For example: "&amp;Arial,Bold&amp;8Footer Note"
    /// </remarks>
    ASPOSE_CELLS_API void SetFooter(int32_t section, const U16String& footerScript);
    /// <summary>
    /// Sets a script formatting the footer of an Excel file.
    /// </summary>
    /// <param name="section">0: Left Section, 1: Center Section, 2: Right Section.</param>
    /// <param name="footerScript">Footer format script.</param>
    /// <remarks>
    /// <p>Script commands:</p>
    /// <list type="table">
    /// <listheader>
    /// <description>Command</description>
    /// <description>Description</description>
    /// </listheader>
    /// <item>
    /// <description>&amp;P</description>
    /// <description>Current page number　</description>
    /// </item>
    /// <item>
    /// <description>&amp;N</description>
    /// <description>Page count　</description>
    /// </item>
    /// <item>
    /// <description>&amp;D</description>
    /// <description>Current date　</description>
    /// </item>
    /// <item>
    /// <description>&amp;T</description>
    /// <description>Current time</description>
    /// </item>
    /// <item>
    /// <description>&amp;A</description>
    /// <description>Sheet name</description>
    /// </item>
    /// <item>
    /// <description>&amp;F</description>
    /// <description>File name without path</description>
    /// </item>
    /// <item>
    /// <description>&amp;"&lt;FontName&gt;"</description>
    /// <description>Font name, for example: &amp;"Arial"</description>
    /// </item>
    /// <item>
    /// <description>&amp;"&lt;FontName&gt;, &lt;FontStyle&gt;"</description>
    /// <description>Font name and font style, for example: &amp;"Arial,Bold"</description>
    /// </item>
    /// <item>
    /// <description>&amp;&lt;FontSize&gt;</description>
    /// <description>Font size. If this command is followed by a plain number to be printed in the header, it will be separated from the font height with a space character.</description>
    /// </item>
    /// <item>
    /// <description>&amp;K&lt;RRGGBB&gt;</description>
    /// <description>Font color, for example(RED): &amp;KFF0000</description>
    /// </item>
    /// <item>
    /// <description>&amp;G</description>
    /// <description>Image script</description>
    /// </item>
    /// </list>
    /// For example: "&amp;Arial,Bold&amp;8Footer Note"
    /// </remarks>
    ASPOSE_CELLS_API void SetFooter(int32_t section, const char16_t* footerScript);
    /// <summary>
    /// Sets a script formatting the even page header of an Excel file.
    /// Only effect in Excel 2007 when IsHFDiffOddEven is true.
    /// </summary>
    /// <param name="section">0: Left Section, 1: Center Section, 2: Right Section.</param>
    /// <param name="headerScript">Header format script.</param>
    ASPOSE_CELLS_API void SetEvenHeader(int32_t section, const U16String& headerScript);
    /// <summary>
    /// Sets a script formatting the even page header of an Excel file.
    /// Only effect in Excel 2007 when IsHFDiffOddEven is true.
    /// </summary>
    /// <param name="section">0: Left Section, 1: Center Section, 2: Right Section.</param>
    /// <param name="headerScript">Header format script.</param>
    ASPOSE_CELLS_API void SetEvenHeader(int32_t section, const char16_t* headerScript);
    /// <summary>
    /// Gets a script formatting the even header of an Excel file.
    /// </summary>
    /// <param name="section">0: Left Section, 1: Center Section, 2: Right Section.</param>
    ASPOSE_CELLS_API U16String GetEvenHeader(int32_t section);
    /// <summary>
    /// Sets a script formatting the even page footer of an Excel file.
    /// Only effect in Excel 2007 when IsHFDiffOddEven is true.
    /// </summary>
    /// <param name="section">0: Left Section, 1: Center Section, 2: Right Section.</param>
    /// <param name="footerScript">Footer format script.</param>
    ASPOSE_CELLS_API void SetEvenFooter(int32_t section, const U16String& footerScript);
    /// <summary>
    /// Sets a script formatting the even page footer of an Excel file.
    /// Only effect in Excel 2007 when IsHFDiffOddEven is true.
    /// </summary>
    /// <param name="section">0: Left Section, 1: Center Section, 2: Right Section.</param>
    /// <param name="footerScript">Footer format script.</param>
    ASPOSE_CELLS_API void SetEvenFooter(int32_t section, const char16_t* footerScript);
    /// <summary>
    /// Gets a script formatting the even footer of an Excel file.
    /// </summary>
    /// <param name="section">0: Left Section, 1: Center Section, 2: Right Section.</param>
    ASPOSE_CELLS_API U16String GetEvenFooter(int32_t section);
    /// <summary>
    /// Sets a script formatting the first page header of an Excel file.
    /// Only effect in Excel 2007 when IsHFDiffFirst is true.
    /// </summary>
    /// <param name="section">0: Left Section, 1: Center Section, 2: Right Section.</param>
    /// <param name="headerScript">Header format script.</param>
    ASPOSE_CELLS_API void SetFirstPageHeader(int32_t section, const U16String& headerScript);
    /// <summary>
    /// Sets a script formatting the first page header of an Excel file.
    /// Only effect in Excel 2007 when IsHFDiffFirst is true.
    /// </summary>
    /// <param name="section">0: Left Section, 1: Center Section, 2: Right Section.</param>
    /// <param name="headerScript">Header format script.</param>
    ASPOSE_CELLS_API void SetFirstPageHeader(int32_t section, const char16_t* headerScript);
    /// <summary>
    /// Gets a script formatting the first page header of an Excel file.
    /// </summary>
    /// <param name="section">0: Left Section, 1: Center Section, 2: Right Section.</param>
    ASPOSE_CELLS_API U16String GetFirstPageHeader(int32_t section);
    /// <summary>
    /// Sets a script formatting the first page footer of an Excel file.
    /// </summary>
    /// <param name="section">0: Left Section, 1: Center Section, 2: Right Section.</param>
    /// <param name="footerScript">Footer format script.</param>
    ASPOSE_CELLS_API void SetFirstPageFooter(int32_t section, const U16String& footerScript);
    /// <summary>
    /// Sets a script formatting the first page footer of an Excel file.
    /// </summary>
    /// <param name="section">0: Left Section, 1: Center Section, 2: Right Section.</param>
    /// <param name="footerScript">Footer format script.</param>
    ASPOSE_CELLS_API void SetFirstPageFooter(int32_t section, const char16_t* footerScript);
    /// <summary>
    /// Gets a script formatting the first page footer of an Excel file.
    /// </summary>
    /// <param name="section">0: Left Section, 1: Center Section, 2: Right Section.</param>
    ASPOSE_CELLS_API U16String GetFirstPageFooter(int32_t section);
    /// <summary>
    /// True means that the header/footer of the odd pages is different with odd pages.
    /// </summary>
    ASPOSE_CELLS_API bool IsHFDiffOddEven();
    /// <summary>
    /// True means that the header/footer of the odd pages is different with odd pages.
    /// </summary>
    ASPOSE_CELLS_API void SetIsHFDiffOddEven(bool value);
    /// <summary>
    /// True means that the header/footer of the first page is different with other pages.
    /// </summary>
    ASPOSE_CELLS_API bool IsHFDiffFirst();
    /// <summary>
    /// True means that the header/footer of the first page is different with other pages.
    /// </summary>
    ASPOSE_CELLS_API void SetIsHFDiffFirst(bool value);
    /// <summary>
    /// Indicates whether header and footer are scaled with document scaling.
    /// Only applies for Excel 2007.
    /// </summary>
    ASPOSE_CELLS_API bool IsHFScaleWithDoc();
    /// <summary>
    /// Indicates whether header and footer are scaled with document scaling.
    /// Only applies for Excel 2007.
    /// </summary>
    ASPOSE_CELLS_API void SetIsHFScaleWithDoc(bool value);
    /// <summary>
    /// Indicates whether header and footer margins are aligned with the page margins.
    /// If this property is true, the left header and footer will be aligned with the left margin,
    /// and the right header and footer will be aligned with the right margin.
    /// This option is enabled by default.
    /// </summary>
    ASPOSE_CELLS_API bool IsHFAlignMargins();
    /// <summary>
    /// Indicates whether header and footer margins are aligned with the page margins.
    /// If this property is true, the left header and footer will be aligned with the left margin,
    /// and the right header and footer will be aligned with the right margin.
    /// This option is enabled by default.
    /// </summary>
    ASPOSE_CELLS_API void SetIsHFAlignMargins(bool value);
    /// <summary>
    /// Sets an image in the header of a worksheet.
    /// </summary>
    /// <param name="section">0: Left Section, 1: Center Section, 2: Right Section.</param>
    /// <param name="headerPicture">Image data.</param>
    /// <returns>Returns <see cref="Picture"/> object.</returns>
    ASPOSE_CELLS_API Aspose::Cells::Drawing::Picture SetHeaderPicture(int32_t section, const Vector<uint8_t>& headerPicture);
    /// <summary>
    /// Sets an image in the footer of a worksheet.
    /// </summary>
    /// <param name="section">0: Left Section, 1: Center Section, 2: Right Section.</param>
    /// <param name="footerPicture">Image data.</param>
    /// <returns>Returns <see cref="Picture"/> object.</returns>
    ASPOSE_CELLS_API Aspose::Cells::Drawing::Picture SetFooterPicture(int32_t section, const Vector<uint8_t>& footerPicture);
    /// <summary>
    /// Sets an image in the header/footer of a worksheet.
    /// </summary>
    /// <param name="isFirst">Indicates whether setting the picture of first page header/footer. </param>
    /// <param name="isEven">Indicates whether setting the picture of even page header/footer.</param>
    /// <param name="isHeader">Indicates whether setting the picture of header/footer.</param>
    /// <param name="section">0: Left Section, 1: Center Section, 2: Right Section.</param>
    /// <param name="imageData">Image data.</param>
    /// <returns>Returns <see cref="Picture"/> object.</returns>
    ASPOSE_CELLS_API Aspose::Cells::Drawing::Picture SetPicture(bool isFirst, bool isEven, bool isHeader, int32_t section, const Vector<uint8_t>& imageData);
    /// <summary>
    /// Gets the <see cref="Picture"/> object of the header / footer.
    /// </summary>
    /// <param name="isHeader">Indicates whether it is in the header or footer.</param>
    /// <param name="section">0: Left Section, 1: Center Section, 2: Right Section.</param>
    /// <returns>Returns <see cref="Picture"/> object.
    /// Returns null if there is no picture.</returns>
    ASPOSE_CELLS_API Aspose::Cells::Drawing::Picture GetPicture(bool isHeader, int32_t section);
    /// <summary>
    /// Gets the <see cref="Picture"/> object of the header / footer.
    /// </summary>
    /// <param name="isFirst">Indicates whether getting the picture of first page header/footer. </param>
    /// <param name="isEven">Indicates whether getting the picture of even page header/footer.</param>
    /// <param name="isHeader">Indicates whether getting the picture of header/footer.</param>
    /// <param name="section">0: Left Section, 1: Center Section, 2: Right Section.</param>
    /// <returns>Returns <see cref="Picture"/> object.</returns>
    ASPOSE_CELLS_API Aspose::Cells::Drawing::Picture GetPicture(bool isFirst, bool isEven, bool isHeader, int32_t section);
    
};

} }

#endif
