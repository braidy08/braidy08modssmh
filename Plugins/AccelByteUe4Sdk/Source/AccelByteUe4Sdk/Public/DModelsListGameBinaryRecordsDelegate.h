#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsListGameBinaryRecords.h"
#include "DModelsListGameBinaryRecordsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsListGameBinaryRecords, FAccelByteModelsListGameBinaryRecords, Response);

