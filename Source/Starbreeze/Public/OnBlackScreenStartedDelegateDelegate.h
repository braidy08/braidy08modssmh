#pragma once
#include "CoreMinimal.h"
#include "OnBlackScreenStartedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBlackScreenStartedDelegate, const bool, bIsRestart);

