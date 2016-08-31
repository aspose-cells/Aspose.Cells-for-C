#pragma once
#include "PrintCommentsType.h"
//#include "System/Text/StringBuilder.h"
//#include "System/UInt16.h"
//#include "System/Collections/ArrayList.h"
#include "PageOrientationType.h"
#include "System/Int16.h"
#include "HeaderFooterType.h"
#include "PaperSizeType.h"
//#include "System/ArgumentException.h"
#include "System/Char.h"
//#include "System/BitConverter.h"
#include "System/Double.h"
#include "System/Text/RegularExpressions/Regex.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "PrintOrderType.h"
#include "System/Array1D.h"
//#include "System/Text/Encoding.h"
#include "PrintErrorsType.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_PAGESETUP() 

namespace Aspose {
namespace Cells {
class HeaderFooterCommand;
class Worksheet;
class CopyOptions;
class Range;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API PageSetup : public Aspose::Cells::System::Object
#else	class PageSetup : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::System::Text::RegularExpressions::Regex> m_HeaderFooterStringHandler;
			static intrusive_ptr<Aspose::Cells::System::Text::RegularExpressions::Regex> GetHeaderFooterStringHandler();
			Aspose::Cells::Worksheet* m_Sheet;
			Aspose::Cells::System::Object* parent;
			bool IsSheeetSetup();
			bool blackAndWhite;
			bool centerHorizontally;
			bool centerVertically;
			bool draft;
			Aspose::Cells::System::Double footerMargin;
			Aspose::Cells::System::Double headerMargin;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> pls;
			Aspose::Cells::System::Double leftMargin;
			Aspose::Cells::System::Double rightMargin;
			Aspose::Cells::System::Double topMargin;
			Aspose::Cells::System::Double bottomMargin;
			Aspose::Cells::System::Int32 firstPageNumber;
			Aspose::Cells::System::Int32 fitToPagesTall;
			Aspose::Cells::System::Int32 fitToPagesWide;
			bool isPercentScale;
			Aspose::Cells::PrintOrderType order;
			Aspose::Cells::PageOrientationType orientation;
			bool m_NoOrientation;
			Aspose::Cells::PrintCommentsType printComments;
			Aspose::Cells::PrintErrorsType printErrors;
			bool printHeadings;
			bool printGridlines;
			Aspose::Cells::System::Int32 zoom;
			Aspose::Cells::System::Int32 paperSizeUser;
			Aspose::Cells::System::Int32 hPrintResolution;
			Aspose::Cells::System::Int32 vPrintResolution;
			Aspose::Cells::System::Int32 copyNumber;
			Aspose::Cells::System::Byte headerFooterOption;
			static intrusive_ptr<Aspose::Cells::System::String> ToHeaderFooter(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> scripts);
			intrusive_ptr<Aspose::Cells::System::String> GetShapeId(bool isFirst , bool isEven , bool isHeader , Aspose::Cells::System::Int32 section);
			Aspose::Cells::System::Int16 Options;
			 static const Aspose::Cells::System::Int16 Mask_PaperSize;
			 static const Aspose::Cells::System::Int16 Mask_Scale;
			 static const Aspose::Cells::System::Int16 Mask_HResolution;
			 static const Aspose::Cells::System::Int16 Mask_VResolution;
			 static const Aspose::Cells::System::Int16 Mask_Copies;
			 static const Aspose::Cells::System::Int16 Mask_Portrait;
			 static const Aspose::Cells::System::Int16 Mask_FirstPage;
			 static const Aspose::Cells::System::Int16 Mask_FirstInit;
	public:

			void Copy(intrusive_ptr<Aspose::Cells::PageSetup> source , intrusive_ptr<Aspose::Cells::CopyOptions> copyOptions);
			 PageSetup(intrusive_ptr<Aspose::Cells::Worksheet> sheet , intrusive_ptr<Aspose::Cells::System::Object> parent);
			intrusive_ptr<Aspose::Cells::System::String> GetPrintArea();
			void SetPrintArea(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetPrintTitleColumns();
			void SetPrintTitleColumns(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetPrintTitleRows();
			void SetPrintTitleRows(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetPrintTitles();
			void SetPrintTitles(intrusive_ptr<Aspose::Cells::System::String> value);
			bool IsPrintRangeSet(bool isTitles);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Range*>> GetPrintRanges(bool isTitles);
			bool GetBlackAndWhite();
			void SetBlackAndWhite(bool value);
			bool GetCenterHorizontally();
			void SetCenterHorizontally(bool value);
			bool GetCenterVertically();
			void SetCenterVertically(bool value);
			bool GetDraft();
			void SetDraft(bool value);
			bool GetPrintDraft();
			void SetPrintDraft(bool value);
			Aspose::Cells::System::Double GetFooterMargin();
			void SetFooterMargin(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Double GetFooterMarginInch();
			void SetFooterMarginInch(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Double GetHeaderMargin();
			void SetHeaderMargin(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Double GetHeaderMarginInch();
			void SetHeaderMarginInch(Aspose::Cells::System::Double value);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetPLS();
			void SetPLS(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> value);
			Aspose::Cells::System::Double GetLeftMargin();
			void SetLeftMargin(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Double GetLeftMarginInch();
			void SetLeftMarginInch(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Double GetRightMargin();
			void SetRightMargin(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Double GetRightMarginInch();
			void SetRightMarginInch(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Double GetTopMargin();
			void SetTopMargin(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Double GetTopMarginInch();
			void SetTopMarginInch(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Double GetBottomMargin();
			void SetBottomMargin(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Double GetBottomMarginInch();
			void SetBottomMarginInch(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Int32 GetFirstPageNumber();
			void SetFirstPageNumber(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetFitToPagesTall();
			void SetFitToPagesTall(Aspose::Cells::System::Int32 value);
			void SetInternalFitToPagesTall(Aspose::Cells::System::Int32 value);
			void SetInernalFitToPagesWide(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetFitToPagesWide();
			void SetFitToPagesWide(Aspose::Cells::System::Int32 value);
			bool IsPercentScale();
			void SetIsPercentScale(bool value);
			Aspose::Cells::PrintOrderType GetOrder();
			void SetOrder(Aspose::Cells::PrintOrderType value);
			Aspose::Cells::PaperSizeType GetPaperSize();
			void SetPaperSize(Aspose::Cells::PaperSizeType value);
			void InitChartPageSetup();
			bool GetNoOrientation();
			void SetNoOrientation(bool value);
			Aspose::Cells::PageOrientationType GetOrientation();
			void SetOrientation(Aspose::Cells::PageOrientationType value);
			Aspose::Cells::PrintCommentsType GetPrintComments();
			void SetPrintComments(Aspose::Cells::PrintCommentsType value);
			Aspose::Cells::PrintErrorsType GetPrintErrors();
			void SetPrintErrors(Aspose::Cells::PrintErrorsType value);
			bool GetPrintHeadings();
			void SetPrintHeadings(bool value);
			bool GetPrintGridlines();
			void SetPrintGridlines(bool value);
			Aspose::Cells::System::Int32 GetZoom();
			void SetZoom(Aspose::Cells::System::Int32 value);
			void SetInternalZoom(Aspose::Cells::System::Int32 zoom);
			Aspose::Cells::System::Int32 GetPageSizeUser();
			bool IsAutoFirstPageNumber();
			void SetIsAutoFirstPageNumber(bool value);
			void GetSetting(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> recordData);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> CreateSetupData();
			bool IsFirstInit();
			void SetIsFirstInit(bool value);
			Aspose::Cells::System::Int32 GetHPrintResolution();
			void SetHPrintResolution(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetVPrintResolution();
			void SetVPrintResolution(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetPrintQuality();
			void SetPrintQuality(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetPrintCopies();
			void SetPrintCopies(Aspose::Cells::System::Int32 value);
			void ClearHeaderFooter();
			intrusive_ptr<Aspose::Cells::System::String> GetHeader(Aspose::Cells::System::Int32 section);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::HeaderFooterCommand*>> GetCommands(intrusive_ptr<Aspose::Cells::System::String> headerFooterScript);
			intrusive_ptr<Aspose::Cells::System::String> GetHeaderWithoutDirection(Aspose::Cells::System::Int32 section);
			intrusive_ptr<Aspose::Cells::System::String> GetFooter(Aspose::Cells::System::Int32 section);
			intrusive_ptr<Aspose::Cells::System::String> GetFooterWithoutDirection(Aspose::Cells::System::Int32 section);
			void SetHeader(Aspose::Cells::System::Int32 section , intrusive_ptr<Aspose::Cells::System::String> headerScript);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> headerScripts;
			void SetFooter(Aspose::Cells::System::Int32 section , intrusive_ptr<Aspose::Cells::System::String> footerScript);
			static void SetScript(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> scripts , Aspose::Cells::System::Int32 section , intrusive_ptr<Aspose::Cells::System::String> script);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> footerScripts;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> evenHeaderScripts;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> evenFooterScripts;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> firstFooterScripts;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> firstHeaderScripts;
			Aspose::Cells::System::Byte GetHeaderFooterOption();
			void SetHeaderFooterOption(Aspose::Cells::System::Byte value);
			void SetEvenHeader(Aspose::Cells::System::Int32 section , intrusive_ptr<Aspose::Cells::System::String> headerScript);
			intrusive_ptr<Aspose::Cells::System::String> GetEvenHeaderWithoutDirection(Aspose::Cells::System::Int32 section);
			intrusive_ptr<Aspose::Cells::System::String> GetEvenHeader(Aspose::Cells::System::Int32 section);
			intrusive_ptr<Aspose::Cells::System::String> GetEvenFooterWithoutDirection(Aspose::Cells::System::Int32 section);
			void SetEvenFooter(Aspose::Cells::System::Int32 section , intrusive_ptr<Aspose::Cells::System::String> footerScript);
			intrusive_ptr<Aspose::Cells::System::String> GetEvenFooter(Aspose::Cells::System::Int32 section);
			intrusive_ptr<Aspose::Cells::System::String> GetHeaderFooter(bool header , Aspose::Cells::HeaderFooterType type);
			void SetFirstPageHeader(Aspose::Cells::System::Int32 section , intrusive_ptr<Aspose::Cells::System::String> headerScript);
			intrusive_ptr<Aspose::Cells::System::String> GetFirstPageHeader(Aspose::Cells::System::Int32 section);
			void SetFirstPageFooter(Aspose::Cells::System::Int32 section , intrusive_ptr<Aspose::Cells::System::String> footerScript);
			intrusive_ptr<Aspose::Cells::System::String> GetFirstPageFooterWithoutDirection(Aspose::Cells::System::Int32 section);
			intrusive_ptr<Aspose::Cells::System::String> GetFirstPageHeaderWithoutDirection(Aspose::Cells::System::Int32 section);
			intrusive_ptr<Aspose::Cells::System::String> GetFirstPageFooter(Aspose::Cells::System::Int32 section);
			bool IsHFDiffOddEven();
			void SetIsHFDiffOddEven(bool value);
			bool IsHFDiffFirst();
			void SetIsHFDiffFirst(bool value);
			bool IsHFScaleWithDoc();
			void SetIsHFScaleWithDoc(bool value);
			bool IsHFAlignMargins();
			void SetIsHFAlignMargins(bool value);
			static void ParseHeaderFooter(intrusive_ptr<Aspose::Cells::System::String> hfString , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> scripts);
			void ReadHeader(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> header);
			void ReadFooter(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> footer);
			static Aspose::Cells::System::Char Section(Aspose::Cells::System::Int32 section);
			Aspose::Cells::System::Int32 PictureId(intrusive_ptr<Aspose::Cells::System::String> sectionId);
			bool IsAutoPaperSize();
			void SetIsAutoPaperSize(bool value);
			bool IsAutoScale();
			void SetIsAutoScale(bool value);
			bool IsAutoHResolution();
			void SetIsAutoHResolution(bool value);
			bool IsAutoVResolution();
			void SetIsAutoVResolution(bool value);
			bool IsAutoCopies();
			void SetIsAutoCopies(bool value);
			bool IsAutoPortrait();
			void SetIsAutoPortrait(bool value);
			 PageSetup();
		public:
			virtual ~PageSetup();
	};

}

}
