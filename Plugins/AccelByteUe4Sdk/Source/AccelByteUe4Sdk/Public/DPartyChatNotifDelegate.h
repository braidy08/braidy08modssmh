#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPartyMessageNotice.h"
#include "DPartyChatNotifDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDPartyChatNotif, FAccelByteModelsPartyMessageNotice, Notif);

