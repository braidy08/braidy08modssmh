#include "SBZWeaponAnimation.h"

USBZWeaponAnimation::USBZWeaponAnimation() {
    this->RBMinVelocity = 0.00f;
    this->RBMaxVelocity = 200.00f;
    this->RBCoefHVelDampening = 0.20f;
    this->AlphaNotAnimatedBones = 0.00f;
    this->AlphaCopyBoneDeltaFirst = 0.00f;
    this->AlphaCopyBoneDeltaSecond = 0.00f;
    this->IdleStatePose = NULL;
    this->EmptyStatePose = NULL;
    this->CycleStatePose = NULL;
    this->StatePose = NULL;
    this->AdditiveStatePose = NULL;
    this->Weapon = NULL;
    this->AnimationCollection = NULL;
    this->Character = NULL;
}


