#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Collections/Hashtable.h"
#include "RefMode.h"
//#include "System/Boxing.h"
#include "System/Array1D.h"
#include "FunctionIndex.h"
#include "System/Int32.h"
#include "System/String.h"
#define STATIC_FUNCTION()  Static_Function()

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class IFunctionParams;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class Function : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> m_NameToIndex;
			static intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> m_AddIns;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::Function*>> m_Functions;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::Function*>> Static_Array_Init_m_Functions();
			 Function(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::FormulaModel::IFunctionParams> paramProperties);
			static intrusive_ptr<Aspose::Cells::FormulaModel::Function> CreateFunction(Aspose::Cells::FormulaModel::FunctionIndex index);
	protected:

			intrusive_ptr<Aspose::Cells::System::String> m_Name;
			intrusive_ptr<Aspose::Cells::FormulaModel::IFunctionParams> m_Params;
			 Function(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::String> paramsKey);
			static void Static_Function();
	public:

			intrusive_ptr<Aspose::Cells::System::String> GetName();
			Aspose::Cells::FormulaModel::FunctionIndex GetIndex();
			intrusive_ptr<Aspose::Cells::FormulaModel::IFunctionParams> GetParamProperties();
			bool GetBuiltIn();
			bool GetVolatile();
			intrusive_ptr<Aspose::Cells::System::String> GetOutputName(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::Function> GetFunction(Aspose::Cells::System::Int32 index);
			static intrusive_ptr<Aspose::Cells::FormulaModel::Function> GetFunction(intrusive_ptr<Aspose::Cells::System::String> name);
			static intrusive_ptr<Aspose::Cells::FormulaModel::Function> CreateUnknowFunction(intrusive_ptr<Aspose::Cells::System::String> name);
			static intrusive_ptr<Aspose::Cells::FormulaModel::Function> CreateUnknowFunction(intrusive_ptr<Aspose::Cells::System::String> name , Aspose::Cells::System::Int32 min , Aspose::Cells::System::Int32 max , Aspose::Cells::FormulaUtility::RefMode ret , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> p);
			static void AddAddInFunction(intrusive_ptr<Aspose::Cells::System::String> function , Aspose::Cells::System::Int32 min , Aspose::Cells::System::Int32 max , Aspose::Cells::FormulaUtility::RefMode ret , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> p);
			 static  bool StaticConstructIsFirst;
			static  bool AutoInit_Static_Function();
			static  bool StaticConstruct_Function_Falg;
			 Function();
		public:
			virtual ~Function();
	};

}

}

}
