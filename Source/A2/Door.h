// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UnrealNetwork.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Door.generated.h"

UCLASS()
class A2_API ADoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoor();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

/*-------My Code ---------------*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = State)
		bool doorIsOpen;

	UFUNCTION()
		void setDoorIsOpen(bool doorState);

	UFUNCTION(BluePrintCallable, NetMulticast,Reliable,WithValidation)
		void OpenDoor();
	
	
	UFUNCTION(BluePrintCallable)
		void CloseDoor();
	
	
};
