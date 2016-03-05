// Fill out your copyright notice in the Description page of Project Settings.

#include "FlyShooter.h"
#include "WheelRear.h"


UWheelRear::UWheelRear(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	ShapeRadius = 35.f;
	ShapeWidth = 10.0f;
	bAffectedByHandbrake = true;
	SteerAngle = 0.f;
}

