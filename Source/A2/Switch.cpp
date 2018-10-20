// Fill out your copyright notice in the Description page of Project Settings.

#include "Switch.h"



ASwitch::ASwitch()
{
	switchIsOn = false;
}

void ASwitch::setSwitchIsOn(bool switchState)
{
	switchIsOn = switchState;
}

bool ASwitch::getSwitchIsOn()
{
	return switchIsOn;
}