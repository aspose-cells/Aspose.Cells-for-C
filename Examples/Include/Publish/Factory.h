#pragma once
#include "System/Object.h"
#include "IWorkbook.h"
#include "ILoadOptions.h"
#include "IStyleFlag.h"
#include "ICellArea.h"
#include "LoadFormat.h"

namespace Aspose {
	namespace Cells {
			/// <summary>
			///  If you need new an object in Client-Side code, you can call the following static method to create related object. 	
			/// </summary>		

		class ASPOSE_CELLS_API Factory :public  Aspose::Cells::System::Object
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
			static intrusive_ptr<Aspose::Cells::IWorkbook> CreateIWorkbook(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream, intrusive_ptr<Aspose::Cells::ILoadOptions> iloadOpt = NULL);
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

			Factory(){};
			virtual ~Factory(){};

		};
	}
}