#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "ExceptionType.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Exception.h"
#include "Aspose.Cells.Systems/ApplicationException.h"
#define STATIC_CELLSEXCEPTION() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API CellsException : public Aspose::Cells::Systems::ApplicationException
#else
	class CellsException : public Aspose::Cells::Systems::ApplicationException
#endif


	{
	public:

			 CellsException(Aspose::Cells::ExceptionType code , intrusive_ptr<Aspose::Cells::Systems::String> message);
			 CellsException(Aspose::Cells::ExceptionType code , intrusive_ptr<Aspose::Cells::Systems::String> message , intrusive_ptr<Aspose::Cells::Systems::Exception> innerException);
	private:

			void Init_Vars();
			Aspose::Cells::ExceptionType m_Code;
	public:

			Aspose::Cells::ExceptionType GetCode();
			 CellsException();
		public:
			virtual ~CellsException();
	};

}

}
