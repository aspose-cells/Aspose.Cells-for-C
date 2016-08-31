#ifndef _SYSTEM_TYPE_H_
#define _SYSTEM_TYPE_H_
/*
#include "common.h"
#include "String.h"
#include "TypeCode.h"
#include "Reflection/MethodInfo.h"
#include "Reflection/FieldInfo.h"
#include "Reflection/BindingFlags.h"
#include "Reflection/PropertyInfo.h"

using namespace Aspose::Cells::System;
using namespace Aspose::Cells::System::Reflection;
*/

#include "System/Object.h"
#include "System/TypeCode.h"
#include "System/String.h"

namespace Aspose {
	namespace Cells {
		namespace System
		{
			class ASPOSE_CELLS_API Type : public Object
			{
			private:
				TypeCode _typeCode;
			protected:
				Type();
			public:
				Type(const Type& type);
				Type(TypeCode tc);
			public:
				static TypeCode GetTypeCode(intrusive_ptr<Type> type);
				static intrusive_ptr<Type> GetType(StringPtr typeName);

				/*


			public:
			//Type();
			Type(const Type& type);
			bool Equals(Object* obj);
			int Compare(Object* obj);
			//			const char* ToString();

			void Copy(Object* obj);
			const char* value() const;
			public:
			bool IsAssignableFrom(Type* c);
			Array1D<MethodInfo*>* GetMethods();
			virtual Array1D<MethodInfo*>* GetMethods(BindingFlags bindingAttr) = 0;
			Array1D<FieldInfo*>* GetFields();
			Array1D<PropertyInfo*>* GetProperties();
			PropertyInfo* GetProperty(String* name);
			PropertyInfo* GetProperty(String* name, BindingFlags bindingAttr);
			PropertyInfo* GetProperty(String* name, Type* returnType);
			PropertyInfo* GetProperty(String* name, Array1D<Type*>* types);
			PropertyInfo* GetProperty(String* name, Type* returnType, Array1D<Type*>* types);
			////PropertyInfo* GetProperty(String* name, Type* returnType, Array1D<Type*>* types, Array1D<ParameterModifier*>* modifiers);
			////PropertyInfo* GetProperty(String* name, BindingFlags bindingAttr, Binder binder, Type returnType, Type[] types, ParameterModifier[] modifiers);
			String* GetName();
			public:
			
			static Type* GetType(String* typeName);
			static Type* GetType(int typeName);
			};
			*/
			};

			typedef intrusive_ptr<Type> TypePtr;
		}
	}
}
#endif//_SYSTEM_TYPE_H_