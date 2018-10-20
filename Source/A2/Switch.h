// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "Switch.generated.h"

/**
 * 
 */
UCLASS()
class A2_API ASwitch : public APickup
{
	GENERATED_BODY()
	
	
private:
	UPROPERTY()
		bool switchIsOn;
public:

	ASwitch();

	UFUNCTION()
		bool getSwitchIsOn();
	UFUNCTION()
		void setSwitchIsOn(bool switchState);
};
