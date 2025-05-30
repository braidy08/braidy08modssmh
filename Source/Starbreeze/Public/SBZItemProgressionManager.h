#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZChallengeObjectiveInfo.h"
#include "SBZOnInitializedItemProgressionDoneDelegate.h"
#include "SBZItemProgressionManager.generated.h"

class USBZItemProgressionManager;
class USBZPlayerItemProgression;

UCLASS(Blueprintable)
class USBZItemProgressionManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnInitializedItemProgressionDone OnInitializedItemProgressionDone;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerItemProgression* PlayerItemProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZChallengeObjectiveInfo> PlayerNonInventoryItemInfoMap;
    
public:
    USBZItemProgressionManager();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZItemProgressionManager* GetItemProgressionManager(const UObject* WorldContextObject);
    
};

