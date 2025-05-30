#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "SBZObjectiveContainerWidget.generated.h"

class ASBZObjective;
class UObject;
class UPanelWidget;
class USBZObjectiveWidget;
class UUMGSequencePlayer;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class USBZObjectiveContainerWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_ObjectivesContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_OptionalObjectivesContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZObjectiveWidget> ObjectiveWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPaused;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UUMGSequencePlayer*> PausedSequencePlayerArray;
    
public:
    USBZObjectiveContainerWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnObjectiveRemoved(UObject* ObjectiveUObject);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveAdded(UObject* ObjectiveUObject);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ObjectiveRemove(ASBZObjective* Objective);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ObjectiveAdded(ASBZObjective* Objective);
    
    UFUNCTION(BlueprintCallable)
    void CheckDelayPausedAnimation(UWidgetAnimation* InAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPausedChanged(bool bInIsPaused);
    
};

