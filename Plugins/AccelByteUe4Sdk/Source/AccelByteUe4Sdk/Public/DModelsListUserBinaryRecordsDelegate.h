#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsListUserBinaryRecords.h"
#include "DModelsListUserBinaryRecordsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsListUserBinaryRecords, FAccelByteModelsListUserBinaryRecords, Response);

