// Fill out your copyright notice in the Description page of Project Settings.

#include "Door.h"


// Sets default values
ADoor::ADoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	doorIsOpen = false;
}

// Called when the game starts or when spawned
void ADoor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADoor::setDoorIsOpen(bool doorState)
{
	doorIsOpen = doorState;
}

void ADoor::OpenDoor_Implementation()
{
	doorIsOpen = true;
	AddActorWorldRotation(FRotator(0.0, 45.0, 0.0));
}

void ADoor::CloseDoor()
{
	doorIsOpen = false;
	SetActorRotation(FRotator(0.0, 0.0, 0.0));

}

bool ADoor::OpenDoor_Validate()
{
	return true;
}
