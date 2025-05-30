#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ESBZDamageWeight.h"
#include "ESBZImpactConfigType.h"
#include "ESBZMeleeAttackCategory.h"
#include "ESBZMeleeImpactType.h"
#include "SBZHurtReactionDataInterface.h"
#include "SBZMeleeHitBoxData.h"
#include "Templates/SubclassOf.h"
#include "SBZMeleeDamageData.generated.h"

class UAkAudioEvent;
class UGameplayEffect;
class USBZDamageType;

UCLASS(Abstract, Blueprintable)
class USBZMeleeDamageData : public UDataAsset, public ISBZHurtReactionDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZDamageType> DamageTypeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> DamageGameplayEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HurtReactionWeightModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverHealDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorPenetration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDamageWeight PrimaryDamageWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDamageWeight SecondaryDamageWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageWeightModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumAngleDifference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MeleeEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZMeleeImpactType ImpactType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZMeleeAttackCategory AttackCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZImpactConfigType ImpactConfigType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZMeleeHitBoxData HitBoxData;
    
    USBZMeleeDamageData();


    // Fix for true pure virtual functions not being implemented
};

