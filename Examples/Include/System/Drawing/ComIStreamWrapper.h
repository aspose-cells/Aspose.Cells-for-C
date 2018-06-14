#ifndef _SYSTEM_DRAWING_COMISTREAMWRAPPER_H_
#define _SYSTEM_DRAWING_COMISTREAMWRAPPER_H_

#include <windows.h>
#include <gdiplus.h>

#include "System/IO/Stream.h"

using namespace Aspose::Cells::System;
using namespace Aspose::Cells::System::IO;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Drawing {

				class ComIStreamWrapper : public IStream, public reference_counter
				{
				private:
					intrusive_ptr<Stream> _baseStream;
					Int64 _position;
					LONG _refcount;

				public:
					ComIStreamWrapper(intrusive_ptr<Stream> stream);
					virtual ~ComIStreamWrapper();

					virtual HRESULT STDMETHODCALLTYPE QueryInterface(REFIID iid, void ** ppvObject);
					virtual ULONG STDMETHODCALLTYPE AddRef(void);
					virtual ULONG STDMETHODCALLTYPE Release(void);

					// ISequentialStream Interface
					virtual HRESULT STDMETHODCALLTYPE Read(void* pv, ULONG cb, ULONG* pcbRead);
					virtual HRESULT STDMETHODCALLTYPE Write(void const* pv, ULONG cb, ULONG* pcbWritten);

					// IStream Interface
					virtual HRESULT STDMETHODCALLTYPE SetSize(ULARGE_INTEGER);
					virtual HRESULT STDMETHODCALLTYPE CopyTo(IStream*, ULARGE_INTEGER, ULARGE_INTEGER*,
						ULARGE_INTEGER*);
					virtual HRESULT STDMETHODCALLTYPE Commit(DWORD);
					virtual HRESULT STDMETHODCALLTYPE Revert(void);
					virtual HRESULT STDMETHODCALLTYPE LockRegion(ULARGE_INTEGER, ULARGE_INTEGER, DWORD);
					virtual HRESULT STDMETHODCALLTYPE UnlockRegion(ULARGE_INTEGER, ULARGE_INTEGER, DWORD);
					virtual HRESULT STDMETHODCALLTYPE Clone(IStream **);
					virtual HRESULT STDMETHODCALLTYPE Seek(LARGE_INTEGER dlibMove, DWORD dwOrigin,
						ULARGE_INTEGER* plibNewPosition);
					virtual HRESULT STDMETHODCALLTYPE Stat(STATSTG* pStatstg, DWORD grfStatFlag);

				private:
					void SetSizeToPosition();

				};

			}
		}
	}
}
#endif
