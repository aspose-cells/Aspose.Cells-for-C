#pragma once
#include "System/String.h"
#include "ExceptionType.h"
#include "System/Exception.h"
#include "System/ApplicationException.h"
#include "System/Object.h"
#define STATIC_CELLSEXCEPTION() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API CellsException : public Aspose::Cells::System::ApplicationException
#else	class CellsException : public Aspose::Cells::System::ApplicationException
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::ExceptionType m_Code;
	public:

			 CellsException(Aspose::Cells::ExceptionType code , intrusive_ptr<Aspose::Cells::System::String> message);
			 CellsException(Aspose::Cells::ExceptionType code , intrusive_ptr<Aspose::Cells::System::String> message , intrusive_ptr<Aspose::Cells::System::Exception> innerException);
			Aspose::Cells::ExceptionType GetCode();
			 CellsException();
		public:
			virtual ~CellsException();
	};

}

}
