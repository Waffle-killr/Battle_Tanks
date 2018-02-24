// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLE_TANKS_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ATank* GetControlledTank() const;
	   
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	// Start The Tank Moving The Barrel Towards So That A Shot Would Hit Where 
	// The Crosshair Intersects With The World
	void AimTowardsCrosshair(); 
};
