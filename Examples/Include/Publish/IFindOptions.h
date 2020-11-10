#pragma once
#include "Aspose.Cells.Systems/Object.h"

namespace Aspose {
	namespace Cells {
		enum LookAtType;
		class ICellArea;
		enum LookInType;
		class IStyle;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents find options.
			/// </summary>
			/// <example><code>
			/// 
			/// [C++]
			/// 
			/// //Instantiate the workbook object
			/// intrusive_ptr<Aspose::Cells::IWorkbook> workbook = Factory::CreateIWorkbook();
			/// //Get Cells collection 
			/// intrusive_ptr<ICells> cells = workbook->GetIWorksheets()->GetObjectByIndex(0)->GetICells();
			/// //Instantiate FindOptions Object
			/// intrusive_ptr<IFindOptions> findOptions = Factory::CreateIFindOptions();
			/// //Create a Cells Area
			/// intrusive_ptr<ICellArea> ca = Factory::CreateICellArea();
			/// ca->SetstartRow(8);
			/// ca->SetstartColumn(2);
			/// ca->SetendRow(17);
			/// ca->SetendColumn(13);
			/// //Set cells area for find options
			/// findOptions->SetRange(ca);
			/// //Set searching properties
			/// findOptions->SetSearchNext(true);
			/// findOptions->SetSeachOrderByRows(true);
			/// findOptions->SetLookInType(LookInType_Values);
			/// //Find the cell with 0 value
			/// intrusive_ptr<ICell> cell = cells->Find(0, NULL, findOptions);
			/// 
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IFindOptions : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Indicates if the searched string is case sensitive.
			/// </summary>
			 virtual bool GetCaseSensitive()=0;
			/// <summary>
			/// Indicates if the searched string is case sensitive.
			/// </summary>
			 virtual void SetCaseSensitive(bool value)=0;
			/// <summary>
			/// Look at type.
			/// </summary>
			 virtual Aspose::Cells::LookAtType GetLookAtType()=0;
			/// <summary>
			/// Look at type.
			/// </summary>
			 virtual void SetLookAtType(Aspose::Cells::LookAtType value)=0;
			/// <summary>
			/// Gets the searched range.
			/// </summary>
			/// <returns>
			/// Returns the searched range.
			/// </returns>
			 virtual intrusive_ptr<Aspose::Cells::ICellArea> 		GetIRange()=0;
			/// <summary>
			/// Sets the searched range.
			/// </summary>
			/// <param name="ca" >the searched range.</param>
			 virtual void 		SetIRange(intrusive_ptr<Aspose::Cells::ICellArea> ca)=0;
			/// <summary>
			/// Indicates whether the searched range is set.
			/// </summary>
			 virtual bool IsRangeSet()=0;
			/// <summary>
			/// Search order. True: search next. False: search previous.
			/// </summary>
			 virtual bool GetSearchNext()=0;
			/// <summary>
			/// Search order. True: search next. False: search previous.
			/// </summary>
			 virtual void SetSearchNext(bool value)=0;
			/// <summary>
			/// Indicates whether search order by rows or columns.
			/// </summary>
			 virtual bool GetSeachOrderByRows()=0;
			/// <summary>
			/// Indicates whether search order by rows or columns.
			/// </summary>
			 virtual void SetSeachOrderByRows(bool value)=0;
			/// <summary>
			/// Look in type.
			/// </summary>
			 virtual Aspose::Cells::LookInType GetLookInType()=0;
			/// <summary>
			/// Look in type.
			/// </summary>
			 virtual void SetLookInType(Aspose::Cells::LookInType value)=0;
			/// <summary>
			/// Indicates whether the searched key is regex. If true then the searched key will be taken as regex.
			/// </summary>
			 virtual bool GetRegexKey()=0;
			/// <summary>
			/// Indicates whether the searched key is regex. If true then the searched key will be taken as regex.
			/// </summary>
			 virtual void SetRegexKey(bool value)=0;
			/// <summary>
			/// The format to search for.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IStyle> 		GetIStyle()=0;
			/// <summary>
			/// The format to search for.
			/// </summary>
			 virtual void 		SetIStyle(intrusive_ptr<Aspose::Cells::IStyle> value)=0;
			/// <summary>
			/// Gets a value that indicates whether converting the searched string value to numeric data.
			/// </summary>
			 virtual bool GetConvertNumericData()=0;
			/// <summary>
			/// Sets a value that indicates whether converting the searched string value to numeric data.
			/// </summary>
			 virtual void SetConvertNumericData(bool value)=0;

	};
}
}
