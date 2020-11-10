#include "../CellsExamples.h"

//Implement ICustomFunction interface
class CustomFunction : public ICustomFunction
{
public:
	//Evalaute and return the values of your custom functions
	intrusive_ptr<Aspose::Cells::Systems::Object>
		CalculateCustomFunction(
			intrusive_ptr<Aspose::Cells::Systems::String> functionName,
			intrusive_ptr<Aspose::Cells::Systems::Collections::ArrayList> paramsList,
			intrusive_ptr<Aspose::Cells::Systems::Collections::ArrayList> contextObjects)
	{
		if (functionName->Equals(new String("MySampleFunc")))
		{
			return new String("MY sample function was called successfully.");
		}

		if (functionName->Equals(new String("YourSampleFunc")))
		{
			return new String("YOUR sample function was called successfully.");
		}

		return NULL;
	}

};

//Using ICustomFunction Feature
void  UsingICustomFunctionFeature()
{
	//Create workbook
	intrusive_ptr<IWorkbook> wb = Factory::CreateIWorkbook();

	//Access first worksheet in the workbook
	intrusive_ptr<IWorksheet> ws = wb->GetIWorksheets()->GetObjectByIndex(0);

	//Adding custom formulas to Cell A1 and A2
	ws->GetICells()->GetObjectByIndex(new String("A1"))->SetFormula(new String("=MySampleFunc()"));
	ws->GetICells()->GetObjectByIndex(new String("A2"))->SetFormula(new String("=YourSampleFunc()"));

	// Calcualting Formulas
	intrusive_ptr<CustomFunction> custFunc = new CustomFunction();
	wb->CalculateFormula(false, custFunc);

	//Print the value of cell A1 and A2 after the calculation of custom function implemented by us.
	intrusive_ptr<String> valA1 = ws->GetICells()->GetObjectByIndex(new String("A1"))->GetStringValue();
	intrusive_ptr<String> valA2 = ws->GetICells()->GetObjectByIndex(new String("A2"))->GetStringValue();

	//Print the values on console
	StringPtr str1 = new String("Value of A1: ");
	Console::WriteLine(str1->StringAppend(valA1));
	StringPtr str2 = new String("Value of A2: ");
	Console::WriteLine(str2->StringAppend(valA2));

	//Show successfull execution message on console
	ShowMessageOnConsole("UsingICustomFunctionFeature executed successfully.\r\n\r\n");
}