#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPaginatedGameBinaryRecords.h"
#include "DModelsPaginatedGameBinaryRecordsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsPaginatedGameBinaryRecords, FAccelByteModelsPaginatedGameBinaryRecords, Response);

