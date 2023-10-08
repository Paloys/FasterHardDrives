#include "CustomBlueprintFunctions.h"

#include "FGResearchManager.h"

void UCustomBlueprintFunctions::AddToResearchTime(UPARAM(ref) FResearchTime& Data, float new_time)
{
	Data.ResearchCompleteTimestamp += new_time;
}
