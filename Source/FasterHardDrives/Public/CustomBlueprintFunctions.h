#pragma once

#include "CustomBlueprintFunctions.generated.h"

struct FResearchTime;
UCLASS()
class UCustomBlueprintFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	static void AddToResearchTime(FResearchTime& Data, float new_time);
};
