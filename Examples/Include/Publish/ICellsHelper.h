#pragma once
#include "System/Object.h"
#include "System/Double.h"
#include "System/String.h"
#include "System/IO/Stream.h"
#include "System/Int32.h"
#include "System/DateTime.h"
#include "System/Collections/ArrayList.h"
#include "System/Array1D.h"
#include "System/Drawing/Color.h"

namespace Aspose {
	namespace Cells {
		enum LoadFormat;
		enum FileFormatType;
		class IWorkbook;
		enum ParameterType;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Provides helper functions.
			/// </summary>
			/// 
			/// 
	class ASPOSE_CELLS_API ICellsHelper : public Aspose::Cells::System::Object
	{
		public:
public:
			/// <summary>
			/// Gets the DPI of the machine.
			/// </summary>
			/// 
			/// <remarks>
			/// </remarks>
			/// 
			/// 
			static  Aspose::Cells::System::Double 		GetDPI_i();
			/// <summary>
			/// Sets the DPI of the machine.
			/// </summary>
			/// 
			/// <remarks>
			/// </remarks>
			/// 
			/// 
			static  void 		SetDPI_i(Aspose::Cells::System::Double value);
			/// <summary>
			/// Get the release version.
			/// </summary>
			/// 
			/// <returns>The release version.</returns>
			/// 
			/// 
			static  intrusive_ptr<Aspose::Cells::System::String> 		GetVersion_i();
			/// <summary>
			/// Gets whether  the file is protected by Microsoft Rights Management Server.
			/// </summary>
			/// 
			/// <param name="fileName" >The file name.</param>
			/// 
			/// <returns/>
			/// 
			/// <remarks>This member is now obsolete. Instead, 
			/// please reference to DetectFileFormat_i(StringPtr) of IFileFormatUtil.</remarks>
			/// 
			/// 
			static  bool 		IsProtectedByRMS_i(intrusive_ptr<Aspose::Cells::System::String> fileName);
			/// <summary>
			/// Gets whether the file is protected by Microsoft Rights Management Server.
			/// </summary>
			/// 
			/// <param name="stream" >The file stream.</param>
			/// 
			/// <returns/>
			/// 
			/// <remarks>This member is now obsolete. Instead, 
			/// please reference to DetectFileFormat_i(stream) of IFileFormatUtil.</remarks>
			/// 
			/// 
			static  bool 		IsProtectedByRMS_i(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			/// <summary>
			/// Gets the cell row and column indexes according to its name
			/// </summary>
			/// 
			/// <param name="cellName" >Name of cell.</param>
			/// 
			/// <param name="row" >Output row index</param>
			/// 
			/// <param name="column" >Output column index</param>
			/// 
			/// 
			static  void 		CellNameToIndex_i(intrusive_ptr<Aspose::Cells::System::String> cellName , Aspose::Cells::System::Int32& row , Aspose::Cells::System::Int32& column);
			/// <summary>
			/// Gets cell name according to its row and column indexes.
			/// </summary>
			/// 
			/// <param name="row" >Row index.</param>
			/// 
			/// <param name="column" >Column index.</param>
			/// 
			/// <returns>Name of cell.</returns>
			/// 
			/// 
			static  intrusive_ptr<Aspose::Cells::System::String> 		CellIndexToName_i(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			/// <summary>
			/// Gets column name according to column index.
			/// </summary>
			/// 
			/// <param name="column" >Column index.</param>
			/// 
			/// <returns>Name of column.</returns>
			/// 
			/// 
			static  intrusive_ptr<Aspose::Cells::System::String> 		ColumnIndexToName_i(Aspose::Cells::System::Int32 column);
			/// <summary>
			/// Gets column index according to column name.
			/// </summary>
			/// 
			/// <param name="columnName" >Column name.</param>
			/// 
			/// <returns>Column index.</returns>
			/// 
			/// 
			static  Aspose::Cells::System::Int32 		ColumnNameToIndex_i(intrusive_ptr<Aspose::Cells::System::String> columnName);
			/// <summary>
			/// Gets row name according to row index.
			/// </summary>
			/// 
			/// <param name="row" >Row index.</param>
			/// 
			/// <returns>Name of row.</returns>
			/// 
			/// 
			static  intrusive_ptr<Aspose::Cells::System::String> 		RowIndexToName_i(Aspose::Cells::System::Int32 row);
			/// <summary>
			/// Gets row index according to row name.
			/// </summary>
			/// 
			/// <param name="rowName" >Row name.</param>
			/// 
			/// <returns>Row index.</returns>
			/// 
			/// 
			static  Aspose::Cells::System::Int32 		RowNameToIndex_i(intrusive_ptr<Aspose::Cells::System::String> rowName);
			/// <summary>
			/// Converts the r1c1 formula of the cell to A1 formula.
			/// </summary>
			/// 
			/// <param name="r1c1Formula" >The r1c1 formula.</param>
			/// 
			/// <param name="row" >The row index of the cell.</param>
			/// 
			/// <param name="column" >The column index of the cell.</param>
			/// 
			/// <returns>The A1 formula.</returns>
			/// 
			/// 
			static  intrusive_ptr<Aspose::Cells::System::String> 		ConvertR1C1FormulaToA1_i(intrusive_ptr<Aspose::Cells::System::String> r1c1Formula , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			/// <summary>
			/// Converts A1 formula of the cell to the r1c1 formula.
			/// </summary>
			/// 
			/// <param name="formula" >The A1 formula.</param>
			/// 
			/// <param name="row" >The row index of the cell.</param>
			/// 
			/// <param name="column" >The column index of the cell.</param>
			/// 
			/// <returns>The R1C1 formula.</returns>
			/// 
			/// 
			static  intrusive_ptr<Aspose::Cells::System::String> 		ConvertA1FormulaToR1C1_i(intrusive_ptr<Aspose::Cells::System::String> formula , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			/// <summary>
			/// Convert the double value to the date time value.
			/// </summary>
			/// 
			/// <param name="doubleValue" >The double value.</param>
			/// 
			/// <param name="date1904" >Date 1904 system.</param>
			/// 
			/// <returns/>
			/// 
			/// 
			static  intrusive_ptr<Aspose::Cells::System::DateTime> 		GetDateTimeFromDouble_i(Aspose::Cells::System::Double doubleValue , bool date1904);
			/// <summary>
			/// Convert the date time to double value.
			/// </summary>
			/// 
			/// <param name="dateTime" >The date time.</param>
			/// 
			/// <param name="date1904" >Date 1904 system.</param>
			/// 
			/// <returns/>
			/// 
			/// 
			static  Aspose::Cells::System::Double 		GetDoubleFromDateTime_i(intrusive_ptr<Aspose::Cells::System::DateTime> dateTime , bool date1904);
			/// <summary>
			/// Detects the file load format.
			/// </summary>
			/// 
			/// <param name="fileName" >The file name.</param>
			/// 
			/// <returns>The load format.</returns>
			/// 
			/// <remarks>This member is now obsolete. Instead, 
			/// please reference to DetectFileFormat_i(StringPtr) of IFileFormatUtil.</remarks>
			/// 
			/// 
			static  Aspose::Cells::LoadFormat 		DetectLoadFormat_i(intrusive_ptr<Aspose::Cells::System::String> fileName);
			/// <summary>
			/// Detects the file load format.
			/// </summary>
			/// 
			/// <param name="stream" >The stream.</param>
			/// 
			/// <returns/>
			/// 
			/// <remarks>This member is now obsolete. Instead, 
			/// please reference to DetectFileFormat_i(stream) of IFileFormatUtil.</remarks>
			/// 
			/// 
			static  Aspose::Cells::LoadFormat 		DetectLoadFormat_i(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			/// <summary>
			/// Detects the file format type.
			/// </summary>
			/// 
			/// <param name="fileName" >the file name</param>
			/// 
			/// <returns>The file format type.</returns>
			/// 
			/// <remarks>This member is now obsolete. Instead, 
			/// please reference to DetectFileFormat_i(StringPtr) of IFileFormatUtil.</remarks>
			/// 
			/// 
			static  Aspose::Cells::FileFormatType 		DetectFileFormat_i(intrusive_ptr<Aspose::Cells::System::String> fileName);
			/// <summary>
			/// Detects the format type of the file stored in the stream.
			/// </summary>
			/// 
			/// <param name="stream" >The stream</param>
			/// 
			/// <returns>The file format type.</returns>
			/// 
			/// <remarks>This member is now obsolete. Instead, 
			/// please reference to DetectFileFormat_i(stream) of IFileFormatUtil.</remarks>
			/// 
			/// 
			static  Aspose::Cells::FileFormatType 		DetectFileFormat_i(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			/// <summary>
			/// When generating PDF/XPS, specific font file directory can be set in the method.
			/// If it is not set, using %WINDOWS%\fonts by default.
			/// </summary>
			/// 
			/// <remarks>This member is now obsolete.</remarks>
			/// 
			/// 
			static  intrusive_ptr<Aspose::Cells::System::String> 		GetFontDir_i();
			/// <summary>
			/// When generating PDF/XPS, specific font file directory can be set in the method.
			/// If it is not set, using %WINDOWS%\fonts by default.
			/// </summary>
			/// 
			/// <remarks>This member is now obsolete.</remarks>
			/// 
			/// 
			static  void 		SetFontDir_i(intrusive_ptr<Aspose::Cells::System::String> value);
			/// <summary>
			/// When generating PDF/XPS, specific font file directories can be set in the method.
			/// If it is not set, using %WINDOWS%\fonts by default.
			/// </summary>
			/// 
			/// <remarks>This member is now obsolete.</remarks>
			/// 
			/// 
			static  intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> 		GetFontDirs_i();
			/// <summary>
			/// When generating PDF/XPS, specific font file directories can be set in the method.
			/// If it is not set, using %WINDOWS%\fonts by default.
			/// </summary>
			/// 
			/// <remarks>This member is now obsolete.</remarks>
			/// 
			/// 
			static  void 		SetFontDirs_i(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> value);
			/// <summary>
			/// When generating PDF/XPS, specific font files can be set in the method.
			/// Such as "d:\myfonts\myArial.ttf" 
			/// </summary>
			/// 
			/// <remarks>This member is now obsolete.</remarks>
			/// 
			/// 
			static  intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> 		GetFontFiles_i();
			/// <summary>
			/// When generating PDF/XPS, specific font files can be set in the method.
			/// Such as "d:\myfonts\myArial.ttf" 
			/// </summary>
			/// 
			/// <remarks>This member is now obsolete.</remarks>
			/// 
			/// 
			static  void 		SetFontFiles_i(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> value);
			/// <summary>
			/// Gets the startup path, which is referred to by some external formula reference to.  
			/// </summary>
			/// 
			/// 
			static  intrusive_ptr<Aspose::Cells::System::String> 		GetStartupPath_i();
			/// <summary>
			/// Sets the startup path, which is referred to by some external formula reference to.  
			/// </summary>
			/// 
			/// 
			static  void 		SetStartupPath_i(intrusive_ptr<Aspose::Cells::System::String> value);
			/// <summary>
			/// Gets the alternate startup path, which is referred to by some external formula reference to. 
			/// </summary>
			/// 
			/// 
			static  intrusive_ptr<Aspose::Cells::System::String> 		GetAltStartPath_i();
			/// <summary>
			/// Sets the alternate startup path, which is referred to by some external formula reference to. 
			/// </summary>
			/// 
			/// 
			static  void 		SetAltStartPath_i(intrusive_ptr<Aspose::Cells::System::String> value);
			/// <summary>
			/// Gets the library path which is referred to by some external formula reference to.  
			/// </summary>
			/// 
			/// 
			static  intrusive_ptr<Aspose::Cells::System::String> 		GetLibraryPath_i();
			/// <summary>
			/// Sets or sets the library path which is referred to by some external formula reference to.  
			/// </summary>
			/// 
			/// 
			static  void 		SetLibraryPath_i(intrusive_ptr<Aspose::Cells::System::String> value);
			/// <summary>
			/// Gets all used colors in the workbook.
			/// </summary>
			/// 
			/// <param name="workbook" >The workbook object.</param>
			/// 
			/// <returns>The used colors.</returns>
			/// 
			/// 
			static  intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Drawing::Color*>> 		GetUsedColors_i(intrusive_ptr<Aspose::Cells::IWorkbook> workbook);
			/// <summary>
			/// Add addin fuction.
			/// </summary>
			/// 
			/// <param name="function" >The function name.</param>
			/// 
			/// <param name="minCountOfParameters" >Minimum number of parameters this function requires</param>
			/// 
			/// <param name="maxCountOfParameters" >Maximum number of parameters this function allows.</param>
			/// 
			/// <param name="paramersType" >The excepted parameters type of the function</param>
			/// 
			/// <param name="fuctionValueType" >The function value type.</param>
			/// 
			/// 
			static  void 		AddAddInFunction_i(intrusive_ptr<Aspose::Cells::System::String> function , Aspose::Cells::System::Int32 minCountOfParameters , Aspose::Cells::System::Int32 maxCountOfParameters , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::ParameterType>> paramersType , Aspose::Cells::ParameterType fuctionValueType);
			/// <summary>
			/// Merges some large xls files to an xls file.
			/// </summary>
			/// 
			/// <param name="files" >The files.</param>
			/// 
			/// <param name="cachedFile" >The cached file.</param>
			/// 
			/// <param name="destFile" >The dest file.</param>
			/// 
			/// <remarks>
			/// This method only supports merging data, style and formulas to the new file.
			/// The cached file is used to store some temporary data.
			/// </remarks>
			/// 
			/// 
			static  void 		MergeFiles_i(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> files , intrusive_ptr<Aspose::Cells::System::String> cachedFile , intrusive_ptr<Aspose::Cells::System::String> destFile);

	};
}
}
