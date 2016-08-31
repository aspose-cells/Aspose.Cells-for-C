#pragma once
#include "System/Byte.h"
//#include "System/StringHelperPal.h"
#include "System/Collections/Hashtable.h"
#include "System/Object.h"
#include "System/String.h"
#include "RefMode.h"
#include "FormulaOType.h"
#include "System/UInt16.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_FUNCTIONINFO() 

namespace Aspose {
namespace Cells {
class FormulaTree;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class FunctionInfo : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> Static_Array_Init_V();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> Static_Array_Init_R();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> Static_Array_Init_A();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> Static_Array_Init_AV();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> Static_Array_Init_AAV();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> Static_Array_Init_RV();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> Static_Array_Init_RVR();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> Static_Array_Init_VR();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> Static_Array_Init_VVVR();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> Static_Array_Init_VRV();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> Static_Array_Init_VRRV();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> Static_Array_Init_VA();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> Static_Array_Init_RRV();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> Static_Array_Init_RRRV();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::FunctionInfo*>> Functions;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::FunctionInfo*>> Static_Array_Init_Functions();
			static intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> FunctionsHash;
			 static const Aspose::Cells::System::Int32 MaxParams;
	public:

			Aspose::Cells::System::UInt16 Index;
			intrusive_ptr<Aspose::Cells::System::String> Name;
			Aspose::Cells::System::Byte MinParam;
			Aspose::Cells::System::Byte MaxParam;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> Params;
			Aspose::Cells::FormulaUtility::RefMode Ret;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> V;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> R;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> A;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> AV;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> AAV;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> RV;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> RVR;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> VR;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> VVVR;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> VRV;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> VRRV;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> VA;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> RRV;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> RRRV;
			 FunctionInfo(Aspose::Cells::System::UInt16 index , intrusive_ptr<Aspose::Cells::System::String> name , Aspose::Cells::System::Int32 min , Aspose::Cells::System::Int32 max , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> p , Aspose::Cells::FormulaUtility::RefMode ret);
			static void ConvertTo2007();
			static void ConvertTo2003();
			static bool IsCubeFunction(intrusive_ptr<Aspose::Cells::System::String> text);
			static bool IsRParam(intrusive_ptr<Aspose::Cells::FormulaTree> notation);
			static void AddAddInFunction(intrusive_ptr<Aspose::Cells::System::String> function , Aspose::Cells::System::Int32 min , Aspose::Cells::System::Int32 max , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> p , Aspose::Cells::FormulaUtility::RefMode ret);
			static void Init();
			static bool IsXlsxAddIn(intrusive_ptr<Aspose::Cells::System::String> name);
			static intrusive_ptr<Aspose::Cells::FormulaUtility::FunctionInfo> GetFunction(Aspose::Cells::System::Int32 funcIndex);
			static intrusive_ptr<Aspose::Cells::FormulaUtility::FunctionInfo> GetFunction(intrusive_ptr<Aspose::Cells::System::String> function , Aspose::Cells::FormulaUtility::FormulaOType type);
			static bool IsXLFN(Aspose::Cells::System::Int32 index);
			 FunctionInfo();
		public:
			virtual ~FunctionInfo();
	};

}

}

}
