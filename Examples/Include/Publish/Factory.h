#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "IWorkbook.h"
#include "IWorksheet.h"
#include "ILoadOptions.h"
#include "IStyleFlag.h"
#include "ICellArea.h"
#include "LoadFormat.h"
#include "IPasteOptions.h"
#include "IPivotPageFields.h"
#include "IThemeColor.h"
#include "IReplaceOptions.h"
#include "IOoxmlSaveOptions.h"
#include "IFindOptions.h"
#include "IMetadataOptions.h"
#include "IWorkbookMetadata.h"
#include "IXlsSaveOptions.h"
#include "ICopyOptions.h"
#include "ISpreadsheetML2003SaveOptions.h"
#include "ITxtLoadOptions.h"
#include "ITxtSaveOptions.h"
#include "SaveFormat.h"
#include "ICalculationOptions.h"
#include "IWorkbookDesigner.h"
#include "IThemeColor.h"
#include "IAutoFitterOptions.h"
#include "IImageOrPrintOptions.h"
#include "ISheetRender.h"
#include "ITilePicOption.h"
#include "IHtmlSaveOptions.h"
#include "IPdfSaveOptions.h"
#include "IPdfBookmarkEntry.h"


//extern _declspec (dllimport) intrusive_ptr<String> operator + (intrusive_ptr<String> str, const char * ch);
namespace Aspose {
	namespace Cells {
			/// <summary>
			///  If you need new an object in Client-Side code, you can call the following static method to create related object. 	
			/// </summary>		

		class ASPOSE_CELLS_API Factory :public  Aspose::Cells::Systems::Object
		{
		public:
			/// <summary>
			///  Open a Workbook by path and ILoadOptions, if straPath is NULL and iloadOpt is NULL, a Workbook will be created.
			/// </summary>				
			/// <param name="straPath" >The path of opened file.</param>
			/// <param name="iloadOpt" > refer to <see cref="ILoadOptions" />.</param>
			static intrusive_ptr<Aspose::Cells::IWorkbook> CreateIWorkbook(StringPtr straPath = NULL, intrusive_ptr<Aspose::Cells::ILoadOptions> iloadOpt = NULL);
			/// <summary>
			///  Open a Workbook by Stream and ILoadOptions.
			/// </summary>	
			static intrusive_ptr<Aspose::Cells::IWorkbook> CreateIWorkbook(intrusive_ptr<Aspose::Cells::Systems::IO::Stream> stream, intrusive_ptr<Aspose::Cells::ILoadOptions> iloadOpt = NULL);
			/// <summary>
			///  Create a Workbook by special FileFormatType. Refer to <see cref="FileFormatType" />
			/// </summary>				
			static intrusive_ptr<Aspose::Cells::IWorkbook> CreateIWorkbook(FileFormatType fileType);
			/// <summary>
			///  Create a new ILoadOptions. Refer to <see cref="ILoadOptions" />
			/// </summary>				
			static intrusive_ptr<Aspose::Cells::ILoadOptions> CreateILoadOptions(Aspose::Cells::LoadFormat loadFormat = LoadFormat::LoadFormat_Auto);
			/// <summary>
			///  Create a new IStyle. Refer to <see cref="IStyle" />
			/// </summary>				
			static intrusive_ptr<Aspose::Cells::IStyle> CreateIStyle();
			/// <summary>
			///  Create a new IStyleFlag. Refer to <see cref="IStyleFlag" />
			/// </summary>					
			static intrusive_ptr<Aspose::Cells::IStyleFlag> CreateIStyleFlag();
			/// <summary>
			///  Create a new ICellArea. Refer to <see cref="ICellArea" />
			/// </summary>					
			static intrusive_ptr<Aspose::Cells::ICellArea> CreateICellArea();
			/// <summary>
			///  Create a new IPasteOptions. Refer to <see cref="IPasteOptions" />
			/// </summary>				
			static intrusive_ptr<Aspose::Cells::IPasteOptions> CreateIPasteOptions();
			/// <summary>
			///  Create a new IPivotPageFields. Refer to <see cref="IPivotPageFields" />
			/// </summary>				
			static intrusive_ptr<Aspose::Cells::Pivot::IPivotPageFields> CreateIPivotPageFields();
			/// <summary>
			///  Create a new IThemeColor. Refer to <see cref="IThemeColor" />
			/// </summary>				
			static intrusive_ptr<Aspose::Cells::IThemeColor> CreateIThemeColor(Aspose::Cells::ThemeColorType, Aspose::Cells::Systems::Double);
			/// <summary>
			///  Create a new IReplaceOptions. Refer to <see cref="IReplaceOptions" />
			/// </summary>				
			static intrusive_ptr<Aspose::Cells::IReplaceOptions> CreateIReplaceOptions();
			/// <summary>
			///  Create a new IOoxmlSaveOptions. Refer to <see cref="IOoxmlSaveOptions" />
			/// </summary>			
			static intrusive_ptr<Aspose::Cells::IOoxmlSaveOptions> CreateIOoxmlSaveOptions(SaveFormat = SaveFormat_Xlsx);
			/// <summary>
			///  Create a new IFindOptions. Refer to <see cref="IFindOptions" />
			/// </summary>			
			static intrusive_ptr<Aspose::Cells::IFindOptions> CreateIFindOptions();
			/// <summary>
			///  Create a new IMetadataOptions. Refer to <see cref="IMetadataOptions" />
			/// </summary>			
			static intrusive_ptr<Aspose::Cells::Metadata::IMetadataOptions> CreateIMetadataOptions(Aspose::Cells::Metadata::MetadataType);
			/// <summary>
			///  Create a new IWorkbookMetadata. Refer to <see cref="IWorkbookMetadata" />
			/// </summary>			
			static intrusive_ptr<Aspose::Cells::Metadata::IWorkbookMetadata> CreateIWorkbookMetadata(intrusive_ptr<Aspose::Cells::Systems::String> fileName, intrusive_ptr<Aspose::Cells::Metadata::IMetadataOptions> options);
			/// <summary>
			///  Create a new IWorkbookMetadata. Refer to <see cref="IWorkbookMetadata" />
			/// </summary>			
			static intrusive_ptr<Aspose::Cells::Metadata::IWorkbookMetadata> CreateIWorkbookMetadata(intrusive_ptr<Aspose::Cells::Systems::IO::Stream> stream, intrusive_ptr<Aspose::Cells::Metadata::IMetadataOptions> options);
			/// <summary>
			///  Create a new IXlsSaveOptions. Refer to <see cref="IXlsSaveOptions" />
			/// </summary>
			static intrusive_ptr<Aspose::Cells::IXlsSaveOptions> CreateIXlsSaveOptions(SaveFormat = SaveFormat_Excel97To2003);
			/// <summary>
			///  Create a new ICopyOptions. Refer to <see cref="ICopyOptions" />
			/// </summary>
			static intrusive_ptr<Aspose::Cells::ICopyOptions>    CreateICopyOptions();
			/// <summary>
			///  Create a new ISpreadsheetML2003SaveOptions. Refer to <see cref="ISpreadsheetML2003SaveOptions" />
			/// </summary>			
			static intrusive_ptr<Aspose::Cells::ISpreadsheetML2003SaveOptions> CreateISpreadsheetML2003SaveOptions(SaveFormat = SaveFormat_SpreadsheetML);
			/// <summary>
			///  Create a new ILoadDataOption. Refer to <see cref="ILoadDataOption" />
			/// </summary>
			static intrusive_ptr<Aspose::Cells::ILoadDataOption>  CreateILoadDataOption();
			/// <summary>
			///  Create a new ITxtLoadOptions. Refer to <see cref="ITxtLoadOptions" />
			/// </summary>
			static intrusive_ptr<Aspose::Cells::ITxtLoadOptions>  CreateITxtLoadOptions(LoadFormat = LoadFormat_CSV);
			/// <summary>
			///  Create a new ITxtSaveOptions. Refer to <see cref="ITxtSaveOptions" />
			/// </summary>
			static intrusive_ptr<Aspose::Cells::ITxtSaveOptions>  CreateITxtSaveOptions();
			/// <summary>
			///  Create a new ITilePicOption. Refer to <see cref="ITilePicOption" />
			/// </summary>
			static intrusive_ptr<Aspose::Cells::Drawing::ITilePicOption>  CreateITilePicOption();
			/// <summary>
			///  Create a new ICalculationOptions. Refer to <see cref="ICalculationOptions" />
			/// </summary>
			static intrusive_ptr<Aspose::Cells::ICalculationOptions> CreateICalculationOptions();
            /// <summary>
			///  Create a new IAutoFitterOptions. Refer to <see cref="IAutoFitterOptions" />
			/// </summary>
			static intrusive_ptr<Aspose::Cells::IAutoFitterOptions>  CreateIAutoFitterOptions();		
			/// <summary>
			///  Create a new IHtmlSaveOptions. Refer to <see cref="IHtmlSaveOptions" />
			/// </summary>
			static intrusive_ptr<Aspose::Cells::IHtmlSaveOptions>  CreateIHtmlSaveOptions();
            /// <summary>
			///  Create a new IHtmlSaveOptions. Refer to <see cref="IHtmlSaveOptions" />
			/// </summary>
			static intrusive_ptr<Aspose::Cells::IHtmlSaveOptions>  CreateIHtmlSaveOptions(SaveFormat sf);
			/// <summary>
			///  Create a new IPdfSaveOptions. Refer to <see cref="IPdfSaveOptions" />
			/// </summary>
			static intrusive_ptr<Aspose::Cells::IPdfSaveOptions>  CreateIPdfSaveOptions();
			/// <summary>
			///  Create a new IPdfSaveOptions. Refer to <see cref="IPdfSaveOptions" />
			/// </summary>			
			static intrusive_ptr<Aspose::Cells::IPdfSaveOptions>  CreateIPdfSaveOptions(SaveFormat sf);	
			/// <summary>
			///  Create a new IPdfBookmarkEntry. Refer to <see cref="IPdfBookmarkEntry" />
			/// </summary>				
			static intrusive_ptr<Aspose::Cells::Rendering::IPdfBookmarkEntry>  CreateIPdfBookmarkEntry();	
			/// <summary>
			///  Create a new ISheetRende. Refer to <see cref="ISheetRende" />
			/// </summary>
			static intrusive_ptr<Aspose::Cells::Rendering::ISheetRender>  CreateISheetRender(intrusive_ptr<Aspose::Cells::IWorksheet> ws,intrusive_ptr<Aspose::Cells::Rendering::IImageOrPrintOptions> img);
			/// <summary>
			///  Create a new IWorkbookDesigner. Refer to <see cref="IWorkbookDesigner" />
			/// </summary>
			static intrusive_ptr<Aspose::Cells::IWorkbookDesigner>  CreateIWorkbookDesigner();
			/// <summary>
			///  Create a new IImageOrPrintOptions. Refer to <see cref="IImageOrPrintOptions" />
			/// </summary>
			static intrusive_ptr<Aspose::Cells::Rendering::IImageOrPrintOptions>  CreateIImageOrPrintOptions();
            //Others need new...
			Factory(){};
			virtual ~Factory(){};

		};
	}
}
