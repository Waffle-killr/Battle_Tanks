// Fill out your copyright notice in the Description page of Project Settings.

#include "TankTrack.h"


				 
void UTankTrack::SetThrottle(float Throttle)
{
	// TODO clamp actual throttle value so player can't over-drive
	auto ForceApplied = GetForwardVector() * Throttle * TrackMaxDrivingForce;
	auto ForceLocation = GetComponentLocation();
	auto TankRoot = Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent());
	
	if (TankRoot)
	{
		TankRoot->AddForceAtLocation(ForceApplied, ForceLocation, FName("None"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Doesnt Work"));
	}
}
