#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "SBZDamageStatusMarkerRuntime.h"
#include "SBZMarkerReplication.h"
#include "SBZMarkerRuntime.h"
#include "SBZMarkerManager.generated.h"

class USBZMarkerDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZMarkerManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedMarkers, meta=(AllowPrivateAccess=true))
    TArray<FSBZMarkerReplication> ReplicatedMarkers;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MaxDamageStatusMarkerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageStatusMarkerDurationSeconds;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZMarkerRuntime> RuntimeMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZDamageStatusMarkerRuntime> DamageStatusMarkerArray;
    
public:
    USBZMarkerManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedMarkers();
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_RemoveMarker(uint32 ID);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_AddMarker(uint32 ID, const USBZMarkerDataAsset* MarkerAsset, const FVector& Translation);
    
};

